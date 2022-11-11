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
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/platform/Environment.h>

#include <aws/s3/S3Client.h>
#include <aws/s3/S3ErrorMarshaller.h>
#include <aws/s3/S3EndpointProvider.h>
#include <aws/s3/model/AbortMultipartUploadRequest.h>
#include <aws/s3/model/CompleteMultipartUploadRequest.h>
#include <aws/s3/model/CopyObjectRequest.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/CreateMultipartUploadRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteBucketAnalyticsConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketCorsRequest.h>
#include <aws/s3/model/DeleteBucketEncryptionRequest.h>
#include <aws/s3/model/DeleteBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketInventoryConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketLifecycleRequest.h>
#include <aws/s3/model/DeleteBucketMetricsConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketOwnershipControlsRequest.h>
#include <aws/s3/model/DeleteBucketPolicyRequest.h>
#include <aws/s3/model/DeleteBucketReplicationRequest.h>
#include <aws/s3/model/DeleteBucketTaggingRequest.h>
#include <aws/s3/model/DeleteBucketWebsiteRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/DeleteObjectTaggingRequest.h>
#include <aws/s3/model/DeleteObjectsRequest.h>
#include <aws/s3/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3/model/GetBucketAccelerateConfigurationRequest.h>
#include <aws/s3/model/GetBucketAclRequest.h>
#include <aws/s3/model/GetBucketAnalyticsConfigurationRequest.h>
#include <aws/s3/model/GetBucketCorsRequest.h>
#include <aws/s3/model/GetBucketEncryptionRequest.h>
#include <aws/s3/model/GetBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3/model/GetBucketInventoryConfigurationRequest.h>
#include <aws/s3/model/GetBucketLifecycleConfigurationRequest.h>
#include <aws/s3/model/GetBucketLocationRequest.h>
#include <aws/s3/model/GetBucketLoggingRequest.h>
#include <aws/s3/model/GetBucketMetricsConfigurationRequest.h>
#include <aws/s3/model/GetBucketNotificationConfigurationRequest.h>
#include <aws/s3/model/GetBucketOwnershipControlsRequest.h>
#include <aws/s3/model/GetBucketPolicyRequest.h>
#include <aws/s3/model/GetBucketPolicyStatusRequest.h>
#include <aws/s3/model/GetBucketReplicationRequest.h>
#include <aws/s3/model/GetBucketRequestPaymentRequest.h>
#include <aws/s3/model/GetBucketTaggingRequest.h>
#include <aws/s3/model/GetBucketVersioningRequest.h>
#include <aws/s3/model/GetBucketWebsiteRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/GetObjectAclRequest.h>
#include <aws/s3/model/GetObjectAttributesRequest.h>
#include <aws/s3/model/GetObjectLegalHoldRequest.h>
#include <aws/s3/model/GetObjectLockConfigurationRequest.h>
#include <aws/s3/model/GetObjectRetentionRequest.h>
#include <aws/s3/model/GetObjectTaggingRequest.h>
#include <aws/s3/model/GetObjectTorrentRequest.h>
#include <aws/s3/model/GetPublicAccessBlockRequest.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/ListBucketAnalyticsConfigurationsRequest.h>
#include <aws/s3/model/ListBucketIntelligentTieringConfigurationsRequest.h>
#include <aws/s3/model/ListBucketInventoryConfigurationsRequest.h>
#include <aws/s3/model/ListBucketMetricsConfigurationsRequest.h>
#include <aws/s3/model/ListMultipartUploadsRequest.h>
#include <aws/s3/model/ListObjectVersionsRequest.h>
#include <aws/s3/model/ListObjectsRequest.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/s3/model/ListPartsRequest.h>
#include <aws/s3/model/PutBucketAccelerateConfigurationRequest.h>
#include <aws/s3/model/PutBucketAclRequest.h>
#include <aws/s3/model/PutBucketAnalyticsConfigurationRequest.h>
#include <aws/s3/model/PutBucketCorsRequest.h>
#include <aws/s3/model/PutBucketEncryptionRequest.h>
#include <aws/s3/model/PutBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3/model/PutBucketInventoryConfigurationRequest.h>
#include <aws/s3/model/PutBucketLifecycleConfigurationRequest.h>
#include <aws/s3/model/PutBucketLoggingRequest.h>
#include <aws/s3/model/PutBucketMetricsConfigurationRequest.h>
#include <aws/s3/model/PutBucketNotificationConfigurationRequest.h>
#include <aws/s3/model/PutBucketOwnershipControlsRequest.h>
#include <aws/s3/model/PutBucketPolicyRequest.h>
#include <aws/s3/model/PutBucketReplicationRequest.h>
#include <aws/s3/model/PutBucketRequestPaymentRequest.h>
#include <aws/s3/model/PutBucketTaggingRequest.h>
#include <aws/s3/model/PutBucketVersioningRequest.h>
#include <aws/s3/model/PutBucketWebsiteRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/PutObjectAclRequest.h>
#include <aws/s3/model/PutObjectLegalHoldRequest.h>
#include <aws/s3/model/PutObjectLockConfigurationRequest.h>
#include <aws/s3/model/PutObjectRetentionRequest.h>
#include <aws/s3/model/PutObjectTaggingRequest.h>
#include <aws/s3/model/PutPublicAccessBlockRequest.h>
#include <aws/s3/model/RestoreObjectRequest.h>
#include <aws/s3/model/SelectObjectContentRequest.h>
#include <aws/s3/model/UploadPartRequest.h>
#include <aws/s3/model/UploadPartCopyRequest.h>
#include <aws/s3/model/WriteGetObjectResponseRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* S3Client::SERVICE_NAME = "s3";
const char* S3Client::ALLOCATION_TAG = "S3Client";

