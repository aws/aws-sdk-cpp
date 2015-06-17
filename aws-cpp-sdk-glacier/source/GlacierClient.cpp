/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/glacier/GlacierClient.h>
#include <aws/glacier/GlacierEndpoint.h>
#include <aws/glacier/GlacierErrorMarshaller.h>
#include <aws/glacier/model/AbortMultipartUploadRequest.h>
#include <aws/glacier/model/CompleteMultipartUploadRequest.h>
#include <aws/glacier/model/CreateVaultRequest.h>
#include <aws/glacier/model/DeleteArchiveRequest.h>
#include <aws/glacier/model/DeleteVaultRequest.h>
#include <aws/glacier/model/DeleteVaultAccessPolicyRequest.h>
#include <aws/glacier/model/DeleteVaultNotificationsRequest.h>
#include <aws/glacier/model/DescribeJobRequest.h>
#include <aws/glacier/model/DescribeVaultRequest.h>
#include <aws/glacier/model/GetDataRetrievalPolicyRequest.h>
#include <aws/glacier/model/GetJobOutputRequest.h>
#include <aws/glacier/model/GetVaultAccessPolicyRequest.h>
#include <aws/glacier/model/GetVaultNotificationsRequest.h>
#include <aws/glacier/model/InitiateJobRequest.h>
#include <aws/glacier/model/InitiateMultipartUploadRequest.h>
#include <aws/glacier/model/ListJobsRequest.h>
#include <aws/glacier/model/ListMultipartUploadsRequest.h>
#include <aws/glacier/model/ListPartsRequest.h>
#include <aws/glacier/model/ListVaultsRequest.h>
#include <aws/glacier/model/SetDataRetrievalPolicyRequest.h>
#include <aws/glacier/model/SetVaultAccessPolicyRequest.h>
#include <aws/glacier/model/SetVaultNotificationsRequest.h>
#include <aws/glacier/model/UploadArchiveRequest.h>
#include <aws/glacier/model/UploadMultipartPartRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Glacier;
using namespace Aws::Glacier::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "glacier";
static const char* ALLOCATION_TAG = "GlacierClient";

GlacierClient::GlacierClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlacierClient::GlacierClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlacierClient::GlacierClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlacierClient::~GlacierClient()
{
}

void GlacierClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << GlacierEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AbortMultipartUploadOutcome GlacierClient::AbortMultipartUpload(const AbortMultipartUploadRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads/";
  ss << request.GetUploadId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return AbortMultipartUploadOutcome(NoResult());
  }
  else
  {
    return AbortMultipartUploadOutcome(outcome.GetError());
  }
}

AbortMultipartUploadOutcomeCallable GlacierClient::AbortMultipartUploadCallable(const AbortMultipartUploadRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::AbortMultipartUpload, this, request);
}

void GlacierClient::AbortMultipartUploadAsync(const AbortMultipartUploadRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::AbortMultipartUploadAsyncHelper, this, request, context);
}

void GlacierClient::AbortMultipartUploadAsyncHelper(const AbortMultipartUploadRequest& request, const AsyncCallerContext* context) const
{
  m_onAbortMultipartUploadOutcomeReceived(this, request, AbortMultipartUpload(request), context);
}

CompleteMultipartUploadOutcome GlacierClient::CompleteMultipartUpload(const CompleteMultipartUploadRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads/";
  ss << request.GetUploadId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CompleteMultipartUploadOutcome(CompleteMultipartUploadResult(outcome.GetResult()));
  }
  else
  {
    return CompleteMultipartUploadOutcome(outcome.GetError());
  }
}

CompleteMultipartUploadOutcomeCallable GlacierClient::CompleteMultipartUploadCallable(const CompleteMultipartUploadRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::CompleteMultipartUpload, this, request);
}

void GlacierClient::CompleteMultipartUploadAsync(const CompleteMultipartUploadRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::CompleteMultipartUploadAsyncHelper, this, request, context);
}

void GlacierClient::CompleteMultipartUploadAsyncHelper(const CompleteMultipartUploadRequest& request, const AsyncCallerContext* context) const
{
  m_onCompleteMultipartUploadOutcomeReceived(this, request, CompleteMultipartUpload(request), context);
}

CreateVaultOutcome GlacierClient::CreateVault(const CreateVaultRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return CreateVaultOutcome(CreateVaultResult(outcome.GetResult()));
  }
  else
  {
    return CreateVaultOutcome(outcome.GetError());
  }
}

