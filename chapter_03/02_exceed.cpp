// exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0
#include <climits>

int main(int argc, char const *argv[])
{
    using namespace std;

    short sam = SHRT_MAX;
    unsigned short sue  = sam;

    cout << "Sam has " << sam << " dollars and sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and sue has " << sue;
    cout << " dollars deposited." << endl
         << "Take $1 to each account." << endl << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;

    return 0;
}
