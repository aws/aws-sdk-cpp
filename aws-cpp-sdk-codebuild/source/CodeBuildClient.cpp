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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/codebuild/CodeBuildClient.h>
#include <aws/codebuild/CodeBuildEndpoint.h>
#include <aws/codebuild/CodeBuildErrorMarshaller.h>
#include <aws/codebuild/model/BatchDeleteBuildsRequest.h>
#include <aws/codebuild/model/BatchGetBuildBatchesRequest.h>
#include <aws/codebuild/model/BatchGetBuildsRequest.h>
#include <aws/codebuild/model/BatchGetProjectsRequest.h>
#include <aws/codebuild/model/BatchGetReportGroupsRequest.h>
#include <aws/codebuild/model/BatchGetReportsRequest.h>
#include <aws/codebuild/model/CreateProjectRequest.h>
#include <aws/codebuild/model/CreateReportGroupRequest.h>
#include <aws/codebuild/model/CreateWebhookRequest.h>
#include <aws/codebuild/model/DeleteBuildBatchRequest.h>
#include <aws/codebuild/model/DeleteProjectRequest.h>
#include <aws/codebuild/model/DeleteReportRequest.h>
#include <aws/codebuild/model/DeleteReportGroupRequest.h>
#include <aws/codebuild/model/DeleteResourcePolicyRequest.h>
#include <aws/codebuild/model/DeleteSourceCredentialsRequest.h>
#include <aws/codebuild/model/DeleteWebhookRequest.h>
#include <aws/codebuild/model/DescribeCodeCoveragesRequest.h>
#include <aws/codebuild/model/DescribeTestCasesRequest.h>
#include <aws/codebuild/model/GetReportGroupTrendRequest.h>
#include <aws/codebuild/model/GetResourcePolicyRequest.h>
#include <aws/codebuild/model/ImportSourceCredentialsRequest.h>
#include <aws/codebuild/model/InvalidateProjectCacheRequest.h>
#include <aws/codebuild/model/ListBuildBatchesRequest.h>
#include <aws/codebuild/model/ListBuildBatchesForProjectRequest.h>
#include <aws/codebuild/model/ListBuildsRequest.h>
#include <aws/codebuild/model/ListBuildsForProjectRequest.h>
#include <aws/codebuild/model/ListCuratedEnvironmentImagesRequest.h>
#include <aws/codebuild/model/ListProjectsRequest.h>
#include <aws/codebuild/model/ListReportGroupsRequest.h>
#include <aws/codebuild/model/ListReportsRequest.h>
#include <aws/codebuild/model/ListReportsForReportGroupRequest.h>
#include <aws/codebuild/model/ListSharedProjectsRequest.h>
#include <aws/codebuild/model/ListSharedReportGroupsRequest.h>
#include <aws/codebuild/model/ListSourceCredentialsRequest.h>
#include <aws/codebuild/model/PutResourcePolicyRequest.h>
#include <aws/codebuild/model/RetryBuildRequest.h>
#include <aws/codebuild/model/RetryBuildBatchRequest.h>
#include <aws/codebuild/model/StartBuildRequest.h>
#include <aws/codebuild/model/StartBuildBatchRequest.h>
#include <aws/codebuild/model/StopBuildRequest.h>
#include <aws/codebuild/model/StopBuildBatchRequest.h>
#include <aws/codebuild/model/UpdateProjectRequest.h>
#include <aws/codebuild/model/UpdateProjectVisibilityRequest.h>
#include <aws/codebuild/model/UpdateReportGroupRequest.h>
#include <aws/codebuild/model/UpdateWebhookRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeBuild;
using namespace Aws::CodeBuild::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codebuild";
static const char* ALLOCATION_TAG = "CodeBuildClient";

CodeBuildClient::CodeBuildClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeBuildClient::~CodeBuildClient()
{
}

void CodeBuildClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CodeBuild");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodeBuildEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodeBuildClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

BatchDeleteBuildsOutcome CodeBuildClient::BatchDeleteBuilds(const BatchDeleteBuildsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDeleteBuildsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteBuildsOutcomeCallable CodeBuildClient::BatchDeleteBuildsCallable(const BatchDeleteBuildsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteBuildsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteBuilds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientBatchDeleteBuildsAsyncHelper(CodeBuildClient const * const clientThis, const BatchDeleteBuildsRequest& request, const BatchDeleteBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteBuilds(request), context);
}

void CodeBuildClient::BatchDeleteBuildsAsync(const BatchDeleteBuildsRequest& request, const BatchDeleteBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientBatchDeleteBuildsAsyncHelper( this, request, handler, context ); } );
}

