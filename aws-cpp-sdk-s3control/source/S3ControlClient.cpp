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
#include <aws/core/platform/Environment.h>

#include <aws/s3control/S3ControlClient.h>
#include <aws/s3control/S3ControlErrorMarshaller.h>
#include <aws/s3control/S3ControlEndpointProvider.h>
#include <aws/s3control/model/CreateAccessPointRequest.h>
#include <aws/s3control/model/CreateAccessPointForObjectLambdaRequest.h>
#include <aws/s3control/model/CreateBucketRequest.h>
#include <aws/s3control/model/CreateJobRequest.h>
#include <aws/s3control/model/CreateMultiRegionAccessPointRequest.h>
#include <aws/s3control/model/DeleteAccessPointRequest.h>
#include <aws/s3control/model/DeleteAccessPointForObjectLambdaRequest.h>
#include <aws/s3control/model/DeleteAccessPointPolicyRequest.h>
#include <aws/s3control/model/DeleteAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/s3control/model/DeleteBucketRequest.h>
#include <aws/s3control/model/DeleteBucketLifecycleConfigurationRequest.h>
#include <aws/s3control/model/DeleteBucketPolicyRequest.h>
#include <aws/s3control/model/DeleteBucketTaggingRequest.h>
#include <aws/s3control/model/DeleteJobTaggingRequest.h>
#include <aws/s3control/model/DeleteMultiRegionAccessPointRequest.h>
#include <aws/s3control/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3control/model/DeleteStorageLensConfigurationRequest.h>
#include <aws/s3control/model/DeleteStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/DescribeJobRequest.h>
#include <aws/s3control/model/DescribeMultiRegionAccessPointOperationRequest.h>
#include <aws/s3control/model/GetAccessPointRequest.h>
#include <aws/s3control/model/GetAccessPointConfigurationForObjectLambdaRequest.h>
#include <aws/s3control/model/GetAccessPointForObjectLambdaRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusForObjectLambdaRequest.h>
#include <aws/s3control/model/GetBucketRequest.h>
#include <aws/s3control/model/GetBucketLifecycleConfigurationRequest.h>
#include <aws/s3control/model/GetBucketPolicyRequest.h>
#include <aws/s3control/model/GetBucketTaggingRequest.h>
#include <aws/s3control/model/GetBucketVersioningRequest.h>
#include <aws/s3control/model/GetJobTaggingRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointPolicyRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointPolicyStatusRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointRoutesRequest.h>
#include <aws/s3control/model/GetPublicAccessBlockRequest.h>
#include <aws/s3control/model/GetStorageLensConfigurationRequest.h>
#include <aws/s3control/model/GetStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/ListAccessPointsRequest.h>
#include <aws/s3control/model/ListAccessPointsForObjectLambdaRequest.h>
#include <aws/s3control/model/ListJobsRequest.h>
#include <aws/s3control/model/ListMultiRegionAccessPointsRequest.h>
#include <aws/s3control/model/ListRegionalBucketsRequest.h>
#include <aws/s3control/model/ListStorageLensConfigurationsRequest.h>
#include <aws/s3control/model/PutAccessPointConfigurationForObjectLambdaRequest.h>
#include <aws/s3control/model/PutAccessPointPolicyRequest.h>
#include <aws/s3control/model/PutAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/s3control/model/PutBucketLifecycleConfigurationRequest.h>
#include <aws/s3control/model/PutBucketPolicyRequest.h>
#include <aws/s3control/model/PutBucketTaggingRequest.h>
#include <aws/s3control/model/PutBucketVersioningRequest.h>
#include <aws/s3control/model/PutJobTaggingRequest.h>
#include <aws/s3control/model/PutMultiRegionAccessPointPolicyRequest.h>
#include <aws/s3control/model/PutPublicAccessBlockRequest.h>
#include <aws/s3control/model/PutStorageLensConfigurationRequest.h>
#include <aws/s3control/model/PutStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/SubmitMultiRegionAccessPointRoutesRequest.h>
#include <aws/s3control/model/UpdateJobPriorityRequest.h>
#include <aws/s3control/model/UpdateJobStatusRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::S3Control;
using namespace Aws::S3Control::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* S3ControlClient::SERVICE_NAME = "s3";
const char* S3ControlClient::ALLOCATION_TAG = "S3ControlClient";

S3ControlClient::S3ControlClient(const S3Control::S3ControlClientConfiguration& clientConfiguration,
                                 std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const AWSCredentials& credentials,
                                 std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider,
                                 const S3Control::S3ControlClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider,
                                 const S3Control::S3ControlClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  S3ControlClient::S3ControlClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
S3ControlClient::~S3ControlClient()
{
}

std::shared_ptr<S3ControlEndpointProviderBase>& S3ControlClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void S3ControlClient::init(const S3Control::S3ControlClientConfiguration& config)
{
  AWSClient::SetServiceClientName("S3 Control");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void S3ControlClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAccessPointOutcome S3ControlClient::CreateAccessPoint(const CreateAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPoint", "Required field: Name, is not set");
    return CreateAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPoint", "HostPrefix required field: AccountId has invalid value");
    return CreateAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return CreateAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

CreateAccessPointOutcomeCallable S3ControlClient::CreateAccessPointCallable(const CreateAccessPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccessPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccessPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::CreateAccessPointAsync(const CreateAccessPointRequest& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAccessPoint(request), context);
    } );
}

CreateAccessPointForObjectLambdaOutcome S3ControlClient::CreateAccessPointForObjectLambda(const CreateAccessPointForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPointForObjectLambda", "Required field: Name, is not set");
    return CreateAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPointForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return CreateAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateAccessPointForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return CreateAccessPointForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

CreateAccessPointForObjectLambdaOutcomeCallable S3ControlClient::CreateAccessPointForObjectLambdaCallable(const CreateAccessPointForObjectLambdaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccessPointForObjectLambdaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccessPointForObjectLambda(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::CreateAccessPointForObjectLambdaAsync(const CreateAccessPointForObjectLambdaRequest& request, const CreateAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAccessPointForObjectLambda(request), context);
    } );
}

CreateBucketOutcome S3ControlClient::CreateBucket(const CreateBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBucket", "Required field: Bucket, is not set");
    return CreateBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  return CreateBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

CreateBucketOutcomeCallable S3ControlClient::CreateBucketCallable(const CreateBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::CreateBucketAsync(const CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBucket(request), context);
    } );
}