S3Client::S3Client(const S3::S3ClientConfiguration& clientConfiguration,
                   std::shared_ptr<S3EndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                                                  clientConfiguration.payloadSigningPolicy,
                                                                  /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

S3Client::S3Client(const AWSCredentials& credentials,
                   std::shared_ptr<S3EndpointProviderBase> endpointProvider,
                   const S3::S3ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                                                  clientConfiguration.payloadSigningPolicy,
                                                                  /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

S3Client::S3Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<S3EndpointProviderBase> endpointProvider,
                   const S3::S3ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                                                  clientConfiguration.payloadSigningPolicy,
                                                                  /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  S3Client::S3Client(const Client::ClientConfiguration& clientConfiguration,
                   Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads /*= Never*/,
                   bool useVirtualAddressing /*= true*/,
                   Aws::S3::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                                                  signPayloads,
                                                                  /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

S3Client::S3Client(const AWSCredentials& credentials,
                   const Client::ClientConfiguration& clientConfiguration,
                   Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads /*= Never*/,
                   bool useVirtualAddressing /*= true*/,
                   Aws::S3::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                                                  signPayloads,
                                                                  /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

S3Client::S3Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                   const Client::ClientConfiguration& clientConfiguration,
                   Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads /*= Never*/,
                   bool useVirtualAddressing /*= true*/,
                   Aws::S3::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                                                  signPayloads,
                                                                  /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
S3Client::~S3Client()
{
}

std::shared_ptr<S3EndpointProviderBase>& S3Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void S3Client::init(const S3::S3ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("S3");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void S3Client::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AbortMultipartUploadOutcome S3Client::AbortMultipartUpload(const AbortMultipartUploadRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AbortMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: Bucket, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: Key, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: UploadId, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AbortMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return AbortMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

AbortMultipartUploadOutcomeCallable S3Client::AbortMultipartUploadCallable(const AbortMultipartUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AbortMultipartUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AbortMultipartUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::AbortMultipartUploadAsync(const AbortMultipartUploadRequest& request, const AbortMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AbortMultipartUpload(request), context);
    } );
}

CompleteMultipartUploadOutcome S3Client::CompleteMultipartUpload(const CompleteMultipartUploadRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CompleteMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: Bucket, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: Key, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: UploadId, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CompleteMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return CompleteMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CompleteMultipartUploadOutcomeCallable S3Client::CompleteMultipartUploadCallable(const CompleteMultipartUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteMultipartUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteMultipartUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::CompleteMultipartUploadAsync(const CompleteMultipartUploadRequest& request, const CompleteMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CompleteMultipartUpload(request), context);
    } );
}

CopyObjectOutcome S3Client::CopyObject(const CopyObjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: Bucket, is not set");
    return CopyObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.CopySourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: CopySource, is not set");
    return CopyObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopySource]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: Key, is not set");
    return CopyObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return CopyObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

CopyObjectOutcomeCallable S3Client::CopyObjectCallable(const CopyObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::CopyObjectAsync(const CopyObjectRequest& request, const CopyObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CopyObject(request), context);
    } );
}

CreateBucketOutcome S3Client::CreateBucket(const CreateBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBucket", "Required field: Bucket, is not set");
    return CreateBucketOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

CreateBucketOutcomeCallable S3Client::CreateBucketCallable(const CreateBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::CreateBucketAsync(const CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBucket(request), context);
    } );
}

CreateMultipartUploadOutcome S3Client::CreateMultipartUpload(const CreateMultipartUploadRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultipartUpload", "Required field: Bucket, is not set");
    return CreateMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultipartUpload", "Required field: Key, is not set");
    return CreateMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?uploads");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return CreateMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateMultipartUploadOutcomeCallable S3Client::CreateMultipartUploadCallable(const CreateMultipartUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMultipartUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMultipartUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::CreateMultipartUploadAsync(const CreateMultipartUploadRequest& request, const CreateMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMultipartUpload(request), context);
    } );
}

DeleteBucketOutcome S3Client::DeleteBucket(const DeleteBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucket", "Required field: Bucket, is not set");
    return DeleteBucketOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketOutcomeCallable S3Client::DeleteBucketCallable(const DeleteBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketAsync(const DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucket(request), context);
    } );
}

DeleteBucketAnalyticsConfigurationOutcome S3Client::DeleteBucketAnalyticsConfiguration(const DeleteBucketAnalyticsConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return DeleteBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?analytics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketAnalyticsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketAnalyticsConfigurationOutcomeCallable S3Client::DeleteBucketAnalyticsConfigurationCallable(const DeleteBucketAnalyticsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketAnalyticsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketAnalyticsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketAnalyticsConfigurationAsync(const DeleteBucketAnalyticsConfigurationRequest& request, const DeleteBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketAnalyticsConfiguration(request), context);
    } );
}

DeleteBucketCorsOutcome S3Client::DeleteBucketCors(const DeleteBucketCorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketCors", "Required field: Bucket, is not set");
    return DeleteBucketCorsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?cors");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketCorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketCorsOutcomeCallable S3Client::DeleteBucketCorsCallable(const DeleteBucketCorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketCorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketCors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketCorsAsync(const DeleteBucketCorsRequest& request, const DeleteBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketCors(request), context);
    } );
}

DeleteBucketEncryptionOutcome S3Client::DeleteBucketEncryption(const DeleteBucketEncryptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketEncryption", "Required field: Bucket, is not set");
    return DeleteBucketEncryptionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?encryption");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketEncryptionOutcomeCallable S3Client::DeleteBucketEncryptionCallable(const DeleteBucketEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketEncryptionAsync(const DeleteBucketEncryptionRequest& request, const DeleteBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketEncryption(request), context);
    } );
}

DeleteBucketIntelligentTieringConfigurationOutcome S3Client::DeleteBucketIntelligentTieringConfiguration(const DeleteBucketIntelligentTieringConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return DeleteBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketIntelligentTieringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketIntelligentTieringConfigurationOutcomeCallable S3Client::DeleteBucketIntelligentTieringConfigurationCallable(const DeleteBucketIntelligentTieringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketIntelligentTieringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketIntelligentTieringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketIntelligentTieringConfigurationAsync(const DeleteBucketIntelligentTieringConfigurationRequest& request, const DeleteBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketIntelligentTieringConfiguration(request), context);
    } );
}

DeleteBucketInventoryConfigurationOutcome S3Client::DeleteBucketInventoryConfiguration(const DeleteBucketInventoryConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketInventoryConfiguration", "Required field: Id, is not set");
    return DeleteBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?inventory");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketInventoryConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketInventoryConfigurationOutcomeCallable S3Client::DeleteBucketInventoryConfigurationCallable(const DeleteBucketInventoryConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketInventoryConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketInventoryConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketInventoryConfigurationAsync(const DeleteBucketInventoryConfigurationRequest& request, const DeleteBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketInventoryConfiguration(request), context);
    } );
}

DeleteBucketLifecycleOutcome S3Client::DeleteBucketLifecycle(const DeleteBucketLifecycleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketLifecycle", "Required field: Bucket, is not set");
    return DeleteBucketLifecycleOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?lifecycle");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketLifecycleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketLifecycleOutcomeCallable S3Client::DeleteBucketLifecycleCallable(const DeleteBucketLifecycleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketLifecycleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketLifecycle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketLifecycleAsync(const DeleteBucketLifecycleRequest& request, const DeleteBucketLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketLifecycle(request), context);
    } );
}

DeleteBucketMetricsConfigurationOutcome S3Client::DeleteBucketMetricsConfiguration(const DeleteBucketMetricsConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetricsConfiguration", "Required field: Id, is not set");
    return DeleteBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?metrics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketMetricsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketMetricsConfigurationOutcomeCallable S3Client::DeleteBucketMetricsConfigurationCallable(const DeleteBucketMetricsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketMetricsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketMetricsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketMetricsConfigurationAsync(const DeleteBucketMetricsConfigurationRequest& request, const DeleteBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketMetricsConfiguration(request), context);
    } );
}

DeleteBucketOwnershipControlsOutcome S3Client::DeleteBucketOwnershipControls(const DeleteBucketOwnershipControlsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketOwnershipControls", "Required field: Bucket, is not set");
    return DeleteBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?ownershipControls");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketOwnershipControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketOwnershipControlsOutcomeCallable S3Client::DeleteBucketOwnershipControlsCallable(const DeleteBucketOwnershipControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketOwnershipControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketOwnershipControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketOwnershipControlsAsync(const DeleteBucketOwnershipControlsRequest& request, const DeleteBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketOwnershipControls(request), context);
    } );
}

