/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

#include <aws/s3control/S3ControlClient.h>
#include <aws/s3control/S3ControlEndpoint.h>
#include <aws/s3control/S3ControlErrorMarshaller.h>
#include <aws/s3control/model/CreateAccessPointRequest.h>
#include <aws/s3control/model/CreateJobRequest.h>
#include <aws/s3control/model/DeleteAccessPointRequest.h>
#include <aws/s3control/model/DeleteAccessPointPolicyRequest.h>
#include <aws/s3control/model/DeleteJobTaggingRequest.h>
#include <aws/s3control/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3control/model/DescribeJobRequest.h>
#include <aws/s3control/model/GetAccessPointRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusRequest.h>
#include <aws/s3control/model/GetJobTaggingRequest.h>
#include <aws/s3control/model/GetPublicAccessBlockRequest.h>
#include <aws/s3control/model/ListAccessPointsRequest.h>
#include <aws/s3control/model/ListJobsRequest.h>
#include <aws/s3control/model/PutAccessPointPolicyRequest.h>
#include <aws/s3control/model/PutJobTaggingRequest.h>
#include <aws/s3control/model/PutPublicAccessBlockRequest.h>
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
        SERVICE_NAME, clientConfiguration.region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent, false),
    Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

S3ControlClient::S3ControlClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent, false),
    Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

S3ControlClient::S3ControlClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent, false),
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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  if (config.endpointOverride.empty())
  {
      m_baseUri = S3ControlEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
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
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPoint", "Required field: AccountId, is not set");
    return CreateAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPoint", "Required field: Name, is not set");
    return CreateAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return CreateAccessPointOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/accesspoint/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return CreateAccessPointOutcome(NoResult());
  }
  else
  {
    return CreateAccessPointOutcome(outcome.GetError());
  }
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

CreateJobOutcome S3ControlClient::CreateJob(const CreateJobRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: AccountId, is not set");
    return CreateJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return CreateJobOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateJobOutcome(CreateJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateJobOutcome(outcome.GetError());
  }
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
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "Required field: AccountId, is not set");
    return DeleteAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "Required field: Name, is not set");
    return DeleteAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return DeleteAccessPointOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/accesspoint/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteAccessPointOutcome(NoResult());
  }
  else
  {
    return DeleteAccessPointOutcome(outcome.GetError());
  }
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

DeleteAccessPointPolicyOutcome S3ControlClient::DeleteAccessPointPolicy(const DeleteAccessPointPolicyRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicy", "Required field: AccountId, is not set");
    return DeleteAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicy", "Required field: Name, is not set");
    return DeleteAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return DeleteAccessPointPolicyOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/accesspoint/";
  ss << request.GetName();
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteAccessPointPolicyOutcome(NoResult());
  }
  else
  {
    return DeleteAccessPointPolicyOutcome(outcome.GetError());
  }
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
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return DeleteJobTaggingOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteJobTaggingOutcome(DeleteJobTaggingResult(outcome.GetResult()));
  }
  else
  {
    return DeleteJobTaggingOutcome(outcome.GetError());
  }
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
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return DeletePublicAccessBlockOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/configuration/publicAccessBlock";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeletePublicAccessBlockOutcome(NoResult());
  }
  else
  {
    return DeletePublicAccessBlockOutcome(outcome.GetError());
  }
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
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return DescribeJobOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return DescribeJobOutcome(DescribeJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeJobOutcome(outcome.GetError());
  }
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
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPoint", "Required field: AccountId, is not set");
    return GetAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPoint", "Required field: Name, is not set");
    return GetAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return GetAccessPointOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/accesspoint/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetAccessPointOutcome(GetAccessPointResult(outcome.GetResult()));
  }
  else
  {
    return GetAccessPointOutcome(outcome.GetError());
  }
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

