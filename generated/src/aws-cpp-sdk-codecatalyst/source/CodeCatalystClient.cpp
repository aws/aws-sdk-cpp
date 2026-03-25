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
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments");
  };

  return CreateDevEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateProjectOutcome CodeCatalystClient::CreateProject(const CreateProjectRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProject", "Required field: SpaceName, is not set");
    return CreateProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SpaceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  };

  return CreateProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return CreateSourceRepositoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceRepositoryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return CreateSourceRepositoryBranchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DeleteAccessTokenOutcome CodeCatalystClient::DeleteAccessToken(const DeleteAccessTokenRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessToken", "Required field: Id, is not set");
    return DeleteAccessTokenOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accessTokens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteAccessTokenOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteDevEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteSourceRepositoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSpaceOutcome CodeCatalystClient::DeleteSpace(const DeleteSpaceRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSpace", "Required field: Name, is not set");
    return DeleteSpaceOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteSpaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetDevEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetSourceRepositoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceRepositoryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cloneUrls");
  };

  return GetSourceRepositoryCloneUrlsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSpaceOutcome CodeCatalystClient::GetSpace(const GetSpaceRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSpace", "Required field: Name, is not set");
    return GetSpaceOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetSpaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSubscriptionOutcome CodeCatalystClient::GetSubscription(const GetSubscriptionRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscription", "Required field: SpaceName, is not set");
    return GetSubscriptionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SpaceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription");
  };

  return GetSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUserDetailsOutcome CodeCatalystClient::GetUserDetails(const GetUserDetailsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/userDetails");
  };

  return GetUserDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowRuns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetWorkflowRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAccessTokensOutcome CodeCatalystClient::ListAccessTokens(const ListAccessTokensRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accessTokens");
  };

  return ListAccessTokensOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDevEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
  };

  return ListDevEnvironmentSessionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDevEnvironmentsOutcome CodeCatalystClient::ListDevEnvironments(const ListDevEnvironmentsRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDevEnvironments", "Required field: SpaceName, is not set");
    return ListDevEnvironmentsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SpaceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments");
  };

  return ListDevEnvironmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEventLogsOutcome CodeCatalystClient::ListEventLogs(const ListEventLogsRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEventLogs", "Required field: SpaceName, is not set");
    return ListEventLogsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SpaceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/eventLogs");
  };

  return ListEventLogsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProjectsOutcome CodeCatalystClient::ListProjects(const ListProjectsRequest& request) const {
  if (!request.SpaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProjects", "Required field: SpaceName, is not set");
    return ListProjectsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SpaceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  };

  return ListProjectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories");
  };

  return ListSourceRepositoriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceRepositoryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches");
  };

  return ListSourceRepositoryBranchesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSpacesOutcome CodeCatalystClient::ListSpaces(const ListSpacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces");
  };

  return ListSpacesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowRuns");
  };

  return ListWorkflowRunsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflows");
  };

  return ListWorkflowsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  return StartDevEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/session");
  };

  return StartDevEnvironmentSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowRuns");
  };

  return StartWorkflowRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopDevEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/session/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  return StopDevEnvironmentSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateDevEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateSpaceOutcome CodeCatalystClient::UpdateSpace(const UpdateSpaceRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSpace", "Required field: Name, is not set");
    return UpdateSpaceOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateSpaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

VerifySessionOutcome CodeCatalystClient::VerifySession(const VerifySessionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/session");
  };

  return VerifySessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}
