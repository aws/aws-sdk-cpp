/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/CodeCatalystClient.h>
#include <aws/codecatalyst/CodeCatalystEndpointProvider.h>
#include <aws/codecatalyst/CodeCatalystErrorMarshaller.h>
#include <aws/codecatalyst/model/CreateAccessTokenRequest.h>
#include <aws/codecatalyst/model/CreateDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/CreateProjectRequest.h>
#include <aws/codecatalyst/model/CreateSourceRepositoryBranchRequest.h>
#include <aws/codecatalyst/model/CreateSourceRepositoryRequest.h>
#include <aws/codecatalyst/model/DeleteAccessTokenRequest.h>
#include <aws/codecatalyst/model/DeleteDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/DeleteProjectRequest.h>
#include <aws/codecatalyst/model/DeleteSourceRepositoryRequest.h>
#include <aws/codecatalyst/model/DeleteSpaceRequest.h>
#include <aws/codecatalyst/model/GetDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/GetProjectRequest.h>
#include <aws/codecatalyst/model/GetSourceRepositoryCloneUrlsRequest.h>
#include <aws/codecatalyst/model/GetSourceRepositoryRequest.h>
#include <aws/codecatalyst/model/GetSpaceRequest.h>
#include <aws/codecatalyst/model/GetSubscriptionRequest.h>
#include <aws/codecatalyst/model/GetUserDetailsRequest.h>
#include <aws/codecatalyst/model/GetWorkflowRequest.h>
#include <aws/codecatalyst/model/GetWorkflowRunRequest.h>
#include <aws/codecatalyst/model/ListAccessTokensRequest.h>
#include <aws/codecatalyst/model/ListDevEnvironmentSessionsRequest.h>
#include <aws/codecatalyst/model/ListDevEnvironmentsRequest.h>
#include <aws/codecatalyst/model/ListEventLogsRequest.h>
#include <aws/codecatalyst/model/ListProjectsRequest.h>
#include <aws/codecatalyst/model/ListSourceRepositoriesRequest.h>
#include <aws/codecatalyst/model/ListSourceRepositoryBranchesRequest.h>
#include <aws/codecatalyst/model/ListSpacesRequest.h>
#include <aws/codecatalyst/model/ListWorkflowRunsRequest.h>
#include <aws/codecatalyst/model/ListWorkflowsRequest.h>
#include <aws/codecatalyst/model/StartDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/StartDevEnvironmentSessionRequest.h>
#include <aws/codecatalyst/model/StartWorkflowRunRequest.h>
#include <aws/codecatalyst/model/StopDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/StopDevEnvironmentSessionRequest.h>
#include <aws/codecatalyst/model/UpdateDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/UpdateProjectRequest.h>
#include <aws/codecatalyst/model/UpdateSpaceRequest.h>
#include <aws/codecatalyst/model/VerifySessionRequest.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/auth/signer-provider/BearerTokenAuthSignerProvider.h>
#include <aws/core/auth/signer/AWSAuthBearerSigner.h>
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
using namespace Aws::CodeCatalyst;
using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CodeCatalyst {
const char SERVICE_NAME[] = "codecatalyst";
const char ALLOCATION_TAG[] = "CodeCatalystClient";
}  // namespace CodeCatalyst
}  // namespace Aws
const char* CodeCatalystClient::GetServiceName() { return SERVICE_NAME; }
const char* CodeCatalystClient::GetAllocationTag() { return ALLOCATION_TAG; }

CodeCatalystClient::CodeCatalystClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                                       std::shared_ptr<CodeCatalystEndpointProviderBase> endpointProvider,
                                       const CodeCatalyst::CodeCatalystClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration, Aws::MakeShared<Aws::Auth::BearerTokenAuthSignerProvider>(ALLOCATION_TAG, bearerTokenProvider),
                Aws::MakeShared<CodeCatalystErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),

      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeCatalystEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CodeCatalystClient::CodeCatalystClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration, Aws::MakeShared<Aws::Auth::BearerTokenAuthSignerProvider>(ALLOCATION_TAG, bearerTokenProvider),
                Aws::MakeShared<CodeCatalystErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeCatalystEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CodeCatalystClient::~CodeCatalystClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CodeCatalystEndpointProviderBase>& CodeCatalystClient::accessEndpointProvider() { return m_endpointProvider; }

