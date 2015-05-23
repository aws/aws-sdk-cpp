# aws-sdk-cpp

###Building:

####Recommended Procedure for Out of Source Build:

First, you need to make sure cmake and the relevant build tools for your platform are installed
and available in your executable path.

Next create your build directory. For these instructions, let's call it BUILD_DIR.

```
cd BUILD_DIR
cmake <path-to-root-of-this-source-code>
```
######For Non-Windows systems
`make`
######For Windows
`msbuild ALL_BUILD.vcxproj`

######alternatively for release builds, you can run
######For non-windows systems
```
cmake -DCMAKE_BUILD_TYPE=Release  <path-to-root-of-this-source-code>
make
sudo make install
```
######For windows systems
```
cmake <path-to-root-of-this-source-code> -G "Visual Studio 12 Win64"
msbuild INSTALL.vcxproj /p:Configuration=Release
```
That's it! This will build the entire source tree for your platform, run unit tests, and build integration tests.

####CMake Variables:

#####CUSTOM_MEMORY_MANAGEMENT  

Set this value to 1 to use a custom memory manager. When using this option, all STL types will use our custom allocation interface which you can install a custom allocator into.
If this is set to 0, you should still use our STL template types to help with DLL safety on windows. Note: Whatever value you use here, you need to make sure you use accross your entire build system since a mismatch here will cause linker errors.

#####STATIC_LINKING 

By default, the build creates shared libs for each platform. If you want to statically link, specify this value as 1.

#####TARGET_ARCH

By default, the build detects the host operating system and builds for that. If you want a cross compile, or you are building for a mobile platform, you will need to specify the target platform.
Options here are: WINDOWS | LINUX | APPLE | ANDROID

#####G

Especially for Windows, you want to specify this, example: -G "Visual Studio 12 Win64". Refer to the cmake documentation for your platform for more information.

###Running integration tests:

You will notice that there are several directories appended with *integration-tests. After building your project, you can run these executables to make sure everything is working properly.

####Dependencies:
For Linux, in order to compile, you will need the header files for libcurl and libopenssl. These packages are usually available in your package manager:

example:
   `sudo apt-get install libcurl-dev`
   
###Using the SDK
The individual service clients are very similar to the other SDKs such as Java and .NET after you get them constructed. Here I'll explain the details of how core works, how to use each feature, and then how to then construct and individual client.
*aws-cpp-sdk-core* does the heavy lifting of the system. In fact, you can trivially write a client to connect to any AWS service using just core itself. The individual service clients just make things a bit easier for you.

####Memory Management
The Native SDK now offers developers the option of controlling how all memory allocation/deallocation is done within the library. This is currently done by implementing a subclass of MemorySystemInterface (see "aws/core/utils/memory/MemorySystemInterface.h") and installing a memory manager by calling InitializeAWSMemorySystem with an instance of your subclass. In the absence of a very compelling reason to do otherwise, the call to InitializeAWSMemorySystem should occur at the beginning of your application and a corresponding call to ShutdownAWSMemorySystem should occur at the end, right before exit.

For example (note that the type signature of AllocateMemory is not set in stone and is open to debate/change based on SDK user needs):

```
class MyMemoryManager : public Amazon::Utils::Memory::MemorySystemInterface
{
  public:
    
    // ...

    virtual void* AllocateMemory(std::size_t blockSize, std::size_t alignment, const char *allocationTag = nullptr) override;
    virtual void FreeMemory(void* memoryPtr) override;

};
```

And later in Main:

```
int main(void)
{
  MyMemoryManager sdkMemoryManager;
  Amazon::Utils::Memory::InitializeAWSMemorySystem(sdkMemoryManager);

  // ... do stuff

  Amazon::Utils::Memory::ShutdownAWSMemorySystem();

  return 0;
}
```

Custom memory management is only available when using a version of the library that was built with the compile-time constant AWS_CUSTOM_MEMORY_MANAGEMENT defined. If using a version of the library built without this flag, global new and delete will be used and the global memory system functions (InitializeAWSMemorySystem, etc...) will not do anything. The necessity of this compile-time switch is detailed in the next section.

####STL or What is... Aws::String, Aws::Vector, etc...