CreateJobOutcome S3ControlClient::CreateJob(const CreateJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: AccountId, is not set");
    return CreateJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: AccountId has invalid value");
    return CreateJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateJobOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs");
  return CreateJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateJobOutcomeCallable S3ControlClient::CreateJobCallable(const CreateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateJob(request), context);
    } );
}

CreateMultiRegionAccessPointOutcome S3ControlClient::CreateMultiRegionAccessPoint(const CreateMultiRegionAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultiRegionAccessPoint", "Required field: AccountId, is not set");
    return CreateMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateMultiRegionAccessPoint", "Required field: AccountId has invalid value");
    return CreateMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateMultiRegionAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/create");
  return CreateMultiRegionAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateMultiRegionAccessPointOutcomeCallable S3ControlClient::CreateMultiRegionAccessPointCallable(const CreateMultiRegionAccessPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMultiRegionAccessPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMultiRegionAccessPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::CreateMultiRegionAccessPointAsync(const CreateMultiRegionAccessPointRequest& request, const CreateMultiRegionAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMultiRegionAccessPoint(request), context);
    } );
}

DeleteAccessPointOutcome S3ControlClient::DeleteAccessPoint(const DeleteAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "Required field: Name, is not set");
    return DeleteAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "HostPrefix required field: AccountId has invalid value");
    return DeleteAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteAccessPointOutcomeCallable S3ControlClient::DeleteAccessPointCallable(const DeleteAccessPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteAccessPointAsync(const DeleteAccessPointRequest& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccessPoint(request), context);
    } );
}

DeleteAccessPointForObjectLambdaOutcome S3ControlClient::DeleteAccessPointForObjectLambda(const DeleteAccessPointForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointForObjectLambda", "Required field: Name, is not set");
    return DeleteAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return DeleteAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteAccessPointForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteAccessPointForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteAccessPointForObjectLambdaOutcomeCallable S3ControlClient::DeleteAccessPointForObjectLambdaCallable(const DeleteAccessPointForObjectLambdaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessPointForObjectLambdaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessPointForObjectLambda(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteAccessPointForObjectLambdaAsync(const DeleteAccessPointForObjectLambdaRequest& request, const DeleteAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccessPointForObjectLambda(request), context);
    } );
}

DeleteAccessPointPolicyOutcome S3ControlClient::DeleteAccessPointPolicy(const DeleteAccessPointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicy", "Required field: Name, is not set");
    return DeleteAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicy", "HostPrefix required field: AccountId has invalid value");
    return DeleteAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteAccessPointPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return DeleteAccessPointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteAccessPointPolicyOutcomeCallable S3ControlClient::DeleteAccessPointPolicyCallable(const DeleteAccessPointPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessPointPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessPointPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteAccessPointPolicyAsync(const DeleteAccessPointPolicyRequest& request, const DeleteAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccessPointPolicy(request), context);
    } );
}

DeleteAccessPointPolicyForObjectLambdaOutcome S3ControlClient::DeleteAccessPointPolicyForObjectLambda(const DeleteAccessPointPolicyForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return DeleteAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicyForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return DeleteAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteAccessPointPolicyForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return DeleteAccessPointPolicyForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteAccessPointPolicyForObjectLambdaOutcomeCallable S3ControlClient::DeleteAccessPointPolicyForObjectLambdaCallable(const DeleteAccessPointPolicyForObjectLambdaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessPointPolicyForObjectLambdaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessPointPolicyForObjectLambda(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteAccessPointPolicyForObjectLambdaAsync(const DeleteAccessPointPolicyForObjectLambdaRequest& request, const DeleteAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccessPointPolicyForObjectLambda(request), context);
    } );
}

DeleteBucketOutcome S3ControlClient::DeleteBucket(const DeleteBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucket", "Required field: Bucket, is not set");
    return DeleteBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteBucket", "HostPrefix required field: AccountId has invalid value");
    return DeleteBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteBucketOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  return DeleteBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketOutcomeCallable S3ControlClient::DeleteBucketCallable(const DeleteBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteBucketAsync(const DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucket(request), context);
    } );
}

DeleteBucketLifecycleConfigurationOutcome S3ControlClient::DeleteBucketLifecycleConfiguration(const DeleteBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketLifecycleConfiguration", "HostPrefix required field: AccountId has invalid value");
    return DeleteBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteBucketLifecycleConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycleconfiguration");
  return DeleteBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketLifecycleConfigurationOutcomeCallable S3ControlClient::DeleteBucketLifecycleConfigurationCallable(const DeleteBucketLifecycleConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketLifecycleConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteBucketLifecycleConfigurationAsync(const DeleteBucketLifecycleConfigurationRequest& request, const DeleteBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketLifecycleConfiguration(request), context);
    } );
}