BatchGetBuildBatchesOutcome CodeBuildClient::BatchGetBuildBatches(const BatchGetBuildBatchesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetBuildBatchesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetBuildBatchesOutcomeCallable CodeBuildClient::BatchGetBuildBatchesCallable(const BatchGetBuildBatchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetBuildBatchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetBuildBatches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientBatchGetBuildBatchesAsyncHelper(CodeBuildClient const * const clientThis, const BatchGetBuildBatchesRequest& request, const BatchGetBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetBuildBatches(request), context);
}

void CodeBuildClient::BatchGetBuildBatchesAsync(const BatchGetBuildBatchesRequest& request, const BatchGetBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientBatchGetBuildBatchesAsyncHelper( this, request, handler, context ); } );
}

BatchGetBuildsOutcome CodeBuildClient::BatchGetBuilds(const BatchGetBuildsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetBuildsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetBuildsOutcomeCallable CodeBuildClient::BatchGetBuildsCallable(const BatchGetBuildsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetBuildsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetBuilds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientBatchGetBuildsAsyncHelper(CodeBuildClient const * const clientThis, const BatchGetBuildsRequest& request, const BatchGetBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetBuilds(request), context);
}

void CodeBuildClient::BatchGetBuildsAsync(const BatchGetBuildsRequest& request, const BatchGetBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientBatchGetBuildsAsyncHelper( this, request, handler, context ); } );
}

BatchGetProjectsOutcome CodeBuildClient::BatchGetProjects(const BatchGetProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetProjectsOutcomeCallable CodeBuildClient::BatchGetProjectsCallable(const BatchGetProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientBatchGetProjectsAsyncHelper(CodeBuildClient const * const clientThis, const BatchGetProjectsRequest& request, const BatchGetProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetProjects(request), context);
}

void CodeBuildClient::BatchGetProjectsAsync(const BatchGetProjectsRequest& request, const BatchGetProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientBatchGetProjectsAsyncHelper( this, request, handler, context ); } );
}

BatchGetReportGroupsOutcome CodeBuildClient::BatchGetReportGroups(const BatchGetReportGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetReportGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetReportGroupsOutcomeCallable CodeBuildClient::BatchGetReportGroupsCallable(const BatchGetReportGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetReportGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetReportGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientBatchGetReportGroupsAsyncHelper(CodeBuildClient const * const clientThis, const BatchGetReportGroupsRequest& request, const BatchGetReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetReportGroups(request), context);
}

void CodeBuildClient::BatchGetReportGroupsAsync(const BatchGetReportGroupsRequest& request, const BatchGetReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientBatchGetReportGroupsAsyncHelper( this, request, handler, context ); } );
}

BatchGetReportsOutcome CodeBuildClient::BatchGetReports(const BatchGetReportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetReportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetReportsOutcomeCallable CodeBuildClient::BatchGetReportsCallable(const BatchGetReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientBatchGetReportsAsyncHelper(CodeBuildClient const * const clientThis, const BatchGetReportsRequest& request, const BatchGetReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetReports(request), context);
}

void CodeBuildClient::BatchGetReportsAsync(const BatchGetReportsRequest& request, const BatchGetReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientBatchGetReportsAsyncHelper( this, request, handler, context ); } );
}

CreateProjectOutcome CodeBuildClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable CodeBuildClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientCreateProjectAsyncHelper(CodeBuildClient const * const clientThis, const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProject(request), context);
}

void CodeBuildClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientCreateProjectAsyncHelper( this, request, handler, context ); } );
}

CreateReportGroupOutcome CodeBuildClient::CreateReportGroup(const CreateReportGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateReportGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReportGroupOutcomeCallable CodeBuildClient::CreateReportGroupCallable(const CreateReportGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReportGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReportGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientCreateReportGroupAsyncHelper(CodeBuildClient const * const clientThis, const CreateReportGroupRequest& request, const CreateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateReportGroup(request), context);
}

void CodeBuildClient::CreateReportGroupAsync(const CreateReportGroupRequest& request, const CreateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientCreateReportGroupAsyncHelper( this, request, handler, context ); } );
}

