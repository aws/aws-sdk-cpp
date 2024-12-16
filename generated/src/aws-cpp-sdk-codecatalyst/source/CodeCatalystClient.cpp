/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/codecatalyst/CodeCatalystClient.h>
#include <aws/codecatalyst/CodeCatalystErrorMarshaller.h>
#include <aws/codecatalyst/CodeCatalystEndpointProvider.h>
#include <aws/core/auth/signer-provider/BearerTokenAuthSignerProvider.h>
#include <aws/codecatalyst/model/CreateAccessTokenRequest.h>
#include <aws/codecatalyst/model/CreateDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/CreateProjectRequest.h>
#include <aws/codecatalyst/model/CreateSourceRepositoryRequest.h>
#include <aws/codecatalyst/model/CreateSourceRepositoryBranchRequest.h>
#include <aws/codecatalyst/model/DeleteAccessTokenRequest.h>
#include <aws/codecatalyst/model/DeleteDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/DeleteProjectRequest.h>
#include <aws/codecatalyst/model/DeleteSourceRepositoryRequest.h>
#include <aws/codecatalyst/model/DeleteSpaceRequest.h>
#include <aws/codecatalyst/model/GetDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/GetProjectRequest.h>
#include <aws/codecatalyst/model/GetSourceRepositoryRequest.h>
#include <aws/codecatalyst/model/GetSourceRepositoryCloneUrlsRequest.h>
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

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/auth/built-in/BearerTokenAuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/BearerTokenAuthScheme.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeCatalyst;
using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace CodeCatalyst
  {
    const char ALLOCATION_TAG[] = "CodeCatalystClient";
    const char SERVICE_NAME[] = "codecatalyst";
  }
}
const char* CodeCatalystClient::GetServiceName() {return SERVICE_NAME;}
const char* CodeCatalystClient::GetAllocationTag() {return ALLOCATION_TAG;}

CodeCatalystClient::CodeCatalystClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                           std::shared_ptr<CodeCatalystEndpointProviderBase> endpointProvider,
                           const CodeCatalyst::CodeCatalystClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<CodeCatalystErrorMarshaller>(ALLOCATION_TAG),
      endpointProvider ? endpointProvider : Aws::MakeShared<CodeCatalystEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::BearerTokenAuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption.schemeId, smithy::BearerTokenAuthScheme{Aws::MakeShared<smithy::AwsBearerTokenIdentityResolver>(ALLOCATION_TAG, bearerTokenProvider), GetServiceName(), clientConfiguration.region}},
      })
{
  init(m_clientConfiguration);
}

CodeCatalystClient::CodeCatalystClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<CodeCatalystErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<CodeCatalystEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::BearerTokenAuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption.schemeId, smithy::BearerTokenAuthScheme{Aws::MakeShared<smithy::AwsBearerTokenIdentityResolver>(ALLOCATION_TAG, bearerTokenProvider), GetServiceName(), clientConfiguration.region}},
      })
{
  init(m_clientConfiguration);
}


/* End of legacy constructors due deprecation */