DeleteBucketPolicyOutcome S3ControlClient::DeleteBucketPolicy(const DeleteBucketPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "Required field: Bucket, is not set");
    return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "HostPrefix required field: AccountId has invalid value");
    return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteBucketPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return DeleteBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketPolicyOutcomeCallable S3ControlClient::DeleteBucketPolicyCallable(const DeleteBucketPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteBucketPolicyAsync(const DeleteBucketPolicyRequest& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketPolicy(request), context);
    } );
}

DeleteBucketTaggingOutcome S3ControlClient::DeleteBucketTagging(const DeleteBucketTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "Required field: Bucket, is not set");
    return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "HostPrefix required field: AccountId has invalid value");
    return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteBucketTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return DeleteBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketTaggingOutcomeCallable S3ControlClient::DeleteBucketTaggingCallable(const DeleteBucketTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteBucketTaggingAsync(const DeleteBucketTaggingRequest& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketTagging(request), context);
    } );
}

DeleteJobTaggingOutcome S3ControlClient::DeleteJobTagging(const DeleteJobTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobTagging", "Required field: AccountId, is not set");
    return DeleteJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobTagging", "Required field: JobId, is not set");
    return DeleteJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteJobTagging", "Required field: AccountId has invalid value");
    return DeleteJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteJobTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return DeleteJobTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteJobTaggingOutcomeCallable S3ControlClient::DeleteJobTaggingCallable(const DeleteJobTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJobTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteJobTaggingAsync(const DeleteJobTaggingRequest& request, const DeleteJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteJobTagging(request), context);
    } );
}

DeleteMultiRegionAccessPointOutcome S3ControlClient::DeleteMultiRegionAccessPoint(const DeleteMultiRegionAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMultiRegionAccessPoint", "Required field: AccountId, is not set");
    return DeleteMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteMultiRegionAccessPoint", "Required field: AccountId has invalid value");
    return DeleteMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteMultiRegionAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/delete");
  return DeleteMultiRegionAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteMultiRegionAccessPointOutcomeCallable S3ControlClient::DeleteMultiRegionAccessPointCallable(const DeleteMultiRegionAccessPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMultiRegionAccessPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMultiRegionAccessPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteMultiRegionAccessPointAsync(const DeleteMultiRegionAccessPointRequest& request, const DeleteMultiRegionAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMultiRegionAccessPoint(request), context);
    } );
}

DeletePublicAccessBlockOutcome S3ControlClient::DeletePublicAccessBlock(const DeletePublicAccessBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Required field: AccountId, is not set");
    return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Required field: AccountId has invalid value");
    return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeletePublicAccessBlockOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/configuration/publicAccessBlock");
  return DeletePublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeletePublicAccessBlockOutcomeCallable S3ControlClient::DeletePublicAccessBlockCallable(const DeletePublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeletePublicAccessBlockAsync(const DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePublicAccessBlock(request), context);
    } );
}

DeleteStorageLensConfigurationOutcome S3ControlClient::DeleteStorageLensConfiguration(const DeleteStorageLensConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfiguration", "Required field: ConfigId, is not set");
    return DeleteStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfiguration", "Required field: AccountId, is not set");
    return DeleteStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfiguration", "Required field: AccountId has invalid value");
    return DeleteStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteStorageLensConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  return DeleteStorageLensConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteStorageLensConfigurationOutcomeCallable S3ControlClient::DeleteStorageLensConfigurationCallable(const DeleteStorageLensConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStorageLensConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStorageLensConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteStorageLensConfigurationAsync(const DeleteStorageLensConfigurationRequest& request, const DeleteStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStorageLensConfiguration(request), context);
    } );
}

DeleteStorageLensConfigurationTaggingOutcome S3ControlClient::DeleteStorageLensConfigurationTagging(const DeleteStorageLensConfigurationTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfigurationTagging", "Required field: ConfigId, is not set");
    return DeleteStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfigurationTagging", "Required field: AccountId, is not set");
    return DeleteStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfigurationTagging", "Required field: AccountId has invalid value");
    return DeleteStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteStorageLensConfigurationTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return DeleteStorageLensConfigurationTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteStorageLensConfigurationTaggingOutcomeCallable S3ControlClient::DeleteStorageLensConfigurationTaggingCallable(const DeleteStorageLensConfigurationTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStorageLensConfigurationTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStorageLensConfigurationTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeleteStorageLensConfigurationTaggingAsync(const DeleteStorageLensConfigurationTaggingRequest& request, const DeleteStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStorageLensConfigurationTagging(request), context);
    } );
}

DescribeJobOutcome S3ControlClient::DescribeJob(const DescribeJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: AccountId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: JobId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: AccountId has invalid value");
    return DescribeJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeJobOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return DescribeJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

DescribeJobOutcomeCallable S3ControlClient::DescribeJobCallable(const DescribeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJob(request), context);
    } );
}

DescribeMultiRegionAccessPointOperationOutcome S3ControlClient::DescribeMultiRegionAccessPointOperation(const DescribeMultiRegionAccessPointOperationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMultiRegionAccessPointOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiRegionAccessPointOperation", "Required field: AccountId, is not set");
    return DescribeMultiRegionAccessPointOperationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RequestTokenARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiRegionAccessPointOperation", "Required field: RequestTokenARN, is not set");
    return DescribeMultiRegionAccessPointOperationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestTokenARN]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiRegionAccessPointOperation", "Required field: AccountId has invalid value");
    return DescribeMultiRegionAccessPointOperationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMultiRegionAccessPointOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeMultiRegionAccessPointOperationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetRequestTokenARN());
  return DescribeMultiRegionAccessPointOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