GetAccessPointPolicyOutcome S3ControlClient::GetAccessPointPolicy(const GetAccessPointPolicyRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicy", "Required field: AccountId, is not set");
    return GetAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicy", "Required field: Name, is not set");
    return GetAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return GetAccessPointPolicyOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/accesspoint/";
  ss << request.GetName();
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetAccessPointPolicyOutcome(GetAccessPointPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetAccessPointPolicyOutcome(outcome.GetError());
  }
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

GetAccessPointPolicyStatusOutcome S3ControlClient::GetAccessPointPolicyStatus(const GetAccessPointPolicyStatusRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatus", "Required field: AccountId, is not set");
    return GetAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatus", "Required field: Name, is not set");
    return GetAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return GetAccessPointPolicyStatusOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/accesspoint/";
  ss << request.GetName();
  ss << "/policyStatus";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetAccessPointPolicyStatusOutcome(GetAccessPointPolicyStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetAccessPointPolicyStatusOutcome(outcome.GetError());
  }
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
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return GetJobTaggingOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetJobTaggingOutcome(GetJobTaggingResult(outcome.GetResult()));
  }
  else
  {
    return GetJobTaggingOutcome(outcome.GetError());
  }
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
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return GetPublicAccessBlockOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/configuration/publicAccessBlock";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPublicAccessBlockOutcome(GetPublicAccessBlockResult(outcome.GetResult()));
  }
  else
  {
    return GetPublicAccessBlockOutcome(outcome.GetError());
  }
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

ListAccessPointsOutcome S3ControlClient::ListAccessPoints(const ListAccessPointsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccessPoints", "Required field: AccountId, is not set");
    return ListAccessPointsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return ListAccessPointsOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/accesspoint";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListAccessPointsOutcome(ListAccessPointsResult(outcome.GetResult()));
  }
  else
  {
    return ListAccessPointsOutcome(outcome.GetError());
  }
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

ListJobsOutcome S3ControlClient::ListJobs(const ListJobsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AccountId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return ListJobsOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListJobsOutcome(ListJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListJobsOutcome(outcome.GetError());
  }
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

PutAccessPointPolicyOutcome S3ControlClient::PutAccessPointPolicy(const PutAccessPointPolicyRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicy", "Required field: AccountId, is not set");
    return PutAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicy", "Required field: Name, is not set");
    return PutAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return PutAccessPointPolicyOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/accesspoint/";
  ss << request.GetName();
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return PutAccessPointPolicyOutcome(NoResult());
  }
  else
  {
    return PutAccessPointPolicyOutcome(outcome.GetError());
  }
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
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return PutJobTaggingOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  ss << "/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return PutJobTaggingOutcome(PutJobTaggingResult(outcome.GetResult()));
  }
  else
  {
    return PutJobTaggingOutcome(outcome.GetError());
  }
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
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return PutPublicAccessBlockOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/configuration/publicAccessBlock";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return PutPublicAccessBlockOutcome(NoResult());
  }
  else
  {
    return PutPublicAccessBlockOutcome(outcome.GetError());
  }
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
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return UpdateJobPriorityOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  ss << "/priority";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateJobPriorityOutcome(UpdateJobPriorityResult(outcome.GetResult()));
  }
  else
  {
    return UpdateJobPriorityOutcome(outcome.GetError());
  }
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
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return UpdateJobStatusOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/jobs/";
  ss << request.GetJobId();
  ss << "/status";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateJobStatusOutcome(UpdateJobStatusResult(outcome.GetResult()));
  }
  else
  {
    return UpdateJobStatusOutcome(outcome.GetError());
  }
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



#include<aws/core/utils/HashingUtils.h>

Aws::String S3ControlClient::ComputeEndpointString(const Aws::String& accountId) const
{
    Aws::StringStream ss;
    // The account ID have to follow RFC 1123 2.1(https://tools.ietf.org/html/rfc1123#section-2.1).
    if(Aws::Utils::IsValidDnsLabel(accountId))
    {
        ss << m_scheme << "://" << accountId << "." << m_baseUri;
        return ss.str();
    }
    else
    {
        return {};
    }
}

Aws::String S3ControlClient::ComputeEndpointString() const
{
    Aws::StringStream ss;
    ss << m_scheme << "://" << m_baseUri;
    return ss.str();
}
