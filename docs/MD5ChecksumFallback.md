# MD5 Checksum Fallback for the AWS C++ SDK

Recently the SDKs shipped a feature in the SDK that [changed default object integrity](https://github.com/aws/aws-sdk-cpp/discussions/3252) in S3. What this more or less boils down to is that [S3 supports several different wire checksums](https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html) and we now default to use `CRC64-NVME` to ensure object integrity. Previously we used `MD5 `checksums to ensure object integrity. Some 3rd party S3 compatible services currently do not support this and need time to catch up, or alternatively will not support this. If you wish to fallback to the old behavior of sending MD5 checksums there are three different scenarios that will have have to cover

## An API that has checksum when supported and you wish to send no checksum at all with the request

Some APIs like [Put Object](https://github.com/aws/aws-sdk-cpp/blob/main/tools/code-generation/api-descriptions/s3-2006-03-01.normal.json#L1286) are marked as `"requestChecksumRequired":false` which means that a checksum is not required for this endpoint but the SDK will send a CRC64-NVME checksum by default as it is supported. On operations like this you can completely disable checksums.

```c++
#include <aws/core/Aws.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/PutObjectRequest.h>

using namespace Aws;
using namespace Aws::S3;
using namespace Aws::S3::Model;

namespace {
  constexpr const char* LOG_TAG = "TestApplication";
  constexpr const char* BUCKET_NAME = "BUCKET_NAME";
  constexpr const char* KEY = "OBJECT_KEY";
}

auto main() -> int {
  SDKOptions options;
  options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Debug;
  InitAPI(options);
  {
    S3ClientConfiguration configuration;
    configuration.checksumConfig.requestChecksumCalculation =
    Client::RequestChecksumCalculation::WHEN_REQUIRED;
    S3Client client{configuration};
    auto request = PutObjectRequest().WithBucket(BUCKET_NAME).WithKey(KEY);
    request.SetBody(body);
    std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(LOG_TAG,
      "sample text stream");
    const auto response = client.PutObject(request);
    assert(response.IsSuccess());
  }
  ShutdownAPI(options);
  return 0;
}
```

the resulting wire log will look something like

```log
[DEBUG] 2025-01-29 16:11:11.280 CURL [0x2067ccf80] (HeaderOut) PUT /YOUR_KEY HTTP/1.1
Host: YOUR_BUCKET.s3.us-east-1.amazonaws.com
Accept: */*
amz-sdk-invocation-id: invocation_uuid
amz-sdk-request: attempt=1
authorization: your_signature
content-length: 18
content-type: binary/octet-stream
user-agent:your user agent
x-amz-content-sha256: content_sha
x-amz-date: data
x-amz-security-token: security_token
```

Which will have no headers associated with checksums or any checksumming related information. This is not recommended because there is no object integrity checks, and data could be corrupted on the wire.

## An API that has checksum when supported and you wish to send a MD5 but NOT a CRC64 checksum

This is same scenario as the first case but instead of sending no checksum, we will be sending a content MD5 header alongside the request for object validation. This is the default behavior before the object integrity change.

```c++
#include <aws/core/Aws.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/PutObjectRequest.h>

using namespace Aws;
using namespace Aws::Utils;
using namespace Aws::S3;
using namespace Aws::S3::Model;

namespace {
  constexpr const char* LOG_TAG = "TestApplication";
  constexpr const char* BUCKET_NAME = "BUCKET_NAME";
  constexpr const char* KEY = "OBJECT_KEY";
  constexpr const char* CONTENT_MD5_HEADER = "content-md5";
}

auto main() -> int {
  SDKOptions options;
  options.loggingOptions.logLevel = Logging::LogLevel::Debug;
  InitAPI(options);
  {
    S3ClientConfiguration configuration;
    configuration.checksumConfig.requestChecksumCalculation =
      Client::RequestChecksumCalculation::WHEN_REQUIRED;
    S3Client client{configuration};
    auto request = PutObjectRequest().WithBucket(BUCKET_NAME).WithKey(KEY);
    std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(LOG_TAG,
      "sample text stream");
    request.SetAdditionalCustomHeaderValue(CONTENT_MD5_HEADER,
      HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*body)));
    request.SetBody(body);
    const auto response = client.PutObject(request);
    assert(response.IsSuccess());
  }
  ShutdownAPI(options);
  return 0;
}
```

this will result in a log that looks like

```log
DEBUG] 2025-01-29 16:31:01.666 CURL [0x2067ccf80] (HeaderOut) PUT /YOUR_KEY HTTP/1.1
Host: YOUR_BUCKET.s3.us-east-1.amazonaws.com
Accept: */*
amz-sdk-invocation-id: invocation_uuid
amz-sdk-request: attempt=1
authorization: your_signature
content-length: 18
content-md5: rXaQ1aPgNd9/GVs6Fl3zuA==
content-type: binary/octet-stream
user-agent:your_user_agent
x-amz-content-sha256: content_sha
x-amz-date: data
x-amz-security-token: security_token
```

Which will include a MD5 header alongside your request for object integrity. This preserves backwards compatibility.

## An API that has checksum when required and you wish to send a MD5 but NOT  a CRC64 checksum

Some APIs require checksums on requests, like [DeleteObjects](https://github.com/aws/aws-sdk-cpp/blob/main/tools/code-generation/api-descriptions/s3-2006-03-01.normal.json#L350). These APIs require a checksum to be sent alongside the api request. By default the SDK will send CRC64-NVME by default. To revert to the old behavior of only sending the MD5 header this will require overriding the method on the parent request to opt out of this.

```c++
#include <aws/core/Aws.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/DeleteObjectsRequest.h>

using namespace Aws;
using namespace Aws::Utils;
using namespace Aws::S3;
using namespace Aws::S3::Model;

namespace {
  constexpr const char* BUCKET_NAME = "BUCKET_NAME";
  constexpr const char* KEY = "OBJECT_KEY";
  constexpr const char* CONTENT_MD5_HEADER = "content-md5";
}

struct ChecksumOptOutDeleteObjects : public DeleteObjectsRequest {
  inline bool RequestChecksumRequired() const override {
    return false;
  };
};

auto main() -> int {
  SDKOptions options;
  options.loggingOptions.logLevel = Logging::LogLevel::Debug;
  InitAPI(options);
  {
    S3ClientConfiguration configuration;
    configuration.checksumConfig.requestChecksumCalculation =
    Client::RequestChecksumCalculation::WHEN_REQUIRED;
    S3Client client{configuration};
    auto request = ChecksumOptOutDeleteObjects();
    request.SetBucket(BUCKET_NAME);
    request.SetDelete(S3::Model::Delete().WithObjects({ObjectIdentifier()
      .WithKey(KEY)}));
    auto payload = request.SerializePayload();
    request.SetAdditionalCustomHeaderValue(CONTENT_MD5_HEADER,
      HashingUtils::Base64Encode(HashingUtils::CalculateMD5(payload)));
    const auto response = client.DeleteObjects(request);
    assert(response.IsSuccess());
  }
  ShutdownAPI(options);
  return 0;
}
```

This will override the need for the SDK to calculate a required checksum, allowing to skip the required checksum, and you can manually add a MD5 header for the serialized payload.

The log should look something like

```log
[DEBUG] 2025-01-29 18:07:08.164 CURL [0x2067ccf80] (HeaderOut) POST /?delete HTTP/1.1
Host: YOUR_BUCKET.s3.us-east-1.amazonaws.com
Accept: */*
amz-sdk-invocation-id: invocation_uuid
amz-sdk-request: attempt=1
authorization: your_signature
content-length: 144
content-md5: kJL3pJJmVThrDq352SNTrw==
content-type: application/xml
user-agent: aws-sdk-cpp/1.11.493 ua/2.1 api/S3 os/Darwin#23.6.0 lang/c++#C++11 md/aws-crt#0.19.7 md/arch#arm64 md/Clang#15.0.0 m/Duser-agent:your user agent
x-amz-content-sha256: content_sha
x-amz-date: date
x-amz-security-token: security_token
```
