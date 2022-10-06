/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/platform/Environment.h>

#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/S3CrtEndpoint.h>
#include <aws/s3-crt/S3CrtErrorMarshaller.h>
#include <aws/s3-crt/S3CrtARN.h>
#include <aws/s3-crt/model/AbortMultipartUploadRequest.h>
#include <aws/s3-crt/model/CompleteMultipartUploadRequest.h>
#include <aws/s3-crt/model/CopyObjectRequest.h>
#include <aws/s3-crt/model/CreateBucketRequest.h>
#include <aws/s3-crt/model/CreateMultipartUploadRequest.h>
#include <aws/s3-crt/model/DeleteBucketRequest.h>
#include <aws/s3-crt/model/DeleteBucketAnalyticsConfigurationRequest.h>
#include <aws/s3-crt/model/DeleteBucketCorsRequest.h>
#include <aws/s3-crt/model/DeleteBucketEncryptionRequest.h>
#include <aws/s3-crt/model/DeleteBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3-crt/model/DeleteBucketInventoryConfigurationRequest.h>
#include <aws/s3-crt/model/DeleteBucketLifecycleRequest.h>
#include <aws/s3-crt/model/DeleteBucketMetricsConfigurationRequest.h>
#include <aws/s3-crt/model/DeleteBucketOwnershipControlsRequest.h>
#include <aws/s3-crt/model/DeleteBucketPolicyRequest.h>
#include <aws/s3-crt/model/DeleteBucketReplicationRequest.h>
#include <aws/s3-crt/model/DeleteBucketTaggingRequest.h>
#include <aws/s3-crt/model/DeleteBucketWebsiteRequest.h>
#include <aws/s3-crt/model/DeleteObjectRequest.h>
#include <aws/s3-crt/model/DeleteObjectTaggingRequest.h>
#include <aws/s3-crt/model/DeleteObjectsRequest.h>
#include <aws/s3-crt/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3-crt/model/GetBucketAccelerateConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketAclRequest.h>
#include <aws/s3-crt/model/GetBucketAnalyticsConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketCorsRequest.h>
#include <aws/s3-crt/model/GetBucketEncryptionRequest.h>
#include <aws/s3-crt/model/GetBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketInventoryConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketLifecycleConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketLocationRequest.h>
#include <aws/s3-crt/model/GetBucketLoggingRequest.h>
#include <aws/s3-crt/model/GetBucketMetricsConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketNotificationConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketOwnershipControlsRequest.h>
#include <aws/s3-crt/model/GetBucketPolicyRequest.h>
#include <aws/s3-crt/model/GetBucketPolicyStatusRequest.h>
#include <aws/s3-crt/model/GetBucketReplicationRequest.h>
#include <aws/s3-crt/model/GetBucketRequestPaymentRequest.h>
#include <aws/s3-crt/model/GetBucketTaggingRequest.h>
#include <aws/s3-crt/model/GetBucketVersioningRequest.h>
#include <aws/s3-crt/model/GetBucketWebsiteRequest.h>
#include <aws/s3-crt/model/GetObjectRequest.h>
#include <aws/s3-crt/model/GetObjectAclRequest.h>
#include <aws/s3-crt/model/GetObjectAttributesRequest.h>
#include <aws/s3-crt/model/GetObjectLegalHoldRequest.h>
#include <aws/s3-crt/model/GetObjectLockConfigurationRequest.h>
#include <aws/s3-crt/model/GetObjectRetentionRequest.h>
#include <aws/s3-crt/model/GetObjectTaggingRequest.h>
#include <aws/s3-crt/model/GetObjectTorrentRequest.h>
#include <aws/s3-crt/model/GetPublicAccessBlockRequest.h>
#include <aws/s3-crt/model/HeadBucketRequest.h>
#include <aws/s3-crt/model/HeadObjectRequest.h>
#include <aws/s3-crt/model/ListBucketAnalyticsConfigurationsRequest.h>
#include <aws/s3-crt/model/ListBucketIntelligentTieringConfigurationsRequest.h>
#include <aws/s3-crt/model/ListBucketInventoryConfigurationsRequest.h>
#include <aws/s3-crt/model/ListBucketMetricsConfigurationsRequest.h>
#include <aws/s3-crt/model/ListMultipartUploadsRequest.h>
#include <aws/s3-crt/model/ListObjectVersionsRequest.h>
#include <aws/s3-crt/model/ListObjectsRequest.h>
#include <aws/s3-crt/model/ListObjectsV2Request.h>
#include <aws/s3-crt/model/ListPartsRequest.h>
#include <aws/s3-crt/model/PutBucketAccelerateConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketAclRequest.h>
#include <aws/s3-crt/model/PutBucketAnalyticsConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketCorsRequest.h>
#include <aws/s3-crt/model/PutBucketEncryptionRequest.h>
#include <aws/s3-crt/model/PutBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketInventoryConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketLifecycleConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketLoggingRequest.h>
#include <aws/s3-crt/model/PutBucketMetricsConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketNotificationConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketOwnershipControlsRequest.h>
#include <aws/s3-crt/model/PutBucketPolicyRequest.h>
#include <aws/s3-crt/model/PutBucketReplicationRequest.h>
#include <aws/s3-crt/model/PutBucketRequestPaymentRequest.h>
#include <aws/s3-crt/model/PutBucketTaggingRequest.h>
#include <aws/s3-crt/model/PutBucketVersioningRequest.h>
#include <aws/s3-crt/model/PutBucketWebsiteRequest.h>
#include <aws/s3-crt/model/PutObjectRequest.h>
#include <aws/s3-crt/model/PutObjectAclRequest.h>
#include <aws/s3-crt/model/PutObjectLegalHoldRequest.h>
#include <aws/s3-crt/model/PutObjectLockConfigurationRequest.h>
#include <aws/s3-crt/model/PutObjectRetentionRequest.h>
#include <aws/s3-crt/model/PutObjectTaggingRequest.h>
#include <aws/s3-crt/model/PutPublicAccessBlockRequest.h>
#include <aws/s3-crt/model/RestoreObjectRequest.h>
#include <aws/s3-crt/model/SelectObjectContentRequest.h>
#include <aws/s3-crt/model/UploadPartRequest.h>
#include <aws/s3-crt/model/UploadPartCopyRequest.h>
#include <aws/s3-crt/model/WriteGetObjectResponseRequest.h>
#include <aws/core/Version.h>
#include <aws/core/platform/OSVersionInfo.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/Globals.h>
#include <aws/crt/Types.h>
#include <aws/crt/auth/Credentials.h>
#include <aws/crt/http/HttpRequestResponse.h>
#include <aws/crt/io/Stream.h>
#include <aws/http/request_response.h>
#include <aws/common/string.h>

using namespace Aws::Utils;

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::S3Crt;
using namespace Aws::S3Crt::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "s3";
static const char* ALLOCATION_TAG = "S3CrtClient";


S3CrtClient::S3CrtClient(const S3Crt::ClientConfiguration& clientConfiguration, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads, bool useVirtualAddressing, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption, const Aws::Auth::DefaultAWSCredentialsProviderChain& credentialsProvider) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, credentialsProvider),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region), signPayloads, false),
    Aws::MakeShared<S3CrtErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor), m_credProvider(Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, credentialsProvider)), m_useVirtualAddressing(useVirtualAddressing), m_USEast1RegionalEndpointOption(USEast1RegionalEndPointOption)
{
  init(clientConfiguration, m_credProvider);
}

S3CrtClient::S3CrtClient(const AWSCredentials& credentials, const S3Crt::ClientConfiguration& clientConfiguration, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads, bool useVirtualAddressing, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region), signPayloads, false),
    Aws::MakeShared<S3CrtErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor), m_credProvider(Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials)), m_useVirtualAddressing(useVirtualAddressing), m_USEast1RegionalEndpointOption(USEast1RegionalEndPointOption)
{
  init(clientConfiguration, m_credProvider);
}

S3CrtClient::S3CrtClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const S3Crt::ClientConfiguration& clientConfiguration, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads, bool useVirtualAddressing, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region), signPayloads, false),
    Aws::MakeShared<S3CrtErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor), m_credProvider(credentialsProvider), m_useVirtualAddressing(useVirtualAddressing), m_USEast1RegionalEndpointOption(USEast1RegionalEndPointOption)
{
  init(clientConfiguration, m_credProvider);
}

S3CrtClient::~S3CrtClient()
{
  aws_s3_client_release(m_s3CrtClient);
  m_clientShutdownSem->WaitOne(); // Wait aws_s3_client shutdown
}

void S3CrtClient::init(const S3Crt::ClientConfiguration& config, const std::shared_ptr<Aws::Auth::AWSCredentialsProvider> credentialsProvider)
{
  AWSClient::SetServiceClientName("S3");
  LoadS3CrtSpecificConfig(config.profileName);
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  m_useDualStack = config.useDualStack;
  if (config.endpointOverride.empty())
  {
      m_useCustomEndpoint = false;
      m_baseUri = S3CrtEndpoint::ForRegion(config.region, config.useDualStack, m_USEast1RegionalEndpointOption == Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::REGIONAL);
  }
  else
  {
      m_useCustomEndpoint = true;
      OverrideEndpoint(config.endpointOverride);
  }
  m_enableHostPrefixInjection = config.enableHostPrefixInjection;

  // initialize aws_s3_client;
  aws_s3_client_config s3CrtConfig;
  AWS_ZERO_STRUCT(s3CrtConfig);
  s3CrtConfig.region = Aws::Crt::ByteCursorFromCString(config.region.c_str());
  Aws::Crt::Io::ClientBootstrap* clientBootstrap = config.clientBootstrap ? config.clientBootstrap.get() : Aws::GetDefaultClientBootstrap();
  s3CrtConfig.client_bootstrap = clientBootstrap->GetUnderlyingHandle();

  m_crtCredProvider = Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderDelegate({
     std::bind([](const std::shared_ptr<AWSCredentialsProvider>& provider) {
         if (provider == nullptr) {
             AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "No provider provided, using anonymous provider")
             return Aws::MakeShared<Aws::Crt::Auth::Credentials>(ALLOCATION_TAG);
         }
         AWSCredentials credentials = provider->GetAWSCredentials();
         if (credentials.GetAWSAccessKeyId().empty() && credentials.GetAWSSecretKey().empty()) {
             return Aws::MakeShared<Aws::Crt::Auth::Credentials>(ALLOCATION_TAG);
         }
         return Aws::MakeShared<Aws::Crt::Auth::Credentials>(ALLOCATION_TAG,
             *Aws::MakeShared<Aws::Crt::ByteCursor>(ALLOCATION_TAG, Aws::Crt::ByteCursorFromCString(credentials.GetAWSAccessKeyId().c_str())),
             *Aws::MakeShared<Aws::Crt::ByteCursor>(ALLOCATION_TAG, Aws::Crt::ByteCursorFromCString(credentials.GetAWSSecretKey().c_str())),
             *Aws::MakeShared<Aws::Crt::ByteCursor>(ALLOCATION_TAG, Aws::Crt::ByteCursorFromCString(credentials.GetSessionToken().c_str())),
             credentials.GetExpiration().Millis());
     }, credentialsProvider)
  });

  aws_s3_init_default_signing_config(&m_s3CrtSigningConfig, Aws::Crt::ByteCursorFromCString(config.region.c_str()), m_crtCredProvider->GetUnderlyingHandle());
  m_s3CrtSigningConfig.flags.use_double_uri_encode = false;
  s3CrtConfig.signing_config = &m_s3CrtSigningConfig;

  static const size_t DEFAULT_PART_SIZE = 5 * 1024 * 1024; // 5MB
  s3CrtConfig.part_size = config.partSize < DEFAULT_PART_SIZE ? DEFAULT_PART_SIZE : config.partSize;

  Aws::Crt::Io::TlsConnectionOptions* tlsConnectionOptions = config.tlsConnectionOptions ? config.tlsConnectionOptions.get() : Aws::GetDefaultTlsConnectionOptions();
  aws_tls_connection_options tlsOptions;
  AWS_ZERO_STRUCT(tlsOptions);
  if (tlsConnectionOptions)
  {
    aws_tls_connection_options_copy(&tlsOptions, tlsConnectionOptions->GetUnderlyingHandle());
    tlsOptions.server_name = aws_string_new_from_c_str(Aws::get_aws_allocator(), m_baseUri.c_str());
    s3CrtConfig.tls_connection_options = &tlsOptions;
  }
  else
  {
    s3CrtConfig.tls_connection_options = nullptr;
  }

  s3CrtConfig.tls_mode = config.scheme == Aws::Http::Scheme::HTTPS ? AWS_MR_TLS_ENABLED : AWS_MR_TLS_DISABLED;
  s3CrtConfig.throughput_target_gbps = config.throughputTargetGbps;
  m_clientShutdownSem = Aws::MakeShared<Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  m_wrappedData.data = config.shutdownCallbackUserData;
  m_wrappedData.fn = config.clientShutdownCallback;
  m_wrappedData.clientShutdownSem = m_clientShutdownSem;
  s3CrtConfig.shutdown_callback = CrtClientShutdownCallback;
  s3CrtConfig.shutdown_callback_user_data = static_cast<void*>(&m_wrappedData);

  m_s3CrtClient = aws_s3_client_new(Aws::get_aws_allocator(), &s3CrtConfig);
  if (tlsConnectionOptions)
  {
    aws_tls_connection_options_clean_up(&tlsOptions);
  }
  if (!m_s3CrtClient)
  {
    AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to allocate aws_s3_client instance, abort.");
  }
}