CreateVaultOutcomeCallable GlacierClient::CreateVaultCallable(const CreateVaultRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::CreateVault, this, request);
}

void GlacierClient::CreateVaultAsync(const CreateVaultRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::CreateVaultAsyncHelper, this, request, context);
}

void GlacierClient::CreateVaultAsyncHelper(const CreateVaultRequest& request, const AsyncCallerContext* context) const
{
  m_onCreateVaultOutcomeReceived(this, request, CreateVault(request), context);
}

DeleteArchiveOutcome GlacierClient::DeleteArchive(const DeleteArchiveRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/archives/";
  ss << request.GetArchiveId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteArchiveOutcome(NoResult());
  }
  else
  {
    return DeleteArchiveOutcome(outcome.GetError());
  }
}

DeleteArchiveOutcomeCallable GlacierClient::DeleteArchiveCallable(const DeleteArchiveRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::DeleteArchive, this, request);
}

void GlacierClient::DeleteArchiveAsync(const DeleteArchiveRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::DeleteArchiveAsyncHelper, this, request, context);
}

void GlacierClient::DeleteArchiveAsyncHelper(const DeleteArchiveRequest& request, const AsyncCallerContext* context) const
{
  m_onDeleteArchiveOutcomeReceived(this, request, DeleteArchive(request), context);
}

DeleteVaultOutcome GlacierClient::DeleteVault(const DeleteVaultRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteVaultOutcome(NoResult());
  }
  else
  {
    return DeleteVaultOutcome(outcome.GetError());
  }
}

DeleteVaultOutcomeCallable GlacierClient::DeleteVaultCallable(const DeleteVaultRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::DeleteVault, this, request);
}

void GlacierClient::DeleteVaultAsync(const DeleteVaultRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::DeleteVaultAsyncHelper, this, request, context);
}

void GlacierClient::DeleteVaultAsyncHelper(const DeleteVaultRequest& request, const AsyncCallerContext* context) const
{
  m_onDeleteVaultOutcomeReceived(this, request, DeleteVault(request), context);
}

DeleteVaultAccessPolicyOutcome GlacierClient::DeleteVaultAccessPolicy(const DeleteVaultAccessPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/access-policy";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteVaultAccessPolicyOutcome(NoResult());
  }
  else
  {
    return DeleteVaultAccessPolicyOutcome(outcome.GetError());
  }
}

DeleteVaultAccessPolicyOutcomeCallable GlacierClient::DeleteVaultAccessPolicyCallable(const DeleteVaultAccessPolicyRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::DeleteVaultAccessPolicy, this, request);
}

void GlacierClient::DeleteVaultAccessPolicyAsync(const DeleteVaultAccessPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::DeleteVaultAccessPolicyAsyncHelper, this, request, context);
}

void GlacierClient::DeleteVaultAccessPolicyAsyncHelper(const DeleteVaultAccessPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_onDeleteVaultAccessPolicyOutcomeReceived(this, request, DeleteVaultAccessPolicy(request), context);
}

DeleteVaultNotificationsOutcome GlacierClient::DeleteVaultNotifications(const DeleteVaultNotificationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/notification-configuration";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteVaultNotificationsOutcome(NoResult());
  }
  else
  {
    return DeleteVaultNotificationsOutcome(outcome.GetError());
  }
}

DeleteVaultNotificationsOutcomeCallable GlacierClient::DeleteVaultNotificationsCallable(const DeleteVaultNotificationsRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::DeleteVaultNotifications, this, request);
}

void GlacierClient::DeleteVaultNotificationsAsync(const DeleteVaultNotificationsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::DeleteVaultNotificationsAsyncHelper, this, request, context);
}

void GlacierClient::DeleteVaultNotificationsAsyncHelper(const DeleteVaultNotificationsRequest& request, const AsyncCallerContext* context) const
{
  m_onDeleteVaultNotificationsOutcomeReceived(this, request, DeleteVaultNotifications(request), context);
}

DescribeJobOutcome GlacierClient::DescribeJob(const DescribeJobRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/jobs/";
  ss << request.GetJobId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return DescribeJobOutcome(DescribeJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeJobOutcome(outcome.GetError());
  }
}

DescribeJobOutcomeCallable GlacierClient::DescribeJobCallable(const DescribeJobRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::DescribeJob, this, request);
}

void GlacierClient::DescribeJobAsync(const DescribeJobRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::DescribeJobAsyncHelper, this, request, context);
}

void GlacierClient::DescribeJobAsyncHelper(const DescribeJobRequest& request, const AsyncCallerContext* context) const
{
  m_onDescribeJobOutcomeReceived(this, request, DescribeJob(request), context);
}