DescribeMultiRegionAccessPointOperationOutcomeCallable S3ControlClient::DescribeMultiRegionAccessPointOperationCallable(const DescribeMultiRegionAccessPointOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMultiRegionAccessPointOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMultiRegionAccessPointOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DescribeMultiRegionAccessPointOperationAsync(const DescribeMultiRegionAccessPointOperationRequest& request, const DescribeMultiRegionAccessPointOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMultiRegionAccessPointOperation(request), context);
    } );
}

GetAccessPointOutcome S3ControlClient::GetAccessPoint(const GetAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPoint", "Required field: Name, is not set");
    return GetAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPoint", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointOutcomeCallable S3ControlClient::GetAccessPointCallable(const GetAccessPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetAccessPointAsync(const GetAccessPointRequest& request, const GetAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccessPoint(request), context);
    } );
}

GetAccessPointConfigurationForObjectLambdaOutcome S3ControlClient::GetAccessPointConfigurationForObjectLambda(const GetAccessPointConfigurationForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointConfigurationForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointConfigurationForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointConfigurationForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointConfigurationForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointConfigurationForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return GetAccessPointConfigurationForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointConfigurationForObjectLambdaOutcomeCallable S3ControlClient::GetAccessPointConfigurationForObjectLambdaCallable(const GetAccessPointConfigurationForObjectLambdaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessPointConfigurationForObjectLambdaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessPointConfigurationForObjectLambda(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetAccessPointConfigurationForObjectLambdaAsync(const GetAccessPointConfigurationForObjectLambdaRequest& request, const GetAccessPointConfigurationForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccessPointConfigurationForObjectLambda(request), context);
    } );
}

GetAccessPointForObjectLambdaOutcome S3ControlClient::GetAccessPointForObjectLambda(const GetAccessPointForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetAccessPointForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointForObjectLambdaOutcomeCallable S3ControlClient::GetAccessPointForObjectLambdaCallable(const GetAccessPointForObjectLambdaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessPointForObjectLambdaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessPointForObjectLambda(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetAccessPointForObjectLambdaAsync(const GetAccessPointForObjectLambdaRequest& request, const GetAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccessPointForObjectLambda(request), context);
    } );
}

GetAccessPointPolicyOutcome S3ControlClient::GetAccessPointPolicy(const GetAccessPointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicy", "Required field: Name, is not set");
    return GetAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicy", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetAccessPointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointPolicyOutcomeCallable S3ControlClient::GetAccessPointPolicyCallable(const GetAccessPointPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessPointPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessPointPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetAccessPointPolicyAsync(const GetAccessPointPolicyRequest& request, const GetAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccessPointPolicy(request), context);
    } );
}

GetAccessPointPolicyForObjectLambdaOutcome S3ControlClient::GetAccessPointPolicyForObjectLambda(const GetAccessPointPolicyForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointPolicyForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetAccessPointPolicyForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointPolicyForObjectLambdaOutcomeCallable S3ControlClient::GetAccessPointPolicyForObjectLambdaCallable(const GetAccessPointPolicyForObjectLambdaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessPointPolicyForObjectLambdaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessPointPolicyForObjectLambda(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetAccessPointPolicyForObjectLambdaAsync(const GetAccessPointPolicyForObjectLambdaRequest& request, const GetAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccessPointPolicyForObjectLambda(request), context);
    } );
}

GetAccessPointPolicyStatusOutcome S3ControlClient::GetAccessPointPolicyStatus(const GetAccessPointPolicyStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatus", "Required field: Name, is not set");
    return GetAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatus", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointPolicyStatusOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policyStatus");
  return GetAccessPointPolicyStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointPolicyStatusOutcomeCallable S3ControlClient::GetAccessPointPolicyStatusCallable(const GetAccessPointPolicyStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessPointPolicyStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessPointPolicyStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetAccessPointPolicyStatusAsync(const GetAccessPointPolicyStatusRequest& request, const GetAccessPointPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccessPointPolicyStatus(request), context);
    } );
}

GetAccessPointPolicyStatusForObjectLambdaOutcome S3ControlClient::GetAccessPointPolicyStatusForObjectLambda(const GetAccessPointPolicyStatusForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointPolicyStatusForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatusForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointPolicyStatusForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatusForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointPolicyStatusForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointPolicyStatusForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointPolicyStatusForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policyStatus");
  return GetAccessPointPolicyStatusForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointPolicyStatusForObjectLambdaOutcomeCallable S3ControlClient::GetAccessPointPolicyStatusForObjectLambdaCallable(const GetAccessPointPolicyStatusForObjectLambdaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessPointPolicyStatusForObjectLambdaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessPointPolicyStatusForObjectLambda(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetAccessPointPolicyStatusForObjectLambdaAsync(const GetAccessPointPolicyStatusForObjectLambdaRequest& request, const GetAccessPointPolicyStatusForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccessPointPolicyStatusForObjectLambda(request), context);
    } );
}

GetBucketOutcome S3ControlClient::GetBucket(const GetBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucket", "Required field: Bucket, is not set");
    return GetBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetBucket", "HostPrefix required field: AccountId has invalid value");
    return GetBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetBucketOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  return GetBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketOutcomeCallable S3ControlClient::GetBucketCallable(const GetBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetBucketAsync(const GetBucketRequest& request, const GetBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucket(request), context);
    } );
}

GetBucketLifecycleConfigurationOutcome S3ControlClient::GetBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "HostPrefix required field: AccountId has invalid value");
    return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetBucketLifecycleConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycleconfiguration");
  return GetBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketLifecycleConfigurationOutcomeCallable S3ControlClient::GetBucketLifecycleConfigurationCallable(const GetBucketLifecycleConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketLifecycleConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetBucketLifecycleConfigurationAsync(const GetBucketLifecycleConfigurationRequest& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketLifecycleConfiguration(request), context);
    } );
}

