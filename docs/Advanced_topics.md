# Advance Topics and tips

__This section includes the following topics:__
* [Uninstalling (auto build only)](#uninstalling)
* [Overriding Your HTTP Client](#overriding-your-http-client)
* [Error Handling](#error-handling)
* [Provided Utilities](#provided-utilities)
* [Controlling IOStreams used by the HttpClient and the AWSClient](#controlling-iostreams-used-by-the-httpclient-and-the-awsclient)
* [Known Limitations](#known-limitations)
* [Generating custom clients](#generating-custom-clients)


### Uninstalling:
To uninstall these libraries:
```sh
make uninstall
```
You may define a custom uninstall target when you are using SDK as a sub-project, but make sure it comes before the default definition in `CMakeLists.txt`, and you can uninstall SDK related libraries by:
```sh
make uninstall-awssdk
```

### Overriding your Http Client
The default HTTP client for Windows is WinHTTP. The default HTTP client for all other platforms is Curl. If needed, you can create a custom HttpClientFactory, add it to the SDKOptions object which you pass to Aws::InitAPI().

### Error Handling
We do not use exceptions; however, you can use exceptions in your code. Every service client returns an outcome object that includes the result and an error code.

Example of handling error conditions:

```cpp
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

### Provided Utilities
The provided utilities include HTTP stack, string utils, hashing utils, JSON parser, and XML parser.

##### HTTP Stack
/aws/core/http/

The HTTP client provides connection pooling, is thread safe, and can be reused for your purposes. See the Client Configuration section above.

##### String Utils
/aws/core/utils/StringUtils.h

This header file provides core string functions, such as trim, lowercase, and numeric conversions.

##### Hashing Utils
/aws/core/utils/HashingUtils.h

This header file provides hashing functions, such as SHA256, MD5, Base64, and SHA256_HMAC.

##### Cryptography
/aws/core/utils/crypto/Cipher.h
/aws/core/utils/crypto/Factories.h

This header file provides access to secure random number generators, AES symmetric ciphers in CBC, CTR, and GCM modes, and the underlying Hash implementations that are used in HashingUtils.

##### JSON Parser
/aws/core/utils/json/JsonSerializer.h

This header file provides a fully functioning yet lightweight JSON parser (thin wrapper around JsonCpp).

##### XML Parser
/aws/core/utils/xml/XmlSerializer.h

This header file provides a lightweight XML parser (thin wrapper around tinyxml2). RAII pattern has been added to the interface.

### Controlling IOStreams used by the HttpClient and the AWSClient
By default all responses use an input stream backed by a stringbuf. If needed, you can override the default behavior. For example, if you are using Amazon S3 GetObject and do not want to load the entire file into memory, you can use IOStreamFactory in AmazonWebServiceRequest to pass a lambda to create a file stream.

Example file stream request:

```cpp
GetObjectRequest getObjectRequest;
getObjectRequest.SetBucket(fullBucketName);
getObjectRequest.SetKey(keyName);
getObjectRequest.SetResponseStreamFactory([](){ return Aws::New<Aws::FStream>( ALLOCATION_TAG, DOWNLOADED_FILENAME, std::ios_base::out ); });

auto getObjectOutcome = s3Client->GetObject(getObjectRequest);
```

### Known Limitations

#### Aws::StringStream max size

[`Aws::StringStream`](https://github.com/aws/aws-sdk-cpp/blob/main/aws-cpp-sdk-core/include/aws/core/utils/memory/stl/AWSStringStream.h) is an alias to [`std::basic_stringstream`](https://en.cppreference.com/w/cpp/io/basic_stringstream) which effectively stores an instance of std::basic_string and performs the input and output operations on it. That being known the max size limitation of a string stream is the maximum size for a string in that toolchain [`std::basic_string::max_size`](https://en.cppreference.com/w/cpp/string/basic_string/max_size).

### Generating Custom Clients
#### Requirements
python3, jdk (1.8+), maven
#### Steps
Place your new model files in the correct folders:
  - c2j model (looks like this: `mycustomservice-2020-08-01.normal.json`)
    - In this path: `aws-sdk-cpp/tools/code-generation/api-descriptions`
  - endpoints models (looks like this: `mycustomservice-2020-08-01.endpoint-tests.json mycustomservice-2020-08-01.endpoint-rule-set.json ect.`)
    - In this path: `aws-sdk-cpp/tools/code-generation/endpoints`
Run code generation
```sh
$ python3 tools/scripts/run_code_generation.py --client_list mycustomservice
```
