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


#include <aws/gameliftstreams/GameLiftStreamsClient.h>
#include <aws/gameliftstreams/GameLiftStreamsErrorMarshaller.h>
#include <aws/gameliftstreams/GameLiftStreamsEndpointProvider.h>
#include <aws/gameliftstreams/model/AddStreamGroupLocationsRequest.h>
#include <aws/gameliftstreams/model/AssociateApplicationsRequest.h>
#include <aws/gameliftstreams/model/CreateApplicationRequest.h>
#include <aws/gameliftstreams/model/CreateStreamGroupRequest.h>
#include <aws/gameliftstreams/model/CreateStreamSessionConnectionRequest.h>
#include <aws/gameliftstreams/model/DeleteApplicationRequest.h>
#include <aws/gameliftstreams/model/DeleteStreamGroupRequest.h>
#include <aws/gameliftstreams/model/DisassociateApplicationsRequest.h>
#include <aws/gameliftstreams/model/ExportStreamSessionFilesRequest.h>
#include <aws/gameliftstreams/model/GetApplicationRequest.h>
#include <aws/gameliftstreams/model/GetStreamGroupRequest.h>
#include <aws/gameliftstreams/model/GetStreamSessionRequest.h>
#include <aws/gameliftstreams/model/ListApplicationsRequest.h>
#include <aws/gameliftstreams/model/ListStreamGroupsRequest.h>
#include <aws/gameliftstreams/model/ListStreamSessionsRequest.h>
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountRequest.h>
#include <aws/gameliftstreams/model/ListTagsForResourceRequest.h>
#include <aws/gameliftstreams/model/RemoveStreamGroupLocationsRequest.h>
#include <aws/gameliftstreams/model/StartStreamSessionRequest.h>
#include <aws/gameliftstreams/model/TagResourceRequest.h>
#include <aws/gameliftstreams/model/TerminateStreamSessionRequest.h>
#include <aws/gameliftstreams/model/UntagResourceRequest.h>
#include <aws/gameliftstreams/model/UpdateApplicationRequest.h>
#include <aws/gameliftstreams/model/UpdateStreamGroupRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GameLiftStreams;
using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace GameLiftStreams
  {
    const char ALLOCATION_TAG[] = "GameLiftStreamsClient";
    const char SERVICE_NAME[] = "gameliftstreams";
  }
}
const char* GameLiftStreamsClient::GetServiceName() {return SERVICE_NAME;}
const char* GameLiftStreamsClient::GetAllocationTag() {return ALLOCATION_TAG;}