CreateWebhookOutcome CodeBuildClient::CreateWebhook(const CreateWebhookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWebhookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWebhookOutcomeCallable CodeBuildClient::CreateWebhookCallable(const CreateWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientCreateWebhookAsyncHelper(CodeBuildClient const * const clientThis, const CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWebhook(request), context);
}

void CodeBuildClient::CreateWebhookAsync(const CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientCreateWebhookAsyncHelper( this, request, handler, context ); } );
}

DeleteBuildBatchOutcome CodeBuildClient::DeleteBuildBatch(const DeleteBuildBatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteBuildBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBuildBatchOutcomeCallable CodeBuildClient::DeleteBuildBatchCallable(const DeleteBuildBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBuildBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBuildBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientDeleteBuildBatchAsyncHelper(CodeBuildClient const * const clientThis, const DeleteBuildBatchRequest& request, const DeleteBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBuildBatch(request), context);
}

void CodeBuildClient::DeleteBuildBatchAsync(const DeleteBuildBatchRequest& request, const DeleteBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientDeleteBuildBatchAsyncHelper( this, request, handler, context ); } );
}

DeleteProjectOutcome CodeBuildClient::DeleteProject(const DeleteProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable CodeBuildClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientDeleteProjectAsyncHelper(CodeBuildClient const * const clientThis, const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProject(request), context);
}

void CodeBuildClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientDeleteProjectAsyncHelper( this, request, handler, context ); } );
}

DeleteReportOutcome CodeBuildClient::DeleteReport(const DeleteReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReportOutcomeCallable CodeBuildClient::DeleteReportCallable(const DeleteReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientDeleteReportAsyncHelper(CodeBuildClient const * const clientThis, const DeleteReportRequest& request, const DeleteReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReport(request), context);
}

void CodeBuildClient::DeleteReportAsync(const DeleteReportRequest& request, const DeleteReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientDeleteReportAsyncHelper( this, request, handler, context ); } );
}

DeleteReportGroupOutcome CodeBuildClient::DeleteReportGroup(const DeleteReportGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteReportGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReportGroupOutcomeCallable CodeBuildClient::DeleteReportGroupCallable(const DeleteReportGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReportGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReportGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientDeleteReportGroupAsyncHelper(CodeBuildClient const * const clientThis, const DeleteReportGroupRequest& request, const DeleteReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReportGroup(request), context);
}

void CodeBuildClient::DeleteReportGroupAsync(const DeleteReportGroupRequest& request, const DeleteReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientDeleteReportGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteResourcePolicyOutcome CodeBuildClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable CodeBuildClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientDeleteResourcePolicyAsyncHelper(CodeBuildClient const * const clientThis, const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourcePolicy(request), context);
}

void CodeBuildClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientDeleteResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteSourceCredentialsOutcome CodeBuildClient::DeleteSourceCredentials(const DeleteSourceCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSourceCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSourceCredentialsOutcomeCallable CodeBuildClient::DeleteSourceCredentialsCallable(const DeleteSourceCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSourceCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSourceCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientDeleteSourceCredentialsAsyncHelper(CodeBuildClient const * const clientThis, const DeleteSourceCredentialsRequest& request, const DeleteSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSourceCredentials(request), context);
}

void CodeBuildClient::DeleteSourceCredentialsAsync(const DeleteSourceCredentialsRequest& request, const DeleteSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientDeleteSourceCredentialsAsyncHelper( this, request, handler, context ); } );
}

DeleteWebhookOutcome CodeBuildClient::DeleteWebhook(const DeleteWebhookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWebhookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWebhookOutcomeCallable CodeBuildClient::DeleteWebhookCallable(const DeleteWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientDeleteWebhookAsyncHelper(CodeBuildClient const * const clientThis, const DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWebhook(request), context);
}

void CodeBuildClient::DeleteWebhookAsync(const DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientDeleteWebhookAsyncHelper( this, request, handler, context ); } );
}

