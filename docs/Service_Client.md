# Service Clients
You can use the default constructor, or you can use the system interfaces to construct a service client.

As an example, the following code creates an Amazon DynamoDB client using a specialized client configuration, default credentials provider chain, and default HTTP client factory:

```cpp
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