GameLiftStreamsClient::GameLiftStreamsClient(const GameLiftStreams::GameLiftStreamsClientConfiguration& clientConfiguration,
                           std::shared_ptr<GameLiftStreamsEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "GameLiftStreams",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

GameLiftStreamsClient::GameLiftStreamsClient(const AWSCredentials& credentials,
                           std::shared_ptr<GameLiftStreamsEndpointProviderBase> endpointProvider,
                           const GameLiftStreams::GameLiftStreamsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "GameLiftStreams",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

GameLiftStreamsClient::GameLiftStreamsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<GameLiftStreamsEndpointProviderBase> endpointProvider,
                           const GameLiftStreams::GameLiftStreamsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "GameLiftStreams",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
GameLiftStreamsClient::GameLiftStreamsClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "GameLiftStreams",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

GameLiftStreamsClient::GameLiftStreamsClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "GameLiftStreams",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

GameLiftStreamsClient::GameLiftStreamsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "GameLiftStreams",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

GameLiftStreamsClient::~GameLiftStreamsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<GameLiftStreamsEndpointProviderBase>& GameLiftStreamsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void GameLiftStreamsClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
AddStreamGroupLocationsOutcome GameLiftStreamsClient::AddStreamGroupLocations(const AddStreamGroupLocationsRequest& request) const
{
  AWS_OPERATION_GUARD(AddStreamGroupLocations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddStreamGroupLocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddStreamGroupLocations", "Required field: Identifier, is not set");
    return AddStreamGroupLocationsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AddStreamGroupLocations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddStreamGroupLocations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddStreamGroupLocations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddStreamGroupLocationsOutcome>(
    [&]()-> AddStreamGroupLocationsOutcome {
      return AddStreamGroupLocationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/locations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateApplicationsOutcome GameLiftStreamsClient::AssociateApplications(const AssociateApplicationsRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateApplications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateApplications", "Required field: Identifier, is not set");
    return AssociateApplicationsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateApplications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateApplicationsOutcome>(
    [&]()-> AssociateApplicationsOutcome {
      return AssociateApplicationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/associations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateApplicationOutcome GameLiftStreamsClient::CreateApplication(const CreateApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateApplicationOutcome>(
    [&]()-> CreateApplicationOutcome {
      return CreateApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/applications");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateStreamGroupOutcome GameLiftStreamsClient::CreateStreamGroup(const CreateStreamGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateStreamGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStreamGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateStreamGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateStreamGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateStreamGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateStreamGroupOutcome>(
    [&]()-> CreateStreamGroupOutcome {
      return CreateStreamGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateStreamSessionConnectionOutcome GameLiftStreamsClient::CreateStreamSessionConnection(const CreateStreamSessionConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateStreamSessionConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStreamSessionConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStreamSessionConnection", "Required field: Identifier, is not set");
    return CreateStreamSessionConnectionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.StreamSessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStreamSessionConnection", "Required field: StreamSessionIdentifier, is not set");
    return CreateStreamSessionConnectionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamSessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateStreamSessionConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateStreamSessionConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateStreamSessionConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateStreamSessionConnectionOutcome>(
    [&]()-> CreateStreamSessionConnectionOutcome {
      return CreateStreamSessionConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/streamsessions/");
      resolvedEndpoint.AddPathSegment(request.GetStreamSessionIdentifier());
      resolvedEndpoint.AddPathSegments("/connections");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteApplicationOutcome GameLiftStreamsClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: Identifier, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteApplicationOutcome>(
    [&]()-> DeleteApplicationOutcome {
      return DeleteApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/applications/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteStreamGroupOutcome GameLiftStreamsClient::DeleteStreamGroup(const DeleteStreamGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteStreamGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStreamGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStreamGroup", "Required field: Identifier, is not set");
    return DeleteStreamGroupOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteStreamGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteStreamGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteStreamGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteStreamGroupOutcome>(
    [&]()-> DeleteStreamGroupOutcome {
      return DeleteStreamGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateApplicationsOutcome GameLiftStreamsClient::DisassociateApplications(const DisassociateApplicationsRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateApplications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateApplications", "Required field: Identifier, is not set");
    return DisassociateApplicationsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateApplications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateApplicationsOutcome>(
    [&]()-> DisassociateApplicationsOutcome {
      return DisassociateApplicationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/disassociations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExportStreamSessionFilesOutcome GameLiftStreamsClient::ExportStreamSessionFiles(const ExportStreamSessionFilesRequest& request) const
{
  AWS_OPERATION_GUARD(ExportStreamSessionFiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportStreamSessionFiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportStreamSessionFiles", "Required field: Identifier, is not set");
    return ExportStreamSessionFilesOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.StreamSessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportStreamSessionFiles", "Required field: StreamSessionIdentifier, is not set");
    return ExportStreamSessionFilesOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamSessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ExportStreamSessionFiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExportStreamSessionFiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExportStreamSessionFiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExportStreamSessionFilesOutcome>(
    [&]()-> ExportStreamSessionFilesOutcome {
      return ExportStreamSessionFilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/streamsessions/");
      resolvedEndpoint.AddPathSegment(request.GetStreamSessionIdentifier());
      resolvedEndpoint.AddPathSegments("/exportfiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetApplicationOutcome GameLiftStreamsClient::GetApplication(const GetApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(GetApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: Identifier, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetApplicationOutcome>(
    [&]()-> GetApplicationOutcome {
      return GetApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/applications/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStreamGroupOutcome GameLiftStreamsClient::GetStreamGroup(const GetStreamGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetStreamGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStreamGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamGroup", "Required field: Identifier, is not set");
    return GetStreamGroupOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetStreamGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStreamGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStreamGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStreamGroupOutcome>(
    [&]()-> GetStreamGroupOutcome {
      return GetStreamGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStreamSessionOutcome GameLiftStreamsClient::GetStreamSession(const GetStreamSessionRequest& request) const
{
  AWS_OPERATION_GUARD(GetStreamSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStreamSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamSession", "Required field: Identifier, is not set");
    return GetStreamSessionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.StreamSessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamSession", "Required field: StreamSessionIdentifier, is not set");
    return GetStreamSessionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamSessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetStreamSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStreamSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStreamSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStreamSessionOutcome>(
    [&]()-> GetStreamSessionOutcome {
      return GetStreamSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/streamsessions/");
      resolvedEndpoint.AddPathSegment(request.GetStreamSessionIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListApplicationsOutcome GameLiftStreamsClient::ListApplications(const ListApplicationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListApplications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListApplications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListApplicationsOutcome>(
    [&]()-> ListApplicationsOutcome {
      return ListApplicationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/applications");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStreamGroupsOutcome GameLiftStreamsClient::ListStreamGroups(const ListStreamGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListStreamGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreamGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListStreamGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStreamGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStreamGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStreamGroupsOutcome>(
    [&]()-> ListStreamGroupsOutcome {
      return ListStreamGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStreamSessionsOutcome GameLiftStreamsClient::ListStreamSessions(const ListStreamSessionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListStreamSessions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreamSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStreamSessions", "Required field: Identifier, is not set");
    return ListStreamSessionsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListStreamSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStreamSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStreamSessions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStreamSessionsOutcome>(
    [&]()-> ListStreamSessionsOutcome {
      return ListStreamSessionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/streamsessions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStreamSessionsByAccountOutcome GameLiftStreamsClient::ListStreamSessionsByAccount(const ListStreamSessionsByAccountRequest& request) const
{
  AWS_OPERATION_GUARD(ListStreamSessionsByAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreamSessionsByAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListStreamSessionsByAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStreamSessionsByAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStreamSessionsByAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStreamSessionsByAccountOutcome>(
    [&]()-> ListStreamSessionsByAccountOutcome {
      return ListStreamSessionsByAccountOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamsessions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome GameLiftStreamsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveStreamGroupLocationsOutcome GameLiftStreamsClient::RemoveStreamGroupLocations(const RemoveStreamGroupLocationsRequest& request) const
{
  AWS_OPERATION_GUARD(RemoveStreamGroupLocations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveStreamGroupLocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveStreamGroupLocations", "Required field: Identifier, is not set");
    return RemoveStreamGroupLocationsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.LocationsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveStreamGroupLocations", "Required field: Locations, is not set");
    return RemoveStreamGroupLocationsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Locations]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RemoveStreamGroupLocations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveStreamGroupLocations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveStreamGroupLocations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveStreamGroupLocationsOutcome>(
    [&]()-> RemoveStreamGroupLocationsOutcome {
      return RemoveStreamGroupLocationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/locations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartStreamSessionOutcome GameLiftStreamsClient::StartStreamSession(const StartStreamSessionRequest& request) const
{
  AWS_OPERATION_GUARD(StartStreamSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartStreamSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartStreamSession", "Required field: Identifier, is not set");
    return StartStreamSessionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartStreamSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartStreamSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartStreamSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartStreamSessionOutcome>(
    [&]()-> StartStreamSessionOutcome {
      return StartStreamSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/streamsessions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome GameLiftStreamsClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TerminateStreamSessionOutcome GameLiftStreamsClient::TerminateStreamSession(const TerminateStreamSessionRequest& request) const
{
  AWS_OPERATION_GUARD(TerminateStreamSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateStreamSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TerminateStreamSession", "Required field: Identifier, is not set");
    return TerminateStreamSessionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.StreamSessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TerminateStreamSession", "Required field: StreamSessionIdentifier, is not set");
    return TerminateStreamSessionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamSessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TerminateStreamSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TerminateStreamSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TerminateStreamSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TerminateStreamSessionOutcome>(
    [&]()-> TerminateStreamSessionOutcome {
      return TerminateStreamSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/streamsessions/");
      resolvedEndpoint.AddPathSegment(request.GetStreamSessionIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome GameLiftStreamsClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateApplicationOutcome GameLiftStreamsClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: Identifier, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateApplicationOutcome>(
    [&]()-> UpdateApplicationOutcome {
      return UpdateApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/applications/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateStreamGroupOutcome GameLiftStreamsClient::UpdateStreamGroup(const UpdateStreamGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateStreamGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStreamGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStreamGroup", "Required field: Identifier, is not set");
    return UpdateStreamGroupOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateStreamGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateStreamGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateStreamGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateStreamGroupOutcome>(
    [&]()-> UpdateStreamGroupOutcome {
      return UpdateStreamGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streamgroups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