DescribeCodeCoveragesOutcome CodeBuildClient::DescribeCodeCoverages(const DescribeCodeCoveragesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCodeCoveragesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCodeCoveragesOutcomeCallable CodeBuildClient::DescribeCodeCoveragesCallable(const DescribeCodeCoveragesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCodeCoveragesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCodeCoverages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientDescribeCodeCoveragesAsyncHelper(CodeBuildClient const * const clientThis, const DescribeCodeCoveragesRequest& request, const DescribeCodeCoveragesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCodeCoverages(request), context);
}

void CodeBuildClient::DescribeCodeCoveragesAsync(const DescribeCodeCoveragesRequest& request, const DescribeCodeCoveragesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientDescribeCodeCoveragesAsyncHelper( this, request, handler, context ); } );
}

DescribeTestCasesOutcome CodeBuildClient::DescribeTestCases(const DescribeTestCasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTestCasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTestCasesOutcomeCallable CodeBuildClient::DescribeTestCasesCallable(const DescribeTestCasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTestCasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTestCases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientDescribeTestCasesAsyncHelper(CodeBuildClient const * const clientThis, const DescribeTestCasesRequest& request, const DescribeTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTestCases(request), context);
}

void CodeBuildClient::DescribeTestCasesAsync(const DescribeTestCasesRequest& request, const DescribeTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientDescribeTestCasesAsyncHelper( this, request, handler, context ); } );
}

GetReportGroupTrendOutcome CodeBuildClient::GetReportGroupTrend(const GetReportGroupTrendRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetReportGroupTrendOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetReportGroupTrendOutcomeCallable CodeBuildClient::GetReportGroupTrendCallable(const GetReportGroupTrendRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReportGroupTrendOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReportGroupTrend(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientGetReportGroupTrendAsyncHelper(CodeBuildClient const * const clientThis, const GetReportGroupTrendRequest& request, const GetReportGroupTrendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetReportGroupTrend(request), context);
}

void CodeBuildClient::GetReportGroupTrendAsync(const GetReportGroupTrendRequest& request, const GetReportGroupTrendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientGetReportGroupTrendAsyncHelper( this, request, handler, context ); } );
}

GetResourcePolicyOutcome CodeBuildClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePolicyOutcomeCallable CodeBuildClient::GetResourcePolicyCallable(const GetResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientGetResourcePolicyAsyncHelper(CodeBuildClient const * const clientThis, const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourcePolicy(request), context);
}

void CodeBuildClient::GetResourcePolicyAsync(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientGetResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

ImportSourceCredentialsOutcome CodeBuildClient::ImportSourceCredentials(const ImportSourceCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportSourceCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportSourceCredentialsOutcomeCallable CodeBuildClient::ImportSourceCredentialsCallable(const ImportSourceCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportSourceCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportSourceCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientImportSourceCredentialsAsyncHelper(CodeBuildClient const * const clientThis, const ImportSourceCredentialsRequest& request, const ImportSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportSourceCredentials(request), context);
}

void CodeBuildClient::ImportSourceCredentialsAsync(const ImportSourceCredentialsRequest& request, const ImportSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientImportSourceCredentialsAsyncHelper( this, request, handler, context ); } );
}

InvalidateProjectCacheOutcome CodeBuildClient::InvalidateProjectCache(const InvalidateProjectCacheRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return InvalidateProjectCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InvalidateProjectCacheOutcomeCallable CodeBuildClient::InvalidateProjectCacheCallable(const InvalidateProjectCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InvalidateProjectCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InvalidateProjectCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientInvalidateProjectCacheAsyncHelper(CodeBuildClient const * const clientThis, const InvalidateProjectCacheRequest& request, const InvalidateProjectCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->InvalidateProjectCache(request), context);
}

void CodeBuildClient::InvalidateProjectCacheAsync(const InvalidateProjectCacheRequest& request, const InvalidateProjectCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientInvalidateProjectCacheAsyncHelper( this, request, handler, context ); } );
}

ListBuildBatchesOutcome CodeBuildClient::ListBuildBatches(const ListBuildBatchesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListBuildBatchesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBuildBatchesOutcomeCallable CodeBuildClient::ListBuildBatchesCallable(const ListBuildBatchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildBatchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuildBatches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListBuildBatchesAsyncHelper(CodeBuildClient const * const clientThis, const ListBuildBatchesRequest& request, const ListBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBuildBatches(request), context);
}

void CodeBuildClient::ListBuildBatchesAsync(const ListBuildBatchesRequest& request, const ListBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListBuildBatchesAsyncHelper( this, request, handler, context ); } );
}

