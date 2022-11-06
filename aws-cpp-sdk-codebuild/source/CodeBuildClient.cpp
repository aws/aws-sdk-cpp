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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/codebuild/CodeBuildClient.h>
#include <aws/codebuild/CodeBuildErrorMarshaller.h>
#include <aws/codebuild/CodeBuildEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CodeBuildClient::SERVICE_NAME = "codebuild";
const char* CodeBuildClient::ALLOCATION_TAG = "CodeBuildClient";

CodeBuildClient::CodeBuildClient(const CodeBuild::CodeBuildClientConfiguration& clientConfiguration,
                                 std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const AWSCredentials& credentials,
                                 std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider,
                                 const CodeBuild::CodeBuildClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider,
                                 const CodeBuild::CodeBuildClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CodeBuildClient::CodeBuildClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CodeBuildClient::~CodeBuildClient()
{
}

std::shared_ptr<CodeBuildEndpointProviderBase>& CodeBuildClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CodeBuildClient::init(const CodeBuild::CodeBuildClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CodeBuild");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CodeBuildClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchDeleteBuildsOutcome CodeBuildClient::BatchDeleteBuilds(const BatchDeleteBuildsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteBuilds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteBuilds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchDeleteBuildsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteBuildsOutcomeCallable CodeBuildClient::BatchDeleteBuildsCallable(const BatchDeleteBuildsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteBuildsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteBuilds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::BatchDeleteBuildsAsync(const BatchDeleteBuildsRequest& request, const BatchDeleteBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDeleteBuilds(request), context);
    } );
}

BatchGetBuildBatchesOutcome CodeBuildClient::BatchGetBuildBatches(const BatchGetBuildBatchesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetBuildBatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetBuildBatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetBuildBatchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetBuildBatchesOutcomeCallable CodeBuildClient::BatchGetBuildBatchesCallable(const BatchGetBuildBatchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetBuildBatchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetBuildBatches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::BatchGetBuildBatchesAsync(const BatchGetBuildBatchesRequest& request, const BatchGetBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetBuildBatches(request), context);
    } );
}

BatchGetBuildsOutcome CodeBuildClient::BatchGetBuilds(const BatchGetBuildsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetBuilds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetBuilds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetBuildsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetBuildsOutcomeCallable CodeBuildClient::BatchGetBuildsCallable(const BatchGetBuildsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetBuildsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetBuilds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::BatchGetBuildsAsync(const BatchGetBuildsRequest& request, const BatchGetBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetBuilds(request), context);
    } );
}

BatchGetProjectsOutcome CodeBuildClient::BatchGetProjects(const BatchGetProjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetProjectsOutcomeCallable CodeBuildClient::BatchGetProjectsCallable(const BatchGetProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::BatchGetProjectsAsync(const BatchGetProjectsRequest& request, const BatchGetProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetProjects(request), context);
    } );
}

BatchGetReportGroupsOutcome CodeBuildClient::BatchGetReportGroups(const BatchGetReportGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetReportGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetReportGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetReportGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetReportGroupsOutcomeCallable CodeBuildClient::BatchGetReportGroupsCallable(const BatchGetReportGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetReportGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetReportGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::BatchGetReportGroupsAsync(const BatchGetReportGroupsRequest& request, const BatchGetReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetReportGroups(request), context);
    } );
}

BatchGetReportsOutcome CodeBuildClient::BatchGetReports(const BatchGetReportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetReportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetReportsOutcomeCallable CodeBuildClient::BatchGetReportsCallable(const BatchGetReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::BatchGetReportsAsync(const BatchGetReportsRequest& request, const BatchGetReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetReports(request), context);
    } );
}

CreateProjectOutcome CodeBuildClient::CreateProject(const CreateProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable CodeBuildClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProject(request), context);
    } );
}

CreateReportGroupOutcome CodeBuildClient::CreateReportGroup(const CreateReportGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReportGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReportGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReportGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReportGroupOutcomeCallable CodeBuildClient::CreateReportGroupCallable(const CreateReportGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReportGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReportGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::CreateReportGroupAsync(const CreateReportGroupRequest& request, const CreateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReportGroup(request), context);
    } );
}

CreateWebhookOutcome CodeBuildClient::CreateWebhook(const CreateWebhookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWebhookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWebhookOutcomeCallable CodeBuildClient::CreateWebhookCallable(const CreateWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::CreateWebhookAsync(const CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWebhook(request), context);
    } );
}