void S3CrtClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0)
  {
      m_scheme = "http";
      m_baseUri = endpoint.substr(7);
  }
  else if (endpoint.compare(0, 8, "https://") == 0)
  {
      m_scheme = "https";
      m_baseUri = endpoint.substr(8);
  }
  else
  {
      m_scheme = m_configScheme;
      m_baseUri = endpoint;
  }
}

static const int SUCCESS_RESPONSE_MIN = 200;
static const int SUCCESS_RESPONSE_MAX = 299;

static bool DoesResponseGenerateError(const std::shared_ptr<HttpResponse>& response)
{
    if (response->HasClientError()) return true;

    int responseCode = static_cast<int>(response->GetResponseCode());
    return responseCode < SUCCESS_RESPONSE_MIN || responseCode > SUCCESS_RESPONSE_MAX;
}

static int S3CrtRequestHeadersCallback(struct aws_s3_meta_request *meta_request, const struct aws_http_headers *headers,
    int response_status, void *user_data)
{
  AWS_UNREFERENCED_PARAM(meta_request);
  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);
  size_t headersCount = aws_http_headers_count(headers);
  for (size_t i = 0; i < headersCount; i++)
  {
    struct aws_http_header header;
    aws_http_headers_get_index(headers, i, &header);
    userData->response->AddHeader(StringUtils::FromByteCursor(header.name), StringUtils::FromByteCursor(header.value));
  }
  userData->response->SetResponseCode(static_cast<HttpResponseCode>(response_status));
  return AWS_OP_SUCCESS;
}

static int S3CrtRequestGetBodyCallback(struct aws_s3_meta_request *meta_request, const struct aws_byte_cursor *body, uint64_t range_start, void *user_data)
{
  AWS_UNREFERENCED_PARAM(meta_request);
  AWS_UNREFERENCED_PARAM(range_start);

  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);
  auto& bodyStream = userData->response->GetResponseBody();

  bodyStream.write(reinterpret_cast<char*>(body->ptr), static_cast<std::streamsize>(body->len));
  if (userData->request->IsEventStreamRequest())
  {
    bodyStream.flush();
  }

  // data sent handler and continuation handler will be supported later when aws_c_s3 support it.
  auto& receivedHandler = userData->request->GetDataReceivedEventHandler();
  if (receivedHandler)
  {
      receivedHandler(userData->request.get(), userData->response.get(), static_cast<long long>(body->len));
  }
  AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, body->len << " bytes written to response.");

  return AWS_OP_SUCCESS;
}

static void S3CrtRequestFinishCallback(struct aws_s3_meta_request *meta_request,
    const struct aws_s3_meta_request_result *meta_request_result, void *user_data)
{
  AWS_UNREFERENCED_PARAM(meta_request);
  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);
  userData->response->SetResponseCode(static_cast<HttpResponseCode>(meta_request_result->response_status));
  if (meta_request_result->error_response_headers)
  {
    size_t headersCount = aws_http_headers_count(meta_request_result->error_response_headers);
    for (size_t i = 0; i < headersCount; i++)
    {
      struct aws_http_header header;
      aws_http_headers_get_index(meta_request_result->error_response_headers, i, &header);
      userData->response->AddHeader(StringUtils::FromByteCursor(header.name), StringUtils::FromByteCursor(header.value));
    }
  }

  if (meta_request_result->error_code || meta_request_result->response_status != static_cast<int>(Aws::Http::HttpResponseCode::OK))
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "S3CrtClient received error response for s3_meta_request with response code: " << meta_request_result->response_status
      << ", with error_code: " << meta_request_result->error_code);
  }

  auto& bodyStream = userData->response->GetResponseBody();

  if (meta_request_result->error_response_body)
  {
    // clean up previously received body data.
    bodyStream.seekg(0);
    bodyStream.seekp(0);
    bodyStream.write(reinterpret_cast<char*>(meta_request_result->error_response_body->buffer), static_cast<std::streamsize>(meta_request_result->error_response_body->len));
  }

  aws_s3_meta_request_release(meta_request);
}

Aws::Client::XmlOutcome S3CrtClient::GenerateXmlOutcome(const std::shared_ptr<HttpResponse>& response) const
{
  Aws::Client::HttpResponseOutcome httpOutcome;
  if (DoesResponseGenerateError(response))
  {
    AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "Request returned error. Attempting to generate appropriate error codes from response");
    auto error = BuildAWSError(response);
    httpOutcome = HttpResponseOutcome(std::move(error));
  }
  else
  {
    httpOutcome = HttpResponseOutcome(std::move(response));
  }

  if (!httpOutcome.IsSuccess())
  {
      return XmlOutcome(std::move(httpOutcome));
  }

  if (httpOutcome.GetResult()->GetResponseBody().tellp() > 0)
  {
      XmlDocument xmlDoc = XmlDocument::CreateFromXmlStream(httpOutcome.GetResult()->GetResponseBody());

      if (!xmlDoc.WasParseSuccessful())
      {
          AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Xml parsing for error failed with message " << xmlDoc.GetErrorMessage().c_str());
          return AWSError<CoreErrors>(CoreErrors::UNKNOWN, "Xml Parse Error", xmlDoc.GetErrorMessage(), false);
      }

      return XmlOutcome(AmazonWebServiceResult<XmlDocument>(std::move(xmlDoc),
          httpOutcome.GetResult()->GetHeaders(), httpOutcome.GetResult()->GetResponseCode()));
  }

  return XmlOutcome(AmazonWebServiceResult<XmlDocument>(XmlDocument(), httpOutcome.GetResult()->GetHeaders()));
}

Aws::Client::StreamOutcome S3CrtClient::GenerateStreamOutcome(const std::shared_ptr<Http::HttpResponse>& response) const
{
  Aws::Client::HttpResponseOutcome httpOutcome;
  if (DoesResponseGenerateError(response))
  {
    AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "Request returned error. Attempting to generate appropriate error codes from response");
    auto error = BuildAWSError(response);
    httpOutcome = HttpResponseOutcome(std::move(error));
  }
  else
  {
    httpOutcome = HttpResponseOutcome(std::move(response));
  }

  if (httpOutcome.IsSuccess())
  {
      return StreamOutcome(AmazonWebServiceResult<Stream::ResponseStream>(
          httpOutcome.GetResult()->SwapResponseStreamOwnership(),
          httpOutcome.GetResult()->GetHeaders(), httpOutcome.GetResult()->GetResponseCode()));
  }

  return StreamOutcome(std::move(httpOutcome));
}

void S3CrtClient::InitCommonCrtRequestOption(CrtRequestCallbackUserData *userData, aws_s3_meta_request_options *options, const Aws::AmazonWebServiceRequest *request, const Aws::Http::URI &uri, Aws::Http::HttpMethod method) const
{
  std::shared_ptr<HttpRequest> httpRequest(nullptr);
  if (request)
  {
    httpRequest = CreateHttpRequest(uri, method, request->GetResponseStreamFactory());
    BuildHttpRequest(*request, httpRequest);
  }
  else
  {
    httpRequest = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  }

  std::shared_ptr<HttpResponse> httpResponse = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(ALLOCATION_TAG, httpRequest);

  userData->s3CrtClient = this;
  userData->originalRequest = request;
  userData->request = httpRequest;
  userData->response = httpResponse;

  options->user_data = static_cast<void*>(userData);
  options->headers_callback = S3CrtRequestHeadersCallback;
  options->body_callback = S3CrtRequestGetBodyCallback;
  options->finish_callback = S3CrtRequestFinishCallback;
}

static void GetObjectRequestShutdownCallback(void *user_data)
{
  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);
  // call user callback and release user_data
  S3Crt::Model::GetObjectOutcome outcome(userData->s3CrtClient->GenerateStreamOutcome(userData->response));
  auto handler = static_cast<const GetObjectResponseReceivedHandler*>(userData->userCallback);
  (*handler)(userData->s3CrtClient, *(reinterpret_cast<const GetObjectRequest*>(userData->originalRequest)), std::move(outcome), userData->userCallbackContext);

  Aws::Delete(userData);
}

void S3CrtClient::GetObjectAsync(const GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObject", "Required field: Bucket, is not set");
    return handler(this, request, GetObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false)), context);
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObject", "Required field: Key, is not set");
    return handler(this, request, GetObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false)), context);
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return handler(this, request, GetObjectOutcome(computeEndpointOutcome.GetError()), context);
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  uri.AddPathSegments(request.GetKey());

  // make aws_s3_meta_request with callbacks
  CrtRequestCallbackUserData *userData = Aws::New<CrtRequestCallbackUserData>(ALLOCATION_TAG);
  aws_s3_meta_request_options options;
  AWS_ZERO_STRUCT(options);

  userData->userCallback = static_cast<const void*>(&handler);
  userData->userCallbackContext = context;
  InitCommonCrtRequestOption(userData, &options, &request, uri, Aws::Http::HttpMethod::HTTP_GET);
  options.shutdown_callback = GetObjectRequestShutdownCallback;
  options.type = AWS_S3_META_REQUEST_TYPE_GET_OBJECT;
  struct aws_signing_config_aws signing_config_override = m_s3CrtSigningConfig;
  signing_config_override.region = Aws::Crt::ByteCursorFromCString(computeEndpointOutcome.GetResult().signerRegion.c_str());
  signing_config_override.service = Aws::Crt::ByteCursorFromCString(computeEndpointOutcome.GetResult().signerServiceName.c_str());
  options.signing_config = &signing_config_override;

  std::shared_ptr<Aws::Crt::Http::HttpRequest> crtHttpRequest = userData->request->ToCrtHttpRequest();
  options.message= crtHttpRequest->GetUnderlyingMessage();
  userData->crtHttpRequest = crtHttpRequest;

  if (aws_s3_client_make_meta_request(m_s3CrtClient, &options) == nullptr)
  {
    return handler(this, request, GetObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Unable to create s3 meta request", false)), context);
  }
}

GetObjectOutcome S3CrtClient::GetObject(const GetObjectRequest& request) const
{
  Aws::Utils::Threading::Semaphore sem(0, 1);
  GetObjectOutcome res;

  auto handler = GetObjectResponseReceivedHandler{[&](const S3CrtClient*, const GetObjectRequest&, GetObjectOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext> &) {
      res = std::move(outcome);
      sem.ReleaseAll();
  }};

  S3CrtClient::GetObjectAsync(request, handler, nullptr);
  sem.WaitOne();
  return res;
}

