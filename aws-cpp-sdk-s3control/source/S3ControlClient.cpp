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
#include <aws/s3control/model/CreateJobRequest.h>
#include <aws/s3control/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3control/model/DescribeJobRequest.h>
#include <aws/s3control/model/GetPublicAccessBlockRequest.h>
#include <aws/s3control/model/ListJobsRequest.h>
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
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
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
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
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
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
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
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
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
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
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
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