DeleteBucketPolicyOutcome S3Client::DeleteBucketPolicy(const DeleteBucketPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "Required field: Bucket, is not set");
    return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?policy");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketPolicyOutcomeCallable S3Client::DeleteBucketPolicyCallable(const DeleteBucketPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketPolicyAsync(const DeleteBucketPolicyRequest& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketPolicy(request), context);
    } );
}

DeleteBucketReplicationOutcome S3Client::DeleteBucketReplication(const DeleteBucketReplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketReplication", "Required field: Bucket, is not set");
    return DeleteBucketReplicationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?replication");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketReplicationOutcomeCallable S3Client::DeleteBucketReplicationCallable(const DeleteBucketReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketReplicationAsync(const DeleteBucketReplicationRequest& request, const DeleteBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketReplication(request), context);
    } );
}

DeleteBucketTaggingOutcome S3Client::DeleteBucketTagging(const DeleteBucketTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "Required field: Bucket, is not set");
    return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketTaggingOutcomeCallable S3Client::DeleteBucketTaggingCallable(const DeleteBucketTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketTaggingAsync(const DeleteBucketTaggingRequest& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketTagging(request), context);
    } );
}

DeleteBucketWebsiteOutcome S3Client::DeleteBucketWebsite(const DeleteBucketWebsiteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketWebsite", "Required field: Bucket, is not set");
    return DeleteBucketWebsiteOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?website");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketWebsiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketWebsiteOutcomeCallable S3Client::DeleteBucketWebsiteCallable(const DeleteBucketWebsiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketWebsiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketWebsite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteBucketWebsiteAsync(const DeleteBucketWebsiteRequest& request, const DeleteBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketWebsite(request), context);
    } );
}

DeleteObjectOutcome S3Client::DeleteObject(const DeleteObjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: Bucket, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: Key, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return DeleteObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteObjectOutcomeCallable S3Client::DeleteObjectCallable(const DeleteObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteObjectAsync(const DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteObject(request), context);
    } );
}

DeleteObjectTaggingOutcome S3Client::DeleteObjectTagging(const DeleteObjectTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjectTagging", "Required field: Bucket, is not set");
    return DeleteObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjectTagging", "Required field: Key, is not set");
    return DeleteObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteObjectTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteObjectTaggingOutcomeCallable S3Client::DeleteObjectTaggingCallable(const DeleteObjectTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObjectTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObjectTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteObjectTaggingAsync(const DeleteObjectTaggingRequest& request, const DeleteObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteObjectTagging(request), context);
    } );
}

DeleteObjectsOutcome S3Client::DeleteObjects(const DeleteObjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjects", "Required field: Bucket, is not set");
    return DeleteObjectsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?delete");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteObjectsOutcomeCallable S3Client::DeleteObjectsCallable(const DeleteObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeleteObjectsAsync(const DeleteObjectsRequest& request, const DeleteObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteObjects(request), context);
    } );
}

DeletePublicAccessBlockOutcome S3Client::DeletePublicAccessBlock(const DeletePublicAccessBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Required field: Bucket, is not set");
    return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?publicAccessBlock");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeletePublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeletePublicAccessBlockOutcomeCallable S3Client::DeletePublicAccessBlockCallable(const DeletePublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::DeletePublicAccessBlockAsync(const DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePublicAccessBlock(request), context);
    } );
}

GetBucketAccelerateConfigurationOutcome S3Client::GetBucketAccelerateConfiguration(const GetBucketAccelerateConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAccelerateConfiguration", "Required field: Bucket, is not set");
    return GetBucketAccelerateConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?accelerate");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketAccelerateConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketAccelerateConfigurationOutcomeCallable S3Client::GetBucketAccelerateConfigurationCallable(const GetBucketAccelerateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketAccelerateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketAccelerateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketAccelerateConfigurationAsync(const GetBucketAccelerateConfigurationRequest& request, const GetBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketAccelerateConfiguration(request), context);
    } );
}

GetBucketAclOutcome S3Client::GetBucketAcl(const GetBucketAclRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAcl", "Required field: Bucket, is not set");
    return GetBucketAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?acl");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketAclOutcomeCallable S3Client::GetBucketAclCallable(const GetBucketAclRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketAclOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketAcl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketAclAsync(const GetBucketAclRequest& request, const GetBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketAcl(request), context);
    } );
}

GetBucketAnalyticsConfigurationOutcome S3Client::GetBucketAnalyticsConfiguration(const GetBucketAnalyticsConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return GetBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return GetBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?analytics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketAnalyticsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketAnalyticsConfigurationOutcomeCallable S3Client::GetBucketAnalyticsConfigurationCallable(const GetBucketAnalyticsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketAnalyticsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketAnalyticsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketAnalyticsConfigurationAsync(const GetBucketAnalyticsConfigurationRequest& request, const GetBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketAnalyticsConfiguration(request), context);
    } );
}

GetBucketCorsOutcome S3Client::GetBucketCors(const GetBucketCorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketCors", "Required field: Bucket, is not set");
    return GetBucketCorsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?cors");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketCorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketCorsOutcomeCallable S3Client::GetBucketCorsCallable(const GetBucketCorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketCorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketCors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketCorsAsync(const GetBucketCorsRequest& request, const GetBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketCors(request), context);
    } );
}

GetBucketEncryptionOutcome S3Client::GetBucketEncryption(const GetBucketEncryptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketEncryption", "Required field: Bucket, is not set");
    return GetBucketEncryptionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?encryption");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketEncryptionOutcomeCallable S3Client::GetBucketEncryptionCallable(const GetBucketEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketEncryptionAsync(const GetBucketEncryptionRequest& request, const GetBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketEncryption(request), context);
    } );
}

GetBucketIntelligentTieringConfigurationOutcome S3Client::GetBucketIntelligentTieringConfiguration(const GetBucketIntelligentTieringConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return GetBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return GetBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketIntelligentTieringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketIntelligentTieringConfigurationOutcomeCallable S3Client::GetBucketIntelligentTieringConfigurationCallable(const GetBucketIntelligentTieringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketIntelligentTieringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketIntelligentTieringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketIntelligentTieringConfigurationAsync(const GetBucketIntelligentTieringConfigurationRequest& request, const GetBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketIntelligentTieringConfiguration(request), context);
    } );
}

GetBucketInventoryConfigurationOutcome S3Client::GetBucketInventoryConfiguration(const GetBucketInventoryConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return GetBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketInventoryConfiguration", "Required field: Id, is not set");
    return GetBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?inventory");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketInventoryConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketInventoryConfigurationOutcomeCallable S3Client::GetBucketInventoryConfigurationCallable(const GetBucketInventoryConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketInventoryConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketInventoryConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketInventoryConfigurationAsync(const GetBucketInventoryConfigurationRequest& request, const GetBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketInventoryConfiguration(request), context);
    } );
}