DeleteBuildBatchOutcome CodeBuildClient::DeleteBuildBatch(const DeleteBuildBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBuildBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBuildBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBuildBatchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBuildBatchOutcomeCallable CodeBuildClient::DeleteBuildBatchCallable(const DeleteBuildBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBuildBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBuildBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DeleteBuildBatchAsync(const DeleteBuildBatchRequest& request, const DeleteBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBuildBatch(request), context);
    } );
}

DeleteProjectOutcome CodeBuildClient::DeleteProject(const DeleteProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable CodeBuildClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProject(request), context);
    } );
}

DeleteReportOutcome CodeBuildClient::DeleteReport(const DeleteReportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReportOutcomeCallable CodeBuildClient::DeleteReportCallable(const DeleteReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DeleteReportAsync(const DeleteReportRequest& request, const DeleteReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReport(request), context);
    } );
}

DeleteReportGroupOutcome CodeBuildClient::DeleteReportGroup(const DeleteReportGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReportGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReportGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReportGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReportGroupOutcomeCallable CodeBuildClient::DeleteReportGroupCallable(const DeleteReportGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReportGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReportGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DeleteReportGroupAsync(const DeleteReportGroupRequest& request, const DeleteReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReportGroup(request), context);
    } );
}

DeleteResourcePolicyOutcome CodeBuildClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable CodeBuildClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcePolicy(request), context);
    } );
}

DeleteSourceCredentialsOutcome CodeBuildClient::DeleteSourceCredentials(const DeleteSourceCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSourceCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSourceCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSourceCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSourceCredentialsOutcomeCallable CodeBuildClient::DeleteSourceCredentialsCallable(const DeleteSourceCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSourceCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSourceCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DeleteSourceCredentialsAsync(const DeleteSourceCredentialsRequest& request, const DeleteSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSourceCredentials(request), context);
    } );
}

DeleteWebhookOutcome CodeBuildClient::DeleteWebhook(const DeleteWebhookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWebhookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWebhookOutcomeCallable CodeBuildClient::DeleteWebhookCallable(const DeleteWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DeleteWebhookAsync(const DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWebhook(request), context);
    } );
}

DescribeCodeCoveragesOutcome CodeBuildClient::DescribeCodeCoverages(const DescribeCodeCoveragesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCodeCoverages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCodeCoverages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCodeCoveragesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCodeCoveragesOutcomeCallable CodeBuildClient::DescribeCodeCoveragesCallable(const DescribeCodeCoveragesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCodeCoveragesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCodeCoverages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DescribeCodeCoveragesAsync(const DescribeCodeCoveragesRequest& request, const DescribeCodeCoveragesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCodeCoverages(request), context);
    } );
}

DescribeTestCasesOutcome CodeBuildClient::DescribeTestCases(const DescribeTestCasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTestCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTestCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTestCasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTestCasesOutcomeCallable CodeBuildClient::DescribeTestCasesCallable(const DescribeTestCasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTestCasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTestCases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DescribeTestCasesAsync(const DescribeTestCasesRequest& request, const DescribeTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTestCases(request), context);
    } );
}

GetReportGroupTrendOutcome CodeBuildClient::GetReportGroupTrend(const GetReportGroupTrendRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReportGroupTrend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReportGroupTrend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetReportGroupTrendOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetReportGroupTrendOutcomeCallable CodeBuildClient::GetReportGroupTrendCallable(const GetReportGroupTrendRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReportGroupTrendOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReportGroupTrend(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::GetReportGroupTrendAsync(const GetReportGroupTrendRequest& request, const GetReportGroupTrendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReportGroupTrend(request), context);
    } );
}

GetResourcePolicyOutcome CodeBuildClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePolicyOutcomeCallable CodeBuildClient::GetResourcePolicyCallable(const GetResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::GetResourcePolicyAsync(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourcePolicy(request), context);
    } );
}

ImportSourceCredentialsOutcome CodeBuildClient::ImportSourceCredentials(const ImportSourceCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportSourceCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportSourceCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportSourceCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportSourceCredentialsOutcomeCallable CodeBuildClient::ImportSourceCredentialsCallable(const ImportSourceCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportSourceCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportSourceCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ImportSourceCredentialsAsync(const ImportSourceCredentialsRequest& request, const ImportSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportSourceCredentials(request), context);
    } );
}

InvalidateProjectCacheOutcome CodeBuildClient::InvalidateProjectCache(const InvalidateProjectCacheRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvalidateProjectCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvalidateProjectCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return InvalidateProjectCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InvalidateProjectCacheOutcomeCallable CodeBuildClient::InvalidateProjectCacheCallable(const InvalidateProjectCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InvalidateProjectCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InvalidateProjectCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::InvalidateProjectCacheAsync(const InvalidateProjectCacheRequest& request, const InvalidateProjectCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InvalidateProjectCache(request), context);
    } );
}