GetBucketPolicyOutcome S3ControlClient::GetBucketPolicy(const GetBucketPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicy", "Required field: Bucket, is not set");
    return GetBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicy", "HostPrefix required field: AccountId has invalid value");
    return GetBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetBucketPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketPolicyOutcomeCallable S3ControlClient::GetBucketPolicyCallable(const GetBucketPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetBucketPolicyAsync(const GetBucketPolicyRequest& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketPolicy(request), context);
    } );
}

GetBucketTaggingOutcome S3ControlClient::GetBucketTagging(const GetBucketTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketTagging", "Required field: Bucket, is not set");
    return GetBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetBucketTagging", "HostPrefix required field: AccountId has invalid value");
    return GetBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetBucketTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return GetBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketTaggingOutcomeCallable S3ControlClient::GetBucketTaggingCallable(const GetBucketTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetBucketTaggingAsync(const GetBucketTaggingRequest& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketTagging(request), context);
    } );
}

GetBucketVersioningOutcome S3ControlClient::GetBucketVersioning(const GetBucketVersioningRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketVersioning", "Required field: Bucket, is not set");
    return GetBucketVersioningOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetBucketVersioning", "HostPrefix required field: AccountId has invalid value");
    return GetBucketVersioningOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetBucketVersioningOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versioning");
  return GetBucketVersioningOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketVersioningOutcomeCallable S3ControlClient::GetBucketVersioningCallable(const GetBucketVersioningRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketVersioningOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketVersioning(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetBucketVersioningAsync(const GetBucketVersioningRequest& request, const GetBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketVersioning(request), context);
    } );
}

GetJobTaggingOutcome S3ControlClient::GetJobTagging(const GetJobTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobTagging", "Required field: AccountId, is not set");
    return GetJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobTagging", "Required field: JobId, is not set");
    return GetJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetJobTagging", "Required field: AccountId has invalid value");
    return GetJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetJobTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return GetJobTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetJobTaggingOutcomeCallable S3ControlClient::GetJobTaggingCallable(const GetJobTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetJobTaggingAsync(const GetJobTaggingRequest& request, const GetJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetJobTagging(request), context);
    } );
}

GetMultiRegionAccessPointOutcome S3ControlClient::GetMultiRegionAccessPoint(const GetMultiRegionAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPoint", "Required field: Name, is not set");
    return GetMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPoint", "HostPrefix required field: AccountId has invalid value");
    return GetMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMultiRegionAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetName());
  return GetMultiRegionAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetMultiRegionAccessPointOutcomeCallable S3ControlClient::GetMultiRegionAccessPointCallable(const GetMultiRegionAccessPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMultiRegionAccessPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMultiRegionAccessPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetMultiRegionAccessPointAsync(const GetMultiRegionAccessPointRequest& request, const GetMultiRegionAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMultiRegionAccessPoint(request), context);
    } );
}

GetMultiRegionAccessPointPolicyOutcome S3ControlClient::GetMultiRegionAccessPointPolicy(const GetMultiRegionAccessPointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMultiRegionAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointPolicy", "Required field: Name, is not set");
    return GetMultiRegionAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointPolicy", "HostPrefix required field: AccountId has invalid value");
    return GetMultiRegionAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMultiRegionAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMultiRegionAccessPointPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetMultiRegionAccessPointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetMultiRegionAccessPointPolicyOutcomeCallable S3ControlClient::GetMultiRegionAccessPointPolicyCallable(const GetMultiRegionAccessPointPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMultiRegionAccessPointPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMultiRegionAccessPointPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetMultiRegionAccessPointPolicyAsync(const GetMultiRegionAccessPointPolicyRequest& request, const GetMultiRegionAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMultiRegionAccessPointPolicy(request), context);
    } );
}

GetMultiRegionAccessPointPolicyStatusOutcome S3ControlClient::GetMultiRegionAccessPointPolicyStatus(const GetMultiRegionAccessPointPolicyStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMultiRegionAccessPointPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointPolicyStatus", "Required field: Name, is not set");
    return GetMultiRegionAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointPolicyStatus", "HostPrefix required field: AccountId has invalid value");
    return GetMultiRegionAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMultiRegionAccessPointPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMultiRegionAccessPointPolicyStatusOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policystatus");
  return GetMultiRegionAccessPointPolicyStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetMultiRegionAccessPointPolicyStatusOutcomeCallable S3ControlClient::GetMultiRegionAccessPointPolicyStatusCallable(const GetMultiRegionAccessPointPolicyStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMultiRegionAccessPointPolicyStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMultiRegionAccessPointPolicyStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetMultiRegionAccessPointPolicyStatusAsync(const GetMultiRegionAccessPointPolicyStatusRequest& request, const GetMultiRegionAccessPointPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMultiRegionAccessPointPolicyStatus(request), context);
    } );
}

GetMultiRegionAccessPointRoutesOutcome S3ControlClient::GetMultiRegionAccessPointRoutes(const GetMultiRegionAccessPointRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMultiRegionAccessPointRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointRoutes", "Required field: AccountId, is not set");
    return GetMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.MrapHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointRoutes", "Required field: Mrap, is not set");
    return GetMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Mrap]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointRoutes", "Required field: AccountId has invalid value");
    return GetMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMultiRegionAccessPointRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMultiRegionAccessPointRoutesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetMrap());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  return GetMultiRegionAccessPointRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetMultiRegionAccessPointRoutesOutcomeCallable S3ControlClient::GetMultiRegionAccessPointRoutesCallable(const GetMultiRegionAccessPointRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMultiRegionAccessPointRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMultiRegionAccessPointRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetMultiRegionAccessPointRoutesAsync(const GetMultiRegionAccessPointRoutesRequest& request, const GetMultiRegionAccessPointRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMultiRegionAccessPointRoutes(request), context);
    } );
}

