/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/CodeBuildClient.h>
#include <aws/codebuild/CodeBuildEndpointProvider.h>
#include <aws/codebuild/CodeBuildErrorMarshaller.h>
#include <aws/codebuild/model/BatchDeleteBuildsRequest.h>
#include <aws/codebuild/model/BatchGetBuildBatchesRequest.h>
#include <aws/codebuild/model/BatchGetBuildsRequest.h>
#include <aws/codebuild/model/BatchGetCommandExecutionsRequest.h>
#include <aws/codebuild/model/BatchGetFleetsRequest.h>
#include <aws/codebuild/model/BatchGetProjectsRequest.h>
#include <aws/codebuild/model/BatchGetReportGroupsRequest.h>
#include <aws/codebuild/model/BatchGetReportsRequest.h>
#include <aws/codebuild/model/BatchGetSandboxesRequest.h>
#include <aws/codebuild/model/CreateFleetRequest.h>
#include <aws/codebuild/model/CreateProjectRequest.h>
#include <aws/codebuild/model/CreateReportGroupRequest.h>
#include <aws/codebuild/model/CreateWebhookRequest.h>
#include <aws/codebuild/model/DeleteBuildBatchRequest.h>
#include <aws/codebuild/model/DeleteFleetRequest.h>
#include <aws/codebuild/model/DeleteProjectRequest.h>
#include <aws/codebuild/model/DeleteReportGroupRequest.h>
#include <aws/codebuild/model/DeleteReportRequest.h>
#include <aws/codebuild/model/DeleteResourcePolicyRequest.h>
#include <aws/codebuild/model/DeleteSourceCredentialsRequest.h>
#include <aws/codebuild/model/DeleteWebhookRequest.h>
#include <aws/codebuild/model/DescribeCodeCoveragesRequest.h>
#include <aws/codebuild/model/DescribeTestCasesRequest.h>
#include <aws/codebuild/model/GetReportGroupTrendRequest.h>
#include <aws/codebuild/model/GetResourcePolicyRequest.h>
#include <aws/codebuild/model/ImportSourceCredentialsRequest.h>
#include <aws/codebuild/model/InvalidateProjectCacheRequest.h>
#include <aws/codebuild/model/ListBuildBatchesForProjectRequest.h>
#include <aws/codebuild/model/ListBuildBatchesRequest.h>
#include <aws/codebuild/model/ListBuildsForProjectRequest.h>
#include <aws/codebuild/model/ListBuildsRequest.h>
#include <aws/codebuild/model/ListCommandExecutionsForSandboxRequest.h>
#include <aws/codebuild/model/ListCuratedEnvironmentImagesRequest.h>
#include <aws/codebuild/model/ListFleetsRequest.h>
#include <aws/codebuild/model/ListProjectsRequest.h>
#include <aws/codebuild/model/ListReportGroupsRequest.h>
#include <aws/codebuild/model/ListReportsForReportGroupRequest.h>
#include <aws/codebuild/model/ListReportsRequest.h>
#include <aws/codebuild/model/ListSandboxesForProjectRequest.h>
#include <aws/codebuild/model/ListSandboxesRequest.h>
#include <aws/codebuild/model/ListSharedProjectsRequest.h>
#include <aws/codebuild/model/ListSharedReportGroupsRequest.h>
#include <aws/codebuild/model/ListSourceCredentialsRequest.h>
#include <aws/codebuild/model/PutResourcePolicyRequest.h>
#include <aws/codebuild/model/RetryBuildBatchRequest.h>
#include <aws/codebuild/model/RetryBuildRequest.h>
#include <aws/codebuild/model/StartBuildBatchRequest.h>
#include <aws/codebuild/model/StartBuildRequest.h>
#include <aws/codebuild/model/StartCommandExecutionRequest.h>
#include <aws/codebuild/model/StartSandboxConnectionRequest.h>
#include <aws/codebuild/model/StartSandboxRequest.h>
#include <aws/codebuild/model/StopBuildBatchRequest.h>
#include <aws/codebuild/model/StopBuildRequest.h>
#include <aws/codebuild/model/StopSandboxRequest.h>
#include <aws/codebuild/model/UpdateFleetRequest.h>
#include <aws/codebuild/model/UpdateProjectRequest.h>
#include <aws/codebuild/model/UpdateProjectVisibilityRequest.h>
#include <aws/codebuild/model/UpdateReportGroupRequest.h>
#include <aws/codebuild/model/UpdateWebhookRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeBuild;
using namespace Aws::CodeBuild::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CodeBuild {
const char SERVICE_NAME[] = "codebuild";
const char ALLOCATION_TAG[] = "CodeBuildClient";
}  // namespace CodeBuild
}  // namespace Aws
const char* CodeBuildClient::GetServiceName() { return SERVICE_NAME; }
const char* CodeBuildClient::GetAllocationTag() { return ALLOCATION_TAG; }