ListBuildBatchesForProjectOutcome CodeBuildClient::ListBuildBatchesForProject(const ListBuildBatchesForProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListBuildBatchesForProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBuildBatchesForProjectOutcomeCallable CodeBuildClient::ListBuildBatchesForProjectCallable(const ListBuildBatchesForProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildBatchesForProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuildBatchesForProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListBuildBatchesForProjectAsyncHelper(CodeBuildClient const * const clientThis, const ListBuildBatchesForProjectRequest& request, const ListBuildBatchesForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBuildBatchesForProject(request), context);
}

void CodeBuildClient::ListBuildBatchesForProjectAsync(const ListBuildBatchesForProjectRequest& request, const ListBuildBatchesForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListBuildBatchesForProjectAsyncHelper( this, request, handler, context ); } );
}

ListBuildsOutcome CodeBuildClient::ListBuilds(const ListBuildsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListBuildsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBuildsOutcomeCallable CodeBuildClient::ListBuildsCallable(const ListBuildsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuilds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListBuildsAsyncHelper(CodeBuildClient const * const clientThis, const ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBuilds(request), context);
}

void CodeBuildClient::ListBuildsAsync(const ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListBuildsAsyncHelper( this, request, handler, context ); } );
}

ListBuildsForProjectOutcome CodeBuildClient::ListBuildsForProject(const ListBuildsForProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListBuildsForProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBuildsForProjectOutcomeCallable CodeBuildClient::ListBuildsForProjectCallable(const ListBuildsForProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildsForProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuildsForProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListBuildsForProjectAsyncHelper(CodeBuildClient const * const clientThis, const ListBuildsForProjectRequest& request, const ListBuildsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBuildsForProject(request), context);
}

void CodeBuildClient::ListBuildsForProjectAsync(const ListBuildsForProjectRequest& request, const ListBuildsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListBuildsForProjectAsyncHelper( this, request, handler, context ); } );
}

ListCuratedEnvironmentImagesOutcome CodeBuildClient::ListCuratedEnvironmentImages(const ListCuratedEnvironmentImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCuratedEnvironmentImagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCuratedEnvironmentImagesOutcomeCallable CodeBuildClient::ListCuratedEnvironmentImagesCallable(const ListCuratedEnvironmentImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCuratedEnvironmentImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCuratedEnvironmentImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListCuratedEnvironmentImagesAsyncHelper(CodeBuildClient const * const clientThis, const ListCuratedEnvironmentImagesRequest& request, const ListCuratedEnvironmentImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCuratedEnvironmentImages(request), context);
}

void CodeBuildClient::ListCuratedEnvironmentImagesAsync(const ListCuratedEnvironmentImagesRequest& request, const ListCuratedEnvironmentImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListCuratedEnvironmentImagesAsyncHelper( this, request, handler, context ); } );
}

ListProjectsOutcome CodeBuildClient::ListProjects(const ListProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable CodeBuildClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListProjectsAsyncHelper(CodeBuildClient const * const clientThis, const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProjects(request), context);
}

void CodeBuildClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListProjectsAsyncHelper( this, request, handler, context ); } );
}

ListReportGroupsOutcome CodeBuildClient::ListReportGroups(const ListReportGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReportGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReportGroupsOutcomeCallable CodeBuildClient::ListReportGroupsCallable(const ListReportGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReportGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReportGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListReportGroupsAsyncHelper(CodeBuildClient const * const clientThis, const ListReportGroupsRequest& request, const ListReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReportGroups(request), context);
}

void CodeBuildClient::ListReportGroupsAsync(const ListReportGroupsRequest& request, const ListReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListReportGroupsAsyncHelper( this, request, handler, context ); } );
}

ListReportsOutcome CodeBuildClient::ListReports(const ListReportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReportsOutcomeCallable CodeBuildClient::ListReportsCallable(const ListReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListReportsAsyncHelper(CodeBuildClient const * const clientThis, const ListReportsRequest& request, const ListReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReports(request), context);
}

void CodeBuildClient::ListReportsAsync(const ListReportsRequest& request, const ListReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListReportsAsyncHelper( this, request, handler, context ); } );
}

