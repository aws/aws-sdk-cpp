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
#include <aws/core/platform/Environment.h>

#include <aws/s3control/S3ControlClient.h>
#include <aws/s3control/S3ControlEndpoint.h>
#include <aws/s3control/S3ControlErrorMarshaller.h>
#include <aws/s3control/S3ControlARN.h>
#include <aws/s3control/model/CreateAccessPointRequest.h>
#include <aws/s3control/model/CreateAccessPointForObjectLambdaRequest.h>
#include <aws/s3control/model/CreateBucketRequest.h>
#include <aws/s3control/model/CreateJobRequest.h>
#include <aws/s3control/model/DeleteAccessPointRequest.h>
#include <aws/s3control/model/DeleteAccessPointForObjectLambdaRequest.h>
#include <aws/s3control/model/DeleteAccessPointPolicyRequest.h>
#include <aws/s3control/model/DeleteAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/s3control/model/DeleteBucketRequest.h>
#include <aws/s3control/model/DeleteBucketLifecycleConfigurationRequest.h>
#include <aws/s3control/model/DeleteBucketPolicyRequest.h>
#include <aws/s3control/model/DeleteBucketTaggingRequest.h>
#include <aws/s3control/model/DeleteJobTaggingRequest.h>
#include <aws/s3control/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3control/model/DeleteStorageLensConfigurationRequest.h>
#include <aws/s3control/model/DeleteStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/DescribeJobRequest.h>
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
#include <aws/s3control/model/GetJobTaggingRequest.h>
#include <aws/s3control/model/GetPublicAccessBlockRequest.h>
#include <aws/s3control/model/GetStorageLensConfigurationRequest.h>
#include <aws/s3control/model/GetStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/ListAccessPointsRequest.h>
#include <aws/s3control/model/ListAccessPointsForObjectLambdaRequest.h>
#include <aws/s3control/model/ListJobsRequest.h>
#include <aws/s3control/model/ListRegionalBucketsRequest.h>
#include <aws/s3control/model/ListStorageLensConfigurationsRequest.h>
#include <aws/s3control/model/PutAccessPointConfigurationForObjectLambdaRequest.h>
#include <aws/s3control/model/PutAccessPointPolicyRequest.h>
#include <aws/s3control/model/PutAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/s3control/model/PutBucketLifecycleConfigurationRequest.h>
#include <aws/s3control/model/PutBucketPolicyRequest.h>
#include <aws/s3control/model/PutBucketTaggingRequest.h>
#include <aws/s3control/model/PutJobTaggingRequest.h>
#include <aws/s3control/model/PutPublicAccessBlockRequest.h>
#include <aws/s3control/model/PutStorageLensConfigurationRequest.h>
#include <aws/s3control/model/PutStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/UpdateJobPriorityRequest.h>
#include <aws/s3control/model/UpdateJobStatusRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::S3Control;
using namespace Aws::S3Control::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "s3";
static const char* ALLOCATION_TAG = "S3ControlClient";


S3ControlClient::S3ControlClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region), Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent, false),
    Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

S3ControlClient::S3ControlClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region), Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent, false),
    Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

S3ControlClient::S3ControlClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region), Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent, false),
    Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

S3ControlClient::~S3ControlClient()
{
}

void S3ControlClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("S3 Control");
  LoadS3ControlSpecificConfig(config.profileName);
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  m_useDualStack = config.useDualStack;
  if (config.endpointOverride.empty())
  {
      m_useCustomEndpoint = false;
      m_baseUri = S3ControlEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      m_useCustomEndpoint = true;
      OverrideEndpoint(config.endpointOverride);
  }
  m_enableHostPrefixInjection = config.enableHostPrefixInjection;
}

void S3ControlClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateAccessPointOutcome S3ControlClient::CreateAccessPoint(const CreateAccessPointRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPoint", "Required field: Name, is not set");
    return CreateAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return CreateAccessPointOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("CreateAccessPoint", "HostPrefix required field: AccountId, is empty");
      return CreateAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateAccessPoint", "Invalid DNS host: " << uri.GetAuthority());
      return CreateAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/accesspoint/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAccessPointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateAccessPointAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::CreateAccessPointAsyncHelper(const CreateAccessPointRequest& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAccessPoint(request), context);
}

CreateAccessPointForObjectLambdaOutcome S3ControlClient::CreateAccessPointForObjectLambda(const CreateAccessPointForObjectLambdaRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPointForObjectLambda", "Required field: Name, is not set");
    return CreateAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspointforobjectlambda/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return CreateAccessPointForObjectLambdaOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("CreateAccessPointForObjectLambda", "HostPrefix required field: AccountId, is empty");
      return CreateAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateAccessPointForObjectLambda", "Invalid DNS host: " << uri.GetAuthority());
      return CreateAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAccessPointForObjectLambdaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateAccessPointForObjectLambdaAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::CreateAccessPointForObjectLambdaAsyncHelper(const CreateAccessPointForObjectLambdaRequest& request, const CreateAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAccessPointForObjectLambda(request), context);
}

