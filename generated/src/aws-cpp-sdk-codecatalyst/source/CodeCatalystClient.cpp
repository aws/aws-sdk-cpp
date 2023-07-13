/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/signer/AWSAuthBearerSigner.h>
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

#include <aws/codecatalyst/CodeCatalystClient.h>
#include <aws/codecatalyst/CodeCatalystErrorMarshaller.h>
#include <aws/codecatalyst/CodeCatalystEndpointProvider.h>
#include <aws/core/auth/signer-provider/BearerTokenAuthSignerProvider.h>
#include <aws/codecatalyst/model/CreateAccessTokenRequest.h>
#include <aws/codecatalyst/model/CreateDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/CreateProjectRequest.h>
#include <aws/codecatalyst/model/CreateSourceRepositoryBranchRequest.h>
#include <aws/codecatalyst/model/DeleteAccessTokenRequest.h>
#include <aws/codecatalyst/model/DeleteDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/GetDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/GetProjectRequest.h>
#include <aws/codecatalyst/model/GetSourceRepositoryCloneUrlsRequest.h>
#include <aws/codecatalyst/model/GetSpaceRequest.h>
#include <aws/codecatalyst/model/GetSubscriptionRequest.h>
#include <aws/codecatalyst/model/GetUserDetailsRequest.h>
#include <aws/codecatalyst/model/ListAccessTokensRequest.h>
#include <aws/codecatalyst/model/ListDevEnvironmentSessionsRequest.h>
#include <aws/codecatalyst/model/ListDevEnvironmentsRequest.h>
#include <aws/codecatalyst/model/ListEventLogsRequest.h>
#include <aws/codecatalyst/model/ListProjectsRequest.h>
#include <aws/codecatalyst/model/ListSourceRepositoriesRequest.h>
#include <aws/codecatalyst/model/ListSourceRepositoryBranchesRequest.h>
#include <aws/codecatalyst/model/ListSpacesRequest.h>
#include <aws/codecatalyst/model/StartDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/StartDevEnvironmentSessionRequest.h>
#include <aws/codecatalyst/model/StopDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/StopDevEnvironmentSessionRequest.h>
#include <aws/codecatalyst/model/UpdateDevEnvironmentRequest.h>

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