GetBucketLifecycleConfigurationOutcome S3Client::GetBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?lifecycle");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketLifecycleConfigurationOutcomeCallable S3Client::GetBucketLifecycleConfigurationCallable(const GetBucketLifecycleConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketLifecycleConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketLifecycleConfigurationAsync(const GetBucketLifecycleConfigurationRequest& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketLifecycleConfiguration(request), context);
    } );
}

GetBucketLocationOutcome S3Client::GetBucketLocation(const GetBucketLocationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLocation", "Required field: Bucket, is not set");
    return GetBucketLocationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?location");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketLocationOutcomeCallable S3Client::GetBucketLocationCallable(const GetBucketLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketLocationAsync(const GetBucketLocationRequest& request, const GetBucketLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketLocation(request), context);
    } );
}

GetBucketLoggingOutcome S3Client::GetBucketLogging(const GetBucketLoggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLogging", "Required field: Bucket, is not set");
    return GetBucketLoggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?logging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketLoggingOutcomeCallable S3Client::GetBucketLoggingCallable(const GetBucketLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketLoggingAsync(const GetBucketLoggingRequest& request, const GetBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketLogging(request), context);
    } );
}

GetBucketMetricsConfigurationOutcome S3Client::GetBucketMetricsConfiguration(const GetBucketMetricsConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return GetBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketMetricsConfiguration", "Required field: Id, is not set");
    return GetBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?metrics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketMetricsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketMetricsConfigurationOutcomeCallable S3Client::GetBucketMetricsConfigurationCallable(const GetBucketMetricsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketMetricsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketMetricsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketMetricsConfigurationAsync(const GetBucketMetricsConfigurationRequest& request, const GetBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketMetricsConfiguration(request), context);
    } );
}

GetBucketNotificationConfigurationOutcome S3Client::GetBucketNotificationConfiguration(const GetBucketNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketNotificationConfiguration", "Required field: Bucket, is not set");
    return GetBucketNotificationConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?notification");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketNotificationConfigurationOutcomeCallable S3Client::GetBucketNotificationConfigurationCallable(const GetBucketNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketNotificationConfigurationAsync(const GetBucketNotificationConfigurationRequest& request, const GetBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketNotificationConfiguration(request), context);
    } );
}

GetBucketOwnershipControlsOutcome S3Client::GetBucketOwnershipControls(const GetBucketOwnershipControlsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketOwnershipControls", "Required field: Bucket, is not set");
    return GetBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?ownershipControls");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketOwnershipControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketOwnershipControlsOutcomeCallable S3Client::GetBucketOwnershipControlsCallable(const GetBucketOwnershipControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketOwnershipControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketOwnershipControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketOwnershipControlsAsync(const GetBucketOwnershipControlsRequest& request, const GetBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketOwnershipControls(request), context);
    } );
}

GetBucketPolicyOutcome S3Client::GetBucketPolicy(const GetBucketPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicy", "Required field: Bucket, is not set");
    return GetBucketPolicyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?policy");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketPolicyOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketPolicyOutcomeCallable S3Client::GetBucketPolicyCallable(const GetBucketPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketPolicyAsync(const GetBucketPolicyRequest& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketPolicy(request), context);
    } );
}

GetBucketPolicyStatusOutcome S3Client::GetBucketPolicyStatus(const GetBucketPolicyStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicyStatus", "Required field: Bucket, is not set");
    return GetBucketPolicyStatusOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?policyStatus");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketPolicyStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketPolicyStatusOutcomeCallable S3Client::GetBucketPolicyStatusCallable(const GetBucketPolicyStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketPolicyStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketPolicyStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketPolicyStatusAsync(const GetBucketPolicyStatusRequest& request, const GetBucketPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketPolicyStatus(request), context);
    } );
}

GetBucketReplicationOutcome S3Client::GetBucketReplication(const GetBucketReplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketReplication", "Required field: Bucket, is not set");
    return GetBucketReplicationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?replication");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketReplicationOutcomeCallable S3Client::GetBucketReplicationCallable(const GetBucketReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketReplicationAsync(const GetBucketReplicationRequest& request, const GetBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketReplication(request), context);
    } );
}

GetBucketRequestPaymentOutcome S3Client::GetBucketRequestPayment(const GetBucketRequestPaymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketRequestPayment", "Required field: Bucket, is not set");
    return GetBucketRequestPaymentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?requestPayment");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketRequestPaymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketRequestPaymentOutcomeCallable S3Client::GetBucketRequestPaymentCallable(const GetBucketRequestPaymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketRequestPaymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketRequestPayment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketRequestPaymentAsync(const GetBucketRequestPaymentRequest& request, const GetBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketRequestPayment(request), context);
    } );
}

GetBucketTaggingOutcome S3Client::GetBucketTagging(const GetBucketTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketTagging", "Required field: Bucket, is not set");
    return GetBucketTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketTaggingOutcomeCallable S3Client::GetBucketTaggingCallable(const GetBucketTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketTaggingAsync(const GetBucketTaggingRequest& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketTagging(request), context);
    } );
}

GetBucketVersioningOutcome S3Client::GetBucketVersioning(const GetBucketVersioningRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketVersioning", "Required field: Bucket, is not set");
    return GetBucketVersioningOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?versioning");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketVersioningOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketVersioningOutcomeCallable S3Client::GetBucketVersioningCallable(const GetBucketVersioningRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketVersioningOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketVersioning(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketVersioningAsync(const GetBucketVersioningRequest& request, const GetBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketVersioning(request), context);
    } );
}

GetBucketWebsiteOutcome S3Client::GetBucketWebsite(const GetBucketWebsiteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketWebsite", "Required field: Bucket, is not set");
    return GetBucketWebsiteOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?website");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketWebsiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketWebsiteOutcomeCallable S3Client::GetBucketWebsiteCallable(const GetBucketWebsiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketWebsiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketWebsite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetBucketWebsiteAsync(const GetBucketWebsiteRequest& request, const GetBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketWebsite(request), context);
    } );
}

GetObjectOutcome S3Client::GetObject(const GetObjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObject", "Required field: Bucket, is not set");
    return GetObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObject", "Required field: Key, is not set");
    return GetObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return GetObjectOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectOutcomeCallable S3Client::GetObjectCallable(const GetObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetObjectAsync(const GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObject(request), context);
    } );
}

GetObjectAclOutcome S3Client::GetObjectAcl(const GetObjectAclRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAcl", "Required field: Bucket, is not set");
    return GetObjectAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAcl", "Required field: Key, is not set");
    return GetObjectAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?acl");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectAclOutcomeCallable S3Client::GetObjectAclCallable(const GetObjectAclRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectAclOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectAcl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetObjectAclAsync(const GetObjectAclRequest& request, const GetObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectAcl(request), context);
    } );
}

GetObjectAttributesOutcome S3Client::GetObjectAttributes(const GetObjectAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: Bucket, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: Key, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.ObjectAttributesHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: ObjectAttributes, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectAttributes]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?attributes");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectAttributesOutcomeCallable S3Client::GetObjectAttributesCallable(const GetObjectAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetObjectAttributesAsync(const GetObjectAttributesRequest& request, const GetObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectAttributes(request), context);
    } );
}

