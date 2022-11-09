# AWS SDK for C++
The AWS SDK for C++ provides a modern C++ (version C++ 11 or later) interface for Amazon Web Services (AWS). It is meant to be performant and fully functioning with low- and high-level SDKs, while minimizing dependencies and providing platform portability (Windows, OSX, Linux, and mobile).

AWS SDK for C++ is in now in General Availability and recommended for production use. We invite our customers to join
the development efforts by submitting pull requests and sending us feedback and ideas via GitHub Issues.

## Version 1.10 is now Available!

This release introduces a new endpoint resolution based on client configuration and request input parameters.

All CRT libraries are git submodules of SDK for C++. It requires changes in git syntax to get all source code.
* New users: If you haven't downloaded the source code for SDK for C++, you can get all git submodules recursively by:
   ```
   git clone --recurse-submodules https://github.com/aws/aws-sdk-cpp
   ```
* Existing users: If you’ve already downloaded source code for SDK for C++, e.g. in directory `aws-sdk-cpp`, you can update the git submodule by:
   ```
   cd aws-sdk-cpp
   git checkout main
   git pull origin main
   git submodule update --init --recursive
   ```
* Alternatively, if you downloaded the code bundle from GitHub website and have no installation of git, you can download all the dependencies running the `prefetch_crt_dependency.sh` script from the root of the repository. It will download bundles of all dependencies from github website using curl and expand them in the right locations.