CreateBucketOutcome S3ControlClient::CreateBucket(const CreateBucketRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBucket", "Required field: Bucket, is not set");
    return CreateBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.OutpostIdHasBeenSet());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return CreateBucketOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  Aws::StringStream ss;
  ss << "/v20180820/bucket/";
  ss << request.GetBucket();
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateBucketAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::CreateBucketAsyncHelper(const CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBucket(request), context);
}

CreateJobOutcome S3ControlClient::CreateJob(const CreateJobRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: AccountId, is not set");
    return CreateJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return CreateJobOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("CreateJob", "HostPrefix required field: AccountId, is empty");
      return CreateJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateJob", "Invalid DNS host: " << uri.GetAuthority());
      return CreateJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateJobAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::CreateJobAsyncHelper(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateJob(request), context);
}

DeleteAccessPointOutcome S3ControlClient::DeleteAccessPoint(const DeleteAccessPointRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "Required field: Name, is not set");
    return DeleteAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspoint/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteAccessPointOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "HostPrefix required field: AccountId, is empty");
      return DeleteAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAccessPointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccessPointAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeleteAccessPointAsyncHelper(const DeleteAccessPointRequest& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccessPoint(request), context);
}

DeleteAccessPointForObjectLambdaOutcome S3ControlClient::DeleteAccessPointForObjectLambda(const DeleteAccessPointForObjectLambdaRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointForObjectLambda", "Required field: Name, is not set");
    return DeleteAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspointforobjectlambda/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteAccessPointForObjectLambdaOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeleteAccessPointForObjectLambda", "HostPrefix required field: AccountId, is empty");
      return DeleteAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteAccessPointForObjectLambda", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAccessPointForObjectLambdaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccessPointForObjectLambdaAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeleteAccessPointForObjectLambdaAsyncHelper(const DeleteAccessPointForObjectLambdaRequest& request, const DeleteAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccessPointForObjectLambda(request), context);
}

DeleteAccessPointPolicyOutcome S3ControlClient::DeleteAccessPointPolicy(const DeleteAccessPointPolicyRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicy", "Required field: Name, is not set");
    return DeleteAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspoint/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteAccessPointPolicyOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicy", "HostPrefix required field: AccountId, is empty");
      return DeleteAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicy", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAccessPointPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccessPointPolicyAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeleteAccessPointPolicyAsyncHelper(const DeleteAccessPointPolicyRequest& request, const DeleteAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccessPointPolicy(request), context);
}

DeleteAccessPointPolicyForObjectLambdaOutcome S3ControlClient::DeleteAccessPointPolicyForObjectLambda(const DeleteAccessPointPolicyForObjectLambdaRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return DeleteAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspointforobjectlambda/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteAccessPointPolicyForObjectLambdaOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicyForObjectLambda", "HostPrefix required field: AccountId, is empty");
      return DeleteAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicyForObjectLambda", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAccessPointPolicyForObjectLambdaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccessPointPolicyForObjectLambdaAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeleteAccessPointPolicyForObjectLambdaAsyncHelper(const DeleteAccessPointPolicyForObjectLambdaRequest& request, const DeleteAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccessPointPolicyForObjectLambda(request), context);
}

DeleteBucketOutcome S3ControlClient::DeleteBucket(const DeleteBucketRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucket", "Required field: Bucket, is not set");
    return DeleteBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "/v20180820/bucket/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeleteBucket", "HostPrefix required field: AccountId, is empty");
      return DeleteBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteBucket", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBucketAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeleteBucketAsyncHelper(const DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBucket(request), context);
}

DeleteBucketLifecycleConfigurationOutcome S3ControlClient::DeleteBucketLifecycleConfiguration(const DeleteBucketLifecycleConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "/v20180820/bucket/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketLifecycleConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeleteBucketLifecycleConfiguration", "HostPrefix required field: AccountId, is empty");
      return DeleteBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteBucketLifecycleConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/lifecycleconfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteBucketLifecycleConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBucketLifecycleConfigurationAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeleteBucketLifecycleConfigurationAsyncHelper(const DeleteBucketLifecycleConfigurationRequest& request, const DeleteBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBucketLifecycleConfiguration(request), context);
}