GetObjectLegalHoldOutcome S3Client::GetObjectLegalHold(const GetObjectLegalHoldRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLegalHold", "Required field: Bucket, is not set");
    return GetObjectLegalHoldOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLegalHold", "Required field: Key, is not set");
    return GetObjectLegalHoldOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?legal-hold");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectLegalHoldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectLegalHoldOutcomeCallable S3Client::GetObjectLegalHoldCallable(const GetObjectLegalHoldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectLegalHoldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectLegalHold(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetObjectLegalHoldAsync(const GetObjectLegalHoldRequest& request, const GetObjectLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectLegalHold(request), context);
    } );
}

GetObjectLockConfigurationOutcome S3Client::GetObjectLockConfiguration(const GetObjectLockConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLockConfiguration", "Required field: Bucket, is not set");
    return GetObjectLockConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?object-lock");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectLockConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectLockConfigurationOutcomeCallable S3Client::GetObjectLockConfigurationCallable(const GetObjectLockConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectLockConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectLockConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetObjectLockConfigurationAsync(const GetObjectLockConfigurationRequest& request, const GetObjectLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectLockConfiguration(request), context);
    } );
}

GetObjectRetentionOutcome S3Client::GetObjectRetention(const GetObjectRetentionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectRetention", "Required field: Bucket, is not set");
    return GetObjectRetentionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectRetention", "Required field: Key, is not set");
    return GetObjectRetentionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?retention");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectRetentionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectRetentionOutcomeCallable S3Client::GetObjectRetentionCallable(const GetObjectRetentionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectRetentionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectRetention(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetObjectRetentionAsync(const GetObjectRetentionRequest& request, const GetObjectRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectRetention(request), context);
    } );
}

GetObjectTaggingOutcome S3Client::GetObjectTagging(const GetObjectTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTagging", "Required field: Bucket, is not set");
    return GetObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTagging", "Required field: Key, is not set");
    return GetObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectTaggingOutcomeCallable S3Client::GetObjectTaggingCallable(const GetObjectTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetObjectTaggingAsync(const GetObjectTaggingRequest& request, const GetObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectTagging(request), context);
    } );
}

GetObjectTorrentOutcome S3Client::GetObjectTorrent(const GetObjectTorrentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectTorrent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTorrent", "Required field: Bucket, is not set");
    return GetObjectTorrentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTorrent", "Required field: Key, is not set");
    return GetObjectTorrentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectTorrent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?torrent");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectTorrentOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectTorrentOutcomeCallable S3Client::GetObjectTorrentCallable(const GetObjectTorrentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectTorrentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectTorrent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetObjectTorrentAsync(const GetObjectTorrentRequest& request, const GetObjectTorrentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectTorrent(request), context);
    } );
}

GetPublicAccessBlockOutcome S3Client::GetPublicAccessBlock(const GetPublicAccessBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Required field: Bucket, is not set");
    return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?publicAccessBlock");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetPublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetPublicAccessBlockOutcomeCallable S3Client::GetPublicAccessBlockCallable(const GetPublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetPublicAccessBlockAsync(const GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPublicAccessBlock(request), context);
    } );
}

HeadBucketOutcome S3Client::HeadBucket(const HeadBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HeadBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadBucket", "Required field: Bucket, is not set");
    return HeadBucketOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HeadBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return HeadBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_HEAD));
}

HeadBucketOutcomeCallable S3Client::HeadBucketCallable(const HeadBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< HeadBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->HeadBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::HeadBucketAsync(const HeadBucketRequest& request, const HeadBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, HeadBucket(request), context);
    } );
}

HeadObjectOutcome S3Client::HeadObject(const HeadObjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HeadObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadObject", "Required field: Bucket, is not set");
    return HeadObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadObject", "Required field: Key, is not set");
    return HeadObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HeadObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return HeadObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_HEAD));
}

HeadObjectOutcomeCallable S3Client::HeadObjectCallable(const HeadObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< HeadObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->HeadObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::HeadObjectAsync(const HeadObjectRequest& request, const HeadObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, HeadObject(request), context);
    } );
}

ListBucketAnalyticsConfigurationsOutcome S3Client::ListBucketAnalyticsConfigurations(const ListBucketAnalyticsConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketAnalyticsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketAnalyticsConfigurations", "Required field: Bucket, is not set");
    return ListBucketAnalyticsConfigurationsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketAnalyticsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?analytics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListBucketAnalyticsConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListBucketAnalyticsConfigurationsOutcomeCallable S3Client::ListBucketAnalyticsConfigurationsCallable(const ListBucketAnalyticsConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBucketAnalyticsConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBucketAnalyticsConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::ListBucketAnalyticsConfigurationsAsync(const ListBucketAnalyticsConfigurationsRequest& request, const ListBucketAnalyticsConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBucketAnalyticsConfigurations(request), context);
    } );
}

ListBucketIntelligentTieringConfigurationsOutcome S3Client::ListBucketIntelligentTieringConfigurations(const ListBucketIntelligentTieringConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketIntelligentTieringConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketIntelligentTieringConfigurations", "Required field: Bucket, is not set");
    return ListBucketIntelligentTieringConfigurationsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketIntelligentTieringConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListBucketIntelligentTieringConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListBucketIntelligentTieringConfigurationsOutcomeCallable S3Client::ListBucketIntelligentTieringConfigurationsCallable(const ListBucketIntelligentTieringConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBucketIntelligentTieringConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBucketIntelligentTieringConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::ListBucketIntelligentTieringConfigurationsAsync(const ListBucketIntelligentTieringConfigurationsRequest& request, const ListBucketIntelligentTieringConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBucketIntelligentTieringConfigurations(request), context);
    } );
}

ListBucketInventoryConfigurationsOutcome S3Client::ListBucketInventoryConfigurations(const ListBucketInventoryConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketInventoryConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketInventoryConfigurations", "Required field: Bucket, is not set");
    return ListBucketInventoryConfigurationsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketInventoryConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?inventory");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListBucketInventoryConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListBucketInventoryConfigurationsOutcomeCallable S3Client::ListBucketInventoryConfigurationsCallable(const ListBucketInventoryConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBucketInventoryConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBucketInventoryConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::ListBucketInventoryConfigurationsAsync(const ListBucketInventoryConfigurationsRequest& request, const ListBucketInventoryConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBucketInventoryConfigurations(request), context);
    } );
}

ListBucketMetricsConfigurationsOutcome S3Client::ListBucketMetricsConfigurations(const ListBucketMetricsConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketMetricsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketMetricsConfigurations", "Required field: Bucket, is not set");
    return ListBucketMetricsConfigurationsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketMetricsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?metrics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListBucketMetricsConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListBucketMetricsConfigurationsOutcomeCallable S3Client::ListBucketMetricsConfigurationsCallable(const ListBucketMetricsConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBucketMetricsConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBucketMetricsConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::ListBucketMetricsConfigurationsAsync(const ListBucketMetricsConfigurationsRequest& request, const ListBucketMetricsConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBucketMetricsConfigurations(request), context);
    } );
}