static void PutObjectRequestShutdownCallback(void *user_data)
{
  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);
  // call user callback and release user_data
  S3Crt::Model::PutObjectOutcome outcome(userData->s3CrtClient->GenerateXmlOutcome(userData->response));
  auto handler = static_cast<const PutObjectResponseReceivedHandler*>(userData->userCallback);
  (*handler)(userData->s3CrtClient, *(reinterpret_cast<const PutObjectRequest*>(userData->originalRequest)), std::move(outcome), userData->userCallbackContext);

  Aws::Delete(userData);
}

void S3CrtClient::PutObjectAsync(const PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: Bucket, is not set");
    return handler(this, request, PutObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false)), context);
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: Key, is not set");
    return handler(this, request, PutObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false)), context);
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return handler(this, request, PutObjectOutcome(computeEndpointOutcome.GetError()), context);
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  uri.AddPathSegments(request.GetKey());

  // make aws_s3_meta_request with callbacks
  CrtRequestCallbackUserData *userData = Aws::New<CrtRequestCallbackUserData>(ALLOCATION_TAG);
  aws_s3_meta_request_options options;
  AWS_ZERO_STRUCT(options);

  userData->userCallback = static_cast<const void*>(&handler);
  userData->userCallbackContext = context;
  InitCommonCrtRequestOption(userData, &options, &request, uri, Aws::Http::HttpMethod::HTTP_PUT);
  options.shutdown_callback = PutObjectRequestShutdownCallback;
  options.type = AWS_S3_META_REQUEST_TYPE_PUT_OBJECT;
  struct aws_signing_config_aws signing_config_override = m_s3CrtSigningConfig;
  signing_config_override.region = Aws::Crt::ByteCursorFromCString(computeEndpointOutcome.GetResult().signerRegion.c_str());
  signing_config_override.service = Aws::Crt::ByteCursorFromCString(computeEndpointOutcome.GetResult().signerServiceName.c_str());
  options.signing_config = &signing_config_override;

  std::shared_ptr<Aws::Crt::Http::HttpRequest> crtHttpRequest = userData->request->ToCrtHttpRequest();
  options.message= crtHttpRequest->GetUnderlyingMessage();
  userData->crtHttpRequest = crtHttpRequest;

  if (aws_s3_client_make_meta_request(m_s3CrtClient, &options) == nullptr)
  {
    return handler(this, request, PutObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Unable to create s3 meta request", false)), context);
  }
}

PutObjectOutcome S3CrtClient::PutObject(const PutObjectRequest& request) const
{
  Aws::Utils::Threading::Semaphore sem(0, 1);
  PutObjectOutcome res;

  auto handler = PutObjectResponseReceivedHandler{[&](const S3CrtClient*, const PutObjectRequest&, const PutObjectOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext> &) {
      res = std::move(outcome);
      sem.ReleaseAll();
  }};

  S3CrtClient::PutObjectAsync(request, handler, nullptr);
  sem.WaitOne();
  return res;
}

AbortMultipartUploadOutcome S3CrtClient::AbortMultipartUpload(const AbortMultipartUploadRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: Bucket, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: Key, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: UploadId, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return AbortMultipartUploadOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  uri.AddPathSegments(request.GetKey());
  return AbortMultipartUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

AbortMultipartUploadOutcomeCallable S3CrtClient::AbortMultipartUploadCallable(const AbortMultipartUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AbortMultipartUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AbortMultipartUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::AbortMultipartUploadAsync(const AbortMultipartUploadRequest& request, const AbortMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AbortMultipartUpload(request), context);
    } );
}

CompleteMultipartUploadOutcome S3CrtClient::CompleteMultipartUpload(const CompleteMultipartUploadRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: Bucket, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: Key, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: UploadId, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return CompleteMultipartUploadOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  uri.AddPathSegments(request.GetKey());
  return CompleteMultipartUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

CompleteMultipartUploadOutcomeCallable S3CrtClient::CompleteMultipartUploadCallable(const CompleteMultipartUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteMultipartUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteMultipartUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::CompleteMultipartUploadAsync(const CompleteMultipartUploadRequest& request, const CompleteMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CompleteMultipartUpload(request), context);
    } );
}

CopyObjectOutcome S3CrtClient::CopyObject(const CopyObjectRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: Bucket, is not set");
    return CopyObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.CopySourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: CopySource, is not set");
    return CopyObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopySource]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: Key, is not set");
    return CopyObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return CopyObjectOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  uri.AddPathSegments(request.GetKey());
  return CopyObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

CopyObjectOutcomeCallable S3CrtClient::CopyObjectCallable(const CopyObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::CopyObjectAsync(const CopyObjectRequest& request, const CopyObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CopyObject(request), context);
    } );
}

CreateBucketOutcome S3CrtClient::CreateBucket(const CreateBucketRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBucket", "Required field: Bucket, is not set");
    return CreateBucketOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return CreateBucketOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  uri.AddPathSegment(request.GetBucket());
  return CreateBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

CreateBucketOutcomeCallable S3CrtClient::CreateBucketCallable(const CreateBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::CreateBucketAsync(const CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBucket(request), context);
    } );
}

CreateMultipartUploadOutcome S3CrtClient::CreateMultipartUpload(const CreateMultipartUploadRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultipartUpload", "Required field: Bucket, is not set");
    return CreateMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultipartUpload", "Required field: Key, is not set");
    return CreateMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return CreateMultipartUploadOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?uploads");
  uri.SetQueryString(ss.str());
  return CreateMultipartUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

CreateMultipartUploadOutcomeCallable S3CrtClient::CreateMultipartUploadCallable(const CreateMultipartUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMultipartUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMultipartUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::CreateMultipartUploadAsync(const CreateMultipartUploadRequest& request, const CreateMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMultipartUpload(request), context);
    } );
}

DeleteBucketOutcome S3CrtClient::DeleteBucket(const DeleteBucketRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucket", "Required field: Bucket, is not set");
    return DeleteBucketOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  return DeleteBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketOutcomeCallable S3CrtClient::DeleteBucketCallable(const DeleteBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketAsync(const DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucket(request), context);
    } );
}

DeleteBucketAnalyticsConfigurationOutcome S3CrtClient::DeleteBucketAnalyticsConfiguration(const DeleteBucketAnalyticsConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return DeleteBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketAnalyticsConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?analytics");
  uri.SetQueryString(ss.str());
  return DeleteBucketAnalyticsConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketAnalyticsConfigurationOutcomeCallable S3CrtClient::DeleteBucketAnalyticsConfigurationCallable(const DeleteBucketAnalyticsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketAnalyticsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketAnalyticsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketAnalyticsConfigurationAsync(const DeleteBucketAnalyticsConfigurationRequest& request, const DeleteBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketAnalyticsConfiguration(request), context);
    } );
}

DeleteBucketCorsOutcome S3CrtClient::DeleteBucketCors(const DeleteBucketCorsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketCors", "Required field: Bucket, is not set");
    return DeleteBucketCorsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketCorsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?cors");
  uri.SetQueryString(ss.str());
  return DeleteBucketCorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketCorsOutcomeCallable S3CrtClient::DeleteBucketCorsCallable(const DeleteBucketCorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketCorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketCors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketCorsAsync(const DeleteBucketCorsRequest& request, const DeleteBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketCors(request), context);
    } );
}

DeleteBucketEncryptionOutcome S3CrtClient::DeleteBucketEncryption(const DeleteBucketEncryptionRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketEncryption", "Required field: Bucket, is not set");
    return DeleteBucketEncryptionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketEncryptionOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?encryption");
  uri.SetQueryString(ss.str());
  return DeleteBucketEncryptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketEncryptionOutcomeCallable S3CrtClient::DeleteBucketEncryptionCallable(const DeleteBucketEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketEncryptionAsync(const DeleteBucketEncryptionRequest& request, const DeleteBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketEncryption(request), context);
    } );
}

DeleteBucketIntelligentTieringConfigurationOutcome S3CrtClient::DeleteBucketIntelligentTieringConfiguration(const DeleteBucketIntelligentTieringConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return DeleteBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketIntelligentTieringConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  uri.SetQueryString(ss.str());
  return DeleteBucketIntelligentTieringConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketIntelligentTieringConfigurationOutcomeCallable S3CrtClient::DeleteBucketIntelligentTieringConfigurationCallable(const DeleteBucketIntelligentTieringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketIntelligentTieringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketIntelligentTieringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketIntelligentTieringConfigurationAsync(const DeleteBucketIntelligentTieringConfigurationRequest& request, const DeleteBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketIntelligentTieringConfiguration(request), context);
    } );
}

DeleteBucketInventoryConfigurationOutcome S3CrtClient::DeleteBucketInventoryConfiguration(const DeleteBucketInventoryConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketInventoryConfiguration", "Required field: Id, is not set");
    return DeleteBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketInventoryConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?inventory");
  uri.SetQueryString(ss.str());
  return DeleteBucketInventoryConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketInventoryConfigurationOutcomeCallable S3CrtClient::DeleteBucketInventoryConfigurationCallable(const DeleteBucketInventoryConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketInventoryConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketInventoryConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketInventoryConfigurationAsync(const DeleteBucketInventoryConfigurationRequest& request, const DeleteBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketInventoryConfiguration(request), context);
    } );
}

DeleteBucketLifecycleOutcome S3CrtClient::DeleteBucketLifecycle(const DeleteBucketLifecycleRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketLifecycle", "Required field: Bucket, is not set");
    return DeleteBucketLifecycleOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketLifecycleOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?lifecycle");
  uri.SetQueryString(ss.str());
  return DeleteBucketLifecycleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketLifecycleOutcomeCallable S3CrtClient::DeleteBucketLifecycleCallable(const DeleteBucketLifecycleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketLifecycleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketLifecycle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketLifecycleAsync(const DeleteBucketLifecycleRequest& request, const DeleteBucketLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketLifecycle(request), context);
    } );
}

DeleteBucketMetricsConfigurationOutcome S3CrtClient::DeleteBucketMetricsConfiguration(const DeleteBucketMetricsConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetricsConfiguration", "Required field: Id, is not set");
    return DeleteBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketMetricsConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?metrics");
  uri.SetQueryString(ss.str());
  return DeleteBucketMetricsConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketMetricsConfigurationOutcomeCallable S3CrtClient::DeleteBucketMetricsConfigurationCallable(const DeleteBucketMetricsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketMetricsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketMetricsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketMetricsConfigurationAsync(const DeleteBucketMetricsConfigurationRequest& request, const DeleteBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketMetricsConfiguration(request), context);
    } );
}

DeleteBucketOwnershipControlsOutcome S3CrtClient::DeleteBucketOwnershipControls(const DeleteBucketOwnershipControlsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketOwnershipControls", "Required field: Bucket, is not set");
    return DeleteBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketOwnershipControlsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?ownershipControls");
  uri.SetQueryString(ss.str());
  return DeleteBucketOwnershipControlsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketOwnershipControlsOutcomeCallable S3CrtClient::DeleteBucketOwnershipControlsCallable(const DeleteBucketOwnershipControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketOwnershipControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketOwnershipControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketOwnershipControlsAsync(const DeleteBucketOwnershipControlsRequest& request, const DeleteBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketOwnershipControls(request), context);
    } );
}

DeleteBucketPolicyOutcome S3CrtClient::DeleteBucketPolicy(const DeleteBucketPolicyRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "Required field: Bucket, is not set");
    return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketPolicyOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?policy");
  uri.SetQueryString(ss.str());
  return DeleteBucketPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketPolicyOutcomeCallable S3CrtClient::DeleteBucketPolicyCallable(const DeleteBucketPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketPolicyAsync(const DeleteBucketPolicyRequest& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketPolicy(request), context);
    } );
}

DeleteBucketReplicationOutcome S3CrtClient::DeleteBucketReplication(const DeleteBucketReplicationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketReplication", "Required field: Bucket, is not set");
    return DeleteBucketReplicationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketReplicationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?replication");
  uri.SetQueryString(ss.str());
  return DeleteBucketReplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketReplicationOutcomeCallable S3CrtClient::DeleteBucketReplicationCallable(const DeleteBucketReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketReplicationAsync(const DeleteBucketReplicationRequest& request, const DeleteBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketReplication(request), context);
    } );
}