ListReportsForReportGroupOutcome CodeBuildClient::ListReportsForReportGroup(const ListReportsForReportGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReportsForReportGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReportsForReportGroupOutcomeCallable CodeBuildClient::ListReportsForReportGroupCallable(const ListReportsForReportGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReportsForReportGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReportsForReportGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListReportsForReportGroupAsyncHelper(CodeBuildClient const * const clientThis, const ListReportsForReportGroupRequest& request, const ListReportsForReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReportsForReportGroup(request), context);
}

void CodeBuildClient::ListReportsForReportGroupAsync(const ListReportsForReportGroupRequest& request, const ListReportsForReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListReportsForReportGroupAsyncHelper( this, request, handler, context ); } );
}

ListSharedProjectsOutcome CodeBuildClient::ListSharedProjects(const ListSharedProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSharedProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSharedProjectsOutcomeCallable CodeBuildClient::ListSharedProjectsCallable(const ListSharedProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSharedProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSharedProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListSharedProjectsAsyncHelper(CodeBuildClient const * const clientThis, const ListSharedProjectsRequest& request, const ListSharedProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSharedProjects(request), context);
}

void CodeBuildClient::ListSharedProjectsAsync(const ListSharedProjectsRequest& request, const ListSharedProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListSharedProjectsAsyncHelper( this, request, handler, context ); } );
}

ListSharedReportGroupsOutcome CodeBuildClient::ListSharedReportGroups(const ListSharedReportGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSharedReportGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSharedReportGroupsOutcomeCallable CodeBuildClient::ListSharedReportGroupsCallable(const ListSharedReportGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSharedReportGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSharedReportGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListSharedReportGroupsAsyncHelper(CodeBuildClient const * const clientThis, const ListSharedReportGroupsRequest& request, const ListSharedReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSharedReportGroups(request), context);
}

void CodeBuildClient::ListSharedReportGroupsAsync(const ListSharedReportGroupsRequest& request, const ListSharedReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListSharedReportGroupsAsyncHelper( this, request, handler, context ); } );
}

ListSourceCredentialsOutcome CodeBuildClient::ListSourceCredentials(const ListSourceCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSourceCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSourceCredentialsOutcomeCallable CodeBuildClient::ListSourceCredentialsCallable(const ListSourceCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSourceCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSourceCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientListSourceCredentialsAsyncHelper(CodeBuildClient const * const clientThis, const ListSourceCredentialsRequest& request, const ListSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSourceCredentials(request), context);
}

void CodeBuildClient::ListSourceCredentialsAsync(const ListSourceCredentialsRequest& request, const ListSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientListSourceCredentialsAsyncHelper( this, request, handler, context ); } );
}

PutResourcePolicyOutcome CodeBuildClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable CodeBuildClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientPutResourcePolicyAsyncHelper(CodeBuildClient const * const clientThis, const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutResourcePolicy(request), context);
}

void CodeBuildClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientPutResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

RetryBuildOutcome CodeBuildClient::RetryBuild(const RetryBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RetryBuildOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryBuildOutcomeCallable CodeBuildClient::RetryBuildCallable(const RetryBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientRetryBuildAsyncHelper(CodeBuildClient const * const clientThis, const RetryBuildRequest& request, const RetryBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RetryBuild(request), context);
}

void CodeBuildClient::RetryBuildAsync(const RetryBuildRequest& request, const RetryBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientRetryBuildAsyncHelper( this, request, handler, context ); } );
}

RetryBuildBatchOutcome CodeBuildClient::RetryBuildBatch(const RetryBuildBatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RetryBuildBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryBuildBatchOutcomeCallable CodeBuildClient::RetryBuildBatchCallable(const RetryBuildBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryBuildBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryBuildBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientRetryBuildBatchAsyncHelper(CodeBuildClient const * const clientThis, const RetryBuildBatchRequest& request, const RetryBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RetryBuildBatch(request), context);
}

void CodeBuildClient::RetryBuildBatchAsync(const RetryBuildBatchRequest& request, const RetryBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientRetryBuildBatchAsyncHelper( this, request, handler, context ); } );
}