DeleteBucketPolicyOutcome S3ControlClient::DeleteBucketPolicy(const DeleteBucketPolicyRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "Required field: Bucket, is not set");
    return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "/v20180820/bucket/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketPolicyOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "HostPrefix required field: AccountId, is empty");
      return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteBucketPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBucketPolicyAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeleteBucketPolicyAsyncHelper(const DeleteBucketPolicyRequest& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBucketPolicy(request), context);
}

DeleteBucketTaggingOutcome S3ControlClient::DeleteBucketTagging(const DeleteBucketTaggingRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "Required field: Bucket, is not set");
    return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "/v20180820/bucket/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteBucketTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "HostPrefix required field: AccountId, is empty");
      return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteBucketTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBucketTaggingAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeleteBucketTaggingAsyncHelper(const DeleteBucketTaggingRequest& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBucketTagging(request), context);
}

DeleteJobTaggingOutcome S3ControlClient::DeleteJobTagging(const DeleteJobTaggingRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteJobTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeleteJobTagging", "HostPrefix required field: AccountId, is empty");
      return DeleteJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteJobTagging", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteJobTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteJobTaggingAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeleteJobTaggingAsyncHelper(const DeleteJobTaggingRequest& request, const DeleteJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteJobTagging(request), context);
}

DeletePublicAccessBlockOutcome S3ControlClient::DeletePublicAccessBlock(const DeletePublicAccessBlockRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Required field: AccountId, is not set");
    return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeletePublicAccessBlockOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "HostPrefix required field: AccountId, is empty");
      return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Invalid DNS host: " << uri.GetAuthority());
      return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/configuration/publicAccessBlock";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeletePublicAccessBlockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeletePublicAccessBlockAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeletePublicAccessBlockAsyncHelper(const DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePublicAccessBlock(request), context);
}

DeleteStorageLensConfigurationOutcome S3ControlClient::DeleteStorageLensConfiguration(const DeleteStorageLensConfigurationRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteStorageLensConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeleteStorageLensConfiguration", "HostPrefix required field: AccountId, is empty");
      return DeleteStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteStorageLensConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/storagelens/";
  ss << request.GetConfigId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteStorageLensConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStorageLensConfigurationAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeleteStorageLensConfigurationAsyncHelper(const DeleteStorageLensConfigurationRequest& request, const DeleteStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStorageLensConfiguration(request), context);
}

DeleteStorageLensConfigurationTaggingOutcome S3ControlClient::DeleteStorageLensConfigurationTagging(const DeleteStorageLensConfigurationTaggingRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DeleteStorageLensConfigurationTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DeleteStorageLensConfigurationTagging", "HostPrefix required field: AccountId, is empty");
      return DeleteStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteStorageLensConfigurationTagging", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/storagelens/";
  ss << request.GetConfigId();
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteStorageLensConfigurationTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStorageLensConfigurationTaggingAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeleteStorageLensConfigurationTaggingAsyncHelper(const DeleteStorageLensConfigurationTaggingRequest& request, const DeleteStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStorageLensConfigurationTagging(request), context);
}

DescribeJobOutcome S3ControlClient::DescribeJob(const DescribeJobRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return DescribeJobOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("DescribeJob", "HostPrefix required field: AccountId, is empty");
      return DescribeJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeJob", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeJobAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DescribeJobAsyncHelper(const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeJob(request), context);
}

GetAccessPointOutcome S3ControlClient::GetAccessPoint(const GetAccessPointRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPoint", "Required field: Name, is not set");
    return GetAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspoint/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetAccessPointOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetAccessPoint", "HostPrefix required field: AccountId, is empty");
      return GetAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetAccessPoint", "Invalid DNS host: " << uri.GetAuthority());
      return GetAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAccessPointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAccessPointAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetAccessPointAsyncHelper(const GetAccessPointRequest& request, const GetAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccessPoint(request), context);
}

GetAccessPointConfigurationForObjectLambdaOutcome S3ControlClient::GetAccessPointConfigurationForObjectLambda(const GetAccessPointConfigurationForObjectLambdaRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointConfigurationForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspointforobjectlambda/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetAccessPointConfigurationForObjectLambdaOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointConfigurationForObjectLambda", "HostPrefix required field: AccountId, is empty");
      return GetAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointConfigurationForObjectLambda", "Invalid DNS host: " << uri.GetAuthority());
      return GetAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAccessPointConfigurationForObjectLambdaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAccessPointConfigurationForObjectLambdaAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetAccessPointConfigurationForObjectLambdaAsyncHelper(const GetAccessPointConfigurationForObjectLambdaRequest& request, const GetAccessPointConfigurationForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccessPointConfigurationForObjectLambda(request), context);
}