DeleteBucketTaggingOutcome S3CrtClient::DeleteBucketTagging(const DeleteBucketTaggingRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "Required field: Bucket, is not set");
    return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?tagging");
  uri.SetQueryString(ss.str());
  return DeleteBucketTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketTaggingOutcomeCallable S3CrtClient::DeleteBucketTaggingCallable(const DeleteBucketTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketTaggingAsync(const DeleteBucketTaggingRequest& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketTagging(request), context);
    } );
}

DeleteBucketWebsiteOutcome S3CrtClient::DeleteBucketWebsite(const DeleteBucketWebsiteRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketWebsite", "Required field: Bucket, is not set");
    return DeleteBucketWebsiteOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketWebsiteOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?website");
  uri.SetQueryString(ss.str());
  return DeleteBucketWebsiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteBucketWebsiteOutcomeCallable S3CrtClient::DeleteBucketWebsiteCallable(const DeleteBucketWebsiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketWebsiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketWebsite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteBucketWebsiteAsync(const DeleteBucketWebsiteRequest& request, const DeleteBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketWebsite(request), context);
    } );
}

DeleteObjectOutcome S3CrtClient::DeleteObject(const DeleteObjectRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: Bucket, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: Key, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteObjectOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  uri.AddPathSegments(request.GetKey());
  return DeleteObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteObjectOutcomeCallable S3CrtClient::DeleteObjectCallable(const DeleteObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteObjectAsync(const DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteObject(request), context);
    } );
}

DeleteObjectTaggingOutcome S3CrtClient::DeleteObjectTagging(const DeleteObjectTaggingRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjectTagging", "Required field: Bucket, is not set");
    return DeleteObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjectTagging", "Required field: Key, is not set");
    return DeleteObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteObjectTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?tagging");
  uri.SetQueryString(ss.str());
  return DeleteObjectTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteObjectTaggingOutcomeCallable S3CrtClient::DeleteObjectTaggingCallable(const DeleteObjectTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObjectTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObjectTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteObjectTaggingAsync(const DeleteObjectTaggingRequest& request, const DeleteObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteObjectTagging(request), context);
    } );
}

DeleteObjectsOutcome S3CrtClient::DeleteObjects(const DeleteObjectsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjects", "Required field: Bucket, is not set");
    return DeleteObjectsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteObjectsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?delete");
  uri.SetQueryString(ss.str());
  return DeleteObjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeleteObjectsOutcomeCallable S3CrtClient::DeleteObjectsCallable(const DeleteObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeleteObjectsAsync(const DeleteObjectsRequest& request, const DeleteObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteObjects(request), context);
    } );
}

DeletePublicAccessBlockOutcome S3CrtClient::DeletePublicAccessBlock(const DeletePublicAccessBlockRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Required field: Bucket, is not set");
    return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeletePublicAccessBlockOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?publicAccessBlock");
  uri.SetQueryString(ss.str());
  return DeletePublicAccessBlockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

DeletePublicAccessBlockOutcomeCallable S3CrtClient::DeletePublicAccessBlockCallable(const DeletePublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::DeletePublicAccessBlockAsync(const DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePublicAccessBlock(request), context);
    } );
}

GetBucketAccelerateConfigurationOutcome S3CrtClient::GetBucketAccelerateConfiguration(const GetBucketAccelerateConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAccelerateConfiguration", "Required field: Bucket, is not set");
    return GetBucketAccelerateConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketAccelerateConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?accelerate");
  uri.SetQueryString(ss.str());
  return GetBucketAccelerateConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketAccelerateConfigurationOutcomeCallable S3CrtClient::GetBucketAccelerateConfigurationCallable(const GetBucketAccelerateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketAccelerateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketAccelerateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketAccelerateConfigurationAsync(const GetBucketAccelerateConfigurationRequest& request, const GetBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketAccelerateConfiguration(request), context);
    } );
}

GetBucketAclOutcome S3CrtClient::GetBucketAcl(const GetBucketAclRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAcl", "Required field: Bucket, is not set");
    return GetBucketAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketAclOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?acl");
  uri.SetQueryString(ss.str());
  return GetBucketAclOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketAclOutcomeCallable S3CrtClient::GetBucketAclCallable(const GetBucketAclRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketAclOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketAcl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketAclAsync(const GetBucketAclRequest& request, const GetBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketAcl(request), context);
    } );
}

GetBucketAnalyticsConfigurationOutcome S3CrtClient::GetBucketAnalyticsConfiguration(const GetBucketAnalyticsConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return GetBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return GetBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketAnalyticsConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?analytics");
  uri.SetQueryString(ss.str());
  return GetBucketAnalyticsConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketAnalyticsConfigurationOutcomeCallable S3CrtClient::GetBucketAnalyticsConfigurationCallable(const GetBucketAnalyticsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketAnalyticsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketAnalyticsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketAnalyticsConfigurationAsync(const GetBucketAnalyticsConfigurationRequest& request, const GetBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketAnalyticsConfiguration(request), context);
    } );
}

GetBucketCorsOutcome S3CrtClient::GetBucketCors(const GetBucketCorsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketCors", "Required field: Bucket, is not set");
    return GetBucketCorsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketCorsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?cors");
  uri.SetQueryString(ss.str());
  return GetBucketCorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketCorsOutcomeCallable S3CrtClient::GetBucketCorsCallable(const GetBucketCorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketCorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketCors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketCorsAsync(const GetBucketCorsRequest& request, const GetBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketCors(request), context);
    } );
}

GetBucketEncryptionOutcome S3CrtClient::GetBucketEncryption(const GetBucketEncryptionRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketEncryption", "Required field: Bucket, is not set");
    return GetBucketEncryptionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketEncryptionOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?encryption");
  uri.SetQueryString(ss.str());
  return GetBucketEncryptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketEncryptionOutcomeCallable S3CrtClient::GetBucketEncryptionCallable(const GetBucketEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketEncryptionAsync(const GetBucketEncryptionRequest& request, const GetBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketEncryption(request), context);
    } );
}

GetBucketIntelligentTieringConfigurationOutcome S3CrtClient::GetBucketIntelligentTieringConfiguration(const GetBucketIntelligentTieringConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return GetBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return GetBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketIntelligentTieringConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  uri.SetQueryString(ss.str());
  return GetBucketIntelligentTieringConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketIntelligentTieringConfigurationOutcomeCallable S3CrtClient::GetBucketIntelligentTieringConfigurationCallable(const GetBucketIntelligentTieringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketIntelligentTieringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketIntelligentTieringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketIntelligentTieringConfigurationAsync(const GetBucketIntelligentTieringConfigurationRequest& request, const GetBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketIntelligentTieringConfiguration(request), context);
    } );
}

GetBucketInventoryConfigurationOutcome S3CrtClient::GetBucketInventoryConfiguration(const GetBucketInventoryConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return GetBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketInventoryConfiguration", "Required field: Id, is not set");
    return GetBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketInventoryConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?inventory");
  uri.SetQueryString(ss.str());
  return GetBucketInventoryConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketInventoryConfigurationOutcomeCallable S3CrtClient::GetBucketInventoryConfigurationCallable(const GetBucketInventoryConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketInventoryConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketInventoryConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketInventoryConfigurationAsync(const GetBucketInventoryConfigurationRequest& request, const GetBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketInventoryConfiguration(request), context);
    } );
}

GetBucketLifecycleConfigurationOutcome S3CrtClient::GetBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketLifecycleConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?lifecycle");
  uri.SetQueryString(ss.str());
  return GetBucketLifecycleConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketLifecycleConfigurationOutcomeCallable S3CrtClient::GetBucketLifecycleConfigurationCallable(const GetBucketLifecycleConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketLifecycleConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketLifecycleConfigurationAsync(const GetBucketLifecycleConfigurationRequest& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketLifecycleConfiguration(request), context);
    } );
}

GetBucketLocationOutcome S3CrtClient::GetBucketLocation(const GetBucketLocationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLocation", "Required field: Bucket, is not set");
    return GetBucketLocationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketLocationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?location");
  uri.SetQueryString(ss.str());
  return GetBucketLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketLocationOutcomeCallable S3CrtClient::GetBucketLocationCallable(const GetBucketLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketLocationAsync(const GetBucketLocationRequest& request, const GetBucketLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketLocation(request), context);
    } );
}

GetBucketLoggingOutcome S3CrtClient::GetBucketLogging(const GetBucketLoggingRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLogging", "Required field: Bucket, is not set");
    return GetBucketLoggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketLoggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?logging");
  uri.SetQueryString(ss.str());
  return GetBucketLoggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketLoggingOutcomeCallable S3CrtClient::GetBucketLoggingCallable(const GetBucketLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketLoggingAsync(const GetBucketLoggingRequest& request, const GetBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketLogging(request), context);
    } );
}

GetBucketMetricsConfigurationOutcome S3CrtClient::GetBucketMetricsConfiguration(const GetBucketMetricsConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return GetBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketMetricsConfiguration", "Required field: Id, is not set");
    return GetBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketMetricsConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?metrics");
  uri.SetQueryString(ss.str());
  return GetBucketMetricsConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketMetricsConfigurationOutcomeCallable S3CrtClient::GetBucketMetricsConfigurationCallable(const GetBucketMetricsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketMetricsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketMetricsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketMetricsConfigurationAsync(const GetBucketMetricsConfigurationRequest& request, const GetBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketMetricsConfiguration(request), context);
    } );
}

GetBucketNotificationConfigurationOutcome S3CrtClient::GetBucketNotificationConfiguration(const GetBucketNotificationConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketNotificationConfiguration", "Required field: Bucket, is not set");
    return GetBucketNotificationConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketNotificationConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?notification");
  uri.SetQueryString(ss.str());
  return GetBucketNotificationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketNotificationConfigurationOutcomeCallable S3CrtClient::GetBucketNotificationConfigurationCallable(const GetBucketNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketNotificationConfigurationAsync(const GetBucketNotificationConfigurationRequest& request, const GetBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketNotificationConfiguration(request), context);
    } );
}

GetBucketOwnershipControlsOutcome S3CrtClient::GetBucketOwnershipControls(const GetBucketOwnershipControlsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketOwnershipControls", "Required field: Bucket, is not set");
    return GetBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketOwnershipControlsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?ownershipControls");
  uri.SetQueryString(ss.str());
  return GetBucketOwnershipControlsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketOwnershipControlsOutcomeCallable S3CrtClient::GetBucketOwnershipControlsCallable(const GetBucketOwnershipControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketOwnershipControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketOwnershipControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketOwnershipControlsAsync(const GetBucketOwnershipControlsRequest& request, const GetBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketOwnershipControls(request), context);
    } );
}

GetBucketPolicyOutcome S3CrtClient::GetBucketPolicy(const GetBucketPolicyRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicy", "Required field: Bucket, is not set");
    return GetBucketPolicyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketPolicyOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?policy");
  uri.SetQueryString(ss.str());
  return GetBucketPolicyOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketPolicyOutcomeCallable S3CrtClient::GetBucketPolicyCallable(const GetBucketPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketPolicyAsync(const GetBucketPolicyRequest& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketPolicy(request), context);
    } );
}

GetBucketPolicyStatusOutcome S3CrtClient::GetBucketPolicyStatus(const GetBucketPolicyStatusRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicyStatus", "Required field: Bucket, is not set");
    return GetBucketPolicyStatusOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketPolicyStatusOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?policyStatus");
  uri.SetQueryString(ss.str());
  return GetBucketPolicyStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketPolicyStatusOutcomeCallable S3CrtClient::GetBucketPolicyStatusCallable(const GetBucketPolicyStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketPolicyStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketPolicyStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketPolicyStatusAsync(const GetBucketPolicyStatusRequest& request, const GetBucketPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketPolicyStatus(request), context);
    } );
}