CodeBuildClient::CodeBuildClient(const CodeBuild::CodeBuildClientConfiguration& clientConfiguration,
                                 std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const AWSCredentials& credentials, std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider,
                                 const CodeBuild::CodeBuildClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider,
                                 const CodeBuild::CodeBuildClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CodeBuildClient::CodeBuildClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CodeBuildClient::~CodeBuildClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CodeBuildEndpointProviderBase>& CodeBuildClient::accessEndpointProvider() { return m_endpointProvider; }

void CodeBuildClient::init(const CodeBuild::CodeBuildClientConfiguration& config) {
  AWSClient::SetServiceClientName("CodeBuild");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "codebuild");
}

void CodeBuildClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CodeBuildClient::InvokeOperationOutcome CodeBuildClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

BatchDeleteBuildsOutcome CodeBuildClient::BatchDeleteBuilds(const BatchDeleteBuildsRequest& request) const {
  return BatchDeleteBuildsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetBuildBatchesOutcome CodeBuildClient::BatchGetBuildBatches(const BatchGetBuildBatchesRequest& request) const {
  return BatchGetBuildBatchesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetBuildsOutcome CodeBuildClient::BatchGetBuilds(const BatchGetBuildsRequest& request) const {
  return BatchGetBuildsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetCommandExecutionsOutcome CodeBuildClient::BatchGetCommandExecutions(const BatchGetCommandExecutionsRequest& request) const {
  return BatchGetCommandExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetFleetsOutcome CodeBuildClient::BatchGetFleets(const BatchGetFleetsRequest& request) const {
  return BatchGetFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetProjectsOutcome CodeBuildClient::BatchGetProjects(const BatchGetProjectsRequest& request) const {
  return BatchGetProjectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetReportGroupsOutcome CodeBuildClient::BatchGetReportGroups(const BatchGetReportGroupsRequest& request) const {
  return BatchGetReportGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetReportsOutcome CodeBuildClient::BatchGetReports(const BatchGetReportsRequest& request) const {
  return BatchGetReportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetSandboxesOutcome CodeBuildClient::BatchGetSandboxes(const BatchGetSandboxesRequest& request) const {
  return BatchGetSandboxesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFleetOutcome CodeBuildClient::CreateFleet(const CreateFleetRequest& request) const {
  return CreateFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProjectOutcome CodeBuildClient::CreateProject(const CreateProjectRequest& request) const {
  return CreateProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReportGroupOutcome CodeBuildClient::CreateReportGroup(const CreateReportGroupRequest& request) const {
  return CreateReportGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWebhookOutcome CodeBuildClient::CreateWebhook(const CreateWebhookRequest& request) const {
  return CreateWebhookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBuildBatchOutcome CodeBuildClient::DeleteBuildBatch(const DeleteBuildBatchRequest& request) const {
  return DeleteBuildBatchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFleetOutcome CodeBuildClient::DeleteFleet(const DeleteFleetRequest& request) const {
  return DeleteFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProjectOutcome CodeBuildClient::DeleteProject(const DeleteProjectRequest& request) const {
  return DeleteProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReportOutcome CodeBuildClient::DeleteReport(const DeleteReportRequest& request) const {
  return DeleteReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReportGroupOutcome CodeBuildClient::DeleteReportGroup(const DeleteReportGroupRequest& request) const {
  return DeleteReportGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome CodeBuildClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSourceCredentialsOutcome CodeBuildClient::DeleteSourceCredentials(const DeleteSourceCredentialsRequest& request) const {
  return DeleteSourceCredentialsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWebhookOutcome CodeBuildClient::DeleteWebhook(const DeleteWebhookRequest& request) const {
  return DeleteWebhookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCodeCoveragesOutcome CodeBuildClient::DescribeCodeCoverages(const DescribeCodeCoveragesRequest& request) const {
  return DescribeCodeCoveragesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTestCasesOutcome CodeBuildClient::DescribeTestCases(const DescribeTestCasesRequest& request) const {
  return DescribeTestCasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetReportGroupTrendOutcome CodeBuildClient::GetReportGroupTrend(const GetReportGroupTrendRequest& request) const {
  return GetReportGroupTrendOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePolicyOutcome CodeBuildClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  return GetResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportSourceCredentialsOutcome CodeBuildClient::ImportSourceCredentials(const ImportSourceCredentialsRequest& request) const {
  return ImportSourceCredentialsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InvalidateProjectCacheOutcome CodeBuildClient::InvalidateProjectCache(const InvalidateProjectCacheRequest& request) const {
  return InvalidateProjectCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBuildBatchesOutcome CodeBuildClient::ListBuildBatches(const ListBuildBatchesRequest& request) const {
  return ListBuildBatchesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBuildBatchesForProjectOutcome CodeBuildClient::ListBuildBatchesForProject(const ListBuildBatchesForProjectRequest& request) const {
  return ListBuildBatchesForProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBuildsOutcome CodeBuildClient::ListBuilds(const ListBuildsRequest& request) const {
  return ListBuildsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBuildsForProjectOutcome CodeBuildClient::ListBuildsForProject(const ListBuildsForProjectRequest& request) const {
  return ListBuildsForProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCommandExecutionsForSandboxOutcome CodeBuildClient::ListCommandExecutionsForSandbox(
    const ListCommandExecutionsForSandboxRequest& request) const {
  return ListCommandExecutionsForSandboxOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCuratedEnvironmentImagesOutcome CodeBuildClient::ListCuratedEnvironmentImages(
    const ListCuratedEnvironmentImagesRequest& request) const {
  return ListCuratedEnvironmentImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFleetsOutcome CodeBuildClient::ListFleets(const ListFleetsRequest& request) const {
  return ListFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProjectsOutcome CodeBuildClient::ListProjects(const ListProjectsRequest& request) const {
  return ListProjectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReportGroupsOutcome CodeBuildClient::ListReportGroups(const ListReportGroupsRequest& request) const {
  return ListReportGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReportsOutcome CodeBuildClient::ListReports(const ListReportsRequest& request) const {
  return ListReportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReportsForReportGroupOutcome CodeBuildClient::ListReportsForReportGroup(const ListReportsForReportGroupRequest& request) const {
  return ListReportsForReportGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSandboxesOutcome CodeBuildClient::ListSandboxes(const ListSandboxesRequest& request) const {
  return ListSandboxesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSandboxesForProjectOutcome CodeBuildClient::ListSandboxesForProject(const ListSandboxesForProjectRequest& request) const {
  return ListSandboxesForProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSharedProjectsOutcome CodeBuildClient::ListSharedProjects(const ListSharedProjectsRequest& request) const {
  return ListSharedProjectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSharedReportGroupsOutcome CodeBuildClient::ListSharedReportGroups(const ListSharedReportGroupsRequest& request) const {
  return ListSharedReportGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSourceCredentialsOutcome CodeBuildClient::ListSourceCredentials(const ListSourceCredentialsRequest& request) const {
  return ListSourceCredentialsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome CodeBuildClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RetryBuildOutcome CodeBuildClient::RetryBuild(const RetryBuildRequest& request) const {
  return RetryBuildOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RetryBuildBatchOutcome CodeBuildClient::RetryBuildBatch(const RetryBuildBatchRequest& request) const {
  return RetryBuildBatchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartBuildOutcome CodeBuildClient::StartBuild(const StartBuildRequest& request) const {
  return StartBuildOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartBuildBatchOutcome CodeBuildClient::StartBuildBatch(const StartBuildBatchRequest& request) const {
  return StartBuildBatchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCommandExecutionOutcome CodeBuildClient::StartCommandExecution(const StartCommandExecutionRequest& request) const {
  return StartCommandExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSandboxOutcome CodeBuildClient::StartSandbox(const StartSandboxRequest& request) const {
  return StartSandboxOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSandboxConnectionOutcome CodeBuildClient::StartSandboxConnection(const StartSandboxConnectionRequest& request) const {
  return StartSandboxConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopBuildOutcome CodeBuildClient::StopBuild(const StopBuildRequest& request) const {
  return StopBuildOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopBuildBatchOutcome CodeBuildClient::StopBuildBatch(const StopBuildBatchRequest& request) const {
  return StopBuildBatchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopSandboxOutcome CodeBuildClient::StopSandbox(const StopSandboxRequest& request) const {
  return StopSandboxOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFleetOutcome CodeBuildClient::UpdateFleet(const UpdateFleetRequest& request) const {
  return UpdateFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProjectOutcome CodeBuildClient::UpdateProject(const UpdateProjectRequest& request) const {
  return UpdateProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProjectVisibilityOutcome CodeBuildClient::UpdateProjectVisibility(const UpdateProjectVisibilityRequest& request) const {
  return UpdateProjectVisibilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateReportGroupOutcome CodeBuildClient::UpdateReportGroup(const UpdateReportGroupRequest& request) const {
  return UpdateReportGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWebhookOutcome CodeBuildClient::UpdateWebhook(const UpdateWebhookRequest& request) const {
  return UpdateWebhookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