GetAccessPointForObjectLambdaOutcome S3ControlClient::GetAccessPointForObjectLambda(const GetAccessPointForObjectLambdaRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspointforobjectlambda/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetAccessPointForObjectLambdaOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointForObjectLambda", "HostPrefix required field: AccountId, is empty");
      return GetAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointForObjectLambda", "Invalid DNS host: " << uri.GetAuthority());
      return GetAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAccessPointForObjectLambdaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAccessPointForObjectLambdaAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetAccessPointForObjectLambdaAsyncHelper(const GetAccessPointForObjectLambdaRequest& request, const GetAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccessPointForObjectLambda(request), context);
}

GetAccessPointPolicyOutcome S3ControlClient::GetAccessPointPolicy(const GetAccessPointPolicyRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicy", "Required field: Name, is not set");
    return GetAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspoint/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetAccessPointPolicyOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointPolicy", "HostPrefix required field: AccountId, is empty");
      return GetAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointPolicy", "Invalid DNS host: " << uri.GetAuthority());
      return GetAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAccessPointPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAccessPointPolicyAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetAccessPointPolicyAsyncHelper(const GetAccessPointPolicyRequest& request, const GetAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccessPointPolicy(request), context);
}

GetAccessPointPolicyForObjectLambdaOutcome S3ControlClient::GetAccessPointPolicyForObjectLambda(const GetAccessPointPolicyForObjectLambdaRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspointforobjectlambda/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetAccessPointPolicyForObjectLambdaOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointPolicyForObjectLambda", "HostPrefix required field: AccountId, is empty");
      return GetAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointPolicyForObjectLambda", "Invalid DNS host: " << uri.GetAuthority());
      return GetAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAccessPointPolicyForObjectLambdaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAccessPointPolicyForObjectLambdaAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetAccessPointPolicyForObjectLambdaAsyncHelper(const GetAccessPointPolicyForObjectLambdaRequest& request, const GetAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccessPointPolicyForObjectLambda(request), context);
}

GetAccessPointPolicyStatusOutcome S3ControlClient::GetAccessPointPolicyStatus(const GetAccessPointPolicyStatusRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatus", "Required field: Name, is not set");
    return GetAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspoint/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetAccessPointPolicyStatusOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatus", "HostPrefix required field: AccountId, is empty");
      return GetAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatus", "Invalid DNS host: " << uri.GetAuthority());
      return GetAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/policyStatus";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAccessPointPolicyStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAccessPointPolicyStatusAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetAccessPointPolicyStatusAsyncHelper(const GetAccessPointPolicyStatusRequest& request, const GetAccessPointPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccessPointPolicyStatus(request), context);
}

GetAccessPointPolicyStatusForObjectLambdaOutcome S3ControlClient::GetAccessPointPolicyStatusForObjectLambda(const GetAccessPointPolicyStatusForObjectLambdaRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatusForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointPolicyStatusForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspointforobjectlambda/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetAccessPointPolicyStatusForObjectLambdaOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatusForObjectLambda", "HostPrefix required field: AccountId, is empty");
      return GetAccessPointPolicyStatusForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatusForObjectLambda", "Invalid DNS host: " << uri.GetAuthority());
      return GetAccessPointPolicyStatusForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/policyStatus";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAccessPointPolicyStatusForObjectLambdaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAccessPointPolicyStatusForObjectLambdaAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetAccessPointPolicyStatusForObjectLambdaAsyncHelper(const GetAccessPointPolicyStatusForObjectLambdaRequest& request, const GetAccessPointPolicyStatusForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccessPointPolicyStatusForObjectLambda(request), context);
}

GetBucketOutcome S3ControlClient::GetBucket(const GetBucketRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucket", "Required field: Bucket, is not set");
    return GetBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "/v20180820/bucket/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetBucket", "HostPrefix required field: AccountId, is empty");
      return GetBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetBucket", "Invalid DNS host: " << uri.GetAuthority());
      return GetBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  uri.SetPath(uri.GetPath() + ss.str());
  return GetBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetBucketAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetBucketAsyncHelper(const GetBucketRequest& request, const GetBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBucket(request), context);
}

GetBucketLifecycleConfigurationOutcome S3ControlClient::GetBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "/v20180820/bucket/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketLifecycleConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "HostPrefix required field: AccountId, is empty");
      return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/lifecycleconfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetBucketLifecycleConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetBucketLifecycleConfigurationAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetBucketLifecycleConfigurationAsyncHelper(const GetBucketLifecycleConfigurationRequest& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBucketLifecycleConfiguration(request), context);
}