DescribeVaultOutcome GlacierClient::DescribeVault(const DescribeVaultRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return DescribeVaultOutcome(DescribeVaultResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVaultOutcome(outcome.GetError());
  }
}

DescribeVaultOutcomeCallable GlacierClient::DescribeVaultCallable(const DescribeVaultRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::DescribeVault, this, request);
}

void GlacierClient::DescribeVaultAsync(const DescribeVaultRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::DescribeVaultAsyncHelper, this, request, context);
}

void GlacierClient::DescribeVaultAsyncHelper(const DescribeVaultRequest& request, const AsyncCallerContext* context) const
{
  m_onDescribeVaultOutcomeReceived(this, request, DescribeVault(request), context);
}

GetDataRetrievalPolicyOutcome GlacierClient::GetDataRetrievalPolicy(const GetDataRetrievalPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/policies/data-retrieval";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDataRetrievalPolicyOutcome(GetDataRetrievalPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetDataRetrievalPolicyOutcome(outcome.GetError());
  }
}

GetDataRetrievalPolicyOutcomeCallable GlacierClient::GetDataRetrievalPolicyCallable(const GetDataRetrievalPolicyRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::GetDataRetrievalPolicy, this, request);
}

void GlacierClient::GetDataRetrievalPolicyAsync(const GetDataRetrievalPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::GetDataRetrievalPolicyAsyncHelper, this, request, context);
}

void GlacierClient::GetDataRetrievalPolicyAsyncHelper(const GetDataRetrievalPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_onGetDataRetrievalPolicyOutcomeReceived(this, request, GetDataRetrievalPolicy(request), context);
}

GetJobOutputOutcome GlacierClient::GetJobOutput(const GetJobOutputRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/jobs/";
  ss << request.GetJobId();
  ss << "/output";

  StreamOutcome outcome = MakeRequestWithUnparsedResponse(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetJobOutputOutcome(GetJobOutputResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetJobOutputOutcome(outcome.GetError());
  }
}

GetJobOutputOutcomeCallable GlacierClient::GetJobOutputCallable(const GetJobOutputRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::GetJobOutput, this, request);
}

void GlacierClient::GetJobOutputAsync(const GetJobOutputRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::GetJobOutputAsyncHelper, this, request, context);
}

void GlacierClient::GetJobOutputAsyncHelper(const GetJobOutputRequest& request, const AsyncCallerContext* context) const
{
  m_onGetJobOutputOutcomeReceived(this, request, GetJobOutput(request), context);
}

GetVaultAccessPolicyOutcome GlacierClient::GetVaultAccessPolicy(const GetVaultAccessPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/access-policy";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetVaultAccessPolicyOutcome(GetVaultAccessPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetVaultAccessPolicyOutcome(outcome.GetError());
  }
}

GetVaultAccessPolicyOutcomeCallable GlacierClient::GetVaultAccessPolicyCallable(const GetVaultAccessPolicyRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::GetVaultAccessPolicy, this, request);
}

void GlacierClient::GetVaultAccessPolicyAsync(const GetVaultAccessPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::GetVaultAccessPolicyAsyncHelper, this, request, context);
}

void GlacierClient::GetVaultAccessPolicyAsyncHelper(const GetVaultAccessPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_onGetVaultAccessPolicyOutcomeReceived(this, request, GetVaultAccessPolicy(request), context);
}

GetVaultNotificationsOutcome GlacierClient::GetVaultNotifications(const GetVaultNotificationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/notification-configuration";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetVaultNotificationsOutcome(GetVaultNotificationsResult(outcome.GetResult()));
  }
  else
  {
    return GetVaultNotificationsOutcome(outcome.GetError());
  }
}

GetVaultNotificationsOutcomeCallable GlacierClient::GetVaultNotificationsCallable(const GetVaultNotificationsRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::GetVaultNotifications, this, request);
}

void GlacierClient::GetVaultNotificationsAsync(const GetVaultNotificationsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::GetVaultNotificationsAsyncHelper, this, request, context);
}

void GlacierClient::GetVaultNotificationsAsyncHelper(const GetVaultNotificationsRequest& request, const AsyncCallerContext* context) const
{
  m_onGetVaultNotificationsOutcomeReceived(this, request, GetVaultNotifications(request), context);
}

InitiateJobOutcome GlacierClient::InitiateJob(const InitiateJobRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/jobs";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return InitiateJobOutcome(InitiateJobResult(outcome.GetResult()));
  }
  else
  {
    return InitiateJobOutcome(outcome.GetError());
  }
}