ListBucketsOutcome S3Client::ListBuckets() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBucketsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), "ListBuckets", Aws::Http::HttpMethod::HTTP_GET));
}

ListBucketsOutcomeCallable S3Client::ListBucketsCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBucketsOutcome() > >(ALLOCATION_TAG, [this](){ return this->ListBuckets(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::ListBucketsAsync(const ListBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, ListBuckets(), context);
    } );
}

ListMultipartUploadsOutcome S3Client::ListMultipartUploads(const ListMultipartUploadsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMultipartUploads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: Bucket, is not set");
    return ListMultipartUploadsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMultipartUploads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?uploads");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListMultipartUploadsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListMultipartUploadsOutcomeCallable S3Client::ListMultipartUploadsCallable(const ListMultipartUploadsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMultipartUploadsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMultipartUploads(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::ListMultipartUploadsAsync(const ListMultipartUploadsRequest& request, const ListMultipartUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMultipartUploads(request), context);
    } );
}

ListObjectVersionsOutcome S3Client::ListObjectVersions(const ListObjectVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjectVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectVersions", "Required field: Bucket, is not set");
    return ListObjectVersionsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListObjectVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?versions");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListObjectVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListObjectVersionsOutcomeCallable S3Client::ListObjectVersionsCallable(const ListObjectVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjectVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::ListObjectVersionsAsync(const ListObjectVersionsRequest& request, const ListObjectVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListObjectVersions(request), context);
    } );
}

ListObjectsOutcome S3Client::ListObjects(const ListObjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjects", "Required field: Bucket, is not set");
    return ListObjectsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListObjectsOutcomeCallable S3Client::ListObjectsCallable(const ListObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::ListObjectsAsync(const ListObjectsRequest& request, const ListObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListObjects(request), context);
    } );
}

ListObjectsV2Outcome S3Client::ListObjectsV2(const ListObjectsV2Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjectsV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectsV2", "Required field: Bucket, is not set");
    return ListObjectsV2Outcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListObjectsV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?list-type=2");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListObjectsV2Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListObjectsV2OutcomeCallable S3Client::ListObjectsV2Callable(const ListObjectsV2Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectsV2Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjectsV2(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::ListObjectsV2Async(const ListObjectsV2Request& request, const ListObjectsV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListObjectsV2(request), context);
    } );
}

ListPartsOutcome S3Client::ListParts(const ListPartsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: Bucket, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: Key, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: UploadId, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return ListPartsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListPartsOutcomeCallable S3Client::ListPartsCallable(const ListPartsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPartsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListParts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::ListPartsAsync(const ListPartsRequest& request, const ListPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListParts(request), context);
    } );
}

PutBucketAccelerateConfigurationOutcome S3Client::PutBucketAccelerateConfiguration(const PutBucketAccelerateConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAccelerateConfiguration", "Required field: Bucket, is not set");
    return PutBucketAccelerateConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?accelerate");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketAccelerateConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketAccelerateConfigurationOutcomeCallable S3Client::PutBucketAccelerateConfigurationCallable(const PutBucketAccelerateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketAccelerateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketAccelerateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketAccelerateConfigurationAsync(const PutBucketAccelerateConfigurationRequest& request, const PutBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketAccelerateConfiguration(request), context);
    } );
}

PutBucketAclOutcome S3Client::PutBucketAcl(const PutBucketAclRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAcl", "Required field: Bucket, is not set");
    return PutBucketAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?acl");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketAclOutcomeCallable S3Client::PutBucketAclCallable(const PutBucketAclRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketAclOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketAcl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketAclAsync(const PutBucketAclRequest& request, const PutBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketAcl(request), context);
    } );
}

PutBucketAnalyticsConfigurationOutcome S3Client::PutBucketAnalyticsConfiguration(const PutBucketAnalyticsConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return PutBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return PutBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?analytics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketAnalyticsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketAnalyticsConfigurationOutcomeCallable S3Client::PutBucketAnalyticsConfigurationCallable(const PutBucketAnalyticsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketAnalyticsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketAnalyticsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketAnalyticsConfigurationAsync(const PutBucketAnalyticsConfigurationRequest& request, const PutBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketAnalyticsConfiguration(request), context);
    } );
}

PutBucketCorsOutcome S3Client::PutBucketCors(const PutBucketCorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketCors", "Required field: Bucket, is not set");
    return PutBucketCorsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?cors");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketCorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketCorsOutcomeCallable S3Client::PutBucketCorsCallable(const PutBucketCorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketCorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketCors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketCorsAsync(const PutBucketCorsRequest& request, const PutBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketCors(request), context);
    } );
}

PutBucketEncryptionOutcome S3Client::PutBucketEncryption(const PutBucketEncryptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketEncryption", "Required field: Bucket, is not set");
    return PutBucketEncryptionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?encryption");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketEncryptionOutcomeCallable S3Client::PutBucketEncryptionCallable(const PutBucketEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketEncryptionAsync(const PutBucketEncryptionRequest& request, const PutBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketEncryption(request), context);
    } );
}

PutBucketIntelligentTieringConfigurationOutcome S3Client::PutBucketIntelligentTieringConfiguration(const PutBucketIntelligentTieringConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return PutBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return PutBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketIntelligentTieringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketIntelligentTieringConfigurationOutcomeCallable S3Client::PutBucketIntelligentTieringConfigurationCallable(const PutBucketIntelligentTieringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketIntelligentTieringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketIntelligentTieringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketIntelligentTieringConfigurationAsync(const PutBucketIntelligentTieringConfigurationRequest& request, const PutBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketIntelligentTieringConfiguration(request), context);
    } );
}

PutBucketInventoryConfigurationOutcome S3Client::PutBucketInventoryConfiguration(const PutBucketInventoryConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return PutBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketInventoryConfiguration", "Required field: Id, is not set");
    return PutBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?inventory");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketInventoryConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketInventoryConfigurationOutcomeCallable S3Client::PutBucketInventoryConfigurationCallable(const PutBucketInventoryConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketInventoryConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketInventoryConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketInventoryConfigurationAsync(const PutBucketInventoryConfigurationRequest& request, const PutBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketInventoryConfiguration(request), context);
    } );
}

PutBucketLifecycleConfigurationOutcome S3Client::PutBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?lifecycle");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketLifecycleConfigurationOutcomeCallable S3Client::PutBucketLifecycleConfigurationCallable(const PutBucketLifecycleConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketLifecycleConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketLifecycleConfigurationAsync(const PutBucketLifecycleConfigurationRequest& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketLifecycleConfiguration(request), context);
    } );
}

PutBucketLoggingOutcome S3Client::PutBucketLogging(const PutBucketLoggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketLogging", "Required field: Bucket, is not set");
    return PutBucketLoggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?logging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketLoggingOutcomeCallable S3Client::PutBucketLoggingCallable(const PutBucketLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketLoggingAsync(const PutBucketLoggingRequest& request, const PutBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketLogging(request), context);
    } );
}