GetBucketPolicyOutcome S3ControlClient::GetBucketPolicy(const GetBucketPolicyRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicy", "Required field: Bucket, is not set");
    return GetBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "/v20180820/bucket/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketPolicyOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetBucketPolicy", "HostPrefix required field: AccountId, is empty");
      return GetBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetBucketPolicy", "Invalid DNS host: " << uri.GetAuthority());
      return GetBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetBucketPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetBucketPolicyAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetBucketPolicyAsyncHelper(const GetBucketPolicyRequest& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBucketPolicy(request), context);
}

GetBucketTaggingOutcome S3ControlClient::GetBucketTagging(const GetBucketTaggingRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketTagging", "Required field: Bucket, is not set");
    return GetBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "/v20180820/bucket/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetBucketTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetBucketTagging", "HostPrefix required field: AccountId, is empty");
      return GetBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetBucketTagging", "Invalid DNS host: " << uri.GetAuthority());
      return GetBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetBucketTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetBucketTaggingAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetBucketTaggingAsyncHelper(const GetBucketTaggingRequest& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBucketTagging(request), context);
}

GetJobTaggingOutcome S3ControlClient::GetJobTagging(const GetJobTaggingRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetJobTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetJobTagging", "HostPrefix required field: AccountId, is empty");
      return GetJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetJobTagging", "Invalid DNS host: " << uri.GetAuthority());
      return GetJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetJobTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetJobTaggingAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetJobTaggingAsyncHelper(const GetJobTaggingRequest& request, const GetJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetJobTagging(request), context);
}

GetPublicAccessBlockOutcome S3ControlClient::GetPublicAccessBlock(const GetPublicAccessBlockRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Required field: AccountId, is not set");
    return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetPublicAccessBlockOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "HostPrefix required field: AccountId, is empty");
      return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Invalid DNS host: " << uri.GetAuthority());
      return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/configuration/publicAccessBlock";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetPublicAccessBlockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicAccessBlockAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetPublicAccessBlockAsyncHelper(const GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicAccessBlock(request), context);
}

GetStorageLensConfigurationOutcome S3ControlClient::GetStorageLensConfiguration(const GetStorageLensConfigurationRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetStorageLensConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetStorageLensConfiguration", "HostPrefix required field: AccountId, is empty");
      return GetStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetStorageLensConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return GetStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/storagelens/";
  ss << request.GetConfigId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetStorageLensConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetStorageLensConfigurationAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetStorageLensConfigurationAsyncHelper(const GetStorageLensConfigurationRequest& request, const GetStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStorageLensConfiguration(request), context);
}

GetStorageLensConfigurationTaggingOutcome S3ControlClient::GetStorageLensConfigurationTagging(const GetStorageLensConfigurationTaggingRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return GetStorageLensConfigurationTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("GetStorageLensConfigurationTagging", "HostPrefix required field: AccountId, is empty");
      return GetStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetStorageLensConfigurationTagging", "Invalid DNS host: " << uri.GetAuthority());
      return GetStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/storagelens/";
  ss << request.GetConfigId();
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetStorageLensConfigurationTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetStorageLensConfigurationTaggingAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetStorageLensConfigurationTaggingAsyncHelper(const GetStorageLensConfigurationTaggingRequest& request, const GetStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStorageLensConfigurationTagging(request), context);
}

ListAccessPointsOutcome S3ControlClient::ListAccessPoints(const ListAccessPointsRequest& request) const
{
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListAccessPointsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("ListAccessPoints", "HostPrefix required field: AccountId, is empty");
      return ListAccessPointsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListAccessPoints", "Invalid DNS host: " << uri.GetAuthority());
      return ListAccessPointsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/accesspoint";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccessPointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAccessPointsAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::ListAccessPointsAsyncHelper(const ListAccessPointsRequest& request, const ListAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccessPoints(request), context);
}

ListAccessPointsForObjectLambdaOutcome S3ControlClient::ListAccessPointsForObjectLambda(const ListAccessPointsForObjectLambdaRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccessPointsForObjectLambda", "Required field: AccountId, is not set");
    return ListAccessPointsForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListAccessPointsForObjectLambdaOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("ListAccessPointsForObjectLambda", "HostPrefix required field: AccountId, is empty");
      return ListAccessPointsForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListAccessPointsForObjectLambda", "Invalid DNS host: " << uri.GetAuthority());
      return ListAccessPointsForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/accesspointforobjectlambda";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccessPointsForObjectLambdaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAccessPointsForObjectLambdaAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::ListAccessPointsForObjectLambdaAsyncHelper(const ListAccessPointsForObjectLambdaRequest& request, const ListAccessPointsForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccessPointsForObjectLambda(request), context);
}