void CodeCatalystClient::init(const CodeCatalyst::CodeCatalystClientConfiguration& config) {
  AWSClient::SetServiceClientName("CodeCatalyst");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "codecatalyst");
}

void CodeCatalystClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CodeCatalystClient::InvokeOperationOutcome CodeCatalystClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccessToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accessTokens");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? CreateAccessTokenOutcome(CreateAccessTokenResult(result.GetResultWithOwnership()))
                                  : CreateAccessTokenOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateAccessTokenOutcome CodeCatalystClient::CreateAccessToken(const CreateAccessTokenRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accessTokens");
  };

  return CreateAccessTokenOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateDevEnvironmentOutcome CodeCatalystClient::CreateDevEnvironment(const CreateDevEnvironmentRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDevEnvironment", "Required field: SpaceName, is not set");
    return CreateDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDevEnvironment", "Required field: ProjectName, is not set");
    return CreateDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDevEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDevEnvironmentOutcome>(
      [&]() -> CreateDevEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? CreateDevEnvironmentOutcome(CreateDevEnvironmentResult(result.GetResultWithOwnership()))
                                  : CreateDevEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateProjectOutcome CodeCatalystClient::CreateProject(const CreateProjectRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProject", "Required field: SpaceName, is not set");
    return CreateProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SpaceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateProject",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateProjectOutcome>(
      [&]() -> CreateProjectOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? CreateProjectOutcome(CreateProjectResult(result.GetResultWithOwnership()))
                                  : CreateProjectOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSourceRepositoryOutcome CodeCatalystClient::CreateSourceRepository(const CreateSourceRepositoryRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSourceRepository", "Required field: SpaceName, is not set");
    return CreateSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSourceRepository", "Required field: ProjectName, is not set");
    return CreateSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSourceRepository", "Required field: Name, is not set");
    return CreateSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSourceRepository",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSourceRepositoryOutcome>(
      [&]() -> CreateSourceRepositoryOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSourceRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? CreateSourceRepositoryOutcome(CreateSourceRepositoryResult(result.GetResultWithOwnership()))
                                  : CreateSourceRepositoryOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSourceRepositoryBranchOutcome CodeCatalystClient::CreateSourceRepositoryBranch(
    const CreateSourceRepositoryBranchRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSourceRepositoryBranch", "Required field: SpaceName, is not set");
    return CreateSourceRepositoryBranchOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSourceRepositoryBranch", "Required field: ProjectName, is not set");
    return CreateSourceRepositoryBranchOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.SourceRepositoryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSourceRepositoryBranch", "Required field: SourceRepositoryName, is not set");
    return CreateSourceRepositoryBranchOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceRepositoryName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSourceRepositoryBranch", "Required field: Name, is not set");
    return CreateSourceRepositoryBranchOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSourceRepositoryBranch, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSourceRepositoryBranch, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSourceRepositoryBranch",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSourceRepositoryBranchOutcome>(
      [&]() -> CreateSourceRepositoryBranchOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSourceRepositoryBranch, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceRepositoryName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? CreateSourceRepositoryBranchOutcome(CreateSourceRepositoryBranchResult(result.GetResultWithOwnership()))
                                  : CreateSourceRepositoryBranchOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAccessTokenOutcome CodeCatalystClient::DeleteAccessToken(const DeleteAccessTokenRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessToken", "Required field: Id, is not set");
    return DeleteAccessTokenOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAccessToken",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAccessTokenOutcome>(
      [&]() -> DeleteAccessTokenOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accessTokens/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? DeleteAccessTokenOutcome(DeleteAccessTokenResult(result.GetResultWithOwnership()))
                                  : DeleteAccessTokenOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDevEnvironmentOutcome CodeCatalystClient::DeleteDevEnvironment(const DeleteDevEnvironmentRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDevEnvironment", "Required field: SpaceName, is not set");
    return DeleteDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDevEnvironment", "Required field: ProjectName, is not set");
    return DeleteDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDevEnvironment", "Required field: Id, is not set");
    return DeleteDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDevEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDevEnvironmentOutcome>(
      [&]() -> DeleteDevEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? DeleteDevEnvironmentOutcome(DeleteDevEnvironmentResult(result.GetResultWithOwnership()))
                                  : DeleteDevEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteProjectOutcome CodeCatalystClient::DeleteProject(const DeleteProjectRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: SpaceName, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SpaceName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: Name, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteProject",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteProjectOutcome>(
      [&]() -> DeleteProjectOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? DeleteProjectOutcome(DeleteProjectResult(result.GetResultWithOwnership()))
                                  : DeleteProjectOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSourceRepositoryOutcome CodeCatalystClient::DeleteSourceRepository(const DeleteSourceRepositoryRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSourceRepository", "Required field: SpaceName, is not set");
    return DeleteSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSourceRepository", "Required field: ProjectName, is not set");
    return DeleteSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSourceRepository", "Required field: Name, is not set");
    return DeleteSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSourceRepository",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSourceRepositoryOutcome>(
      [&]() -> DeleteSourceRepositoryOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSourceRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? DeleteSourceRepositoryOutcome(DeleteSourceRepositoryResult(result.GetResultWithOwnership()))
                                  : DeleteSourceRepositoryOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSpaceOutcome CodeCatalystClient::DeleteSpace(const DeleteSpaceRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSpace", "Required field: Name, is not set");
    return DeleteSpaceOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSpace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSpaceOutcome>(
      [&]() -> DeleteSpaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? DeleteSpaceOutcome(DeleteSpaceResult(result.GetResultWithOwnership()))
                                  : DeleteSpaceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDevEnvironmentOutcome CodeCatalystClient::GetDevEnvironment(const GetDevEnvironmentRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDevEnvironment", "Required field: SpaceName, is not set");
    return GetDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDevEnvironment", "Required field: ProjectName, is not set");
    return GetDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDevEnvironment", "Required field: Id, is not set");
    return GetDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDevEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDevEnvironmentOutcome>(
      [&]() -> GetDevEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? GetDevEnvironmentOutcome(GetDevEnvironmentResult(result.GetResultWithOwnership()))
                                  : GetDevEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetProjectOutcome CodeCatalystClient::GetProject(const GetProjectRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProject", "Required field: SpaceName, is not set");
    return GetProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SpaceName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProject", "Required field: Name, is not set");
    return GetProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProject",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProjectOutcome>(
      [&]() -> GetProjectOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? GetProjectOutcome(GetProjectResult(result.GetResultWithOwnership()))
                                  : GetProjectOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSourceRepositoryOutcome CodeCatalystClient::GetSourceRepository(const GetSourceRepositoryRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSourceRepository", "Required field: SpaceName, is not set");
    return GetSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSourceRepository", "Required field: ProjectName, is not set");
    return GetSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ProjectName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSourceRepository", "Required field: Name, is not set");
    return GetSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSourceRepository",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSourceRepositoryOutcome>(
      [&]() -> GetSourceRepositoryOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSourceRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? GetSourceRepositoryOutcome(GetSourceRepositoryResult(result.GetResultWithOwnership()))
                                  : GetSourceRepositoryOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSourceRepositoryCloneUrlsOutcome CodeCatalystClient::GetSourceRepositoryCloneUrls(
    const GetSourceRepositoryCloneUrlsRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSourceRepositoryCloneUrls", "Required field: SpaceName, is not set");
    return GetSourceRepositoryCloneUrlsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSourceRepositoryCloneUrls", "Required field: ProjectName, is not set");
    return GetSourceRepositoryCloneUrlsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.SourceRepositoryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSourceRepositoryCloneUrls", "Required field: SourceRepositoryName, is not set");
    return GetSourceRepositoryCloneUrlsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceRepositoryName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSourceRepositoryCloneUrls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSourceRepositoryCloneUrls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSourceRepositoryCloneUrls",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSourceRepositoryCloneUrlsOutcome>(
      [&]() -> GetSourceRepositoryCloneUrlsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSourceRepositoryCloneUrls, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceRepositoryName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/cloneUrls");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? GetSourceRepositoryCloneUrlsOutcome(GetSourceRepositoryCloneUrlsResult(result.GetResultWithOwnership()))
                                  : GetSourceRepositoryCloneUrlsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSpaceOutcome CodeCatalystClient::GetSpace(const GetSpaceRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSpace", "Required field: Name, is not set");
    return GetSpaceOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSpace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSpaceOutcome>(
      [&]() -> GetSpaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? GetSpaceOutcome(GetSpaceResult(result.GetResultWithOwnership())) : GetSpaceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSubscriptionOutcome CodeCatalystClient::GetSubscription(const GetSubscriptionRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscription", "Required field: SpaceName, is not set");
    return GetSubscriptionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SpaceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSubscription",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSubscriptionOutcome>(
      [&]() -> GetSubscriptionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/subscription");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? GetSubscriptionOutcome(GetSubscriptionResult(result.GetResultWithOwnership()))
                                  : GetSubscriptionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUserDetailsOutcome CodeCatalystClient::GetUserDetails(const GetUserDetailsRequest& request) const {
  AWS_OPERATION_GUARD(GetUserDetails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetUserDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUserDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUserDetails",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUserDetailsOutcome>(
      [&]() -> GetUserDetailsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/userDetails");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? GetUserDetailsOutcome(GetUserDetailsResult(result.GetResultWithOwnership()))
                                  : GetUserDetailsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWorkflowOutcome CodeCatalystClient::GetWorkflow(const GetWorkflowRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: SpaceName, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SpaceName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: Id, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Id]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: ProjectName, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetWorkflow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWorkflow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWorkflow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWorkflowOutcome>(
      [&]() -> GetWorkflowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? GetWorkflowOutcome(GetWorkflowResult(result.GetResultWithOwnership()))
                                  : GetWorkflowOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWorkflowRunOutcome CodeCatalystClient::GetWorkflowRun(const GetWorkflowRunRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowRun", "Required field: SpaceName, is not set");
    return GetWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SpaceName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowRun", "Required field: Id, is not set");
    return GetWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Id]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowRun", "Required field: ProjectName, is not set");
    return GetWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWorkflowRun",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWorkflowRunOutcome>(
      [&]() -> GetWorkflowRunOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflowRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflowRuns/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? GetWorkflowRunOutcome(GetWorkflowRunResult(result.GetResultWithOwnership()))
                                  : GetWorkflowRunOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAccessTokensOutcome CodeCatalystClient::ListAccessTokens(const ListAccessTokensRequest& request) const {
  AWS_OPERATION_GUARD(ListAccessTokens);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAccessTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAccessTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAccessTokens",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAccessTokensOutcome>(
      [&]() -> ListAccessTokensOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccessTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accessTokens");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? ListAccessTokensOutcome(ListAccessTokensResult(result.GetResultWithOwnership()))
                                  : ListAccessTokensOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDevEnvironmentSessionsOutcome CodeCatalystClient::ListDevEnvironmentSessions(const ListDevEnvironmentSessionsRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDevEnvironmentSessions", "Required field: SpaceName, is not set");
    return ListDevEnvironmentSessionsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDevEnvironmentSessions", "Required field: ProjectName, is not set");
    return ListDevEnvironmentSessionsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.DevEnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDevEnvironmentSessions", "Required field: DevEnvironmentId, is not set");
    return ListDevEnvironmentSessionsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DevEnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDevEnvironmentSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDevEnvironmentSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDevEnvironmentSessions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDevEnvironmentSessionsOutcome>(
      [&]() -> ListDevEnvironmentSessionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevEnvironmentSessions, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDevEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? ListDevEnvironmentSessionsOutcome(ListDevEnvironmentSessionsResult(result.GetResultWithOwnership()))
                                  : ListDevEnvironmentSessionsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDevEnvironmentsOutcome CodeCatalystClient::ListDevEnvironments(const ListDevEnvironmentsRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDevEnvironments", "Required field: SpaceName, is not set");
    return ListDevEnvironmentsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SpaceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDevEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDevEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDevEnvironments",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDevEnvironmentsOutcome>(
      [&]() -> ListDevEnvironmentsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? ListDevEnvironmentsOutcome(ListDevEnvironmentsResult(result.GetResultWithOwnership()))
                                  : ListDevEnvironmentsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEventLogsOutcome CodeCatalystClient::ListEventLogs(const ListEventLogsRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEventLogs", "Required field: SpaceName, is not set");
    return ListEventLogsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SpaceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEventLogs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEventLogs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEventLogs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEventLogsOutcome>(
      [&]() -> ListEventLogsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEventLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/eventLogs");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? ListEventLogsOutcome(ListEventLogsResult(result.GetResultWithOwnership()))
                                  : ListEventLogsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProjectsOutcome CodeCatalystClient::ListProjects(const ListProjectsRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProjects", "Required field: SpaceName, is not set");
    return ListProjectsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SpaceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProjects",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProjectsOutcome>(
      [&]() -> ListProjectsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? ListProjectsOutcome(ListProjectsResult(result.GetResultWithOwnership()))
                                  : ListProjectsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSourceRepositoriesOutcome CodeCatalystClient::ListSourceRepositories(const ListSourceRepositoriesRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSourceRepositories", "Required field: SpaceName, is not set");
    return ListSourceRepositoriesOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSourceRepositories", "Required field: ProjectName, is not set");
    return ListSourceRepositoriesOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSourceRepositories, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSourceRepositories, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSourceRepositories",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSourceRepositoriesOutcome>(
      [&]() -> ListSourceRepositoriesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSourceRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? ListSourceRepositoriesOutcome(ListSourceRepositoriesResult(result.GetResultWithOwnership()))
                                  : ListSourceRepositoriesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSourceRepositoryBranchesOutcome CodeCatalystClient::ListSourceRepositoryBranches(
    const ListSourceRepositoryBranchesRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSourceRepositoryBranches", "Required field: SpaceName, is not set");
    return ListSourceRepositoryBranchesOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSourceRepositoryBranches", "Required field: ProjectName, is not set");
    return ListSourceRepositoryBranchesOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.SourceRepositoryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSourceRepositoryBranches", "Required field: SourceRepositoryName, is not set");
    return ListSourceRepositoryBranchesOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceRepositoryName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSourceRepositoryBranches, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSourceRepositoryBranches, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSourceRepositoryBranches",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSourceRepositoryBranchesOutcome>(
      [&]() -> ListSourceRepositoryBranchesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSourceRepositoryBranches, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceRepositoryName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/branches");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? ListSourceRepositoryBranchesOutcome(ListSourceRepositoryBranchesResult(result.GetResultWithOwnership()))
                                  : ListSourceRepositoryBranchesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSpacesOutcome CodeCatalystClient::ListSpaces(const ListSpacesRequest& request) const {
  AWS_OPERATION_GUARD(ListSpaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSpaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSpaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSpaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSpaces",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSpacesOutcome>(
      [&]() -> ListSpacesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSpaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? ListSpacesOutcome(ListSpacesResult(result.GetResultWithOwnership()))
                                  : ListSpacesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkflowRunsOutcome CodeCatalystClient::ListWorkflowRuns(const ListWorkflowRunsRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkflowRuns", "Required field: SpaceName, is not set");
    return ListWorkflowRunsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkflowRuns", "Required field: ProjectName, is not set");
    return ListWorkflowRunsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkflowRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkflowRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkflowRuns",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkflowRunsOutcome>(
      [&]() -> ListWorkflowRunsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkflowRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflowRuns");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? ListWorkflowRunsOutcome(ListWorkflowRunsResult(result.GetResultWithOwnership()))
                                  : ListWorkflowRunsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkflowsOutcome CodeCatalystClient::ListWorkflows(const ListWorkflowsRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkflows", "Required field: SpaceName, is not set");
    return ListWorkflowsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkflows", "Required field: ProjectName, is not set");
    return ListWorkflowsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkflows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkflows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkflows",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkflowsOutcome>(
      [&]() -> ListWorkflowsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkflows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflows");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? ListWorkflowsOutcome(ListWorkflowsResult(result.GetResultWithOwnership()))
                                  : ListWorkflowsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartDevEnvironmentOutcome CodeCatalystClient::StartDevEnvironment(const StartDevEnvironmentRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDevEnvironment", "Required field: SpaceName, is not set");
    return StartDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDevEnvironment", "Required field: ProjectName, is not set");
    return StartDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDevEnvironment", "Required field: Id, is not set");
    return StartDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDevEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDevEnvironmentOutcome>(
      [&]() -> StartDevEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/start");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? StartDevEnvironmentOutcome(StartDevEnvironmentResult(result.GetResultWithOwnership()))
                                  : StartDevEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartDevEnvironmentSessionOutcome CodeCatalystClient::StartDevEnvironmentSession(const StartDevEnvironmentSessionRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDevEnvironmentSession", "Required field: SpaceName, is not set");
    return StartDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDevEnvironmentSession", "Required field: ProjectName, is not set");
    return StartDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDevEnvironmentSession", "Required field: Id, is not set");
    return StartDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDevEnvironmentSession",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDevEnvironmentSessionOutcome>(
      [&]() -> StartDevEnvironmentSessionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDevEnvironmentSession, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/session");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? StartDevEnvironmentSessionOutcome(StartDevEnvironmentSessionResult(result.GetResultWithOwnership()))
                                  : StartDevEnvironmentSessionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartWorkflowRunOutcome CodeCatalystClient::StartWorkflowRun(const StartWorkflowRunRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartWorkflowRun", "Required field: SpaceName, is not set");
    return StartWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartWorkflowRun", "Required field: ProjectName, is not set");
    return StartWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ProjectName]", false));
  }
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartWorkflowRun", "Required field: WorkflowId, is not set");
    return StartWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [WorkflowId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartWorkflowRun",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartWorkflowRunOutcome>(
      [&]() -> StartWorkflowRunOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartWorkflowRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflowRuns");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? StartWorkflowRunOutcome(StartWorkflowRunResult(result.GetResultWithOwnership()))
                                  : StartWorkflowRunOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopDevEnvironmentOutcome CodeCatalystClient::StopDevEnvironment(const StopDevEnvironmentRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDevEnvironment", "Required field: SpaceName, is not set");
    return StopDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDevEnvironment", "Required field: ProjectName, is not set");
    return StopDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDevEnvironment", "Required field: Id, is not set");
    return StopDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopDevEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopDevEnvironmentOutcome>(
      [&]() -> StopDevEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? StopDevEnvironmentOutcome(StopDevEnvironmentResult(result.GetResultWithOwnership()))
                                  : StopDevEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopDevEnvironmentSessionOutcome CodeCatalystClient::StopDevEnvironmentSession(const StopDevEnvironmentSessionRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDevEnvironmentSession", "Required field: SpaceName, is not set");
    return StopDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDevEnvironmentSession", "Required field: ProjectName, is not set");
    return StopDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDevEnvironmentSession", "Required field: Id, is not set");
    return StopDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDevEnvironmentSession", "Required field: SessionId, is not set");
    return StopDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(
        CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopDevEnvironmentSession",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopDevEnvironmentSessionOutcome>(
      [&]() -> StopDevEnvironmentSessionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopDevEnvironmentSession, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/session/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? StopDevEnvironmentSessionOutcome(StopDevEnvironmentSessionResult(result.GetResultWithOwnership()))
                                  : StopDevEnvironmentSessionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDevEnvironmentOutcome CodeCatalystClient::UpdateDevEnvironment(const UpdateDevEnvironmentRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDevEnvironment", "Required field: SpaceName, is not set");
    return UpdateDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDevEnvironment", "Required field: ProjectName, is not set");
    return UpdateDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDevEnvironment", "Required field: Id, is not set");
    return UpdateDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDevEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDevEnvironmentOutcome>(
      [&]() -> UpdateDevEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? UpdateDevEnvironmentOutcome(UpdateDevEnvironmentResult(result.GetResultWithOwnership()))
                                  : UpdateDevEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateProjectOutcome CodeCatalystClient::UpdateProject(const UpdateProjectRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: SpaceName, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SpaceName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: Name, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateProject",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateProjectOutcome>(
      [&]() -> UpdateProjectOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? UpdateProjectOutcome(UpdateProjectResult(result.GetResultWithOwnership()))
                                  : UpdateProjectOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSpaceOutcome CodeCatalystClient::UpdateSpace(const UpdateSpaceRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSpace", "Required field: Name, is not set");
    return UpdateSpaceOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSpace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSpaceOutcome>(
      [&]() -> UpdateSpaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? UpdateSpaceOutcome(UpdateSpaceResult(result.GetResultWithOwnership()))
                                  : UpdateSpaceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

VerifySessionOutcome CodeCatalystClient::VerifySession(const VerifySessionRequest& request) const {
  AWS_OPERATION_GUARD(VerifySession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, VerifySession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, VerifySession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".VerifySession",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<VerifySessionOutcome>(
      [&]() -> VerifySessionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/session");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
        return result.IsSuccess() ? VerifySessionOutcome(VerifySessionResult(result.GetResultWithOwnership()))
                                  : VerifySessionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
