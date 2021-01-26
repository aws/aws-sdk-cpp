# Client Configuration
You can use the client configuration to control most functionality in the AWS SDK for C++.

ClientConfiguration declaration:

```cpp
struct AWS_CORE_API ClientConfiguration
{
    ClientConfiguration();

    Aws::String userAgent;
    Aws::Http::Scheme scheme;
    Aws::Region region;
    bool useDualStack;
    unsigned maxConnections;
    long requestTimeoutMs;
    long connectTimeoutMs;
    std::shared_ptr<RetryStrategy> retryStrategy;
    Aws::String endpointOverride;
    Aws::Http::Scheme proxyScheme;
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

### User Agent
The user agent is built in the constructor and pulls information from your operating system. Do not alter the user agent.

### Scheme
The default value for scheme is HTTPS. You can set this value to HTTP if the information you are passing is not sensitive and the service to which you want to connect supports an HTTP endpoint. AWS Auth protects you from tampering.

### Region
The region specifies where you want the client to communicate. Examples include us-east-1 or us-west-1. You must ensure the service you want to use has an endpoint in the region you configure.

### UseDualStack
Sets the endpoint calculation to go to a dual stack (ipv6 enabled) endpoint. It is your responsibility to check that the service actually supports ipv6 in the region you specify.

### Max Connections
The default value for the maximum number of allowed connections to a single server for your HTTP communications is 25. You can set this value as high as you can support the bandwidth. We recommend a value around 25.

### Request Timeout and Connection Timeout
This value determines the length of time, in milliseconds, to wait before timing out a request. You can increase this value if you need to transfer large files, such as in Amazon S3 or CloudFront.

### Retry Strategy
The retry strategy defaults to exponential backoff. You can override this default by implementing a subclass of RetryStrategy and passing an instance.

### Endpoint Override
Do not alter the endpoint.

### Proxy Scheme, Host, Port, User Name, and Password
These settings allow you to configure a proxy for all communication with AWS. Examples of when this functionality might be useful include debugging in conjunction with the Burp suite, or using a proxy to connect to the internet.

### Executor
The default behavior for the executor is to create and detach a thread for each async call. You can change this behavior by implementing a subclass of Executor and passing an instance. We now provide a thread pooled executor as an option. For more information see this blog post: https://aws.amazon.com/blogs/developer/using-a-thread-pool-with-the-aws-sdk-for-c/

### Verify SSL
If necessary, you can disable SSL certificate verification by setting the verify SSL value to false.

### CA Path
You can tell the http client where to find your certificate trust store ( e.g. a directory prepared with OpenSSL c_rehash utility). This should not be necessary unless you are doing some weird symlink farm stuff for your environment. This has no effect on Windows or OSX.

### Write Rate Limiter and Read Rate Limiter
The write and read rate limiters are used to throttle the bandwidth used by the transport layer. The default for these limiters is open. You can use the default implementation with your desired rates, or you can create your own instance by implementing a subclass of RateLimiterInterface.