See Wiki page [Improving S3 Throughput with AWS SDK for CPP v1.9](https://github.com/aws/aws-sdk-cpp/wiki/Improving-S3-Throughput-with-AWS-SDK-for-CPP-v1.9) for more details, and create a new [issue](https://github.com/aws/aws-sdk-cpp/issues/new/choose) or [pull request](https://github.com/aws/aws-sdk-cpp/compare) if you have any feedback on this new version.

## Upgrade Your SDK to Get Latest Security Patches
The AWS SDK for C++ has a dependency on cJSON. This dependency was updated to version 1.7.14 in the recent SDK updates. We would recommend to upgrade your SDK to version 1.9.67 for 1.9.x or 1.8.187 for 1.8.x. Thank @dkalinowski for reporting this issue: https://github.com/aws/aws-sdk-cpp/issues/1594

__Jump To:__
* [Getting Started](#Getting-Started)
* [Issues and Contributions](#issues-and-contributions)
* [Getting Help](#Getting-Help)
* [Using the SDK and Other Topics](#Using-the-SDK-and-Other-Topics)

# Getting Started

## Building the SDK:

### Minimum Requirements:
* Visual Studio 2015 or later
* OR GNU Compiler Collection (GCC) 4.9 or later
* OR Clang 3.3 or later
* 4GB of RAM
  * 4GB of RAM is required to build some of the larger clients. The SDK build may fail on EC2 instance types t2.micro, t2.small and other small instance types due to insufficient memory.

### Building From Source:

#### To create an **out-of-source build**:
1. Install CMake and the relevant build tools for your platform. Ensure these are available in your executable path.
2. Create your build directory. Replace <BUILD_DIR> with your build directory name:

3. Build the project:

   * For Auto Make build systems:
   ```sh
   cd <BUILD_DIR>
   cmake <path-to-root-of-this-source-code> -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=<path-to-install>
   make
   make install
   ```

   * For Visual Studio:
   ```sh
   cd <BUILD_DIR>
   cmake <path-to-root-of-this-source-code> -G "Visual Studio 15 Win64" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=<path-to-install>
   msbuild ALL_BUILD.vcxproj /p:Configuration=Debug
   ```

   * For macOS - Xcode:
   ```sh
   cmake <path-to-root-of-this-source-code> -G Xcode -DTARGET_ARCH="APPLE" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=<path-to-install>
   xcodebuild -target ALL_BUILD
   ```
#### Other Dependencies:
To compile in Linux, you must have the header files for libcurl, libopenssl. The packages are typically available in your package manager.

Debian example:
   `sudo apt-get install libcurl-dev`

### Building for Android
To build for Android, add `-DTARGET_ARCH=ANDROID` to your cmake command line. Currently we support Android APIs from 19 to 28 with Android NDK 19c and we are using build-in cmake toolchain file supplied by Android NDK, assuming you have the appropriate environment variables (ANDROID_NDK) set.

##### Android on Windows
Building for Android on Windows requires some additional setup.  In particular, you will need to run cmake from a Visual Studio developer command prompt (2015 or higher). Additionally, you will need 'git' and 'patch' in your path.  If you have git installed on a Windows system, then patch is likely found in a sibling directory (.../Git/usr/bin/). Once you've verified these requirements, your cmake command line will change slightly to use nmake:

   ```sh
   cmake -G "NMake Makefiles" `-DTARGET_ARCH=ANDROID` <other options> ..
   ```

Nmake builds targets in a serial fashion.  To make things quicker, we recommend installing JOM as an alternative to nmake and then changing the cmake invocation to:

   ```sh
   cmake -G "NMake Makefiles JOM" `-DTARGET_ARCH=ANDROID` <other options> ..
   ```

### Building for Docker

To build for Docker, ensure your container meets the [minimum requirements](#minimum-requirements). By default, Docker Desktop is set to use 2 GB runtime memory. We have provided [Dockerfiles](https://github.com/aws/aws-sdk-cpp/tree/master/CI/docker-file) as templates for building the SDK in a container.


### Building and running an app on EC2
Checkout this walk through on how to set up an environment and build the [AWS SDK for C++ on an EC2 instance](https://github.com/aws/aws-sdk-cpp/wiki/Building-the-SDK-from-source-on-EC2).

# Issues and Contributions
We welcome all kinds of contributions, check [this guideline](./CONTRIBUTING.md) to learn how you can contribute or report issues.

# Maintenance and support for SDK major versions

For information about maintenance and support for SDK major versions and our underlying dependencies, see the following in the AWS SDKs and Tools Shared Configuration and Credentials Reference Guide

* [AWS SDKs and Tools Maintenance Policy](https://docs.aws.amazon.com/credref/latest/refdocs/maint-policy.html)
* [AWS SDKs and Tools Version Support Matrix](https://docs.aws.amazon.com/credref/latest/refdocs/version-support-matrix.html)


# Getting Help

The best way to interact with our team is through GitHub. You can [open an issue](https://github.com/aws/aws-sdk-cpp/issues/new/choose) and choose from one of our templates for guidance, bug reports, or feature requests.

You may also find help on community resources such as [StackOverFlow](https://stackoverflow.com/) with the tag [#aws-sdk-cpp](https://stackoverflow.com/questions/tagged/aws-cli) or on the [AWS Discussion Forum for CPP](https://forums.aws.amazon.com/forum.jspa?forumID=245). If you have a support plan with [AWS Support](https://aws.amazon.com/premiumsupport/), you can also create a new support case.

Please make sure to check out our resources too before opening an issue:
* Our [Developer Guide](https://docs.aws.amazon.com/sdk-for-cpp/v1/developer-guide/welcome.html) and [API reference](http://sdk.amazonaws.com/cpp/api/LATEST/index.html)
* Our [Changelog](./CHANGELOG.md) for recent breaking changes.
* Our [Contribute](./CONTRIBUTING.md) guide.
* Our [samples repo](https://github.com/awsdocs/aws-doc-sdk-examples/tree/master/cpp).


# Using the SDK and Other Topics
* [Using the SDK](./Docs/SDK_usage_guide.md)
* [CMake Parameters](./Docs/CMake_Parameters.md)
* [Credentials Providers](./Docs/Credentials_Providers.md)
* [Client Configuration Parameters](./Docs/ClientConfiguration_Parameters.md)
* [Service Client](./Docs/Service_Client.md)
* [Memory Management](./Docs/Memory_Management.md)
* [Advanced Topics](./Docs/Advanced_topics.md)
* [Add as CMake external project](./Docs/CMake_External_Project.md)
* [Coding Standards](./Docs/CODING_STANDARDS.md)
* [License](./LICENSE)
* [Code of Conduct](./CODE_OF_CONDUCT.md)
