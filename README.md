# AWS SDK for C++
The AWS SDK for C++ provides a modern C++ (standard version C++11 or later) interface for Amazon Web Services (AWS). 
It is meant to be highly portable by minimizing dependencies and providing abstractions to override components that are platform specific. 
It includes implementations of those abstractions for popular platforms including Windows, OSX, Linux, FreeBSD, and mobile).

AWS SDK for C++ is in now in General Availability and recommended for production use. 
We invite our customers to join the development efforts by submitting pull requests and sending us feedback and ideas via GitHub Issues.

__Jump To:__
* [Getting Started](#Getting-Started)
* [Issues and Contributions](#issues-and-contributions)
* [Getting Help](#Getting-Help)
* [Using the SDK and Other Topics](#Using-the-SDK-and-Other-Topics)

# Getting Started

### Minimum Requirements:
* Visual Studio 2015 or later
* OR GNU Compiler Collection (GCC) 4.9 or later
* OR Clang 3.3 or later
* 4GB of RAM
    * 4GB of RAM is required to build some larger clients. The SDK build may fail on EC2 instance types t2.micro, t2.small and other small instance types due to insufficient memory.

### Dependencies
* Crypto library, provided by the Operating System in most cases. If operating system doesn't provide it, it could be replaced by OpenSSL or [AWS-LibCrypto](https://github.com/awslabs/aws-lc).  
* HttpClient library, provided by the Operating System in most cases. If operating system doesn't provide it, it could be replaced by libcurl or by adding a custom solution using the [HTTPClientFactory](https://github.com/aws/aws-sdk-cpp/blob/main/aws-cpp-sdk-core/include/aws/core/http/HttpClientFactory.h).   
* AWS Common Runtime

## Installing the AWS SDK for C++
AWS SDK for C++ 1.10 includes a CMake scripts from building from source and producing distributable packages for many popular platforms.
To build from source we offer a few different workflows that adapt to different building scenarios you may have to work with.

### Basic build and installation

The simplest way to install AWS SDK for C++ is to download the code from GitHub and run CMake to build and install the libraries. 

#### Obtaining latest source code
Latest version can be downloaded from https://github.com/aws/aws-sdk-cpp/archive/refs/heads/main.zip and unzipped. 
Also, the last version can be obtained by cloning GitHub repository with ```git clone https://github.com/aws/aws-sdk-cpp```.

#### Building with cmake
After code is obtained. The following steps will produce a build of all services libraries and install them. 
```shell
mkdir aws-sdk-cpp-build
cd aws-sdk-cpp-build
cmake ../aws-sdk-cpp -DLEGACY_BUILD=OFF # configuration step
cmake --build . # build step
cmake --build . --target install # install step
```

The flag `-DLEGACY_BUILD=OFF` is not required to build, but it is highly recommended. 
In v1.10, we assume `-DLEGACY_BUILD=ON` if not passed to CMake to be backward compatible with v1.9 build process. 
The v1.9 build scripts are marked as DEPRECATED and will no longer be available in v1.11.

In most projects only a subset of AWS SDK for C++ libraries are needed. 
To limit what libraries to build and install the ```-DSERVICES``` flag can be passed to the configuration step. 
For example, to build and install only S3, EC2, and DynamoDB libraries, we can do configuration step as follows:

```shell
cmake ../aws-sdk-cpp -DLEGACY_BUILD=OFF -DSERVICES='s3;ec2;dynamodb'
```

This build and install approach will check for dependencies in the build system. 
If the Aws Common Runtime dependency is not found, it will be downloaded and built to fulfill that dependency. 
Any other dependency missed will stop cmake configuration with a report of what needs to be done.

Alternatively, when using git, dependencies can be pulled via git-submodules by running the command ```git submodule update --recursive --init``` in the root of the cloned repository. 
This will clone all AWS Common Runtime as submodules of AWS SDK for C++ and use the downloaded version in place of downloading it during the build. 

#### Removing the need of network access at build
To build and install without need to have network access, all dependencies need to be installed before the build starts. 
To download AWS Common Runtime, follow the installation steps for ```https://github.com/awslabs/aws-crt-cpp```.
Once all dependencies are installed they will be found by CMake.  

### Advanced build and install using packages 
Sometimes, it is needed to install the AWS SDK for C++ in multiple machines, in those cases build from the source in each of them is inconvenient.
To build once and install many times, CPack can be used to generate installation packages to distribute to other machines with similar platform. 
We recommend being careful of not mixing up different AWS SDK for C++ libraries versions, since ABI issues may arise. 
To create an installation package using CPack follow the following step.

```shell
mkdir aws-sdk-cpp-build
cd aws-sdk-cpp-build
cmake ../aws-sdk-cpp -DLEGACY_BUILD=OFF # configuration step
cmake --build . # build step
cmake --build . --target package # create a platform specific package
```

Once the package is created it can be copied and run in all the machines that need to install it without need to build form source again.
The machines where the package is installed need to have all dependencies installed in advance. 

### Legacy mode
In v1.10 release the CMake scripts used to build, install, test, and package AWS SDK for C++ were redesigned. 
Some new build options were added, some old build options were removed, and some were renamed or redefined to simplify the usage. 
Customers upgrading from v1.9 to v1.10 will need to opt-in for the new cmake scripts by passing ```-DLEGACY_BUILD=OFF```. 
By having opt-in option we are not breaking automated updates that pull v1.10 on machines that previously had v1.9.
The only noticeable difference for customers not passing ```-DLEGACY_BUILD=OFF``` flag will be a  new requirement for ```cmake_min_req_version``` to be 3.12, and a deprecation message for the legacy build to be removed in v1.12.

#### Building for Android in legacy build mode
To build for Android, add `-DTARGET_ARCH=ANDROID` to your cmake command line. Currently, we support Android APIs from 19 to 28 with Android NDK 19c, and we are using build-in cmake toolchain file supplied by Android NDK, assuming you have the appropriate environment variables (ANDROID_NDK) set.

##### Android on Windows
Building for Android on Windows requires some additional setup.  In particular, you will need to run cmake from a Visual Studio developer command prompt (2015 or higher). Additionally, you will need 'git' and 'patch' in your path.  If you have git installed on a Windows system, then patch is likely found in a sibling directory (.../Git/usr/bin/). Once you've verified these requirements, your cmake command line will change slightly to use nmake:

   ```sh
   cmake -G "NMake Makefiles" `-DTARGET_ARCH=ANDROID` <other options> ..
   ```

Nmake builds targets in a serial fashion.  To make things quicker, we recommend installing JOM as an alternative to nmake and then changing the cmake invocation to:

   ```sh
   cmake -G "NMake Makefiles JOM" `-DTARGET_ARCH=ANDROID` <other options> ..
   ```

#### Building for Docker in legacy build mode

To build for Docker, ensure your container meets the [minimum requirements](#minimum-requirements). By default, Docker Desktop is set to use 2 GB runtime memory. We have provided [Dockerfiles](https://github.com/aws/aws-sdk-cpp/tree/master/CI/docker-file) as templates for building the SDK in a container.


#### Building and running an app on EC2 in legacy build mode
Checkout this walk-through on how to set up an environment and build the [AWS SDK for C++ on an EC2 instance](https://github.com/aws/aws-sdk-cpp/wiki/Building-the-SDK-from-source-on-EC2).

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