CodeCatalystClient::~CodeCatalystClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<CodeCatalystEndpointProviderBase>& CodeCatalystClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CodeCatalystClient::init(const CodeCatalyst::CodeCatalystClientConfiguration& config)
{
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CodeCatalystClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAccessTokenOutcome CodeCatalystClient::CreateAccessToken(const CreateAccessTokenRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAccessToken);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAccessToken",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAccessTokenOutcome>(
    [&]()-> CreateAccessTokenOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/accessTokens");
      return CreateAccessTokenOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDevEnvironmentOutcome CodeCatalystClient::CreateDevEnvironment(const CreateDevEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDevEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDevEnvironment", "Required field: SpaceName, is not set");
    return CreateDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDevEnvironment", "Required field: ProjectName, is not set");
    return CreateDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDevEnvironmentOutcome>(
    [&]()-> CreateDevEnvironmentOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/devEnvironments");
      return CreateDevEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateProjectOutcome CodeCatalystClient::CreateProject(const CreateProjectRequest& request) const
{
  AWS_OPERATION_GUARD(CreateProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProject", "Required field: SpaceName, is not set");
    return CreateProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateProjectOutcome>(
    [&]()-> CreateProjectOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects");
      return CreateProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSourceRepositoryOutcome CodeCatalystClient::CreateSourceRepository(const CreateSourceRepositoryRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSourceRepository);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSourceRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSourceRepository", "Required field: SpaceName, is not set");
    return CreateSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSourceRepository", "Required field: ProjectName, is not set");
    return CreateSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSourceRepository", "Required field: Name, is not set");
    return CreateSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSourceRepository",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSourceRepositoryOutcome>(
    [&]()-> CreateSourceRepositoryOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/sourceRepositories/");
      endpointOverrides.pathSegments.emplace_back(request.GetName());
      return CreateSourceRepositoryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSourceRepositoryBranchOutcome CodeCatalystClient::CreateSourceRepositoryBranch(const CreateSourceRepositoryBranchRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSourceRepositoryBranch);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSourceRepositoryBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSourceRepositoryBranch", "Required field: SpaceName, is not set");
    return CreateSourceRepositoryBranchOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSourceRepositoryBranch", "Required field: ProjectName, is not set");
    return CreateSourceRepositoryBranchOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.SourceRepositoryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSourceRepositoryBranch", "Required field: SourceRepositoryName, is not set");
    return CreateSourceRepositoryBranchOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceRepositoryName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSourceRepositoryBranch", "Required field: Name, is not set");
    return CreateSourceRepositoryBranchOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateSourceRepositoryBranch, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSourceRepositoryBranch, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSourceRepositoryBranch",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSourceRepositoryBranchOutcome>(
    [&]()-> CreateSourceRepositoryBranchOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/sourceRepositories/");
      endpointOverrides.pathSegments.emplace_back(request.GetSourceRepositoryName());
      endpointOverrides.pathSegments.emplace_back("/branches/");
      endpointOverrides.pathSegments.emplace_back(request.GetName());
      return CreateSourceRepositoryBranchOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAccessTokenOutcome CodeCatalystClient::DeleteAccessToken(const DeleteAccessTokenRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAccessToken);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessToken", "Required field: Id, is not set");
    return DeleteAccessTokenOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAccessToken",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAccessTokenOutcome>(
    [&]()-> DeleteAccessTokenOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/accessTokens/");
      endpointOverrides.pathSegments.emplace_back(request.GetId());
      return DeleteAccessTokenOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDevEnvironmentOutcome CodeCatalystClient::DeleteDevEnvironment(const DeleteDevEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDevEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDevEnvironment", "Required field: SpaceName, is not set");
    return DeleteDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDevEnvironment", "Required field: ProjectName, is not set");
    return DeleteDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDevEnvironment", "Required field: Id, is not set");
    return DeleteDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDevEnvironmentOutcome>(
    [&]()-> DeleteDevEnvironmentOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/devEnvironments/");
      endpointOverrides.pathSegments.emplace_back(request.GetId());
      return DeleteDevEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteProjectOutcome CodeCatalystClient::DeleteProject(const DeleteProjectRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: SpaceName, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: Name, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteProjectOutcome>(
    [&]()-> DeleteProjectOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetName());
      return DeleteProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSourceRepositoryOutcome CodeCatalystClient::DeleteSourceRepository(const DeleteSourceRepositoryRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSourceRepository);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSourceRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSourceRepository", "Required field: SpaceName, is not set");
    return DeleteSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSourceRepository", "Required field: ProjectName, is not set");
    return DeleteSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSourceRepository", "Required field: Name, is not set");
    return DeleteSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSourceRepository",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSourceRepositoryOutcome>(
    [&]()-> DeleteSourceRepositoryOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/sourceRepositories/");
      endpointOverrides.pathSegments.emplace_back(request.GetName());
      return DeleteSourceRepositoryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSpaceOutcome CodeCatalystClient::DeleteSpace(const DeleteSpaceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSpace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSpace", "Required field: Name, is not set");
    return DeleteSpaceOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSpace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSpaceOutcome>(
    [&]()-> DeleteSpaceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetName());
      return DeleteSpaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDevEnvironmentOutcome CodeCatalystClient::GetDevEnvironment(const GetDevEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(GetDevEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevEnvironment", "Required field: SpaceName, is not set");
    return GetDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevEnvironment", "Required field: ProjectName, is not set");
    return GetDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevEnvironment", "Required field: Id, is not set");
    return GetDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDevEnvironmentOutcome>(
    [&]()-> GetDevEnvironmentOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/devEnvironments/");
      endpointOverrides.pathSegments.emplace_back(request.GetId());
      return GetDevEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetProjectOutcome CodeCatalystClient::GetProject(const GetProjectRequest& request) const
{
  AWS_OPERATION_GUARD(GetProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProject", "Required field: SpaceName, is not set");
    return GetProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProject", "Required field: Name, is not set");
    return GetProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProjectOutcome>(
    [&]()-> GetProjectOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetName());
      return GetProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSourceRepositoryOutcome CodeCatalystClient::GetSourceRepository(const GetSourceRepositoryRequest& request) const
{
  AWS_OPERATION_GUARD(GetSourceRepository);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSourceRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSourceRepository", "Required field: SpaceName, is not set");
    return GetSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSourceRepository", "Required field: ProjectName, is not set");
    return GetSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSourceRepository", "Required field: Name, is not set");
    return GetSourceRepositoryOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSourceRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSourceRepository",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSourceRepositoryOutcome>(
    [&]()-> GetSourceRepositoryOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/sourceRepositories/");
      endpointOverrides.pathSegments.emplace_back(request.GetName());
      return GetSourceRepositoryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSourceRepositoryCloneUrlsOutcome CodeCatalystClient::GetSourceRepositoryCloneUrls(const GetSourceRepositoryCloneUrlsRequest& request) const
{
  AWS_OPERATION_GUARD(GetSourceRepositoryCloneUrls);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSourceRepositoryCloneUrls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSourceRepositoryCloneUrls", "Required field: SpaceName, is not set");
    return GetSourceRepositoryCloneUrlsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSourceRepositoryCloneUrls", "Required field: ProjectName, is not set");
    return GetSourceRepositoryCloneUrlsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.SourceRepositoryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSourceRepositoryCloneUrls", "Required field: SourceRepositoryName, is not set");
    return GetSourceRepositoryCloneUrlsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceRepositoryName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSourceRepositoryCloneUrls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSourceRepositoryCloneUrls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSourceRepositoryCloneUrls",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSourceRepositoryCloneUrlsOutcome>(
    [&]()-> GetSourceRepositoryCloneUrlsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/sourceRepositories/");
      endpointOverrides.pathSegments.emplace_back(request.GetSourceRepositoryName());
      endpointOverrides.pathSegments.emplace_back("/cloneUrls");
      return GetSourceRepositoryCloneUrlsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSpaceOutcome CodeCatalystClient::GetSpace(const GetSpaceRequest& request) const
{
  AWS_OPERATION_GUARD(GetSpace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSpace", "Required field: Name, is not set");
    return GetSpaceOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSpace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSpaceOutcome>(
    [&]()-> GetSpaceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetName());
      return GetSpaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSubscriptionOutcome CodeCatalystClient::GetSubscription(const GetSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(GetSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscription", "Required field: SpaceName, is not set");
    return GetSubscriptionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSubscriptionOutcome>(
    [&]()-> GetSubscriptionOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/subscription");
      return GetSubscriptionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUserDetailsOutcome CodeCatalystClient::GetUserDetails(const GetUserDetailsRequest& request) const
{
  AWS_OPERATION_GUARD(GetUserDetails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetUserDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUserDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUserDetails",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUserDetailsOutcome>(
    [&]()-> GetUserDetailsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/userDetails");
      return GetUserDetailsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWorkflowOutcome CodeCatalystClient::GetWorkflow(const GetWorkflowRequest& request) const
{
  AWS_OPERATION_GUARD(GetWorkflow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: SpaceName, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: Id, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: ProjectName, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWorkflow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWorkflow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWorkflow",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWorkflowOutcome>(
    [&]()-> GetWorkflowOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/workflows/");
      endpointOverrides.pathSegments.emplace_back(request.GetId());
      return GetWorkflowOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWorkflowRunOutcome CodeCatalystClient::GetWorkflowRun(const GetWorkflowRunRequest& request) const
{
  AWS_OPERATION_GUARD(GetWorkflowRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkflowRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowRun", "Required field: SpaceName, is not set");
    return GetWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowRun", "Required field: Id, is not set");
    return GetWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowRun", "Required field: ProjectName, is not set");
    return GetWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWorkflowRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWorkflowRunOutcome>(
    [&]()-> GetWorkflowRunOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/workflowRuns/");
      endpointOverrides.pathSegments.emplace_back(request.GetId());
      return GetWorkflowRunOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAccessTokensOutcome CodeCatalystClient::ListAccessTokens(const ListAccessTokensRequest& request) const
{
  AWS_OPERATION_GUARD(ListAccessTokens);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAccessTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAccessTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAccessTokens",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAccessTokensOutcome>(
    [&]()-> ListAccessTokensOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/accessTokens");
      return ListAccessTokensOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDevEnvironmentSessionsOutcome CodeCatalystClient::ListDevEnvironmentSessions(const ListDevEnvironmentSessionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDevEnvironmentSessions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevEnvironmentSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDevEnvironmentSessions", "Required field: SpaceName, is not set");
    return ListDevEnvironmentSessionsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDevEnvironmentSessions", "Required field: ProjectName, is not set");
    return ListDevEnvironmentSessionsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.DevEnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDevEnvironmentSessions", "Required field: DevEnvironmentId, is not set");
    return ListDevEnvironmentSessionsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DevEnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDevEnvironmentSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDevEnvironmentSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDevEnvironmentSessions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDevEnvironmentSessionsOutcome>(
    [&]()-> ListDevEnvironmentSessionsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/devEnvironments/");
      endpointOverrides.pathSegments.emplace_back(request.GetDevEnvironmentId());
      endpointOverrides.pathSegments.emplace_back("/sessions");
      return ListDevEnvironmentSessionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDevEnvironmentsOutcome CodeCatalystClient::ListDevEnvironments(const ListDevEnvironmentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDevEnvironments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDevEnvironments", "Required field: SpaceName, is not set");
    return ListDevEnvironmentsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDevEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDevEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDevEnvironments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDevEnvironmentsOutcome>(
    [&]()-> ListDevEnvironmentsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/devEnvironments");
      return ListDevEnvironmentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEventLogsOutcome CodeCatalystClient::ListEventLogs(const ListEventLogsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEventLogs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEventLogs", "Required field: SpaceName, is not set");
    return ListEventLogsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEventLogs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEventLogs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEventLogs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEventLogsOutcome>(
    [&]()-> ListEventLogsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/eventLogs");
      return ListEventLogsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProjectsOutcome CodeCatalystClient::ListProjects(const ListProjectsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProjects", "Required field: SpaceName, is not set");
    return ListProjectsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProjects",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProjectsOutcome>(
    [&]()-> ListProjectsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects");
      return ListProjectsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSourceRepositoriesOutcome CodeCatalystClient::ListSourceRepositories(const ListSourceRepositoriesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSourceRepositories);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSourceRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSourceRepositories", "Required field: SpaceName, is not set");
    return ListSourceRepositoriesOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSourceRepositories", "Required field: ProjectName, is not set");
    return ListSourceRepositoriesOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSourceRepositories, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSourceRepositories, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSourceRepositories",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSourceRepositoriesOutcome>(
    [&]()-> ListSourceRepositoriesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/sourceRepositories");
      return ListSourceRepositoriesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSourceRepositoryBranchesOutcome CodeCatalystClient::ListSourceRepositoryBranches(const ListSourceRepositoryBranchesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSourceRepositoryBranches);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSourceRepositoryBranches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSourceRepositoryBranches", "Required field: SpaceName, is not set");
    return ListSourceRepositoryBranchesOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSourceRepositoryBranches", "Required field: ProjectName, is not set");
    return ListSourceRepositoryBranchesOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.SourceRepositoryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSourceRepositoryBranches", "Required field: SourceRepositoryName, is not set");
    return ListSourceRepositoryBranchesOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceRepositoryName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSourceRepositoryBranches, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSourceRepositoryBranches, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSourceRepositoryBranches",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSourceRepositoryBranchesOutcome>(
    [&]()-> ListSourceRepositoryBranchesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/sourceRepositories/");
      endpointOverrides.pathSegments.emplace_back(request.GetSourceRepositoryName());
      endpointOverrides.pathSegments.emplace_back("/branches");
      return ListSourceRepositoryBranchesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSpacesOutcome CodeCatalystClient::ListSpaces(const ListSpacesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSpaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSpaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSpaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSpaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSpaces",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSpacesOutcome>(
    [&]()-> ListSpacesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces");
      return ListSpacesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkflowRunsOutcome CodeCatalystClient::ListWorkflowRuns(const ListWorkflowRunsRequest& request) const
{
  AWS_OPERATION_GUARD(ListWorkflowRuns);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkflowRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflowRuns", "Required field: SpaceName, is not set");
    return ListWorkflowRunsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflowRuns", "Required field: ProjectName, is not set");
    return ListWorkflowRunsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListWorkflowRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkflowRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkflowRuns",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkflowRunsOutcome>(
    [&]()-> ListWorkflowRunsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/workflowRuns");
      return ListWorkflowRunsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkflowsOutcome CodeCatalystClient::ListWorkflows(const ListWorkflowsRequest& request) const
{
  AWS_OPERATION_GUARD(ListWorkflows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkflows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflows", "Required field: SpaceName, is not set");
    return ListWorkflowsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflows", "Required field: ProjectName, is not set");
    return ListWorkflowsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListWorkflows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkflows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkflows",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkflowsOutcome>(
    [&]()-> ListWorkflowsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/workflows");
      return ListWorkflowsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartDevEnvironmentOutcome CodeCatalystClient::StartDevEnvironment(const StartDevEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(StartDevEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDevEnvironment", "Required field: SpaceName, is not set");
    return StartDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDevEnvironment", "Required field: ProjectName, is not set");
    return StartDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDevEnvironment", "Required field: Id, is not set");
    return StartDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDevEnvironmentOutcome>(
    [&]()-> StartDevEnvironmentOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/devEnvironments/");
      endpointOverrides.pathSegments.emplace_back(request.GetId());
      endpointOverrides.pathSegments.emplace_back("/start");
      return StartDevEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartDevEnvironmentSessionOutcome CodeCatalystClient::StartDevEnvironmentSession(const StartDevEnvironmentSessionRequest& request) const
{
  AWS_OPERATION_GUARD(StartDevEnvironmentSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDevEnvironmentSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDevEnvironmentSession", "Required field: SpaceName, is not set");
    return StartDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDevEnvironmentSession", "Required field: ProjectName, is not set");
    return StartDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDevEnvironmentSession", "Required field: Id, is not set");
    return StartDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDevEnvironmentSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDevEnvironmentSessionOutcome>(
    [&]()-> StartDevEnvironmentSessionOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/devEnvironments/");
      endpointOverrides.pathSegments.emplace_back(request.GetId());
      endpointOverrides.pathSegments.emplace_back("/session");
      return StartDevEnvironmentSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartWorkflowRunOutcome CodeCatalystClient::StartWorkflowRun(const StartWorkflowRunRequest& request) const
{
  AWS_OPERATION_GUARD(StartWorkflowRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartWorkflowRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartWorkflowRun", "Required field: SpaceName, is not set");
    return StartWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartWorkflowRun", "Required field: ProjectName, is not set");
    return StartWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartWorkflowRun", "Required field: WorkflowId, is not set");
    return StartWorkflowRunOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartWorkflowRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartWorkflowRunOutcome>(
    [&]()-> StartWorkflowRunOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/workflowRuns");
      return StartWorkflowRunOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopDevEnvironmentOutcome CodeCatalystClient::StopDevEnvironment(const StopDevEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(StopDevEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDevEnvironment", "Required field: SpaceName, is not set");
    return StopDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDevEnvironment", "Required field: ProjectName, is not set");
    return StopDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDevEnvironment", "Required field: Id, is not set");
    return StopDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopDevEnvironmentOutcome>(
    [&]()-> StopDevEnvironmentOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/devEnvironments/");
      endpointOverrides.pathSegments.emplace_back(request.GetId());
      endpointOverrides.pathSegments.emplace_back("/stop");
      return StopDevEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopDevEnvironmentSessionOutcome CodeCatalystClient::StopDevEnvironmentSession(const StopDevEnvironmentSessionRequest& request) const
{
  AWS_OPERATION_GUARD(StopDevEnvironmentSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopDevEnvironmentSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDevEnvironmentSession", "Required field: SpaceName, is not set");
    return StopDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDevEnvironmentSession", "Required field: ProjectName, is not set");
    return StopDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDevEnvironmentSession", "Required field: Id, is not set");
    return StopDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDevEnvironmentSession", "Required field: SessionId, is not set");
    return StopDevEnvironmentSessionOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopDevEnvironmentSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopDevEnvironmentSessionOutcome>(
    [&]()-> StopDevEnvironmentSessionOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/devEnvironments/");
      endpointOverrides.pathSegments.emplace_back(request.GetId());
      endpointOverrides.pathSegments.emplace_back("/session/");
      endpointOverrides.pathSegments.emplace_back(request.GetSessionId());
      return StopDevEnvironmentSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDevEnvironmentOutcome CodeCatalystClient::UpdateDevEnvironment(const UpdateDevEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDevEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDevEnvironment", "Required field: SpaceName, is not set");
    return UpdateDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDevEnvironment", "Required field: ProjectName, is not set");
    return UpdateDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDevEnvironment", "Required field: Id, is not set");
    return UpdateDevEnvironmentOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDevEnvironmentOutcome>(
    [&]()-> UpdateDevEnvironmentOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetProjectName());
      endpointOverrides.pathSegments.emplace_back("/devEnvironments/");
      endpointOverrides.pathSegments.emplace_back(request.GetId());
      return UpdateDevEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateProjectOutcome CodeCatalystClient::UpdateProject(const UpdateProjectRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SpaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: SpaceName, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpaceName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: Name, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateProjectOutcome>(
    [&]()-> UpdateProjectOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetSpaceName());
      endpointOverrides.pathSegments.emplace_back("/projects/");
      endpointOverrides.pathSegments.emplace_back(request.GetName());
      return UpdateProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSpaceOutcome CodeCatalystClient::UpdateSpace(const UpdateSpaceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSpace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSpace", "Required field: Name, is not set");
    return UpdateSpaceOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSpace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSpaceOutcome>(
    [&]()-> UpdateSpaceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/spaces/");
      endpointOverrides.pathSegments.emplace_back(request.GetName());
      return UpdateSpaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

VerifySessionOutcome CodeCatalystClient::VerifySession(const VerifySessionRequest& request) const
{
  AWS_OPERATION_GUARD(VerifySession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, VerifySession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, VerifySession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".VerifySession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<VerifySessionOutcome>(
    [&]()-> VerifySessionOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/session");
      return VerifySessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