PutBucketMetricsConfigurationOutcome S3Client::PutBucketMetricsConfiguration(const PutBucketMetricsConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return PutBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketMetricsConfiguration", "Required field: Id, is not set");
    return PutBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?metrics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketMetricsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketMetricsConfigurationOutcomeCallable S3Client::PutBucketMetricsConfigurationCallable(const PutBucketMetricsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketMetricsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketMetricsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketMetricsConfigurationAsync(const PutBucketMetricsConfigurationRequest& request, const PutBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketMetricsConfiguration(request), context);
    } );
}

PutBucketNotificationConfigurationOutcome S3Client::PutBucketNotificationConfiguration(const PutBucketNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketNotificationConfiguration", "Required field: Bucket, is not set");
    return PutBucketNotificationConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?notification");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketNotificationConfigurationOutcomeCallable S3Client::PutBucketNotificationConfigurationCallable(const PutBucketNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketNotificationConfigurationAsync(const PutBucketNotificationConfigurationRequest& request, const PutBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketNotificationConfiguration(request), context);
    } );
}

PutBucketOwnershipControlsOutcome S3Client::PutBucketOwnershipControls(const PutBucketOwnershipControlsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketOwnershipControls", "Required field: Bucket, is not set");
    return PutBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?ownershipControls");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketOwnershipControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketOwnershipControlsOutcomeCallable S3Client::PutBucketOwnershipControlsCallable(const PutBucketOwnershipControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketOwnershipControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketOwnershipControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketOwnershipControlsAsync(const PutBucketOwnershipControlsRequest& request, const PutBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketOwnershipControls(request), context);
    } );
}

PutBucketPolicyOutcome S3Client::PutBucketPolicy(const PutBucketPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketPolicy", "Required field: Bucket, is not set");
    return PutBucketPolicyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?policy");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketPolicyOutcomeCallable S3Client::PutBucketPolicyCallable(const PutBucketPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketPolicyAsync(const PutBucketPolicyRequest& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketPolicy(request), context);
    } );
}

PutBucketReplicationOutcome S3Client::PutBucketReplication(const PutBucketReplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketReplication", "Required field: Bucket, is not set");
    return PutBucketReplicationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?replication");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketReplicationOutcomeCallable S3Client::PutBucketReplicationCallable(const PutBucketReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketReplicationAsync(const PutBucketReplicationRequest& request, const PutBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketReplication(request), context);
    } );
}

PutBucketRequestPaymentOutcome S3Client::PutBucketRequestPayment(const PutBucketRequestPaymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketRequestPayment", "Required field: Bucket, is not set");
    return PutBucketRequestPaymentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?requestPayment");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketRequestPaymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketRequestPaymentOutcomeCallable S3Client::PutBucketRequestPaymentCallable(const PutBucketRequestPaymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketRequestPaymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketRequestPayment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketRequestPaymentAsync(const PutBucketRequestPaymentRequest& request, const PutBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketRequestPayment(request), context);
    } );
}

PutBucketTaggingOutcome S3Client::PutBucketTagging(const PutBucketTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketTagging", "Required field: Bucket, is not set");
    return PutBucketTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketTaggingOutcomeCallable S3Client::PutBucketTaggingCallable(const PutBucketTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketTaggingAsync(const PutBucketTaggingRequest& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketTagging(request), context);
    } );
}

PutBucketVersioningOutcome S3Client::PutBucketVersioning(const PutBucketVersioningRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketVersioning", "Required field: Bucket, is not set");
    return PutBucketVersioningOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?versioning");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketVersioningOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketVersioningOutcomeCallable S3Client::PutBucketVersioningCallable(const PutBucketVersioningRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketVersioningOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketVersioning(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketVersioningAsync(const PutBucketVersioningRequest& request, const PutBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketVersioning(request), context);
    } );
}

PutBucketWebsiteOutcome S3Client::PutBucketWebsite(const PutBucketWebsiteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketWebsite", "Required field: Bucket, is not set");
    return PutBucketWebsiteOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?website");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketWebsiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketWebsiteOutcomeCallable S3Client::PutBucketWebsiteCallable(const PutBucketWebsiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketWebsiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketWebsite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutBucketWebsiteAsync(const PutBucketWebsiteRequest& request, const PutBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketWebsite(request), context);
    } );
}

PutObjectOutcome S3Client::PutObject(const PutObjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: Bucket, is not set");
    return PutObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: Key, is not set");
    return PutObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return PutObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutObjectOutcomeCallable S3Client::PutObjectCallable(const PutObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutObjectAsync(const PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObject(request), context);
    } );
}

PutObjectAclOutcome S3Client::PutObjectAcl(const PutObjectAclRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectAcl", "Required field: Bucket, is not set");
    return PutObjectAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectAcl", "Required field: Key, is not set");
    return PutObjectAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?acl");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutObjectAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutObjectAclOutcomeCallable S3Client::PutObjectAclCallable(const PutObjectAclRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectAclOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObjectAcl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutObjectAclAsync(const PutObjectAclRequest& request, const PutObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObjectAcl(request), context);
    } );
}

PutObjectLegalHoldOutcome S3Client::PutObjectLegalHold(const PutObjectLegalHoldRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLegalHold", "Required field: Bucket, is not set");
    return PutObjectLegalHoldOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLegalHold", "Required field: Key, is not set");
    return PutObjectLegalHoldOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?legal-hold");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutObjectLegalHoldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutObjectLegalHoldOutcomeCallable S3Client::PutObjectLegalHoldCallable(const PutObjectLegalHoldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectLegalHoldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObjectLegalHold(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutObjectLegalHoldAsync(const PutObjectLegalHoldRequest& request, const PutObjectLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObjectLegalHold(request), context);
    } );
}

PutObjectLockConfigurationOutcome S3Client::PutObjectLockConfiguration(const PutObjectLockConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLockConfiguration", "Required field: Bucket, is not set");
    return PutObjectLockConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?object-lock");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutObjectLockConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutObjectLockConfigurationOutcomeCallable S3Client::PutObjectLockConfigurationCallable(const PutObjectLockConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectLockConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObjectLockConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutObjectLockConfigurationAsync(const PutObjectLockConfigurationRequest& request, const PutObjectLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObjectLockConfiguration(request), context);
    } );
}

PutObjectRetentionOutcome S3Client::PutObjectRetention(const PutObjectRetentionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectRetention", "Required field: Bucket, is not set");
    return PutObjectRetentionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectRetention", "Required field: Key, is not set");
    return PutObjectRetentionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?retention");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutObjectRetentionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutObjectRetentionOutcomeCallable S3Client::PutObjectRetentionCallable(const PutObjectRetentionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectRetentionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObjectRetention(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutObjectRetentionAsync(const PutObjectRetentionRequest& request, const PutObjectRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObjectRetention(request), context);
    } );
}

PutObjectTaggingOutcome S3Client::PutObjectTagging(const PutObjectTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectTagging", "Required field: Bucket, is not set");
    return PutObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectTagging", "Required field: Key, is not set");
    return PutObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutObjectTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutObjectTaggingOutcomeCallable S3Client::PutObjectTaggingCallable(const PutObjectTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObjectTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutObjectTaggingAsync(const PutObjectTaggingRequest& request, const PutObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObjectTagging(request), context);
    } );
}