GetPublicAccessBlockOutcome S3ControlClient::GetPublicAccessBlock(const GetPublicAccessBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Required field: AccountId, is not set");
    return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Required field: AccountId has invalid value");
    return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetPublicAccessBlockOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/configuration/publicAccessBlock");
  return GetPublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetPublicAccessBlockOutcomeCallable S3ControlClient::GetPublicAccessBlockCallable(const GetPublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetPublicAccessBlockAsync(const GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPublicAccessBlock(request), context);
    } );
}

GetStorageLensConfigurationOutcome S3ControlClient::GetStorageLensConfiguration(const GetStorageLensConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfiguration", "Required field: ConfigId, is not set");
    return GetStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfiguration", "Required field: AccountId, is not set");
    return GetStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfiguration", "Required field: AccountId has invalid value");
    return GetStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetStorageLensConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  return GetStorageLensConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetStorageLensConfigurationOutcomeCallable S3ControlClient::GetStorageLensConfigurationCallable(const GetStorageLensConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStorageLensConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStorageLensConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetStorageLensConfigurationAsync(const GetStorageLensConfigurationRequest& request, const GetStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStorageLensConfiguration(request), context);
    } );
}

GetStorageLensConfigurationTaggingOutcome S3ControlClient::GetStorageLensConfigurationTagging(const GetStorageLensConfigurationTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfigurationTagging", "Required field: ConfigId, is not set");
    return GetStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfigurationTagging", "Required field: AccountId, is not set");
    return GetStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfigurationTagging", "Required field: AccountId has invalid value");
    return GetStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetStorageLensConfigurationTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return GetStorageLensConfigurationTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetStorageLensConfigurationTaggingOutcomeCallable S3ControlClient::GetStorageLensConfigurationTaggingCallable(const GetStorageLensConfigurationTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStorageLensConfigurationTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStorageLensConfigurationTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetStorageLensConfigurationTaggingAsync(const GetStorageLensConfigurationTaggingRequest& request, const GetStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStorageLensConfigurationTagging(request), context);
    } );
}

ListAccessPointsOutcome S3ControlClient::ListAccessPoints(const ListAccessPointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListAccessPoints", "HostPrefix required field: AccountId has invalid value");
    return ListAccessPointsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListAccessPointsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint");
  return ListAccessPointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListAccessPointsOutcomeCallable S3ControlClient::ListAccessPointsCallable(const ListAccessPointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessPointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessPoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::ListAccessPointsAsync(const ListAccessPointsRequest& request, const ListAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAccessPoints(request), context);
    } );
}

ListAccessPointsForObjectLambdaOutcome S3ControlClient::ListAccessPointsForObjectLambda(const ListAccessPointsForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessPointsForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccessPointsForObjectLambda", "Required field: AccountId, is not set");
    return ListAccessPointsForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListAccessPointsForObjectLambda", "Required field: AccountId has invalid value");
    return ListAccessPointsForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccessPointsForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListAccessPointsForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda");
  return ListAccessPointsForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListAccessPointsForObjectLambdaOutcomeCallable S3ControlClient::ListAccessPointsForObjectLambdaCallable(const ListAccessPointsForObjectLambdaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessPointsForObjectLambdaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessPointsForObjectLambda(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::ListAccessPointsForObjectLambdaAsync(const ListAccessPointsForObjectLambdaRequest& request, const ListAccessPointsForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAccessPointsForObjectLambda(request), context);
    } );
}

ListJobsOutcome S3ControlClient::ListJobs(const ListJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AccountId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AccountId has invalid value");
    return ListJobsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListJobsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs");
  return ListJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListJobsOutcomeCallable S3ControlClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJobs(request), context);
    } );
}

ListMultiRegionAccessPointsOutcome S3ControlClient::ListMultiRegionAccessPoints(const ListMultiRegionAccessPointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMultiRegionAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultiRegionAccessPoints", "Required field: AccountId, is not set");
    return ListMultiRegionAccessPointsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListMultiRegionAccessPoints", "Required field: AccountId has invalid value");
    return ListMultiRegionAccessPointsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMultiRegionAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListMultiRegionAccessPointsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances");
  return ListMultiRegionAccessPointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListMultiRegionAccessPointsOutcomeCallable S3ControlClient::ListMultiRegionAccessPointsCallable(const ListMultiRegionAccessPointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMultiRegionAccessPointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMultiRegionAccessPoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::ListMultiRegionAccessPointsAsync(const ListMultiRegionAccessPointsRequest& request, const ListMultiRegionAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMultiRegionAccessPoints(request), context);
    } );
}

ListRegionalBucketsOutcome S3ControlClient::ListRegionalBuckets(const ListRegionalBucketsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRegionalBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRegionalBuckets", "Required field: AccountId, is not set");
    return ListRegionalBucketsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListRegionalBuckets", "Required field: AccountId has invalid value");
    return ListRegionalBucketsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRegionalBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListRegionalBucketsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket");
  return ListRegionalBucketsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListRegionalBucketsOutcomeCallable S3ControlClient::ListRegionalBucketsCallable(const ListRegionalBucketsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegionalBucketsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegionalBuckets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::ListRegionalBucketsAsync(const ListRegionalBucketsRequest& request, const ListRegionalBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRegionalBuckets(request), context);
    } );
}