GetBucketReplicationOutcome S3CrtClient::GetBucketReplication(const GetBucketReplicationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketReplication", "Required field: Bucket, is not set");
    return GetBucketReplicationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketReplicationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?replication");
  uri.SetQueryString(ss.str());
  return GetBucketReplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketReplicationOutcomeCallable S3CrtClient::GetBucketReplicationCallable(const GetBucketReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketReplicationAsync(const GetBucketReplicationRequest& request, const GetBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketReplication(request), context);
    } );
}

GetBucketRequestPaymentOutcome S3CrtClient::GetBucketRequestPayment(const GetBucketRequestPaymentRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketRequestPayment", "Required field: Bucket, is not set");
    return GetBucketRequestPaymentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketRequestPaymentOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?requestPayment");
  uri.SetQueryString(ss.str());
  return GetBucketRequestPaymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketRequestPaymentOutcomeCallable S3CrtClient::GetBucketRequestPaymentCallable(const GetBucketRequestPaymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketRequestPaymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketRequestPayment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketRequestPaymentAsync(const GetBucketRequestPaymentRequest& request, const GetBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketRequestPayment(request), context);
    } );
}

GetBucketTaggingOutcome S3CrtClient::GetBucketTagging(const GetBucketTaggingRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketTagging", "Required field: Bucket, is not set");
    return GetBucketTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?tagging");
  uri.SetQueryString(ss.str());
  return GetBucketTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketTaggingOutcomeCallable S3CrtClient::GetBucketTaggingCallable(const GetBucketTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketTaggingAsync(const GetBucketTaggingRequest& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketTagging(request), context);
    } );
}

GetBucketVersioningOutcome S3CrtClient::GetBucketVersioning(const GetBucketVersioningRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketVersioning", "Required field: Bucket, is not set");
    return GetBucketVersioningOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketVersioningOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?versioning");
  uri.SetQueryString(ss.str());
  return GetBucketVersioningOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketVersioningOutcomeCallable S3CrtClient::GetBucketVersioningCallable(const GetBucketVersioningRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketVersioningOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketVersioning(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketVersioningAsync(const GetBucketVersioningRequest& request, const GetBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketVersioning(request), context);
    } );
}

GetBucketWebsiteOutcome S3CrtClient::GetBucketWebsite(const GetBucketWebsiteRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketWebsite", "Required field: Bucket, is not set");
    return GetBucketWebsiteOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketWebsiteOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?website");
  uri.SetQueryString(ss.str());
  return GetBucketWebsiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetBucketWebsiteOutcomeCallable S3CrtClient::GetBucketWebsiteCallable(const GetBucketWebsiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketWebsiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketWebsite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetBucketWebsiteAsync(const GetBucketWebsiteRequest& request, const GetBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketWebsite(request), context);
    } );
}

GetObjectAclOutcome S3CrtClient::GetObjectAcl(const GetObjectAclRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAcl", "Required field: Bucket, is not set");
    return GetObjectAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAcl", "Required field: Key, is not set");
    return GetObjectAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetObjectAclOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?acl");
  uri.SetQueryString(ss.str());
  return GetObjectAclOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetObjectAclOutcomeCallable S3CrtClient::GetObjectAclCallable(const GetObjectAclRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectAclOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectAcl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetObjectAclAsync(const GetObjectAclRequest& request, const GetObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectAcl(request), context);
    } );
}

GetObjectAttributesOutcome S3CrtClient::GetObjectAttributes(const GetObjectAttributesRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: Bucket, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: Key, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.ObjectAttributesHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: ObjectAttributes, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectAttributes]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetObjectAttributesOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?attributes");
  uri.SetQueryString(ss.str());
  return GetObjectAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetObjectAttributesOutcomeCallable S3CrtClient::GetObjectAttributesCallable(const GetObjectAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetObjectAttributesAsync(const GetObjectAttributesRequest& request, const GetObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectAttributes(request), context);
    } );
}

GetObjectLegalHoldOutcome S3CrtClient::GetObjectLegalHold(const GetObjectLegalHoldRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLegalHold", "Required field: Bucket, is not set");
    return GetObjectLegalHoldOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLegalHold", "Required field: Key, is not set");
    return GetObjectLegalHoldOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetObjectLegalHoldOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?legal-hold");
  uri.SetQueryString(ss.str());
  return GetObjectLegalHoldOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetObjectLegalHoldOutcomeCallable S3CrtClient::GetObjectLegalHoldCallable(const GetObjectLegalHoldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectLegalHoldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectLegalHold(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetObjectLegalHoldAsync(const GetObjectLegalHoldRequest& request, const GetObjectLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectLegalHold(request), context);
    } );
}

GetObjectLockConfigurationOutcome S3CrtClient::GetObjectLockConfiguration(const GetObjectLockConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLockConfiguration", "Required field: Bucket, is not set");
    return GetObjectLockConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetObjectLockConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?object-lock");
  uri.SetQueryString(ss.str());
  return GetObjectLockConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetObjectLockConfigurationOutcomeCallable S3CrtClient::GetObjectLockConfigurationCallable(const GetObjectLockConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectLockConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectLockConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetObjectLockConfigurationAsync(const GetObjectLockConfigurationRequest& request, const GetObjectLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectLockConfiguration(request), context);
    } );
}

GetObjectRetentionOutcome S3CrtClient::GetObjectRetention(const GetObjectRetentionRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectRetention", "Required field: Bucket, is not set");
    return GetObjectRetentionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectRetention", "Required field: Key, is not set");
    return GetObjectRetentionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetObjectRetentionOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?retention");
  uri.SetQueryString(ss.str());
  return GetObjectRetentionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetObjectRetentionOutcomeCallable S3CrtClient::GetObjectRetentionCallable(const GetObjectRetentionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectRetentionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectRetention(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetObjectRetentionAsync(const GetObjectRetentionRequest& request, const GetObjectRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectRetention(request), context);
    } );
}

GetObjectTaggingOutcome S3CrtClient::GetObjectTagging(const GetObjectTaggingRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTagging", "Required field: Bucket, is not set");
    return GetObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTagging", "Required field: Key, is not set");
    return GetObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetObjectTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?tagging");
  uri.SetQueryString(ss.str());
  return GetObjectTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetObjectTaggingOutcomeCallable S3CrtClient::GetObjectTaggingCallable(const GetObjectTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetObjectTaggingAsync(const GetObjectTaggingRequest& request, const GetObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectTagging(request), context);
    } );
}

GetObjectTorrentOutcome S3CrtClient::GetObjectTorrent(const GetObjectTorrentRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTorrent", "Required field: Bucket, is not set");
    return GetObjectTorrentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTorrent", "Required field: Key, is not set");
    return GetObjectTorrentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetObjectTorrentOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?torrent");
  uri.SetQueryString(ss.str());
  return GetObjectTorrentOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetObjectTorrentOutcomeCallable S3CrtClient::GetObjectTorrentCallable(const GetObjectTorrentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectTorrentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectTorrent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetObjectTorrentAsync(const GetObjectTorrentRequest& request, const GetObjectTorrentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectTorrent(request), context);
    } );
}

GetPublicAccessBlockOutcome S3CrtClient::GetPublicAccessBlock(const GetPublicAccessBlockRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Required field: Bucket, is not set");
    return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetPublicAccessBlockOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?publicAccessBlock");
  uri.SetQueryString(ss.str());
  return GetPublicAccessBlockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

GetPublicAccessBlockOutcomeCallable S3CrtClient::GetPublicAccessBlockCallable(const GetPublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::GetPublicAccessBlockAsync(const GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPublicAccessBlock(request), context);
    } );
}

HeadBucketOutcome S3CrtClient::HeadBucket(const HeadBucketRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadBucket", "Required field: Bucket, is not set");
    return HeadBucketOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return HeadBucketOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  return HeadBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_HEAD, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

HeadBucketOutcomeCallable S3CrtClient::HeadBucketCallable(const HeadBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< HeadBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->HeadBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::HeadBucketAsync(const HeadBucketRequest& request, const HeadBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, HeadBucket(request), context);
    } );
}

HeadObjectOutcome S3CrtClient::HeadObject(const HeadObjectRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadObject", "Required field: Bucket, is not set");
    return HeadObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadObject", "Required field: Key, is not set");
    return HeadObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return HeadObjectOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  uri.AddPathSegments(request.GetKey());
  return HeadObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_HEAD, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

HeadObjectOutcomeCallable S3CrtClient::HeadObjectCallable(const HeadObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< HeadObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->HeadObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::HeadObjectAsync(const HeadObjectRequest& request, const HeadObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, HeadObject(request), context);
    } );
}

ListBucketAnalyticsConfigurationsOutcome S3CrtClient::ListBucketAnalyticsConfigurations(const ListBucketAnalyticsConfigurationsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketAnalyticsConfigurations", "Required field: Bucket, is not set");
    return ListBucketAnalyticsConfigurationsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListBucketAnalyticsConfigurationsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?analytics");
  uri.SetQueryString(ss.str());
  return ListBucketAnalyticsConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

ListBucketAnalyticsConfigurationsOutcomeCallable S3CrtClient::ListBucketAnalyticsConfigurationsCallable(const ListBucketAnalyticsConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBucketAnalyticsConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBucketAnalyticsConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::ListBucketAnalyticsConfigurationsAsync(const ListBucketAnalyticsConfigurationsRequest& request, const ListBucketAnalyticsConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBucketAnalyticsConfigurations(request), context);
    } );
}

ListBucketIntelligentTieringConfigurationsOutcome S3CrtClient::ListBucketIntelligentTieringConfigurations(const ListBucketIntelligentTieringConfigurationsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketIntelligentTieringConfigurations", "Required field: Bucket, is not set");
    return ListBucketIntelligentTieringConfigurationsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListBucketIntelligentTieringConfigurationsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  uri.SetQueryString(ss.str());
  return ListBucketIntelligentTieringConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

ListBucketIntelligentTieringConfigurationsOutcomeCallable S3CrtClient::ListBucketIntelligentTieringConfigurationsCallable(const ListBucketIntelligentTieringConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBucketIntelligentTieringConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBucketIntelligentTieringConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::ListBucketIntelligentTieringConfigurationsAsync(const ListBucketIntelligentTieringConfigurationsRequest& request, const ListBucketIntelligentTieringConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBucketIntelligentTieringConfigurations(request), context);
    } );
}

ListBucketInventoryConfigurationsOutcome S3CrtClient::ListBucketInventoryConfigurations(const ListBucketInventoryConfigurationsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketInventoryConfigurations", "Required field: Bucket, is not set");
    return ListBucketInventoryConfigurationsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListBucketInventoryConfigurationsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?inventory");
  uri.SetQueryString(ss.str());
  return ListBucketInventoryConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

ListBucketInventoryConfigurationsOutcomeCallable S3CrtClient::ListBucketInventoryConfigurationsCallable(const ListBucketInventoryConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBucketInventoryConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBucketInventoryConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::ListBucketInventoryConfigurationsAsync(const ListBucketInventoryConfigurationsRequest& request, const ListBucketInventoryConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBucketInventoryConfigurations(request), context);
    } );
}

ListBucketMetricsConfigurationsOutcome S3CrtClient::ListBucketMetricsConfigurations(const ListBucketMetricsConfigurationsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketMetricsConfigurations", "Required field: Bucket, is not set");
    return ListBucketMetricsConfigurationsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListBucketMetricsConfigurationsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?metrics");
  uri.SetQueryString(ss.str());
  return ListBucketMetricsConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

ListBucketMetricsConfigurationsOutcomeCallable S3CrtClient::ListBucketMetricsConfigurationsCallable(const ListBucketMetricsConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBucketMetricsConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBucketMetricsConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::ListBucketMetricsConfigurationsAsync(const ListBucketMetricsConfigurationsRequest& request, const ListBucketMetricsConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBucketMetricsConfigurations(request), context);
    } );
}