ListBuildBatchesOutcome CodeBuildClient::ListBuildBatches(const ListBuildBatchesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuildBatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBuildBatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBuildBatchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBuildBatchesOutcomeCallable CodeBuildClient::ListBuildBatchesCallable(const ListBuildBatchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildBatchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuildBatches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListBuildBatchesAsync(const ListBuildBatchesRequest& request, const ListBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBuildBatches(request), context);
    } );
}

ListBuildBatchesForProjectOutcome CodeBuildClient::ListBuildBatchesForProject(const ListBuildBatchesForProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuildBatchesForProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBuildBatchesForProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBuildBatchesForProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBuildBatchesForProjectOutcomeCallable CodeBuildClient::ListBuildBatchesForProjectCallable(const ListBuildBatchesForProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildBatchesForProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuildBatchesForProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListBuildBatchesForProjectAsync(const ListBuildBatchesForProjectRequest& request, const ListBuildBatchesForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBuildBatchesForProject(request), context);
    } );
}

ListBuildsOutcome CodeBuildClient::ListBuilds(const ListBuildsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuilds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBuilds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBuildsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBuildsOutcomeCallable CodeBuildClient::ListBuildsCallable(const ListBuildsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuilds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListBuildsAsync(const ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBuilds(request), context);
    } );
}

ListBuildsForProjectOutcome CodeBuildClient::ListBuildsForProject(const ListBuildsForProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuildsForProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBuildsForProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBuildsForProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBuildsForProjectOutcomeCallable CodeBuildClient::ListBuildsForProjectCallable(const ListBuildsForProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildsForProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuildsForProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListBuildsForProjectAsync(const ListBuildsForProjectRequest& request, const ListBuildsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBuildsForProject(request), context);
    } );
}

ListCuratedEnvironmentImagesOutcome CodeBuildClient::ListCuratedEnvironmentImages(const ListCuratedEnvironmentImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCuratedEnvironmentImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCuratedEnvironmentImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCuratedEnvironmentImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCuratedEnvironmentImagesOutcomeCallable CodeBuildClient::ListCuratedEnvironmentImagesCallable(const ListCuratedEnvironmentImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCuratedEnvironmentImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCuratedEnvironmentImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListCuratedEnvironmentImagesAsync(const ListCuratedEnvironmentImagesRequest& request, const ListCuratedEnvironmentImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCuratedEnvironmentImages(request), context);
    } );
}

ListProjectsOutcome CodeBuildClient::ListProjects(const ListProjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable CodeBuildClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProjects(request), context);
    } );
}

ListReportGroupsOutcome CodeBuildClient::ListReportGroups(const ListReportGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReportGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReportGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListReportGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReportGroupsOutcomeCallable CodeBuildClient::ListReportGroupsCallable(const ListReportGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReportGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReportGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListReportGroupsAsync(const ListReportGroupsRequest& request, const ListReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListReportGroups(request), context);
    } );
}

ListReportsOutcome CodeBuildClient::ListReports(const ListReportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListReportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReportsOutcomeCallable CodeBuildClient::ListReportsCallable(const ListReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListReportsAsync(const ListReportsRequest& request, const ListReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListReports(request), context);
    } );
}

ListReportsForReportGroupOutcome CodeBuildClient::ListReportsForReportGroup(const ListReportsForReportGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReportsForReportGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReportsForReportGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListReportsForReportGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReportsForReportGroupOutcomeCallable CodeBuildClient::ListReportsForReportGroupCallable(const ListReportsForReportGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReportsForReportGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReportsForReportGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListReportsForReportGroupAsync(const ListReportsForReportGroupRequest& request, const ListReportsForReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListReportsForReportGroup(request), context);
    } );
}

ListSharedProjectsOutcome CodeBuildClient::ListSharedProjects(const ListSharedProjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSharedProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSharedProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSharedProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSharedProjectsOutcomeCallable CodeBuildClient::ListSharedProjectsCallable(const ListSharedProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSharedProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSharedProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListSharedProjectsAsync(const ListSharedProjectsRequest& request, const ListSharedProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSharedProjects(request), context);
    } );
}