StartBuildOutcome CodeBuildClient::StartBuild(const StartBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartBuildOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartBuildOutcomeCallable CodeBuildClient::StartBuildCallable(const StartBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientStartBuildAsyncHelper(CodeBuildClient const * const clientThis, const StartBuildRequest& request, const StartBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartBuild(request), context);
}

void CodeBuildClient::StartBuildAsync(const StartBuildRequest& request, const StartBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientStartBuildAsyncHelper( this, request, handler, context ); } );
}

StartBuildBatchOutcome CodeBuildClient::StartBuildBatch(const StartBuildBatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartBuildBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartBuildBatchOutcomeCallable CodeBuildClient::StartBuildBatchCallable(const StartBuildBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBuildBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBuildBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientStartBuildBatchAsyncHelper(CodeBuildClient const * const clientThis, const StartBuildBatchRequest& request, const StartBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartBuildBatch(request), context);
}

void CodeBuildClient::StartBuildBatchAsync(const StartBuildBatchRequest& request, const StartBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientStartBuildBatchAsyncHelper( this, request, handler, context ); } );
}

StopBuildOutcome CodeBuildClient::StopBuild(const StopBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopBuildOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopBuildOutcomeCallable CodeBuildClient::StopBuildCallable(const StopBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientStopBuildAsyncHelper(CodeBuildClient const * const clientThis, const StopBuildRequest& request, const StopBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopBuild(request), context);
}

void CodeBuildClient::StopBuildAsync(const StopBuildRequest& request, const StopBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientStopBuildAsyncHelper( this, request, handler, context ); } );
}

StopBuildBatchOutcome CodeBuildClient::StopBuildBatch(const StopBuildBatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopBuildBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopBuildBatchOutcomeCallable CodeBuildClient::StopBuildBatchCallable(const StopBuildBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopBuildBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopBuildBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientStopBuildBatchAsyncHelper(CodeBuildClient const * const clientThis, const StopBuildBatchRequest& request, const StopBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopBuildBatch(request), context);
}

void CodeBuildClient::StopBuildBatchAsync(const StopBuildBatchRequest& request, const StopBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientStopBuildBatchAsyncHelper( this, request, handler, context ); } );
}

UpdateProjectOutcome CodeBuildClient::UpdateProject(const UpdateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable CodeBuildClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientUpdateProjectAsyncHelper(CodeBuildClient const * const clientThis, const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProject(request), context);
}

void CodeBuildClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientUpdateProjectAsyncHelper( this, request, handler, context ); } );
}

UpdateProjectVisibilityOutcome CodeBuildClient::UpdateProjectVisibility(const UpdateProjectVisibilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProjectVisibilityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectVisibilityOutcomeCallable CodeBuildClient::UpdateProjectVisibilityCallable(const UpdateProjectVisibilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectVisibilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProjectVisibility(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientUpdateProjectVisibilityAsyncHelper(CodeBuildClient const * const clientThis, const UpdateProjectVisibilityRequest& request, const UpdateProjectVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProjectVisibility(request), context);
}

void CodeBuildClient::UpdateProjectVisibilityAsync(const UpdateProjectVisibilityRequest& request, const UpdateProjectVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientUpdateProjectVisibilityAsyncHelper( this, request, handler, context ); } );
}

UpdateReportGroupOutcome CodeBuildClient::UpdateReportGroup(const UpdateReportGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateReportGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReportGroupOutcomeCallable CodeBuildClient::UpdateReportGroupCallable(const UpdateReportGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReportGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReportGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientUpdateReportGroupAsyncHelper(CodeBuildClient const * const clientThis, const UpdateReportGroupRequest& request, const UpdateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateReportGroup(request), context);
}

void CodeBuildClient::UpdateReportGroupAsync(const UpdateReportGroupRequest& request, const UpdateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientUpdateReportGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateWebhookOutcome CodeBuildClient::UpdateWebhook(const UpdateWebhookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateWebhookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWebhookOutcomeCallable CodeBuildClient::UpdateWebhookCallable(const UpdateWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClientUpdateWebhookAsyncHelper(CodeBuildClient const * const clientThis, const UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWebhook(request), context);
}

void CodeBuildClient::UpdateWebhookAsync(const UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeBuildClientUpdateWebhookAsyncHelper( this, request, handler, context ); } );
}