ListBucketsOutcome S3CrtClient::ListBuckets() const
{
  Aws::StringStream ss;
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListBucketsOutcome(computeEndpointOutcome.GetError());
  }
  ss << computeEndpointOutcome.GetResult().endpoint;
  return ListBucketsOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "ListBuckets", computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

ListBucketsOutcomeCallable S3CrtClient::ListBucketsCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBucketsOutcome() > >(ALLOCATION_TAG, [this](){ return this->ListBuckets(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::ListBucketsAsync(const ListBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, ListBuckets(), context);
    } );
}

ListMultipartUploadsOutcome S3CrtClient::ListMultipartUploads(const ListMultipartUploadsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: Bucket, is not set");
    return ListMultipartUploadsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListMultipartUploadsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?uploads");
  uri.SetQueryString(ss.str());
  return ListMultipartUploadsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

ListMultipartUploadsOutcomeCallable S3CrtClient::ListMultipartUploadsCallable(const ListMultipartUploadsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMultipartUploadsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMultipartUploads(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::ListMultipartUploadsAsync(const ListMultipartUploadsRequest& request, const ListMultipartUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMultipartUploads(request), context);
    } );
}

ListObjectVersionsOutcome S3CrtClient::ListObjectVersions(const ListObjectVersionsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectVersions", "Required field: Bucket, is not set");
    return ListObjectVersionsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListObjectVersionsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?versions");
  uri.SetQueryString(ss.str());
  return ListObjectVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

ListObjectVersionsOutcomeCallable S3CrtClient::ListObjectVersionsCallable(const ListObjectVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjectVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::ListObjectVersionsAsync(const ListObjectVersionsRequest& request, const ListObjectVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListObjectVersions(request), context);
    } );
}

ListObjectsOutcome S3CrtClient::ListObjects(const ListObjectsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjects", "Required field: Bucket, is not set");
    return ListObjectsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListObjectsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  return ListObjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

ListObjectsOutcomeCallable S3CrtClient::ListObjectsCallable(const ListObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::ListObjectsAsync(const ListObjectsRequest& request, const ListObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListObjects(request), context);
    } );
}

ListObjectsV2Outcome S3CrtClient::ListObjectsV2(const ListObjectsV2Request& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectsV2", "Required field: Bucket, is not set");
    return ListObjectsV2Outcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListObjectsV2Outcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?list-type=2");
  uri.SetQueryString(ss.str());
  return ListObjectsV2Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

ListObjectsV2OutcomeCallable S3CrtClient::ListObjectsV2Callable(const ListObjectsV2Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectsV2Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjectsV2(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::ListObjectsV2Async(const ListObjectsV2Request& request, const ListObjectsV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListObjectsV2(request), context);
    } );
}

ListPartsOutcome S3CrtClient::ListParts(const ListPartsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: Bucket, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: Key, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: UploadId, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListPartsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  uri.AddPathSegments(request.GetKey());
  return ListPartsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

ListPartsOutcomeCallable S3CrtClient::ListPartsCallable(const ListPartsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPartsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListParts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::ListPartsAsync(const ListPartsRequest& request, const ListPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListParts(request), context);
    } );
}

PutBucketAccelerateConfigurationOutcome S3CrtClient::PutBucketAccelerateConfiguration(const PutBucketAccelerateConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAccelerateConfiguration", "Required field: Bucket, is not set");
    return PutBucketAccelerateConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketAccelerateConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?accelerate");
  uri.SetQueryString(ss.str());
  return PutBucketAccelerateConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketAccelerateConfigurationOutcomeCallable S3CrtClient::PutBucketAccelerateConfigurationCallable(const PutBucketAccelerateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketAccelerateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketAccelerateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketAccelerateConfigurationAsync(const PutBucketAccelerateConfigurationRequest& request, const PutBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketAccelerateConfiguration(request), context);
    } );
}

PutBucketAclOutcome S3CrtClient::PutBucketAcl(const PutBucketAclRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAcl", "Required field: Bucket, is not set");
    return PutBucketAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketAclOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?acl");
  uri.SetQueryString(ss.str());
  return PutBucketAclOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketAclOutcomeCallable S3CrtClient::PutBucketAclCallable(const PutBucketAclRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketAclOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketAcl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketAclAsync(const PutBucketAclRequest& request, const PutBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketAcl(request), context);
    } );
}

PutBucketAnalyticsConfigurationOutcome S3CrtClient::PutBucketAnalyticsConfiguration(const PutBucketAnalyticsConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return PutBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return PutBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketAnalyticsConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?analytics");
  uri.SetQueryString(ss.str());
  return PutBucketAnalyticsConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketAnalyticsConfigurationOutcomeCallable S3CrtClient::PutBucketAnalyticsConfigurationCallable(const PutBucketAnalyticsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketAnalyticsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketAnalyticsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketAnalyticsConfigurationAsync(const PutBucketAnalyticsConfigurationRequest& request, const PutBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketAnalyticsConfiguration(request), context);
    } );
}

PutBucketCorsOutcome S3CrtClient::PutBucketCors(const PutBucketCorsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketCors", "Required field: Bucket, is not set");
    return PutBucketCorsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketCorsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?cors");
  uri.SetQueryString(ss.str());
  return PutBucketCorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketCorsOutcomeCallable S3CrtClient::PutBucketCorsCallable(const PutBucketCorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketCorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketCors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketCorsAsync(const PutBucketCorsRequest& request, const PutBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketCors(request), context);
    } );
}

PutBucketEncryptionOutcome S3CrtClient::PutBucketEncryption(const PutBucketEncryptionRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketEncryption", "Required field: Bucket, is not set");
    return PutBucketEncryptionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketEncryptionOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?encryption");
  uri.SetQueryString(ss.str());
  return PutBucketEncryptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketEncryptionOutcomeCallable S3CrtClient::PutBucketEncryptionCallable(const PutBucketEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketEncryptionAsync(const PutBucketEncryptionRequest& request, const PutBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketEncryption(request), context);
    } );
}

PutBucketIntelligentTieringConfigurationOutcome S3CrtClient::PutBucketIntelligentTieringConfiguration(const PutBucketIntelligentTieringConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return PutBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return PutBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketIntelligentTieringConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  uri.SetQueryString(ss.str());
  return PutBucketIntelligentTieringConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketIntelligentTieringConfigurationOutcomeCallable S3CrtClient::PutBucketIntelligentTieringConfigurationCallable(const PutBucketIntelligentTieringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketIntelligentTieringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketIntelligentTieringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketIntelligentTieringConfigurationAsync(const PutBucketIntelligentTieringConfigurationRequest& request, const PutBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketIntelligentTieringConfiguration(request), context);
    } );
}

PutBucketInventoryConfigurationOutcome S3CrtClient::PutBucketInventoryConfiguration(const PutBucketInventoryConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return PutBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketInventoryConfiguration", "Required field: Id, is not set");
    return PutBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketInventoryConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?inventory");
  uri.SetQueryString(ss.str());
  return PutBucketInventoryConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketInventoryConfigurationOutcomeCallable S3CrtClient::PutBucketInventoryConfigurationCallable(const PutBucketInventoryConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketInventoryConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketInventoryConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketInventoryConfigurationAsync(const PutBucketInventoryConfigurationRequest& request, const PutBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketInventoryConfiguration(request), context);
    } );
}

PutBucketLifecycleConfigurationOutcome S3CrtClient::PutBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketLifecycleConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?lifecycle");
  uri.SetQueryString(ss.str());
  return PutBucketLifecycleConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketLifecycleConfigurationOutcomeCallable S3CrtClient::PutBucketLifecycleConfigurationCallable(const PutBucketLifecycleConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketLifecycleConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketLifecycleConfigurationAsync(const PutBucketLifecycleConfigurationRequest& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketLifecycleConfiguration(request), context);
    } );
}

PutBucketLoggingOutcome S3CrtClient::PutBucketLogging(const PutBucketLoggingRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketLogging", "Required field: Bucket, is not set");
    return PutBucketLoggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketLoggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?logging");
  uri.SetQueryString(ss.str());
  return PutBucketLoggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketLoggingOutcomeCallable S3CrtClient::PutBucketLoggingCallable(const PutBucketLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketLoggingAsync(const PutBucketLoggingRequest& request, const PutBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketLogging(request), context);
    } );
}

PutBucketMetricsConfigurationOutcome S3CrtClient::PutBucketMetricsConfiguration(const PutBucketMetricsConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return PutBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketMetricsConfiguration", "Required field: Id, is not set");
    return PutBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketMetricsConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?metrics");
  uri.SetQueryString(ss.str());
  return PutBucketMetricsConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketMetricsConfigurationOutcomeCallable S3CrtClient::PutBucketMetricsConfigurationCallable(const PutBucketMetricsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketMetricsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketMetricsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketMetricsConfigurationAsync(const PutBucketMetricsConfigurationRequest& request, const PutBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketMetricsConfiguration(request), context);
    } );
}

PutBucketNotificationConfigurationOutcome S3CrtClient::PutBucketNotificationConfiguration(const PutBucketNotificationConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketNotificationConfiguration", "Required field: Bucket, is not set");
    return PutBucketNotificationConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketNotificationConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?notification");
  uri.SetQueryString(ss.str());
  return PutBucketNotificationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketNotificationConfigurationOutcomeCallable S3CrtClient::PutBucketNotificationConfigurationCallable(const PutBucketNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketNotificationConfigurationAsync(const PutBucketNotificationConfigurationRequest& request, const PutBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketNotificationConfiguration(request), context);
    } );
}

PutBucketOwnershipControlsOutcome S3CrtClient::PutBucketOwnershipControls(const PutBucketOwnershipControlsRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketOwnershipControls", "Required field: Bucket, is not set");
    return PutBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketOwnershipControlsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?ownershipControls");
  uri.SetQueryString(ss.str());
  return PutBucketOwnershipControlsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketOwnershipControlsOutcomeCallable S3CrtClient::PutBucketOwnershipControlsCallable(const PutBucketOwnershipControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketOwnershipControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketOwnershipControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketOwnershipControlsAsync(const PutBucketOwnershipControlsRequest& request, const PutBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketOwnershipControls(request), context);
    } );
}

PutBucketPolicyOutcome S3CrtClient::PutBucketPolicy(const PutBucketPolicyRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketPolicy", "Required field: Bucket, is not set");
    return PutBucketPolicyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketPolicyOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?policy");
  uri.SetQueryString(ss.str());
  return PutBucketPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketPolicyOutcomeCallable S3CrtClient::PutBucketPolicyCallable(const PutBucketPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketPolicyAsync(const PutBucketPolicyRequest& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketPolicy(request), context);
    } );
}

PutBucketReplicationOutcome S3CrtClient::PutBucketReplication(const PutBucketReplicationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketReplication", "Required field: Bucket, is not set");
    return PutBucketReplicationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketReplicationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?replication");
  uri.SetQueryString(ss.str());
  return PutBucketReplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketReplicationOutcomeCallable S3CrtClient::PutBucketReplicationCallable(const PutBucketReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketReplicationAsync(const PutBucketReplicationRequest& request, const PutBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketReplication(request), context);
    } );
}

PutBucketRequestPaymentOutcome S3CrtClient::PutBucketRequestPayment(const PutBucketRequestPaymentRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketRequestPayment", "Required field: Bucket, is not set");
    return PutBucketRequestPaymentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketRequestPaymentOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?requestPayment");
  uri.SetQueryString(ss.str());
  return PutBucketRequestPaymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketRequestPaymentOutcomeCallable S3CrtClient::PutBucketRequestPaymentCallable(const PutBucketRequestPaymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketRequestPaymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketRequestPayment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketRequestPaymentAsync(const PutBucketRequestPaymentRequest& request, const PutBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketRequestPayment(request), context);
    } );
}

PutBucketTaggingOutcome S3CrtClient::PutBucketTagging(const PutBucketTaggingRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketTagging", "Required field: Bucket, is not set");
    return PutBucketTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?tagging");
  uri.SetQueryString(ss.str());
  return PutBucketTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketTaggingOutcomeCallable S3CrtClient::PutBucketTaggingCallable(const PutBucketTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketTaggingAsync(const PutBucketTaggingRequest& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketTagging(request), context);
    } );
}