ListJobsOutcome S3ControlClient::ListJobs(const ListJobsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AccountId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListJobsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("ListJobs", "HostPrefix required field: AccountId, is empty");
      return ListJobsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListJobs", "Invalid DNS host: " << uri.GetAuthority());
      return ListJobsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListJobsAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::ListJobsAsyncHelper(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListJobs(request), context);
}

ListRegionalBucketsOutcome S3ControlClient::ListRegionalBuckets(const ListRegionalBucketsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRegionalBuckets", "Required field: AccountId, is not set");
    return ListRegionalBucketsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.OutpostIdHasBeenSet());
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListRegionalBucketsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("ListRegionalBuckets", "HostPrefix required field: AccountId, is empty");
      return ListRegionalBucketsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListRegionalBuckets", "Invalid DNS host: " << uri.GetAuthority());
      return ListRegionalBucketsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/bucket";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListRegionalBucketsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListRegionalBucketsAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::ListRegionalBucketsAsyncHelper(const ListRegionalBucketsRequest& request, const ListRegionalBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRegionalBuckets(request), context);
}

ListStorageLensConfigurationsOutcome S3ControlClient::ListStorageLensConfigurations(const ListStorageLensConfigurationsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStorageLensConfigurations", "Required field: AccountId, is not set");
    return ListStorageLensConfigurationsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return ListStorageLensConfigurationsOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("ListStorageLensConfigurations", "HostPrefix required field: AccountId, is empty");
      return ListStorageLensConfigurationsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListStorageLensConfigurations", "Invalid DNS host: " << uri.GetAuthority());
      return ListStorageLensConfigurationsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/storagelens";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListStorageLensConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListStorageLensConfigurationsAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::ListStorageLensConfigurationsAsyncHelper(const ListStorageLensConfigurationsRequest& request, const ListStorageLensConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStorageLensConfigurations(request), context);
}

PutAccessPointConfigurationForObjectLambdaOutcome S3ControlClient::PutAccessPointConfigurationForObjectLambda(const PutAccessPointConfigurationForObjectLambdaRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointConfigurationForObjectLambda", "Required field: Name, is not set");
    return PutAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspointforobjectlambda/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutAccessPointConfigurationForObjectLambdaOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("PutAccessPointConfigurationForObjectLambda", "HostPrefix required field: AccountId, is empty");
      return PutAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutAccessPointConfigurationForObjectLambda", "Invalid DNS host: " << uri.GetAuthority());
      return PutAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutAccessPointConfigurationForObjectLambdaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutAccessPointConfigurationForObjectLambdaAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::PutAccessPointConfigurationForObjectLambdaAsyncHelper(const PutAccessPointConfigurationForObjectLambdaRequest& request, const PutAccessPointConfigurationForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAccessPointConfigurationForObjectLambda(request), context);
}

PutAccessPointPolicyOutcome S3ControlClient::PutAccessPointPolicy(const PutAccessPointPolicyRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicy", "Required field: Name, is not set");
    return PutAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspoint/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutAccessPointPolicyOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("PutAccessPointPolicy", "HostPrefix required field: AccountId, is empty");
      return PutAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutAccessPointPolicy", "Invalid DNS host: " << uri.GetAuthority());
      return PutAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutAccessPointPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutAccessPointPolicyAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::PutAccessPointPolicyAsyncHelper(const PutAccessPointPolicyRequest& request, const PutAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAccessPointPolicy(request), context);
}

PutAccessPointPolicyForObjectLambdaOutcome S3ControlClient::PutAccessPointPolicyForObjectLambda(const PutAccessPointPolicyForObjectLambdaRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return PutAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  S3ControlARN arn(request.GetName());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetName(), false, "/v20180820/accesspointforobjectlambda/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutAccessPointPolicyForObjectLambdaOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetName()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("PutAccessPointPolicyForObjectLambda", "HostPrefix required field: AccountId, is empty");
      return PutAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutAccessPointPolicyForObjectLambda", "Invalid DNS host: " << uri.GetAuthority());
      return PutAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutAccessPointPolicyForObjectLambdaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutAccessPointPolicyForObjectLambdaAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::PutAccessPointPolicyForObjectLambdaAsyncHelper(const PutAccessPointPolicyForObjectLambdaRequest& request, const PutAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAccessPointPolicyForObjectLambda(request), context);
}

PutBucketLifecycleConfigurationOutcome S3ControlClient::PutBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "/v20180820/bucket/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketLifecycleConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "HostPrefix required field: AccountId, is empty");
      return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/lifecycleconfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutBucketLifecycleConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutBucketLifecycleConfigurationAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::PutBucketLifecycleConfigurationAsyncHelper(const PutBucketLifecycleConfigurationRequest& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutBucketLifecycleConfiguration(request), context);
}

