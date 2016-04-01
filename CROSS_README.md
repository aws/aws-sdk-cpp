************************************************
Two sets of changes in this pull request:

1) Fixes to BucketLocationConstraint -
   Region.h and .cpp in core
   BucketLocationConstraint.h and .cpp in S3
   I made the two lists equivalent, got rid of extraneous and old regions. I made the default us-east-1.  I'm not sure that's exactly right but the old code wasn't working very well for me.

2) Changes to cross compile under Ubuntu 15.10 for ARM Linux.  Three shell scripts to help along - cross-cmake.sh to cross compile the entire SDK, client.sh to compile client code, and move-libs.sh to move the libraries to a target ARM board.

To compile for ARM LINUX:

1) Edit cross-cmake.sh to point CROSS_COMPILER to your ARM compiler
2) run cross-cmake.sh.  If you blow up in StringUtilities with a warning you will have to edit CMakeLists.txt and get rid of -Werror.  You may need to do this in two places - the top level and the core (aws-cpp-sdk-core).  Once the CMAKE script gets to the integration tests (at 100%) it will blow up. This is normal and mean you are done with this phase.  This may take a while.
3) Move libraries (.so) to the target ARM board.  I have an example shell script if your target is connected via network.  You don't have to move all of them - just the ones you need.  Step 5 will tell you what's missing if you don't have a lot of extra space on your target.
4) Compile your target code.  Client.sh is set up for S3 and DynamoDb - you will have to add or subtract include paths and libraries for other client needs.
5) Move your code to the target board and try running it.  You will probably be missing libraries from the LIB path - hunt them down and either move them to the LIB path or expand the LIB path.  You will also have to set two environmental variables for AWS with the correct keys with the priviledges needed for your client.  AWS_ACCESS_KEY_ID and AWS_SECRET_ACCESS_KEY.

Once it's set up it works very well.  Good luck.

Maurice Bizzarri