PutBucketVersioningOutcome S3CrtClient::PutBucketVersioning(const PutBucketVersioningRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketVersioning", "Required field: Bucket, is not set");
    return PutBucketVersioningOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketVersioningOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?versioning");
  uri.SetQueryString(ss.str());
  return PutBucketVersioningOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketVersioningOutcomeCallable S3CrtClient::PutBucketVersioningCallable(const PutBucketVersioningRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketVersioningOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketVersioning(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketVersioningAsync(const PutBucketVersioningRequest& request, const PutBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketVersioning(request), context);
    } );
}

PutBucketWebsiteOutcome S3CrtClient::PutBucketWebsite(const PutBucketWebsiteRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketWebsite", "Required field: Bucket, is not set");
    return PutBucketWebsiteOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketWebsiteOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?website");
  uri.SetQueryString(ss.str());
  return PutBucketWebsiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutBucketWebsiteOutcomeCallable S3CrtClient::PutBucketWebsiteCallable(const PutBucketWebsiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketWebsiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketWebsite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutBucketWebsiteAsync(const PutBucketWebsiteRequest& request, const PutBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketWebsite(request), context);
    } );
}

PutObjectAclOutcome S3CrtClient::PutObjectAcl(const PutObjectAclRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectAcl", "Required field: Bucket, is not set");
    return PutObjectAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectAcl", "Required field: Key, is not set");
    return PutObjectAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutObjectAclOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?acl");
  uri.SetQueryString(ss.str());
  return PutObjectAclOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutObjectAclOutcomeCallable S3CrtClient::PutObjectAclCallable(const PutObjectAclRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectAclOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObjectAcl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutObjectAclAsync(const PutObjectAclRequest& request, const PutObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObjectAcl(request), context);
    } );
}

PutObjectLegalHoldOutcome S3CrtClient::PutObjectLegalHold(const PutObjectLegalHoldRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLegalHold", "Required field: Bucket, is not set");
    return PutObjectLegalHoldOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLegalHold", "Required field: Key, is not set");
    return PutObjectLegalHoldOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutObjectLegalHoldOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?legal-hold");
  uri.SetQueryString(ss.str());
  return PutObjectLegalHoldOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutObjectLegalHoldOutcomeCallable S3CrtClient::PutObjectLegalHoldCallable(const PutObjectLegalHoldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectLegalHoldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObjectLegalHold(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutObjectLegalHoldAsync(const PutObjectLegalHoldRequest& request, const PutObjectLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObjectLegalHold(request), context);
    } );
}

PutObjectLockConfigurationOutcome S3CrtClient::PutObjectLockConfiguration(const PutObjectLockConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLockConfiguration", "Required field: Bucket, is not set");
    return PutObjectLockConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutObjectLockConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?object-lock");
  uri.SetQueryString(ss.str());
  return PutObjectLockConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutObjectLockConfigurationOutcomeCallable S3CrtClient::PutObjectLockConfigurationCallable(const PutObjectLockConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectLockConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObjectLockConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutObjectLockConfigurationAsync(const PutObjectLockConfigurationRequest& request, const PutObjectLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObjectLockConfiguration(request), context);
    } );
}

PutObjectRetentionOutcome S3CrtClient::PutObjectRetention(const PutObjectRetentionRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectRetention", "Required field: Bucket, is not set");
    return PutObjectRetentionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectRetention", "Required field: Key, is not set");
    return PutObjectRetentionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutObjectRetentionOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?retention");
  uri.SetQueryString(ss.str());
  return PutObjectRetentionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutObjectRetentionOutcomeCallable S3CrtClient::PutObjectRetentionCallable(const PutObjectRetentionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectRetentionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObjectRetention(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutObjectRetentionAsync(const PutObjectRetentionRequest& request, const PutObjectRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObjectRetention(request), context);
    } );
}

PutObjectTaggingOutcome S3CrtClient::PutObjectTagging(const PutObjectTaggingRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectTagging", "Required field: Bucket, is not set");
    return PutObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectTagging", "Required field: Key, is not set");
    return PutObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutObjectTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?tagging");
  uri.SetQueryString(ss.str());
  return PutObjectTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutObjectTaggingOutcomeCallable S3CrtClient::PutObjectTaggingCallable(const PutObjectTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObjectTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutObjectTaggingAsync(const PutObjectTaggingRequest& request, const PutObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObjectTagging(request), context);
    } );
}

PutPublicAccessBlockOutcome S3CrtClient::PutPublicAccessBlock(const PutPublicAccessBlockRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Required field: Bucket, is not set");
    return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutPublicAccessBlockOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss.str("?publicAccessBlock");
  uri.SetQueryString(ss.str());
  return PutPublicAccessBlockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

PutPublicAccessBlockOutcomeCallable S3CrtClient::PutPublicAccessBlockCallable(const PutPublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::PutPublicAccessBlockAsync(const PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutPublicAccessBlock(request), context);
    } );
}

RestoreObjectOutcome S3CrtClient::RestoreObject(const RestoreObjectRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreObject", "Required field: Bucket, is not set");
    return RestoreObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreObject", "Required field: Key, is not set");
    return RestoreObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return RestoreObjectOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?restore");
  uri.SetQueryString(ss.str());
  return RestoreObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

RestoreObjectOutcomeCallable S3CrtClient::RestoreObjectCallable(const RestoreObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::RestoreObjectAsync(const RestoreObjectRequest& request, const RestoreObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreObject(request), context);
    } );
}

SelectObjectContentOutcome S3CrtClient::SelectObjectContent(SelectObjectContentRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SelectObjectContent", "Required field: Bucket, is not set");
    return SelectObjectContentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SelectObjectContent", "Required field: Key, is not set");
    return SelectObjectContentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return SelectObjectContentOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  uri.AddPathSegments(request.GetKey());
  ss.str("?select&select-type=2");
  uri.SetQueryString(ss.str());
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );
  return SelectObjectContentOutcome(MakeRequestWithEventStream(uri, request, Aws::Http::HttpMethod::HTTP_POST, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

SelectObjectContentOutcomeCallable S3CrtClient::SelectObjectContentCallable(SelectObjectContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SelectObjectContentOutcome() > >(ALLOCATION_TAG, [this, &request](){ return this->SelectObjectContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::SelectObjectContentAsync(SelectObjectContentRequest& request, const SelectObjectContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, &request, handler, context]()
    {
      handler(this, request, SelectObjectContent(request), context);
    } );
}

UploadPartOutcome S3CrtClient::UploadPart(const UploadPartRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: Bucket, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: Key, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.PartNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: PartNumber, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartNumber]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: UploadId, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return UploadPartOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  uri.AddPathSegments(request.GetKey());
  return UploadPartOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

UploadPartOutcomeCallable S3CrtClient::UploadPartCallable(const UploadPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::UploadPartAsync(const UploadPartRequest& request, const UploadPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UploadPart(request), context);
    } );
}

UploadPartCopyOutcome S3CrtClient::UploadPartCopy(const UploadPartCopyRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: Bucket, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.CopySourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: CopySource, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopySource]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: Key, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.PartNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: PartNumber, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartNumber]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: UploadId, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return UploadPartCopyOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  uri.AddPathSegments(request.GetKey());
  return UploadPartCopyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

UploadPartCopyOutcomeCallable S3CrtClient::UploadPartCopyCallable(const UploadPartCopyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadPartCopyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadPartCopy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::UploadPartCopyAsync(const UploadPartCopyRequest& request, const UploadPartCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UploadPartCopy(request), context);
    } );
}

WriteGetObjectResponseOutcome S3CrtClient::WriteGetObjectResponse(const WriteGetObjectResponseRequest& request) const
{
  if (!request.RequestRouteHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "Required field: RequestRoute, is not set");
    return WriteGetObjectResponseOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestRoute]", false));
  }
  if (!request.RequestTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "Required field: RequestToken, is not set");
    return WriteGetObjectResponseOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestToken]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointStringWithServiceName("s3-object-lambda");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return WriteGetObjectResponseOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetRequestRoute().empty())
    {
      AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "HostPrefix required field: RequestRoute, is empty");
      return WriteGetObjectResponseOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetRequestRoute() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "Invalid DNS host: " << uri.GetAuthority());
      return WriteGetObjectResponseOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/WriteGetObjectResponse");
  return WriteGetObjectResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, computeEndpointOutcome.GetResult().signerName.c_str() /*signerName*/, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
}

WriteGetObjectResponseOutcomeCallable S3CrtClient::WriteGetObjectResponseCallable(const WriteGetObjectResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< WriteGetObjectResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->WriteGetObjectResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3CrtClient::WriteGetObjectResponseAsync(const WriteGetObjectResponseRequest& request, const WriteGetObjectResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, WriteGetObjectResponse(request), context);
    } );
}


static const char US_EAST_1_REGIONAL_ENDPOINT_ENV_VAR[] = "AWS_S3_US_EAST_1_REGIONAL_ENDPOINT";
static const char US_EAST_1_REGIONAL_ENDPOINT_CONFIG_VAR[] = "s3_us_east_1_regional_endpoint";
static const char S3_USE_ARN_REGION_ENVIRONMENT_VARIABLE[] = "AWS_S3_USE_ARN_REGION";
static const char S3_USE_ARN_REGION_CONFIG_FILE_OPTION[] = "s3_use_arn_region";
static const char S3_DISABLE_MULTIREGION_ACCESS_POINTS_ENV_VAR[] = "AWS_S3_DISABLE_MULTIREGION_ACCESS_POINTS";
static const char S3_DISABLE_MULTIREGION_ACCESS_POINTS_CONFIG_VAR[] = "s3_disable_multiregion_access_points";

void S3CrtClient::LoadS3CrtSpecificConfig(const Aws::String& profile)
{
  if (m_USEast1RegionalEndpointOption == Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::NOT_SET)
  {
    Aws::String option = Aws::Environment::GetEnv(US_EAST_1_REGIONAL_ENDPOINT_ENV_VAR);
    if (option.empty())
    {
      option = Aws::Config::GetCachedConfigValue(profile, US_EAST_1_REGIONAL_ENDPOINT_CONFIG_VAR);
    }

    if (Aws::Utils::StringUtils::ToLower(option.c_str()) == "legacy")
    {
      m_USEast1RegionalEndpointOption = Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::LEGACY;
    }
    else // defaults is regional
    {
      m_USEast1RegionalEndpointOption = Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::REGIONAL;
    }
  }

  Aws::String s3UseArnRegion = Aws::Environment::GetEnv(S3_USE_ARN_REGION_ENVIRONMENT_VARIABLE);
  if (s3UseArnRegion.empty())
  {
    s3UseArnRegion = Aws::Config::GetCachedConfigValue(profile, S3_USE_ARN_REGION_CONFIG_FILE_OPTION);
  }

  if (s3UseArnRegion == "true")
  {
    m_useArnRegion = true;
  }
  else
  {
    if (!s3UseArnRegion.empty() && s3UseArnRegion != "false")
    {
      AWS_LOGSTREAM_WARN("S3CrtClient", "AWS_S3_USE_ARN_REGION in environment variables or s3_use_arn_region in config file"
                                  << "should either be true of false if specified, otherwise turn off this flag by default.");
    }
    m_useArnRegion = false;
  }

  Aws::String s3DisableMultiRegionAccessPoints = Aws::Environment::GetEnv(S3_DISABLE_MULTIREGION_ACCESS_POINTS_ENV_VAR);
  if (s3DisableMultiRegionAccessPoints.empty())
  {
    s3DisableMultiRegionAccessPoints = Aws::Config::GetCachedConfigValue(profile, S3_DISABLE_MULTIREGION_ACCESS_POINTS_CONFIG_VAR);
  }
  if (s3DisableMultiRegionAccessPoints == "true")
  {
    m_disableMultiRegionAccessPoints = true;
  }
  else
  {
    if (!s3DisableMultiRegionAccessPoints.empty() && s3DisableMultiRegionAccessPoints != "false")
    {
      AWS_LOGSTREAM_WARN("S3CrtClient", "AWS_S3_DISABLE_MULTIREGION_ACCESS_POINTS in environment variables or s3_disable_multiregion_access_points"
                                    << "in config file should either be true of false if specified, otherwise turn off this flag by default.");
    }
    m_disableMultiRegionAccessPoints = false;
  }
}