PutBucketPolicyOutcome S3ControlClient::PutBucketPolicy(const PutBucketPolicyRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketPolicy", "Required field: Bucket, is not set");
    return PutBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "/v20180820/bucket/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketPolicyOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("PutBucketPolicy", "HostPrefix required field: AccountId, is empty");
      return PutBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutBucketPolicy", "Invalid DNS host: " << uri.GetAuthority());
      return PutBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutBucketPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutBucketPolicyAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::PutBucketPolicyAsyncHelper(const PutBucketPolicyRequest& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutBucketPolicy(request), context);
}

PutBucketTaggingOutcome S3ControlClient::PutBucketTagging(const PutBucketTaggingRequest& request) const
{
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketTagging", "Required field: Bucket, is not set");
    return PutBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  S3ControlARN arn(request.GetBucket());
  if (!arn && request.GetAccountId().empty())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
          "Account ID should be specified via either accountId field or an ARN", false));
  }
  if (arn && !request.GetAccountId().empty() && request.GetAccountId() != arn.GetAccountId())
  {
      return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
          "Account ID mismatch: the Account ID specified in an ARN and in the accountId field are different.", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString(request.GetBucket(), false, "/v20180820/bucket/");
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutBucketTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection && !S3ControlARN(request.GetBucket()))
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("PutBucketTagging", "HostPrefix required field: AccountId, is empty");
      return PutBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutBucketTagging", "Invalid DNS host: " << uri.GetAuthority());
      return PutBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutBucketTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutBucketTaggingAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::PutBucketTaggingAsyncHelper(const PutBucketTaggingRequest& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutBucketTagging(request), context);
}

PutJobTaggingOutcome S3ControlClient::PutJobTagging(const PutJobTaggingRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutJobTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("PutJobTagging", "HostPrefix required field: AccountId, is empty");
      return PutJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutJobTagging", "Invalid DNS host: " << uri.GetAuthority());
      return PutJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutJobTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutJobTaggingAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::PutJobTaggingAsyncHelper(const PutJobTaggingRequest& request, const PutJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutJobTagging(request), context);
}

PutPublicAccessBlockOutcome S3ControlClient::PutPublicAccessBlock(const PutPublicAccessBlockRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Required field: AccountId, is not set");
    return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutPublicAccessBlockOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "HostPrefix required field: AccountId, is empty");
      return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Invalid DNS host: " << uri.GetAuthority());
      return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/configuration/publicAccessBlock";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutPublicAccessBlockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutPublicAccessBlockAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::PutPublicAccessBlockAsyncHelper(const PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutPublicAccessBlock(request), context);
}

PutStorageLensConfigurationOutcome S3ControlClient::PutStorageLensConfiguration(const PutStorageLensConfigurationRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutStorageLensConfigurationOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("PutStorageLensConfiguration", "HostPrefix required field: AccountId, is empty");
      return PutStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutStorageLensConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return PutStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/storagelens/";
  ss << request.GetConfigId();
  uri.SetPath(uri.GetPath() + ss.str());
  return PutStorageLensConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutStorageLensConfigurationAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::PutStorageLensConfigurationAsyncHelper(const PutStorageLensConfigurationRequest& request, const PutStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutStorageLensConfiguration(request), context);
}

PutStorageLensConfigurationTaggingOutcome S3ControlClient::PutStorageLensConfigurationTagging(const PutStorageLensConfigurationTaggingRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return PutStorageLensConfigurationTaggingOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("PutStorageLensConfigurationTagging", "HostPrefix required field: AccountId, is empty");
      return PutStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutStorageLensConfigurationTagging", "Invalid DNS host: " << uri.GetAuthority());
      return PutStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/storagelens/";
  ss << request.GetConfigId();
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutStorageLensConfigurationTaggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutStorageLensConfigurationTaggingAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::PutStorageLensConfigurationTaggingAsyncHelper(const PutStorageLensConfigurationTaggingRequest& request, const PutStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutStorageLensConfigurationTagging(request), context);
}

UpdateJobPriorityOutcome S3ControlClient::UpdateJobPriority(const UpdateJobPriorityRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return UpdateJobPriorityOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("UpdateJobPriority", "HostPrefix required field: AccountId, is empty");
      return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  ss << "/priority";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateJobPriorityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateJobPriorityAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::UpdateJobPriorityAsyncHelper(const UpdateJobPriorityRequest& request, const UpdateJobPriorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateJobPriority(request), context);
}