ListSharedReportGroupsOutcome CodeBuildClient::ListSharedReportGroups(const ListSharedReportGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSharedReportGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSharedReportGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSharedReportGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSharedReportGroupsOutcomeCallable CodeBuildClient::ListSharedReportGroupsCallable(const ListSharedReportGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSharedReportGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSharedReportGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListSharedReportGroupsAsync(const ListSharedReportGroupsRequest& request, const ListSharedReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSharedReportGroups(request), context);
    } );
}

ListSourceCredentialsOutcome CodeBuildClient::ListSourceCredentials(const ListSourceCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSourceCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSourceCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSourceCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSourceCredentialsOutcomeCallable CodeBuildClient::ListSourceCredentialsCallable(const ListSourceCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSourceCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSourceCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListSourceCredentialsAsync(const ListSourceCredentialsRequest& request, const ListSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSourceCredentials(request), context);
    } );
}

PutResourcePolicyOutcome CodeBuildClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable CodeBuildClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResourcePolicy(request), context);
    } );
}

RetryBuildOutcome CodeBuildClient::RetryBuild(const RetryBuildRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetryBuild, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetryBuild, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RetryBuildOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryBuildOutcomeCallable CodeBuildClient::RetryBuildCallable(const RetryBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::RetryBuildAsync(const RetryBuildRequest& request, const RetryBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RetryBuild(request), context);
    } );
}

RetryBuildBatchOutcome CodeBuildClient::RetryBuildBatch(const RetryBuildBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetryBuildBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetryBuildBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RetryBuildBatchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryBuildBatchOutcomeCallable CodeBuildClient::RetryBuildBatchCallable(const RetryBuildBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryBuildBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryBuildBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::RetryBuildBatchAsync(const RetryBuildBatchRequest& request, const RetryBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RetryBuildBatch(request), context);
    } );
}

StartBuildOutcome CodeBuildClient::StartBuild(const StartBuildRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBuild, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartBuild, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartBuildOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartBuildOutcomeCallable CodeBuildClient::StartBuildCallable(const StartBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::StartBuildAsync(const StartBuildRequest& request, const StartBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartBuild(request), context);
    } );
}

StartBuildBatchOutcome CodeBuildClient::StartBuildBatch(const StartBuildBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBuildBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartBuildBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartBuildBatchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartBuildBatchOutcomeCallable CodeBuildClient::StartBuildBatchCallable(const StartBuildBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBuildBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBuildBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::StartBuildBatchAsync(const StartBuildBatchRequest& request, const StartBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartBuildBatch(request), context);
    } );
}

StopBuildOutcome CodeBuildClient::StopBuild(const StopBuildRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopBuild, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopBuild, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopBuildOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopBuildOutcomeCallable CodeBuildClient::StopBuildCallable(const StopBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::StopBuildAsync(const StopBuildRequest& request, const StopBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopBuild(request), context);
    } );
}

StopBuildBatchOutcome CodeBuildClient::StopBuildBatch(const StopBuildBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopBuildBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopBuildBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopBuildBatchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopBuildBatchOutcomeCallable CodeBuildClient::StopBuildBatchCallable(const StopBuildBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopBuildBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopBuildBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::StopBuildBatchAsync(const StopBuildBatchRequest& request, const StopBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopBuildBatch(request), context);
    } );
}

UpdateProjectOutcome CodeBuildClient::UpdateProject(const UpdateProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable CodeBuildClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProject(request), context);
    } );
}

UpdateProjectVisibilityOutcome CodeBuildClient::UpdateProjectVisibility(const UpdateProjectVisibilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProjectVisibility, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProjectVisibility, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateProjectVisibilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectVisibilityOutcomeCallable CodeBuildClient::UpdateProjectVisibilityCallable(const UpdateProjectVisibilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectVisibilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProjectVisibility(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::UpdateProjectVisibilityAsync(const UpdateProjectVisibilityRequest& request, const UpdateProjectVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProjectVisibility(request), context);
    } );
}

UpdateReportGroupOutcome CodeBuildClient::UpdateReportGroup(const UpdateReportGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateReportGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateReportGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateReportGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReportGroupOutcomeCallable CodeBuildClient::UpdateReportGroupCallable(const UpdateReportGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReportGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReportGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::UpdateReportGroupAsync(const UpdateReportGroupRequest& request, const UpdateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateReportGroup(request), context);
    } );
}

UpdateWebhookOutcome CodeBuildClient::UpdateWebhook(const UpdateWebhookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateWebhookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWebhookOutcomeCallable CodeBuildClient::UpdateWebhookCallable(const UpdateWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::UpdateWebhookAsync(const UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWebhook(request), context);
    } );
}

