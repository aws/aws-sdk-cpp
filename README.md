
# aws-sdk-cpp
The AWS SDK for C++ provides a modern C++ (version C++ 11 or later) interface for Amazon Web Services (AWS). It is meant to be performant and fully functioning with low- and high-level SDKs, while minimizing dependencies and providing platform portability (Windows, OSX, Linux, and mobile).  

AWS SDK for C++ is in developer preview while we gather one last round of feedback from
users and the open source community reviews the APIs. We invite our customers to follow along with our progress and join
the development efforts by submitting pull requests and sending us feedback and ideas via GitHub Issues.

###Introducting the AWS SDK for C++ from AWS re:invent 2015
The following video explains many of the core features and also high-level SDKs

[![Introducing the AWS SDK for C++](https://img.youtube.com/vi/fm4Aa3Whwos/0.jpg)]
(https://www.youtube.com/watch?v=fm4Aa3Whwos&list=PLhr1KZpdzuke5pqzTvI2ZxwP8-NwLACuU&index=9 "Introducing the AWS SDK for C++")

###Building the SDK:
Use the information below to build the entire source tree for your platform, run unit tests, and build integration tests.  

####Minimum Requirements:
* Visual Studio 2013 or later
  * Visual Studio 2013 does not provide default move constructors and operators. 
  * Later versions of Visual Studio provide a standards-compliant compiler. 
* OR GNU Compiler Collection (GCC) 4.9 or later
* OR Clang 3.3 or later
* 4GB of RAM
  * 4GB of RAM is required to build some of the larger clients. The SDK build may fail on EC2 instance types t2.micro, t2.small and other small instance types due to insufficient memory. 

####Creating an Out-of-Source Build (Recommended):
To create an **out-of-source build**: 
1. Install CMake and the relevant build tools for your platform. Ensure these are available in your executable path.
2. Create your build directory. Replace BUILD_DIR with your build directory name:

```
cd BUILD_DIR
cmake <path-to-root-of-this-source-code>
```

You can use the following variations to create your build directory: 
* For Auto Make build systems: 
`make`
* For Visual Studio:
`msbuild ALL_BUILD.vcxproj`

To create a **release build**, do one of the following:
* For Auto Make build systems: 
```
cmake -DCMAKE_BUILD_TYPE=Release  <path-to-root-of-this-source-code>
make
sudo make install
```
* For Visual Studio:
```
cmake <path-to-root-of-this-source-code> -G "Visual Studio 12 Win64"
msbuild INSTALL.vcxproj /p:Configuration=Release
```

####CMake Variables

#####BUILD_ONLY
Allows you to only build the clients you want to use. This will resolve low level client dependencies if you set this to a high-level sdk such as aws-cpp-sdk-transfer. This will also build integration and unit tests related to the projects you select if they exist. aws-cpp-sdk-core always builds regardless of the value of this argument. This is a list argument. Example: -DBUILD_ONLY="aws-cpp-sdk-s3;aws-cpp-sdk-dynamodb;aws-cpp-sdk-cognito-identity"

#####ADD_CUSTOM_CLIENTS
Allows you to build any arbitrary clients based on the api definition. Simply place your definition in the code-generation/api-definitions folder. Then pass this arg to cmake. The cmake configure step will generate your client and include it as a subdirectory in your build. This is particularly useful if you want to generate a C++ client for using one of your API Gateway services. To use this feature you need to have python 2.7, java, jdk1.8, and maven installed and in your executable path. Example: -DADD_CUSTOM_CLIENTS="serviceName=myCustomService; version=2015-12-21;serviceName=someOtherService; version=2015-08-15"

#####REGENERATE_CLIENTS
This argument will wipe out all generated code and generate the client directories from the code-generation/api-definitions folder. To use this argument, you need to have python 2.7, java, jdk1.8, and maven installed in your executable path. Example: -DREGENERATE_CLIENTS=1

#####CUSTOM_MEMORY_MANAGEMENT  
To use a custom memory manager, set the value to 1. You can install a custom allocator, and all STL types will use the custom allocation interface. If the value is set to 0, you still might want to use the STL template types to help with DLL safety on Windows. 

If static linking is enabled, custom memory management defaults to off. If dynamic linking is enabled, custom memory management defaults to on and avoids cross-DLL allocation and deallocation. 

Note: To prevent linker mismatch errors, you must use the same value (0 or 1) throughout your build system.

#####STATIC_LINKING 
To use static linking, set the value to 1. By default the build creates shared libraries for each platform. If you dynamically link to the SDK you will need to define the USE_IMPORT_EXPORT symbol for all build targets using the SDK.

#####TARGET_ARCH
To cross compile or build for a mobile platform, you must specify the target platform. By default the build detects the host operating system and builds for that operating system. 
Options: WINDOWS | LINUX | APPLE | ANDROID

#####G
Use this variable to generate build artifacts, such as Visual Studio solutions and Xcode projects. 

Windows example:
-G "Visual Studio 12 Win64"

For more information, see the CMake documentation for your platform.

###Running integration tests:
Several directories are appended with *integration-tests. After building your project, you can run these executables to ensure everything works properly.

####Dependencies:
To compile in Linux, you must have the header files for libcurl and libopenssl. The packages are typically available in your package manager.

Libcurl example:
   `sudo apt-get install libcurl-dev`
   
###Using the SDK
After they are constructed, individual service clients are very similar to other SDKs, such as Java and .NET. This section explains how core works, how to use each feature, and how to construct an individual client.
 
The aws-cpp-sdk-core is the heart of the system and does the heavy lifting. You can write a client to connect to any AWS service using just the core, and the individual service clients are available to help make the process a little easier.

####Build Defines
If you dynamically link to the SDK you will need to define the USE_IMPORT_EXPORT symbol for all build targets using the SDK.  
If you wish to install your own memory manager to handle allocations made by the SDK, you will need to pass the CUSTOM_MEMORY_MANAGEMENT cmake parameter (-DCUSTOM_MEMORY_MANAGEMENT) as well as define AWS_CUSTOM_MEMORY_MANAGEMENT in all build targets dependent on the SDK.


####Memory Management
The AWS SDK for C++ provides a way to control memory allocation and deallocation in a library. 

Custom memory management is available only if you use a version of the library built using the compile-time constant AWS_CUSTOM_MEMORY_MANAGEMENT defined.
 
If you use a version of the library built without the compile-time constant, the global memory system functions such as InitializeAWSMemorySystem will not work and the global new and delete functions will be used instead. 

For more information about the compile-time constant, see the STL and AWS Strings and Vectors section in this Readme.

To allocate or deallocate memory: 
1. Implement the MemorySystemInterface subclass: 
   aws/core/utils/memory/MemorySystemInterface.h

2. Install a memory manager with an instance of your subclass by calling: 
   InitializeAWSMemorySystem
   Note: This should occur at the beginning of your application. 

3. Just before exit, initialize a corresponding call: 
ShutdownAWSMemorySystem

In the following example, the type signature for AllocateMemory can be changed as needed: 

```
class MyMemoryManager : public Aws::Utils::Memory::MemorySystemInterface
{
  public:
    
    // ...

    virtual void* AllocateMemory(std::size_t blockSize, std::size_t alignment, const char *allocationTag = nullptr) override;
    virtual void FreeMemory(void* memoryPtr) override;

};
```

In Main:

```
int main(void)
{
  MyMemoryManager sdkMemoryManager;
  Aws::Utils::Memory::InitializeAWSMemorySystem(sdkMemoryManager);

  // ... do stuff

  Aws::Utils::Memory::ShutdownAWSMemorySystem();

  return 0;
}
```

####STL and AWS Strings and Vectors
When initialized with a memory manager, the AWS SDK for C++ defers all allocation and deallocation to the memory manager. If a memory manager does not exist, the SDK uses global new and delete.

If you use custom STL allocators, you must alter the type signatures for all STL objects to match the allocation policy. Because STL is used prominently in the SDK implementation and interface, a single approach in the SDK would inhibit direct passing of default STL objects into the SDK or control of STL allocation. Alternately, a hybrid approach – using custom allocators internally and allowing standard and custom STL objects on the interface – could potentially cause more difficulty when investigating memory issues.
  
The solution is to use the memory system’s compile-time constant AWS_CUSTOM_MEMORY_MANAGEMENT to control which STL types the SDK will use.
 
If the compile-time constant is enabled (on), the types resolve to STL types with a custom allocator connected to the AWS memory system.
 
If the compile-time constant is disabled (off), all Aws::* types resolve to the corresponding default std::* type. 

Example code from the AWSAllocator.h file in the SDK: 

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

In the example code, the AwsAllocator can be either a custom allocator or a default allocator, depending on the compile-time constant. 

Example code from the AWSVector.h file in the SDK:
`template< typename T > using Vector = std::vector< T, Aws::Allocator< T > >;`

In the example code, we define the Aws::* types.
 
If the compile-time constant is enabled (on), the type maps to a vector using custom memory allocation and the AWS memory system. 

If the compile-time constant is disabled (off), the type maps to a regular std::vector with default type parameters.
 
Type aliasing is used for all std:: types in the SDK that perform memory allocation, such as containers, string stream, and string buf. The AWS SDK for C++ uses these types.

#####Remaining Issues
You can control memory allocation in the SDK; however, STL types still dominate the public interface through string parameters to the model object initialize and set methods. If you choose not to use STL and use strings and containers instead, you must create a lot of temporaries whenever you want to make a service call.
 
To remove most of the temporaries and allocation when service calls are made using non-STL, we have implemented the following:
* Every Init/Set function that takes a string has an overload that takes the const char*.
* Every Init/Set function that takes a container (map/vector) has an add variant that takes a single entry. 
* Every Init/Set function that takes binary data has an overload that takes a pointer to the data and a length value. 
* (Optional) Every Init/Set function that takes a string has an overload that takes a non-zero terminated constr char* and a length value.

#####Native SDK Developers and Memory Controls
Follow these rules in the SDK code: 
* Do not use new and delete; use Aws::New<> and Aws::Delete<>.
* Do not use new[] and delete []; use Aws::NewArray<> and Aws::DeleteArray<>.
* Do not use std::make_shared; use Aws::MakeShared.
* Use Aws::UniquePtr for unique pointers to a single object. Use the Aws::MakeUnique function to create the unique pointer. 
* Use Aws::UniqueArray for unique pointers to an array of objects. Use the Aws::MakeUniqueArray function to create the unique pointer. 
* Do not directly use STL containers; use one of the Aws::typedefs or add a typedef for the desired container. Example: `Aws::Map<Aws::String, Aws::String> m_kvPairs;`
* Use shared_ptr for any external pointer passed into and managed by the SDK. You must initialize the shared pointer with a destruction policy that matches how the object was allocated. You can use a raw pointer if the SDK is not expected to clean up the pointer.

####Logging
The AWS SDK for C++ includes logging support that you can configure. When initializing the logging system, you can control the filter level and the logging target (file with a name that has a configurable prefix or a stream). The log file generated by the prefix option rolls over once per hour to allow for archiving or deleting log files.

`Aws::Utils::Logging::InitializeAWSLogging(Aws::MakeShared<Aws::Utils::Logging::DefaultLogSystem>("RunUnitTests", Aws::Utils::Logging::LogLevel::TRACE, "aws_sdk_"));`

If you do not call InitializeAWSLogging in your program, the SDK will not do any logging.
Don't forget to shut it down at the end of your program:

`Aws::Utils::Logging::ShutdownAWSLogging();`

Example integration test: 

```
#include <aws/external/gtest.h>

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/logging/DefaultLogSystem.h>
#include <aws/core/utils/logging/AWSLogging.h>

#include <iostream>

int main(int argc, char** argv)
{
  Aws::Utils::Logging::InitializeAWSLogging(Aws::MakeShared<Aws::Utils::Logging::DefaultLogSystem>("RunUnitTests", Aws::Utils::Logging::LogLevel::TRACE, "aws_sdk_"));
  ::testing::InitGoogleTest(&argc, argv);
  int exitCode = RUN_ALL_TESTS();
  Aws::Utils::Logging::ShutdownAWSLogging();
  return exitCode;
}
```

####Client Configuration
You can use the client configuration to control most functionality in the AWS SDK for C++.

ClientConfiguration declaration:

```
struct AWS_CORE_API ClientConfiguration
{
    ClientConfiguration();

    Aws::String userAgent;
    Aws::Http::Scheme scheme;
    Aws::Region region;
    Aws::String authenticationRegion;
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
    Aws::String caPath;
    std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> writeRateLimiter;
    std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> readRateLimiter;
};
```

#####User Agent
The user agent is built in the constructor and pulls information from your operating system. Do not alter the user agent.

#####Scheme
The default value for scheme is HTTPS. You can set this value to HTTP if the information you are passing is not sensitive and the service to which you want to connect supports an HTTP endpoint. AWS Auth protects you from tampering.

#####Region
The region specifies where you want the client to communicate. Examples include us-east-1 or us-west-1. You must ensure the service you want to use has an endpoint in the region you configure.

#####Authentication Region
The authentication region allows you to specify an arbitrary region to use for signing. If you don't set this we fall back to Region. If you do set this, you are also responsible for setting endpoint override to connect to the endpoint that cooresponds with your custom region.

#####Max Connections
The default value for the maximum number of allowed connections to a single server for your HTTP communications is 25. You can set this value as high as you can support the bandwidth. We recommend a value around 25.

#####Request Timeout and Connection Timeout
This value determines the length of time, in milliseconds, to wait before timing out a request. You can increase this value if you need to transfer large files, such as in Amazon S3 or CloudFront.

#####Retry Strategy
The retry strategy defaults to exponential backoff. You can override this default by implementing a subclass of RetryStrategy and passing an instance.

#####Endpoint Override
Do not alter the endpoint. 

#####Proxy Host, Port, User Name, and Password
These settings allow you to configure a proxy for all communication with AWS. Examples of when this functionality might be useful include debugging in conjunction with the Burp suite, or using a proxy to connect to the internet.

#####Executor
The default behavior for the executor is to create and detach a thread for each async call. You can change this behavior by implementing a subclass of Executor and passing an instance.

#####Verify SSL
If necessary, you can disable SSL certificate verification by setting the verify SSL value to false.

#####CA Path
You can tell the http client where to find your certificate trust store ( e.g. a directory prepared with OpenSSL c_rehash utility). This should not be necessary unless you are doing some weird symlink farm stuff for your environment. This has no effect on Windows or OSX.

#####Write Rate Limiter and Read Rate Limiter
The write and read rate limiters are used to throttle the bandwidth used by the transport layer. The default for these limiters is open. You can use the default implementation with your desired rates, or you can create your own instance by implementing a subclass of RateLimiterInterface.

####Credentials Providers
You can use the AWSCredentialProvider interface to provide login credentials to AWS Auth. Implement this interface to provide your own method of credentials deployment. We also provide default credential providers.

#####Default Credential Provider Chain
The default credential provider chain does the following:
* Checks your environment variables for AWS Credentials
* Checks your $HOME/.aws/credentials file for a profile and credentials
* Contacts the EC2MetadataInstanceProfile service to request credentials

The simplest way to communicate with AWS is to ensure we can find your credentials in one of these locations. 

#####Other Methods
We also support two other methods for providing credentials:
* Provide your credentials in your client’s constructor.
* Use Amazon Cognito Identity, which is an identity management solution. You can use the CognitoCaching*CredentialsProviders classes in the identity-management project. For more information, see the *Amazon Cognito Developer Guide*. 

####Using a Service Client
You can use the default constructor, or you can use the system interfaces discussed above to construct a service client. 

As an example, the following code creates an Amazon DynamoDB client using a specialized client configuration, default credentials provider chain, and default HTTP client factory:

```
auto limiter = Aws::MakeShared<Aws::Utils::RateLimits::DefaultRateLimiter<>>(ALLOCATION_TAG, 200000);

// Create a client
ClientConfiguration config;
config.scheme = Scheme::HTTPS;
config.connectTimeoutMs = 30000;
config.requestTimeoutMs = 30000;
config.readRateLimiter = m_limiter;
config.writeRateLimiter = m_limiter;

auto client = Aws::MakeShared<DynamoDBClient>(ALLOCATION_TAG, config);
```

You can also do the following to manually pass credentials: 
`auto client = Aws::MakeShared<DynamoDBClient>(ALLOCATION_TAG, AWSCredentials("access_key_id", "secret_key"), config);`

Or you can do the following to use a custom credentials provider:
`auto client = Aws::MakeShared<DynamoDBClient>(ALLOCATION_TAG, Aws::MakeShared<CognitoCachingAnonymousCredentialsProvider>(ALLOCATION_TAG, "identityPoolId", "accountId"), config);`

Now you can use your Amazon DynamoDB client. 

####Error Handling
We did not use exceptions; however, you can use exceptions in your code. Every service client returns an outcome object that includes the result and an error code. 

Example of handling error conditions:

```
bool CreateTableAndWaitForItToBeActive()
{
  CreateTableRequest createTableRequest;
  AttributeDefinition hashKey;
  hashKey.SetAttributeName(HASH_KEY_NAME);
  hashKey.SetAttributeType(ScalarAttributeType::S);
  createTableRequest.AddAttributeDefinitions(hashKey);
  KeySchemaElement hashKeySchemaElement;
  hashKeySchemaElement.WithAttributeName(HASH_KEY_NAME).WithKeyType(KeyType::HASH);
  createTableRequest.AddKeySchema(hashKeySchemaElement);
  ProvisionedThroughput provisionedThroughput;
  provisionedThroughput.SetReadCapacityUnits(readCap);
  provisionedThroughput.SetWriteCapacityUnits(writeCap);
  createTableRequest.WithProvisionedThroughput(provisionedThroughput);
  createTableRequest.WithTableName(tableName);

  CreateTableOutcome createTableOutcome = dynamoDbClient->CreateTable(createTableRequest);
  if (createTableOutcome.IsSuccess())
  {
     DescribeTableRequest describeTableRequest;
     describeTableRequest.SetTableName(tableName);
     bool shouldContinue = true;
     DescribeTableOutcome outcome = dynamoDbClient->DescribeTable(describeTableRequest);

     while (shouldContinue)
     {       
         if (outcome.GetResult().GetTable().GetTableStatus() == TableStatus::ACTIVE)
         {
            break;
         }
         else
         {
             std::this_thread::sleep_for(std::chrono::seconds(1));
         }
     }
     return true
  }
  else if(createTableOutcome.GetError().GetErrorType() == DynamoDBErrors::RESOURCE_IN_USE)
  {
     return true;
  }

  return false;
}
```

####Advanced Topics
This section includes the following topics:
* Overriding Your HTTP Client
* Provided Utilities
* Controlling IOStreams Used by the HttpClient and the AWSClient

#####Overriding your Http Client
The default HTTP client for Windows is WinHTTP. The default HTTP client for all other platforms is Curl. If needed, you can create a custom HttpClientFactory to pass to any service client’s constructor.

#####Provided Utilities
The provided utilities include HTTP stack, string utils, hashing utils, JSON parser, and XML parser.

######HTTP Stack
/aws/core/http/

The HTTP client provides connection pooling, is thread safe, and can be reused for your purposes. See the Client Configuration section above.

######String Utils
/aws/core/utils/StringUtils.h

This header file provides core string functions, such as trim, lowercase, and numeric conversions.

######Hashing Utils
/aws/core/utils/HashingUtils.h

This header file provides hashing functions, such as SHA256, MD5, Base64, and SHA256_HMAC.

######JSON Parser
/aws/core/utils/json/JsonSerializer.h

This header file provides a fully functioning yet lightweight JSON parser (thin wrapper around JsonCpp). 

######XML Parser
/aws/core/utils/xml/XmlSerializer.h

This header file provides a lightweight XML parser (thin wrapper around tinyxml2). RAII pattern has been added to the interface.

#####Controlling IOStreams used by the HttpClient and the AWSClient
By default all responses use an input stream backed by a stringbuf. If needed, you can override the default behavior. For example, if you are using Amazon S3 GetObject and do not want to load the entire file into memory, you can use IOStreamFactory in AmazonWebServiceRequest to pass a lambda to create a file stream. 

Example file stream request: 

```
GetObjectRequest getObjectRequest;
getObjectRequest.SetBucket(fullBucketName);
getObjectRequest.SetKey(keyName);
getObjectRequest.SetResponseStreamFactory([](){ return Aws::New<Aws::FStream>( ALLOCATION_TAG, DOWNLOADED_FILENAME, std::ios_base::out ); });

auto getObjectOutcome = s3Client->GetObject(getObjectRequest);
```

###Contributing Back
*Please Do!

#####Guidlines
* Don't make changes to generated clients directly. Make your changes in the generator. Changes to Core, Scripts, and High-Level interfaces are fine directly in the code.
* Do not use non-trivial statics anywhere. This will cause custom memory managers to crash in random places.
* Use 4 spaces for indents and never use tabs.
* No exceptions.... no exceptions. Use the Outcome pattern for returning data if you need to also return an optional error code.
* Always think about platform independence. If this is impossible, put a nice abstraction on top of it and use an abstract factory.
* Use RAII, Aws::New and Aws::Delete should only appear in constructors and destructors.
* Be sure to follow the rule of 5.
* Use the C++ 11 standard where possible.
* Use UpperCamelCase for custom type names and function names. Use m_* for member variables. Don't use statics. If you must, use UpperCammelCase for static variables
* Always be const correct, and be mindful of when you need to support r-values. We don't trust compilers to optimize this uniformly accross builds so please be explicit.
* Namespace names should be UpperCammelCase. Never put a using namespace statement in a header file unless it is scoped by a class. It is fine to use a using namespace statement in a cpp file.
* Use enum class, not enum
* prefer `#pragma once for include guards.
* Forward declare whenever possible.
* Use nullptr instead of NULL.