const char* CodeCatalystClient::SERVICE_NAME = "codecatalyst";
const char* CodeCatalystClient::ALLOCATION_TAG = "CodeCatalystClient";

    CodeCatalystClient::CodeCatalystClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                                           std::shared_ptr<CodeCatalystEndpointProviderBase> endpointProvider,
                                           const CodeCatalyst::CodeCatalystClientConfiguration& clientConfiguration) :  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::BearerTokenAuthSignerProvider>(ALLOCATION_TAG, bearerTokenProvider),
            Aws::MakeShared<CodeCatalystErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),  m_endpointProvider(std::move(endpointProvider)){
  init(m_clientConfiguration);
}


    /* Legacy constructors due deprecation */
      CodeCatalystClient::CodeCatalystClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::BearerTokenAuthSignerProvider>(ALLOCATION_TAG, bearerTokenProvider),
            Aws::MakeShared<CodeCatalystErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),  m_endpointProvider(Aws::MakeShared<CodeCatalystEndpointProvider>(ALLOCATION_TAG)){
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
  AWSClient::SetServiceClientName("CodeCatalyst");
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAccessToken",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAccessTokenOutcome>(
    [&]()-> CreateAccessTokenOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccessToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accessTokens");
      return CreateAccessTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDevEnvironmentOutcome>(
    [&]()-> CreateDevEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments");
      return CreateDevEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateProjectOutcome>(
    [&]()-> CreateProjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
      return CreateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSourceRepositoryBranch, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSourceRepositoryBranch, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSourceRepositoryBranch",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSourceRepositoryBranchOutcome>(
    [&]()-> CreateSourceRepositoryBranchOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSourceRepositoryBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceRepositoryName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      return CreateSourceRepositoryBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAccessToken",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAccessTokenOutcome>(
    [&]()-> DeleteAccessTokenOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accessTokens/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
      return DeleteAccessTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDevEnvironmentOutcome>(
    [&]()-> DeleteDevEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
      return DeleteDevEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDevEnvironmentOutcome>(
    [&]()-> GetDevEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
      return GetDevEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProjectOutcome>(
    [&]()-> GetProjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      return GetProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSourceRepositoryCloneUrls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSourceRepositoryCloneUrls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSourceRepositoryCloneUrls",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSourceRepositoryCloneUrlsOutcome>(
    [&]()-> GetSourceRepositoryCloneUrlsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSourceRepositoryCloneUrls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceRepositoryName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/cloneUrls");
      return GetSourceRepositoryCloneUrlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSpace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSpace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSpaceOutcome>(
    [&]()-> GetSpaceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      return GetSpaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSubscriptionOutcome>(
    [&]()-> GetSubscriptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription");
      return GetSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUserDetailsOutcome CodeCatalystClient::GetUserDetails(const GetUserDetailsRequest& request) const
{
  AWS_OPERATION_GUARD(GetUserDetails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetUserDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUserDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUserDetails",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUserDetailsOutcome>(
    [&]()-> GetUserDetailsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/userDetails");
      return GetUserDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAccessTokensOutcome CodeCatalystClient::ListAccessTokens(const ListAccessTokensRequest& request) const
{
  AWS_OPERATION_GUARD(ListAccessTokens);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAccessTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAccessTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAccessTokens",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAccessTokensOutcome>(
    [&]()-> ListAccessTokensOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccessTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accessTokens");
      return ListAccessTokensOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDevEnvironmentSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDevEnvironmentSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDevEnvironmentSessions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDevEnvironmentSessionsOutcome>(
    [&]()-> ListDevEnvironmentSessionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevEnvironmentSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDevEnvironmentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
      return ListDevEnvironmentSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER));
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
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDevEnvironments", "Required field: ProjectName, is not set");
    return ListDevEnvironmentsOutcome(Aws::Client::AWSError<CodeCatalystErrors>(CodeCatalystErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDevEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDevEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDevEnvironments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDevEnvironmentsOutcome>(
    [&]()-> ListDevEnvironmentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments");
      return ListDevEnvironmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEventLogs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEventLogs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEventLogs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEventLogsOutcome>(
    [&]()-> ListEventLogsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEventLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/eventLogs");
      return ListEventLogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProjects",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProjectsOutcome>(
    [&]()-> ListProjectsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
      return ListProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSourceRepositories, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSourceRepositories, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSourceRepositories",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSourceRepositoriesOutcome>(
    [&]()-> ListSourceRepositoriesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSourceRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories");
      return ListSourceRepositoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSourceRepositoryBranches, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSourceRepositoryBranches, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSourceRepositoryBranches",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSourceRepositoryBranchesOutcome>(
    [&]()-> ListSourceRepositoryBranchesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSourceRepositoryBranches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sourceRepositories/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceRepositoryName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/branches");
      return ListSourceRepositoryBranchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSpacesOutcome CodeCatalystClient::ListSpaces(const ListSpacesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSpaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSpaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSpaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSpaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSpaces",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSpacesOutcome>(
    [&]()-> ListSpacesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSpaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces");
      return ListSpacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDevEnvironmentOutcome>(
    [&]()-> StartDevEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/start");
      return StartDevEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDevEnvironmentSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDevEnvironmentSessionOutcome>(
    [&]()-> StartDevEnvironmentSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDevEnvironmentSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/session");
      return StartDevEnvironmentSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopDevEnvironmentOutcome>(
    [&]()-> StopDevEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
      return StopDevEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopDevEnvironmentSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopDevEnvironmentSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopDevEnvironmentSessionOutcome>(
    [&]()-> StopDevEnvironmentSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopDevEnvironmentSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/session/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      return StopDevEnvironmentSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::BEARER_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDevEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDevEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDevEnvironmentOutcome>(
    [&]()-> UpdateDevEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDevEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v1/spaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/devEnvironments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
      return UpdateDevEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::BEARER_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

VerifySessionOutcome CodeCatalystClient::VerifySession() const
{
AWS_OPERATION_GUARD(VerifySession);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, VerifySession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, VerifySession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".VerifySession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, "VerifySession" }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<VerifySessionOutcome>(
    [&]()-> VerifySessionOutcome {

        AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
        const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(staticEndpointParameters); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
            *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, "VerifySession"}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/session");
      return VerifySessionOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER, "VerifySession"));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, "VerifySession"}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