UpdateJobStatusOutcome S3ControlClient::UpdateJobStatus(const UpdateJobStatusRequest& request) const
{
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
  ComputeEndpointOutcome computeEndpointOutcome = ComputeEndpointString();
  if (!computeEndpointOutcome.IsSuccess())
  {
    return UpdateJobStatusOutcome(computeEndpointOutcome.GetError());
  }
  Aws::Http::URI uri = computeEndpointOutcome.GetResult().endpoint;
  if (m_enableHostPrefixInjection)
  {
    if (request.GetAccountId().empty())
    {
      AWS_LOGSTREAM_ERROR("UpdateJobStatus", "HostPrefix required field: AccountId, is empty");
      return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host prefix field is empty", false));
    }
    uri.SetAuthority("" + request.GetAccountId() + "." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  ss << "/status";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateJobStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, computeEndpointOutcome.GetResult().signerRegion.c_str() /*signerRegionOverride*/, computeEndpointOutcome.GetResult().signerServiceName.c_str() /*signerServiceNameOverride*/));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateJobStatusAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::UpdateJobStatusAsyncHelper(const UpdateJobStatusRequest& request, const UpdateJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateJobStatus(request), context);
}




static const char S3_USE_ARN_REGION_ENVIRONMENT_VARIABLE[] = "AWS_S3_USE_ARN_REGION";
static const char S3_USE_ARN_REGION_CONFIG_FILE_OPTION[] = "s3_use_arn_region";

void S3ControlClient::LoadS3ControlSpecificConfig(const Aws::String& profile)
{
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
      AWS_LOGSTREAM_WARN("S3ControlClient", "AWS_S3_USE_ARN_REGION in environment variables or s3_use_arn_region in config file"
                                  << "should either be true of false if specified, otherwise turn off this flag by default.");
    }
    m_useArnRegion = false;
  }
}

ComputeEndpointOutcome S3ControlClient::ComputeEndpointString(bool hasOutpostId) const
{
    if (m_useDualStack && m_useCustomEndpoint)
    {
        return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
            "Dual-stack endpoint is incompatible with a custom endpoint override.", false));
    }

    Aws::StringStream ss;
    ss << m_scheme << "://";
    if (hasOutpostId)
    {
        if (m_useDualStack)
        {
            return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
                "S3 Outposts endpoints do not support dualstack right now.", false));
        }
        else if (m_useCustomEndpoint)
        {
            ss << m_baseUri;
            return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), Aws::Region::ComputeSignerRegion(m_region), "s3-outposts"));
        }
        else
        {
            ss << S3ControlEndpoint::ForRegion(m_region, m_useDualStack, hasOutpostId);
            return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), Aws::Region::ComputeSignerRegion(m_region), "s3-outposts"));
        }
    }
    else
    {
        ss << m_baseUri;
        return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), Aws::Region::ComputeSignerRegion(m_region), SERVICE_NAME));
    }
}

ComputeEndpointOutcome S3ControlClient::ComputeEndpointString(const Aws::String& name, bool hasOutpostId, const Aws::String& uriPathPrefix) const
{
    if (m_useDualStack && m_useCustomEndpoint)
    {
        return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
            "Dual-stack endpoint is incompatible with a custom endpoint override.", false));
    }

    Aws::StringStream ss;
    ss << m_scheme << "://";
    Aws::String signerRegion = Aws::Region::ComputeSignerRegion(m_region);
    S3ControlARN arn(name);

    if (arn)
    {
        S3ControlARNOutcome S3ControlArnOutcome = m_useArnRegion ? arn.Validate() : arn.Validate(m_region.c_str());
        if (!S3ControlArnOutcome.IsSuccess())
        {
            return ComputeEndpointOutcome(S3ControlArnOutcome.GetError());
        }
        signerRegion = m_useArnRegion ? arn.GetRegion() : signerRegion;
        if (arn.GetResourceType() == ARNResourceType::OUTPOST)
        {
            if (m_useDualStack)
            {
                return ComputeEndpointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION",
                    "Outposts Access Points do not support dualstack right now.", false));
            }
            ss << S3ControlEndpoint::ForOutpostsArn(arn, m_useArnRegion ? "" : m_region, m_useDualStack, m_useCustomEndpoint ? m_baseUri : "");
            if (!uriPathPrefix.empty())
            {
                ss << uriPathPrefix << arn.GetSubResourceId();
            }
            return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), signerRegion, "s3-outposts"));
        }
    }

    ss << m_baseUri;
    if (!uriPathPrefix.empty())
    {
        ss << uriPathPrefix << name;
    }

    Aws::String signerServiceName = hasOutpostId ? "s3-outposts" : SERVICE_NAME;
    return ComputeEndpointOutcome(ComputeEndpointResult(ss.str(), signerRegion, signerServiceName));
}