If initialized with a memory manager, the native SDK will defer all allocation and deallocation to it. In the absence of a memory manager, the SDK falls back to global new and delete. But the SDK makes heavy use of STL and STL does plenty of memory allocation. How do we handle that?
If you use custom STL allocators in your code, you are forced to alter the type signatures of all your STL objects to match the allocation policy. STL is used prominently within the SDK's implementation and interface (although the interface will become less STL-centric in the near future). This means that a one-size-fits-all approach within the SDK would either prevent developers who don't care about memory management from directly passing "standard"/default STL objects into the SDK (because everything's using custom allocators) or hardcore developers who do care about memory wouldn't be able to control STL allocation (because everything's using the default std::allocator). Using a hybrid approach -- use the custom allocators internally but the interface allows both default std:: objects (which get converted into custom allocator ones) as well as ones with custom allocators -- bloats the interface, and more dangerously, makes memory issues potentially much more difficult to track down if the SDK developer makes a mistake. We can revisit this if people feel strongly that the compile-time switch is a bad idea; I was extremely wary of debugging/mixing STL objects with two different allocation methods.

Our solution to these semi-conflicting requirements is to have the memory system compile switch -- AWS_CUSTOM_MEMORY_MANAGEMENT -- control what stl types the native SDK uses. If the compile switch is on, then the types resolve to stl types with a custom allocator that hooks into the AWS memory system. If the compile switch is off, then all Aws::* types resolve to the default std::* corresponding type. This is better explained by a few code snippets from the SDK:
In AWSAllocator.h:
```
#ifdef AWS_CUSTOM_MEMORY_MANAGEMENT

template< typename T >
class AwsAllocator : public std::allocator< T >
{
   ... definition of allocator that uses AWS memory system
};

#else

template< typename T > using Allocator = std::allocator<T>;

#endif
```
So depending on the compile-time switch, AwsAllocator is either a custom allocator or the default allocator. Then, we define our Aws::* types as follows: (from AWSVector.h)
`template< typename T > using Vector = std::vector< T, Aws::Allocator< T > >;`
If the compile-time switch is on, this type maps to a vector using custom memory allocation and the AWS memory system. If the compile-time switch is off, it's just a regular std::vector with default type parameters. This type aliasing is done for all the std:: types used in the native SDK that perform memory allocation (containers, string stream, string buf) and the SDK now exclusively uses these Aws types.
When the SDK is released, in addition to the standard debug/release and 32/64 bit switches, we will build combinations with custom memory management (AWS_CUSTOM_MEMORY_MANAGEMENT) on and with it off. The developer can then choose which version they want to use: the version that has no custom allocator control and uses default STL objects throughout, or the version that has custom allocator controls and uses AwsAllocator-based STL objects throughout.

#####Future Steps
While we've given developers the ability to control all memory allocation within the SDK, a problem remains in that STL types dominate the public interface (primarily string parameters to the model object initialize/set methods). As it currently stands, developers that forgo STL entirely (rolling their own strings/containers/etc...) are forced to create many temporaries (incurring the cost of allocation/copy/deallocation) every time they want to make a service call. This is not desirable.
Our current plan to address this is to focus primarily on the Request model objects and we have done the following:
- every Init/Set function that takes a string has an overload that takes const char*
- every Init/Set function that takes a container (map/vector mostly) has an Add variant that takes a single entry
- every Init/Set that takes binary data has an overload that takes a pointer to the data and a length value
- (if needed) every Init/Set function that takes a string has an overload that takes (non-zero-terminated) const char * and a length value.
This removes most of the temporaries/allocation that currently happen when service calls are made by developers not using STL.

#####Note to Native SDK developers regarding memory controls
Some new rules that need to be followed by code inside the SDK:
- new and delete should never be used. Use Aws::New<> and Aws::Delete<>.
- new[] and delete[] should never be used. Use Aws::NewArray<> and Aws::DeleteArray<>.
- use Aws::MakeShared; never use std::make_shared
- If you want to use a unique_ptr to a single object, you need to make Aws::Deleter<T> the second type parameter, ie:

`std::unique_ptr<MyClass, Aws::Deleter<MyClass>> somePointer = Aws::New<MyClass>(...);`

- If you want to use a unique_ptr to an array of objects, you need to make Aws::ArrayDelete<T> the second type parameter, ie:

`std::unique_ptr<MyClass, Aws::ArrayDelete<MyClass>> somePointer = Aws::NewArray<MyClass>(...);`

- Never use stl containers directly. Use one of the Aws:: typedefs, or if one does not exist, add a typedef for the desired container.

`Aws::Map<Aws::String, Aws::String> m_kvPairs;`

- Any external pointer passed into the SDK that the SDK is expected to manage (ie cleanup) must be a shared_ptr. It is the responsibility of the developer to initialize the shared pointer with a destruction policy that matches how the object was allocated. If the SDK is not expected to cleanup a pointer, then a raw pointer is fine.

####Logging
The SDK has configurable logging support. When initializing the logging system you can control the filter level as well as the logging target: either a file whose name has a configurable prefix or a stream. The log file generated by the prefix option rolls over once per hour to allow for log file archiving or deletion.

To set the logging options, you'll need to initialize the logging system at the beginning of your program:

`Amazon::Utils::Logging::InitializeAWSLogging(Aws::MakeShared<Amazon::Utils::Logging::DefaultLogSystem>("RunUnitTests", Amazon::Utils::Logging::LogLevel::TRACE, "aws_sdk_"));`

If you do not call InitializeAWSLogging in your program, the SDK will not do any logging.
Don't forget to shut it down at the end of your program:

`Amazon::Utils::Logging::ShutdownAWSLogging();`

For example, we do something like this in our integration tests:

```
#include <aws/external/gtest.h>

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/logging/DefaultLogSystem.h>
#include <aws/core/utils/logging/AWSLogging.h>

#include <iostream>

int main(int argc, char** argv)
{
  Amazon::Utils::Logging::InitializeAWSLogging(Aws::MakeShared<Amazon::Utils::Logging::DefaultLogSystem>("RunUnitTests", Amazon::Utils::Logging::LogLevel::TRACE, "aws_sdk_"));
  ::testing::InitGoogleTest(&argc, argv);
  int exitCode = RUN_ALL_TESTS();
  Amazon::Utils::Logging::ShutdownAWSLogging();
  return exitCode;
}
```

####Client Configuration
The client configuration is the way that you control most functionality in the SDK. I'll now explain each piece of the client config.

Here is the declaration for ClientConfiguration:

```
struct AWS_CORE_API ClientConfiguration
{
    ClientConfiguration();

    Aws::String userAgent;
    Aws::Http::Scheme scheme;
    Aws::Region region;
    unsigned maxConnections;
    long requestTimeoutMs;
    long connectTimeoutMs;
    std::shared_ptr<RetryStrategy> retryStrategy;
    Aws::String endpointOverride;
    Aws::String proxyHost;
    unsigned proxyPort;
    Aws::String proxyUserName;
    Aws::String proxyPassword;
    std::shared_ptr<Aws::Utils::Threading::Executor> executor;
    bool verifySSL;
    std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> writeRateLimiter;
    std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> readRateLimiter;
};
```

#####User Agent
You shouldn't alter this, this pulls various bits of information from your operating system and is built in the constructor.

#####Scheme
Defaults to HTTPS, if the information you are passing is not sensitive and the service you are connecting to supports an HTTP endpoint, then feel free to set this to HTTP. AWS Auth protects you from tampering.

#####Region
This is the region that you want the client to communicate with eg. us-east-1, us-west-1 etc... It is your reponsibility to make sure the service you are using has an endpoint in the region configure here.

#####Max Connections
This is the maximum number of connections to allow to a single server for your http communications. For windows, either set this to 2 or see this documentation https://support.microsoft.com/en-us/kb/183110. For other systems, set this as high as you think you can support the bandwidth for. We recommend somewhere around 25.  The default for this value is 25.

#####Request Timeout and Connection Timeout
In Milliseconds, how long to wait before timing out a request. Consider raising this value if you are doing large file transfers such as in S3 or cloud front.

#####Retry Strategy
Defaults to exponential backoff. If you want to override this, Implement a subclass of RetryStrategy and pass an instance here.

#####Endpoint Override
Don't use this unless you already know what it's for.... 

#####Proxy Host, Port, User Name, and Password
This allows you to configure a proxy for all communication with AWS. This is particularly useful at debug time in conjunction with the Burp suite. However, some users may use a proxy to actually connect to the internet. Configure that stuff here.

#####Executor
This defaults to creating a thread for each async call and detaching it. If you want different behavior, implement a subclass of Executor and pass an instance of it here.

#####Verify SSL
If you turn this off, you might as well turn SSL off; but if you must, set this to false to disable SSL certificate verification.

#####Write Rate Limiter and Read Rate Limiter
These throttle the bandwidth used by the transport layer to help you with resource budgets. The default is wide open. If you just want to set a budget then use our default implementation with your desired rates. You can also subclass RateLimiterInterface and inject your own instance.