ListStorageLensConfigurationsOutcome S3ControlClient::ListStorageLensConfigurations(const ListStorageLensConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStorageLensConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStorageLensConfigurations", "Required field: AccountId, is not set");
    return ListStorageLensConfigurationsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListStorageLensConfigurations", "Required field: AccountId has invalid value");
    return ListStorageLensConfigurationsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStorageLensConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListStorageLensConfigurationsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens");
  return ListStorageLensConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListStorageLensConfigurationsOutcomeCallable S3ControlClient::ListStorageLensConfigurationsCallable(const ListStorageLensConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStorageLensConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStorageLensConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::ListStorageLensConfigurationsAsync(const ListStorageLensConfigurationsRequest& request, const ListStorageLensConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStorageLensConfigurations(request), context);
    } );
}

PutAccessPointConfigurationForObjectLambdaOutcome S3ControlClient::PutAccessPointConfigurationForObjectLambda(const PutAccessPointConfigurationForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccessPointConfigurationForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointConfigurationForObjectLambda", "Required field: Name, is not set");
    return PutAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointConfigurationForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return PutAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccessPointConfigurationForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutAccessPointConfigurationForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return PutAccessPointConfigurationForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutAccessPointConfigurationForObjectLambdaOutcomeCallable S3ControlClient::PutAccessPointConfigurationForObjectLambdaCallable(const PutAccessPointConfigurationForObjectLambdaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccessPointConfigurationForObjectLambdaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccessPointConfigurationForObjectLambda(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutAccessPointConfigurationForObjectLambdaAsync(const PutAccessPointConfigurationForObjectLambdaRequest& request, const PutAccessPointConfigurationForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAccessPointConfigurationForObjectLambda(request), context);
    } );
}

PutAccessPointPolicyOutcome S3ControlClient::PutAccessPointPolicy(const PutAccessPointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicy", "Required field: Name, is not set");
    return PutAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicy", "HostPrefix required field: AccountId has invalid value");
    return PutAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutAccessPointPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return PutAccessPointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutAccessPointPolicyOutcomeCallable S3ControlClient::PutAccessPointPolicyCallable(const PutAccessPointPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccessPointPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccessPointPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutAccessPointPolicyAsync(const PutAccessPointPolicyRequest& request, const PutAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAccessPointPolicy(request), context);
    } );
}

PutAccessPointPolicyForObjectLambdaOutcome S3ControlClient::PutAccessPointPolicyForObjectLambda(const PutAccessPointPolicyForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return PutAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicyForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return PutAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutAccessPointPolicyForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return PutAccessPointPolicyForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutAccessPointPolicyForObjectLambdaOutcomeCallable S3ControlClient::PutAccessPointPolicyForObjectLambdaCallable(const PutAccessPointPolicyForObjectLambdaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccessPointPolicyForObjectLambdaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccessPointPolicyForObjectLambda(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutAccessPointPolicyForObjectLambdaAsync(const PutAccessPointPolicyForObjectLambdaRequest& request, const PutAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAccessPointPolicyForObjectLambda(request), context);
    } );
}

PutBucketLifecycleConfigurationOutcome S3ControlClient::PutBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "HostPrefix required field: AccountId has invalid value");
    return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutBucketLifecycleConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycleconfiguration");
  return PutBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketLifecycleConfigurationOutcomeCallable S3ControlClient::PutBucketLifecycleConfigurationCallable(const PutBucketLifecycleConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketLifecycleConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutBucketLifecycleConfigurationAsync(const PutBucketLifecycleConfigurationRequest& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketLifecycleConfiguration(request), context);
    } );
}

PutBucketPolicyOutcome S3ControlClient::PutBucketPolicy(const PutBucketPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketPolicy", "Required field: Bucket, is not set");
    return PutBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutBucketPolicy", "HostPrefix required field: AccountId has invalid value");
    return PutBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutBucketPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return PutBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketPolicyOutcomeCallable S3ControlClient::PutBucketPolicyCallable(const PutBucketPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutBucketPolicyAsync(const PutBucketPolicyRequest& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketPolicy(request), context);
    } );
}

PutBucketTaggingOutcome S3ControlClient::PutBucketTagging(const PutBucketTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketTagging", "Required field: Bucket, is not set");
    return PutBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutBucketTagging", "HostPrefix required field: AccountId has invalid value");
    return PutBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutBucketTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return PutBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketTaggingOutcomeCallable S3ControlClient::PutBucketTaggingCallable(const PutBucketTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutBucketTaggingAsync(const PutBucketTaggingRequest& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketTagging(request), context);
    } );
}

PutBucketVersioningOutcome S3ControlClient::PutBucketVersioning(const PutBucketVersioningRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketVersioning", "Required field: Bucket, is not set");
    return PutBucketVersioningOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutBucketVersioning", "HostPrefix required field: AccountId has invalid value");
    return PutBucketVersioningOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutBucketVersioningOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versioning");
  return PutBucketVersioningOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketVersioningOutcomeCallable S3ControlClient::PutBucketVersioningCallable(const PutBucketVersioningRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBucketVersioningOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBucketVersioning(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutBucketVersioningAsync(const PutBucketVersioningRequest& request, const PutBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBucketVersioning(request), context);
    } );
}

PutJobTaggingOutcome S3ControlClient::PutJobTagging(const PutJobTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutJobTagging", "Required field: AccountId, is not set");
    return PutJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutJobTagging", "Required field: JobId, is not set");
    return PutJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutJobTagging", "Required field: AccountId has invalid value");
    return PutJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutJobTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return PutJobTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutJobTaggingOutcomeCallable S3ControlClient::PutJobTaggingCallable(const PutJobTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutJobTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutJobTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutJobTaggingAsync(const PutJobTaggingRequest& request, const PutJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutJobTagging(request), context);
    } );
}