InitiateJobOutcomeCallable GlacierClient::InitiateJobCallable(const InitiateJobRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::InitiateJob, this, request);
}

void GlacierClient::InitiateJobAsync(const InitiateJobRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::InitiateJobAsyncHelper, this, request, context);
}

void GlacierClient::InitiateJobAsyncHelper(const InitiateJobRequest& request, const AsyncCallerContext* context) const
{
  m_onInitiateJobOutcomeReceived(this, request, InitiateJob(request), context);
}

InitiateMultipartUploadOutcome GlacierClient::InitiateMultipartUpload(const InitiateMultipartUploadRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return InitiateMultipartUploadOutcome(InitiateMultipartUploadResult(outcome.GetResult()));
  }
  else
  {
    return InitiateMultipartUploadOutcome(outcome.GetError());
  }
}

InitiateMultipartUploadOutcomeCallable GlacierClient::InitiateMultipartUploadCallable(const InitiateMultipartUploadRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::InitiateMultipartUpload, this, request);
}

void GlacierClient::InitiateMultipartUploadAsync(const InitiateMultipartUploadRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::InitiateMultipartUploadAsyncHelper, this, request, context);
}

void GlacierClient::InitiateMultipartUploadAsyncHelper(const InitiateMultipartUploadRequest& request, const AsyncCallerContext* context) const
{
  m_onInitiateMultipartUploadOutcomeReceived(this, request, InitiateMultipartUpload(request), context);
}

ListJobsOutcome GlacierClient::ListJobs(const ListJobsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/jobs";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListJobsOutcome(ListJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListJobsOutcome(outcome.GetError());
  }
}

ListJobsOutcomeCallable GlacierClient::ListJobsCallable(const ListJobsRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::ListJobs, this, request);
}

void GlacierClient::ListJobsAsync(const ListJobsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::ListJobsAsyncHelper, this, request, context);
}

void GlacierClient::ListJobsAsyncHelper(const ListJobsRequest& request, const AsyncCallerContext* context) const
{
  m_onListJobsOutcomeReceived(this, request, ListJobs(request), context);
}

ListMultipartUploadsOutcome GlacierClient::ListMultipartUploads(const ListMultipartUploadsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListMultipartUploadsOutcome(ListMultipartUploadsResult(outcome.GetResult()));
  }
  else
  {
    return ListMultipartUploadsOutcome(outcome.GetError());
  }
}

ListMultipartUploadsOutcomeCallable GlacierClient::ListMultipartUploadsCallable(const ListMultipartUploadsRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::ListMultipartUploads, this, request);
}

void GlacierClient::ListMultipartUploadsAsync(const ListMultipartUploadsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::ListMultipartUploadsAsyncHelper, this, request, context);
}

void GlacierClient::ListMultipartUploadsAsyncHelper(const ListMultipartUploadsRequest& request, const AsyncCallerContext* context) const
{
  m_onListMultipartUploadsOutcomeReceived(this, request, ListMultipartUploads(request), context);
}

ListPartsOutcome GlacierClient::ListParts(const ListPartsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads/";
  ss << request.GetUploadId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListPartsOutcome(ListPartsResult(outcome.GetResult()));
  }
  else
  {
    return ListPartsOutcome(outcome.GetError());
  }
}

ListPartsOutcomeCallable GlacierClient::ListPartsCallable(const ListPartsRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::ListParts, this, request);
}

void GlacierClient::ListPartsAsync(const ListPartsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::ListPartsAsyncHelper, this, request, context);
}

void GlacierClient::ListPartsAsyncHelper(const ListPartsRequest& request, const AsyncCallerContext* context) const
{
  m_onListPartsOutcomeReceived(this, request, ListParts(request), context);
}

ListVaultsOutcome GlacierClient::ListVaults(const ListVaultsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListVaultsOutcome(ListVaultsResult(outcome.GetResult()));
  }
  else
  {
    return ListVaultsOutcome(outcome.GetError());
  }
}

ListVaultsOutcomeCallable GlacierClient::ListVaultsCallable(const ListVaultsRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::ListVaults, this, request);
}

void GlacierClient::ListVaultsAsync(const ListVaultsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::ListVaultsAsyncHelper, this, request, context);
}

void GlacierClient::ListVaultsAsyncHelper(const ListVaultsRequest& request, const AsyncCallerContext* context) const
{
  m_onListVaultsOutcomeReceived(this, request, ListVaults(request), context);
}