PutPublicAccessBlockOutcome S3Client::PutPublicAccessBlock(const PutPublicAccessBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Required field: Bucket, is not set");
    return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?publicAccessBlock");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutPublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutPublicAccessBlockOutcomeCallable S3Client::PutPublicAccessBlockCallable(const PutPublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutPublicAccessBlockAsync(const PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutPublicAccessBlock(request), context);
    } );
}

RestoreObjectOutcome S3Client::RestoreObject(const RestoreObjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreObject", "Required field: Bucket, is not set");
    return RestoreObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreObject", "Required field: Key, is not set");
    return RestoreObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?restore");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return RestoreObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreObjectOutcomeCallable S3Client::RestoreObjectCallable(const RestoreObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::RestoreObjectAsync(const RestoreObjectRequest& request, const RestoreObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreObject(request), context);
    } );
}

SelectObjectContentOutcome S3Client::SelectObjectContent(SelectObjectContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SelectObjectContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SelectObjectContent", "Required field: Bucket, is not set");
    return SelectObjectContentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SelectObjectContent", "Required field: Key, is not set");
    return SelectObjectContentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SelectObjectContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?select&select-type=2");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );
  return SelectObjectContentOutcome(MakeRequestWithEventStream(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SelectObjectContentOutcomeCallable S3Client::SelectObjectContentCallable(SelectObjectContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SelectObjectContentOutcome() > >(ALLOCATION_TAG, [this, &request](){ return this->SelectObjectContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::SelectObjectContentAsync(SelectObjectContentRequest& request, const SelectObjectContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, &request, handler, context]()
    {
      handler(this, request, SelectObjectContent(request), context);
    } );
}

UploadPartOutcome S3Client::UploadPart(const UploadPartRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: Bucket, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: Key, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.PartNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: PartNumber, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartNumber]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: UploadId, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UploadPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return UploadPartOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UploadPartOutcomeCallable S3Client::UploadPartCallable(const UploadPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::UploadPartAsync(const UploadPartRequest& request, const UploadPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UploadPart(request), context);
    } );
}

UploadPartCopyOutcome S3Client::UploadPartCopy(const UploadPartCopyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadPartCopy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: Bucket, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.CopySourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: CopySource, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopySource]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: Key, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.PartNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: PartNumber, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartNumber]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: UploadId, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UploadPartCopy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return UploadPartCopyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UploadPartCopyOutcomeCallable S3Client::UploadPartCopyCallable(const UploadPartCopyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadPartCopyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadPartCopy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::UploadPartCopyAsync(const UploadPartCopyRequest& request, const UploadPartCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UploadPartCopy(request), context);
    } );
}

WriteGetObjectResponseOutcome S3Client::WriteGetObjectResponse(const WriteGetObjectResponseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, WriteGetObjectResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RequestRouteHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "Required field: RequestRoute, is not set");
    return WriteGetObjectResponseOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestRoute]", false));
  }
  if (!request.RequestTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "Required field: RequestToken, is not set");
    return WriteGetObjectResponseOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, WriteGetObjectResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetRequestRoute() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), WriteGetObjectResponseOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/WriteGetObjectResponse");
  return WriteGetObjectResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

WriteGetObjectResponseOutcomeCallable S3Client::WriteGetObjectResponseCallable(const WriteGetObjectResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< WriteGetObjectResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->WriteGetObjectResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::WriteGetObjectResponseAsync(const WriteGetObjectResponseRequest& request, const WriteGetObjectResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, WriteGetObjectResponse(request), context);
    } );
}



#include<aws/core/utils/HashingUtils.h>
Aws::String S3Client::GeneratePresignedUrl(const Aws::String& bucket,
                                           const Aws::String& key,
                                           Aws::Http::HttpMethod method,
                                           uint64_t expirationInSeconds)
{
    return GeneratePresignedUrl(bucket, key, method, {}, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrl(const Aws::String& bucket,
                                           const Aws::String& key,
                                           Aws::Http::HttpMethod method,
                                           const Http::HeaderValueCollection& customizedHeaders,
                                           uint64_t expirationInSeconds)
{
    if (!m_endpointProvider)
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
        return {};
    }
    ResolveEndpointOutcome computeEndpointOutcome = m_endpointProvider->ResolveEndpoint({{Aws::String("Bucket"), bucket}});
    if (!computeEndpointOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError().GetMessage());
        return {};
    }
    Aws::Endpoint::AWSEndpoint& endpoint = computeEndpointOutcome.GetResult();
    URI uri(endpoint.GetURL());
    uri.SetPath(uri.GetPath() + "/" + key);
    endpoint.SetURL(uri.GetURIString());
    return AWSClient::GeneratePresignedUrl(endpoint, method, customizedHeaders, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSES3(const Aws::String& bucket,
                                                    const Aws::String& key,
                                                    Aws::Http::HttpMethod method,
                                                    uint64_t expirationInSeconds)
{
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
    return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSES3(const Aws::String& bucket,
                                                    const Aws::String& key,
                                                    Aws::Http::HttpMethod method,
                                                    Http::HeaderValueCollection customizedHeaders,
                                                    uint64_t expirationInSeconds)
{
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
    return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket,
                                                     const Aws::String& key,
                                                     Aws::Http::HttpMethod method,
                                                     const Aws::String& kmsMasterKeyId,
                                                     uint64_t expirationInSeconds)
{
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::aws_kms));
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_AWS_KMS_KEY_ID, kmsMasterKeyId);
    return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket,
                                                     const Aws::String& key,
                                                     Aws::Http::HttpMethod method,
                                                     Http::HeaderValueCollection customizedHeaders,
                                                     const Aws::String& kmsMasterKeyId,
                                                     uint64_t expirationInSeconds)
{
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::aws_kms));
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_AWS_KMS_KEY_ID, kmsMasterKeyId);
    return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEC(const Aws::String& bucket,
                                                   const Aws::String& key,
                                                   Aws::Http::HttpMethod method,
                                                   const Aws::String& base64EncodedAES256Key,
                                                   uint64_t expirationInSeconds)
{
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, base64EncodedAES256Key);
    Aws::Utils::ByteBuffer buffer = Aws::Utils::HashingUtils::Base64Decode(base64EncodedAES256Key);
    Aws::String strBuffer(reinterpret_cast<char*>(buffer.GetUnderlyingData()), buffer.GetLength());
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(strBuffer)));
    return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEC(const Aws::String& bucket,
                                                   const Aws::String& key,
                                                   Aws::Http::HttpMethod method,
                                                   Http::HeaderValueCollection customizedHeaders,
                                                   const Aws::String& base64EncodedAES256Key,
                                                   uint64_t expirationInSeconds)
{
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, base64EncodedAES256Key);
    Aws::Utils::ByteBuffer buffer = Aws::Utils::HashingUtils::Base64Decode(base64EncodedAES256Key);
    Aws::String strBuffer(reinterpret_cast<char*>(buffer.GetUnderlyingData()), buffer.GetLength());
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(strBuffer)));
    return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}


bool S3Client::MultipartUploadSupported() const
{
    return true;
}