PutMultiRegionAccessPointPolicyOutcome S3ControlClient::PutMultiRegionAccessPointPolicy(const PutMultiRegionAccessPointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMultiRegionAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMultiRegionAccessPointPolicy", "Required field: AccountId, is not set");
    return PutMultiRegionAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutMultiRegionAccessPointPolicy", "Required field: AccountId has invalid value");
    return PutMultiRegionAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutMultiRegionAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutMultiRegionAccessPointPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/put-policy");
  return PutMultiRegionAccessPointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PutMultiRegionAccessPointPolicyOutcomeCallable S3ControlClient::PutMultiRegionAccessPointPolicyCallable(const PutMultiRegionAccessPointPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMultiRegionAccessPointPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMultiRegionAccessPointPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutMultiRegionAccessPointPolicyAsync(const PutMultiRegionAccessPointPolicyRequest& request, const PutMultiRegionAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutMultiRegionAccessPointPolicy(request), context);
    } );
}

PutPublicAccessBlockOutcome S3ControlClient::PutPublicAccessBlock(const PutPublicAccessBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Required field: AccountId, is not set");
    return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Required field: AccountId has invalid value");
    return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutPublicAccessBlockOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/configuration/publicAccessBlock");
  return PutPublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutPublicAccessBlockOutcomeCallable S3ControlClient::PutPublicAccessBlockCallable(const PutPublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutPublicAccessBlockAsync(const PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutPublicAccessBlock(request), context);
    } );
}

PutStorageLensConfigurationOutcome S3ControlClient::PutStorageLensConfiguration(const PutStorageLensConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfiguration", "Required field: ConfigId, is not set");
    return PutStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfiguration", "Required field: AccountId, is not set");
    return PutStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfiguration", "Required field: AccountId has invalid value");
    return PutStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutStorageLensConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  return PutStorageLensConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutStorageLensConfigurationOutcomeCallable S3ControlClient::PutStorageLensConfigurationCallable(const PutStorageLensConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutStorageLensConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutStorageLensConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutStorageLensConfigurationAsync(const PutStorageLensConfigurationRequest& request, const PutStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutStorageLensConfiguration(request), context);
    } );
}

PutStorageLensConfigurationTaggingOutcome S3ControlClient::PutStorageLensConfigurationTagging(const PutStorageLensConfigurationTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfigurationTagging", "Required field: ConfigId, is not set");
    return PutStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfigurationTagging", "Required field: AccountId, is not set");
    return PutStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfigurationTagging", "Required field: AccountId has invalid value");
    return PutStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutStorageLensConfigurationTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return PutStorageLensConfigurationTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutStorageLensConfigurationTaggingOutcomeCallable S3ControlClient::PutStorageLensConfigurationTaggingCallable(const PutStorageLensConfigurationTaggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutStorageLensConfigurationTaggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutStorageLensConfigurationTagging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutStorageLensConfigurationTaggingAsync(const PutStorageLensConfigurationTaggingRequest& request, const PutStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutStorageLensConfigurationTagging(request), context);
    } );
}

SubmitMultiRegionAccessPointRoutesOutcome S3ControlClient::SubmitMultiRegionAccessPointRoutes(const SubmitMultiRegionAccessPointRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SubmitMultiRegionAccessPointRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubmitMultiRegionAccessPointRoutes", "Required field: AccountId, is not set");
    return SubmitMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.MrapHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubmitMultiRegionAccessPointRoutes", "Required field: Mrap, is not set");
    return SubmitMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Mrap]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("SubmitMultiRegionAccessPointRoutes", "Required field: AccountId has invalid value");
    return SubmitMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SubmitMultiRegionAccessPointRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), SubmitMultiRegionAccessPointRoutesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetMrap());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  return SubmitMultiRegionAccessPointRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH));
}

SubmitMultiRegionAccessPointRoutesOutcomeCallable S3ControlClient::SubmitMultiRegionAccessPointRoutesCallable(const SubmitMultiRegionAccessPointRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubmitMultiRegionAccessPointRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubmitMultiRegionAccessPointRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::SubmitMultiRegionAccessPointRoutesAsync(const SubmitMultiRegionAccessPointRoutesRequest& request, const SubmitMultiRegionAccessPointRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SubmitMultiRegionAccessPointRoutes(request), context);
    } );
}

UpdateJobPriorityOutcome S3ControlClient::UpdateJobPriority(const UpdateJobPriorityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateJobPriority, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Required field: AccountId, is not set");
    return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Required field: JobId, is not set");
    return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.PriorityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Required field: Priority, is not set");
    return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Priority]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Required field: AccountId has invalid value");
    return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateJobPriority, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateJobPriorityOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/priority");
  return UpdateJobPriorityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateJobPriorityOutcomeCallable S3ControlClient::UpdateJobPriorityCallable(const UpdateJobPriorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJobPriorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJobPriority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::UpdateJobPriorityAsync(const UpdateJobPriorityRequest& request, const UpdateJobPriorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateJobPriority(request), context);
    } );
}

UpdateJobStatusOutcome S3ControlClient::UpdateJobStatus(const UpdateJobStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateJobStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Required field: AccountId, is not set");
    return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Required field: JobId, is not set");
    return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.RequestedJobStatusHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Required field: RequestedJobStatus, is not set");
    return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestedJobStatus]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Required field: AccountId has invalid value");
    return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateJobStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateJobStatusOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return UpdateJobStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateJobStatusOutcomeCallable S3ControlClient::UpdateJobStatusCallable(const UpdateJobStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJobStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJobStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::UpdateJobStatusAsync(const UpdateJobStatusRequest& request, const UpdateJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateJobStatus(request), context);
    } );
}