#include<aws/core/utils/HashingUtils.h>
Aws::String S3CrtClient::GeneratePresignedUrl(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, long long expirationInSeconds)
{
    ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(bucket);
    if (!computeEndpointOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError());
        return {};
    }
    URI uri(computeEndpointOutcome.GetResult().endpoint);
    uri.SetPath(uri.GetPath() + "/" + key);
    return AWSClient::GeneratePresignedUrl(uri, method, computeEndpointOutcome.GetResult().signerRegion.c_str(),
        computeEndpointOutcome.GetResult().signerServiceName.c_str(), computeEndpointOutcome.GetResult().signerName.c_str(), expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrl(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, const Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds)
{
    ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(bucket);
    if (!computeEndpointOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError());
        return {};
    }
    URI uri(computeEndpointOutcome.GetResult().endpoint);
    uri.SetPath(uri.GetPath() + "/" + key);
    return AWSClient::GeneratePresignedUrl(uri, method, computeEndpointOutcome.GetResult().signerRegion.c_str(),
        computeEndpointOutcome.GetResult().signerServiceName.c_str(), computeEndpointOutcome.GetResult().signerName.c_str(), customizedHeaders, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSES3(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, long long expirationInSeconds)
{
    ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(bucket);
    if (!computeEndpointOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError());
        return {};
    }
    URI uri(computeEndpointOutcome.GetResult().endpoint);
    uri.SetPath(uri.GetPath() + "/" + key);
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
    return AWSClient::GeneratePresignedUrl(uri, method, computeEndpointOutcome.GetResult().signerRegion.c_str(),
        computeEndpointOutcome.GetResult().signerServiceName.c_str(), computeEndpointOutcome.GetResult().signerName.c_str(), headers, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSES3(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, Http::HeaderValueCollection customizedHeaders, long long expirationInSeconds)
{
    ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(bucket);
    if (!computeEndpointOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError());
        return {};
    }
    URI uri(computeEndpointOutcome.GetResult().endpoint);
    uri.SetPath(uri.GetPath() + "/" + key);
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
    return AWSClient::GeneratePresignedUrl(uri, method, computeEndpointOutcome.GetResult().signerRegion.c_str(),
        computeEndpointOutcome.GetResult().signerServiceName.c_str(), computeEndpointOutcome.GetResult().signerName.c_str(), customizedHeaders, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, const Aws::String& kmsMasterKeyId, long long expirationInSeconds)
{
    ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(bucket);
    if (!computeEndpointOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError());
        return {};
    }
    URI uri(computeEndpointOutcome.GetResult().endpoint);
    uri.SetPath(uri.GetPath() + "/" + key);
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::aws_kms));
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_AWS_KMS_KEY_ID, kmsMasterKeyId);
    return AWSClient::GeneratePresignedUrl(uri, method, computeEndpointOutcome.GetResult().signerRegion.c_str(),
        computeEndpointOutcome.GetResult().signerServiceName.c_str(), computeEndpointOutcome.GetResult().signerName.c_str(), headers, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, Http::HeaderValueCollection customizedHeaders, const Aws::String& kmsMasterKeyId, long long expirationInSeconds)
{
    ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(bucket);
    if (!computeEndpointOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError());
        return {};
    }
    URI uri(computeEndpointOutcome.GetResult().endpoint);
    uri.SetPath(uri.GetPath() + "/" + key);
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::aws_kms));
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_AWS_KMS_KEY_ID, kmsMasterKeyId);
    return AWSClient::GeneratePresignedUrl(uri, method, computeEndpointOutcome.GetResult().signerRegion.c_str(),
        computeEndpointOutcome.GetResult().signerServiceName.c_str(), computeEndpointOutcome.GetResult().signerName.c_str(), customizedHeaders, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSEC(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, const Aws::String& base64EncodedAES256Key, long long expirationInSeconds)
{
    ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(bucket);
    if (!computeEndpointOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError());
        return {};
    }
    URI uri(computeEndpointOutcome.GetResult().endpoint);
    uri.SetPath(uri.GetPath() + "/" + key);
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, base64EncodedAES256Key);
    Aws::Utils::ByteBuffer buffer = Aws::Utils::HashingUtils::Base64Decode(base64EncodedAES256Key);
    Aws::String strBuffer(reinterpret_cast<char*>(buffer.GetUnderlyingData()), buffer.GetLength());
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(strBuffer)));
    return AWSClient::GeneratePresignedUrl(uri, method, computeEndpointOutcome.GetResult().signerRegion.c_str(),
        computeEndpointOutcome.GetResult().signerServiceName.c_str(), computeEndpointOutcome.GetResult().signerName.c_str(), headers, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSEC(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, Http::HeaderValueCollection customizedHeaders, const Aws::String& base64EncodedAES256Key, long long expirationInSeconds)
{
    ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(bucket);
    if (!computeEndpointOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError());
        return {};
    }
    URI uri(computeEndpointOutcome.GetResult().endpoint);
    uri.SetPath(uri.GetPath() + "/" + key);
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, base64EncodedAES256Key);
    Aws::Utils::ByteBuffer buffer = Aws::Utils::HashingUtils::Base64Decode(base64EncodedAES256Key);
    Aws::String strBuffer(reinterpret_cast<char*>(buffer.GetUnderlyingData()), buffer.GetLength());
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(strBuffer)));
    return AWSClient::GeneratePresignedUrl(uri, method, computeEndpointOutcome.GetResult().signerRegion.c_str(),
        computeEndpointOutcome.GetResult().signerServiceName.c_str(), computeEndpointOutcome.GetResult().signerName.c_str(), customizedHeaders, expirationInSeconds);
}

ComputeEndpointOutcome S3CrtClient::ComputeEndpointString(const Aws::String& bucketOrArn) const
{
    if (m_useDualStack && m_useCustomEndpoint)
    {
        return ComputeEndpointOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION",
            "Dual-stack endpoint is incompatible with a custom endpoint override.", false));
    }

    Aws::StringStream ss;
    ss << m_scheme << "://";
    Aws::String bucket = bucketOrArn;
    Aws::String signerRegion = Aws::Region::ComputeSignerRegion(m_region);
    S3CrtARN arn(bucketOrArn);

    if (arn)
    {
        if (!m_useVirtualAddressing)
        {
            return ComputeEndpointOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION",
                "Path style addressing is not compatible with Access Point ARN or Outposts ARN in Bucket field, please consider using virtual addressing for this client instead.", false));
        }

        bool useClientRegion = !m_useArnRegion || Aws::Region::IsFipsRegion(m_region);
        S3CrtARNOutcome s3ArnOutcome = useClientRegion ? arn.Validate(m_region.c_str()) : arn.Validate();
        if (!s3ArnOutcome.IsSuccess())
        {
            return ComputeEndpointOutcome(s3ArnOutcome.GetError());
        }
        signerRegion = m_useArnRegion ? arn.GetRegion() : signerRegion;
        // S3 Object Lambda Access Point ARN
        if (arn.GetService() == ARNService::S3_OBJECT_LAMBDA)
        {
            if (m_useDualStack)
            {
                return ComputeEndpointOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION",
                    "S3 Object Lambda Access Point ARNs do not support dualstack right now.", false));
            }
            ss << S3CrtEndpoint::ForObjectLambdaAccessPointArn(arn, useClientRegion ? m_region : "", m_useDualStack, m_useCustomEndpoint ? m_baseUri : "");
            return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), signerRegion, ARNService::S3_OBJECT_LAMBDA));
        }
        // S3 Multi Region Access Point ARN
        else if (arn.GetResourceType() == ARNResourceType::ACCESSPOINT && arn.GetRegion().empty())
        {
            if (m_disableMultiRegionAccessPoints)
            {
                return ComputeEndpointOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION",
                    "Multi Region Access Point ARN is disabled explicitly. Unset AWS_S3_DISABLE_MULTIREGION_ACCESS_POINTS in environment variables and s3_disable_multiregion_access_points in config file, or set them to false.", false));
            }
            if (m_useDualStack)
            {
                return ComputeEndpointOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION",
                    "S3 Multi Region Access Point ARNs do not support dualstack right now.", false));
            }
            if (m_useCustomEndpoint)
            {
                return ComputeEndpointOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION",
                    "S3 Multi Region Access Point ARNs do not support custom endpoint override right now.", false));
            }
            ss << S3CrtEndpoint::ForMultiRegionAccessPointArn(arn, m_useDualStack, /*endpointOverride*/ "");
            return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), "*", SERVICE_NAME, Aws::Auth::ASYMMETRIC_SIGV4_SIGNER));
        }
        // Regular S3 Access Point ARN
        else if (arn.GetResourceType() == ARNResourceType::ACCESSPOINT)
        {
            ss << S3CrtEndpoint::ForAccessPointArn(arn, useClientRegion ? m_region : "", m_useDualStack, m_useCustomEndpoint ? m_baseUri : "");
            return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), signerRegion, SERVICE_NAME));
        }
        // S3 Outposts Access Point ARN
        else if (arn.GetResourceType() == ARNResourceType::OUTPOST)
        {
            if (m_useDualStack)
            {
                return ComputeEndpointOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION",
                    "Outposts Access Points do not support dualstack right now.", false));
            }
            ss << S3CrtEndpoint::ForOutpostsArn(arn, useClientRegion ? m_region : "", m_useDualStack, m_useCustomEndpoint ? m_baseUri : "");
            return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), signerRegion, ARNService::S3_OUTPOSTS));
        }
    }

    // when using virtual hosting of buckets, the bucket name has to follow some rules.
    // Mainly, it has to be a valid DNS label, and it must be lowercase.
    // For more information see http://docs.aws.amazon.com/AmazonS3/latest/dev/VirtualHosting.html#VirtualHostingSpecifyBucket
    if(m_useVirtualAddressing && Aws::Utils::IsValidDnsLabel(bucket) &&
        bucket == Aws::Utils::StringUtils::ToLower(bucket.c_str()))
    {
        ss << bucket << "." << m_baseUri;
    }
    else
    {
        ss << m_baseUri << "/" << bucket;
    }

    return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), signerRegion, SERVICE_NAME));
}

ComputeEndpointOutcome S3CrtClient::ComputeEndpointString() const
{
    if (m_useDualStack && m_useCustomEndpoint)
    {
        return ComputeEndpointOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION",
            "Dual-stack endpoint is incompatible with a custom endpoint override.", false));
    }
    Aws::StringStream ss;
    ss << m_scheme << "://" << m_baseUri;
    return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), Aws::Region::ComputeSignerRegion(m_region), SERVICE_NAME));
}

ComputeEndpointOutcome S3CrtClient::ComputeEndpointStringWithServiceName(const Aws::String& serviceNameOverride) const
{
    if (serviceNameOverride.empty())
    {
        return ComputeEndpointString();
    }

    if (m_useDualStack && m_useCustomEndpoint)
    {
        return ComputeEndpointOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION",
            "Dual-stack endpoint is incompatible with a custom endpoint override.", false));
    }

    Aws::StringStream ss;
    ss << m_scheme << "://";
    if (m_useCustomEndpoint)
    {
        ss << m_baseUri;
        return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), Aws::Region::ComputeSignerRegion(m_region), serviceNameOverride));
    }
    else
    {
        if (m_useDualStack)
        {
            return ComputeEndpointOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION",
            "S3 Object Lambda endpoints do not support dualstack right now.", false));
        }
        else
        {
            ss << S3CrtEndpoint::ForRegion(m_region, m_useDualStack, true, serviceNameOverride);
            return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), Aws::Region::ComputeSignerRegion(m_region), serviceNameOverride));
        }
    }
}

bool S3CrtClient::MultipartUploadSupported() const
{
    return true;
}