SetDataRetrievalPolicyOutcome GlacierClient::SetDataRetrievalPolicy(const SetDataRetrievalPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/policies/data-retrieval";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return SetDataRetrievalPolicyOutcome(NoResult());
  }
  else
  {
    return SetDataRetrievalPolicyOutcome(outcome.GetError());
  }
}

SetDataRetrievalPolicyOutcomeCallable GlacierClient::SetDataRetrievalPolicyCallable(const SetDataRetrievalPolicyRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::SetDataRetrievalPolicy, this, request);
}

void GlacierClient::SetDataRetrievalPolicyAsync(const SetDataRetrievalPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::SetDataRetrievalPolicyAsyncHelper, this, request, context);
}

void GlacierClient::SetDataRetrievalPolicyAsyncHelper(const SetDataRetrievalPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_onSetDataRetrievalPolicyOutcomeReceived(this, request, SetDataRetrievalPolicy(request), context);
}

SetVaultAccessPolicyOutcome GlacierClient::SetVaultAccessPolicy(const SetVaultAccessPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/access-policy";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return SetVaultAccessPolicyOutcome(NoResult());
  }
  else
  {
    return SetVaultAccessPolicyOutcome(outcome.GetError());
  }
}

SetVaultAccessPolicyOutcomeCallable GlacierClient::SetVaultAccessPolicyCallable(const SetVaultAccessPolicyRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::SetVaultAccessPolicy, this, request);
}

void GlacierClient::SetVaultAccessPolicyAsync(const SetVaultAccessPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::SetVaultAccessPolicyAsyncHelper, this, request, context);
}

void GlacierClient::SetVaultAccessPolicyAsyncHelper(const SetVaultAccessPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_onSetVaultAccessPolicyOutcomeReceived(this, request, SetVaultAccessPolicy(request), context);
}

SetVaultNotificationsOutcome GlacierClient::SetVaultNotifications(const SetVaultNotificationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/notification-configuration";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return SetVaultNotificationsOutcome(NoResult());
  }
  else
  {
    return SetVaultNotificationsOutcome(outcome.GetError());
  }
}

SetVaultNotificationsOutcomeCallable GlacierClient::SetVaultNotificationsCallable(const SetVaultNotificationsRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::SetVaultNotifications, this, request);
}

void GlacierClient::SetVaultNotificationsAsync(const SetVaultNotificationsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::SetVaultNotificationsAsyncHelper, this, request, context);
}

void GlacierClient::SetVaultNotificationsAsyncHelper(const SetVaultNotificationsRequest& request, const AsyncCallerContext* context) const
{
  m_onSetVaultNotificationsOutcomeReceived(this, request, SetVaultNotifications(request), context);
}

UploadArchiveOutcome GlacierClient::UploadArchive(const UploadArchiveRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/archives";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UploadArchiveOutcome(UploadArchiveResult(outcome.GetResult()));
  }
  else
  {
    return UploadArchiveOutcome(outcome.GetError());
  }
}

UploadArchiveOutcomeCallable GlacierClient::UploadArchiveCallable(const UploadArchiveRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::UploadArchive, this, request);
}

void GlacierClient::UploadArchiveAsync(const UploadArchiveRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::UploadArchiveAsyncHelper, this, request, context);
}

void GlacierClient::UploadArchiveAsyncHelper(const UploadArchiveRequest& request, const AsyncCallerContext* context) const
{
  m_onUploadArchiveOutcomeReceived(this, request, UploadArchive(request), context);
}

UploadMultipartPartOutcome GlacierClient::UploadMultipartPart(const UploadMultipartPartRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads/";
  ss << request.GetUploadId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UploadMultipartPartOutcome(UploadMultipartPartResult(outcome.GetResult()));
  }
  else
  {
    return UploadMultipartPartOutcome(outcome.GetError());
  }
}

UploadMultipartPartOutcomeCallable GlacierClient::UploadMultipartPartCallable(const UploadMultipartPartRequest& request) const
{
  return std::async(std::launch::async, &GlacierClient::UploadMultipartPart, this, request);
}

void GlacierClient::UploadMultipartPartAsync(const UploadMultipartPartRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&GlacierClient::UploadMultipartPartAsyncHelper, this, request, context);
}

void GlacierClient::UploadMultipartPartAsyncHelper(const UploadMultipartPartRequest& request, const AsyncCallerContext* context) const
{
  m_onUploadMultipartPartOutcomeReceived(this, request, UploadMultipartPart(request), context);
}

