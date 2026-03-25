/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
#include <aws/gameliftstreams/GameLiftStreamsClient.h>
#include <aws/gameliftstreams/GameLiftStreamsEndpointProvider.h>
#include <aws/gameliftstreams/GameLiftStreamsErrorMarshaller.h>
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
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountRequest.h>
#include <aws/gameliftstreams/model/ListStreamSessionsRequest.h>
#include <aws/gameliftstreams/model/ListTagsForResourceRequest.h>
#include <aws/gameliftstreams/model/RemoveStreamGroupLocationsRequest.h>
#include <aws/gameliftstreams/model/StartStreamSessionRequest.h>
#include <aws/gameliftstreams/model/TagResourceRequest.h>
#include <aws/gameliftstreams/model/TerminateStreamSessionRequest.h>
#include <aws/gameliftstreams/model/UntagResourceRequest.h>
#include <aws/gameliftstreams/model/UpdateApplicationRequest.h>
#include <aws/gameliftstreams/model/UpdateStreamGroupRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GameLiftStreams;
using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace GameLiftStreams {
const char SERVICE_NAME[] = "gameliftstreams";
const char ALLOCATION_TAG[] = "GameLiftStreamsClient";
}  // namespace GameLiftStreams
}  // namespace Aws
const char* GameLiftStreamsClient::GetServiceName() { return SERVICE_NAME; }
const char* GameLiftStreamsClient::GetAllocationTag() { return ALLOCATION_TAG; }

GameLiftStreamsClient::GameLiftStreamsClient(const GameLiftStreams::GameLiftStreamsClientConfiguration& clientConfiguration,
                                             std::shared_ptr<GameLiftStreamsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GameLiftStreamsClient::GameLiftStreamsClient(const AWSCredentials& credentials,
                                             std::shared_ptr<GameLiftStreamsEndpointProviderBase> endpointProvider,
                                             const GameLiftStreams::GameLiftStreamsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GameLiftStreamsClient::GameLiftStreamsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<GameLiftStreamsEndpointProviderBase> endpointProvider,
                                             const GameLiftStreams::GameLiftStreamsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
GameLiftStreamsClient::GameLiftStreamsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GameLiftStreamsClient::GameLiftStreamsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GameLiftStreamsClient::GameLiftStreamsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftStreamsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GameLiftStreamsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
GameLiftStreamsClient::~GameLiftStreamsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<GameLiftStreamsEndpointProviderBase>& GameLiftStreamsClient::accessEndpointProvider() { return m_endpointProvider; }

void GameLiftStreamsClient::init(const GameLiftStreams::GameLiftStreamsClientConfiguration& config) {
  AWSClient::SetServiceClientName("GameLiftStreams");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "gameliftstreams");
}

void GameLiftStreamsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
GameLiftStreamsClient::InvokeOperationOutcome GameLiftStreamsClient::InvokeServiceOperation(
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

AddStreamGroupLocationsOutcome GameLiftStreamsClient::AddStreamGroupLocations(const AddStreamGroupLocationsRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddStreamGroupLocations", "Required field: Identifier, is not set");
    return AddStreamGroupLocationsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/locations");
  };

  return AddStreamGroupLocationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateApplicationsOutcome GameLiftStreamsClient::AssociateApplications(const AssociateApplicationsRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateApplications", "Required field: Identifier, is not set");
    return AssociateApplicationsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return AssociateApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationOutcome GameLiftStreamsClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  return CreateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStreamGroupOutcome GameLiftStreamsClient::CreateStreamGroup(const CreateStreamGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups");
  };

  return CreateStreamGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStreamSessionConnectionOutcome GameLiftStreamsClient::CreateStreamSessionConnection(
    const CreateStreamSessionConnectionRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateStreamSessionConnection", "Required field: Identifier, is not set");
    return CreateStreamSessionConnectionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.StreamSessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateStreamSessionConnection", "Required field: StreamSessionIdentifier, is not set");
    return CreateStreamSessionConnectionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamSessionIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamsessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamSessionIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections");
  };

  return CreateStreamSessionConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutcome GameLiftStreamsClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: Identifier, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteStreamGroupOutcome GameLiftStreamsClient::DeleteStreamGroup(const DeleteStreamGroupRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStreamGroup", "Required field: Identifier, is not set");
    return DeleteStreamGroupOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteStreamGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateApplicationsOutcome GameLiftStreamsClient::DisassociateApplications(const DisassociateApplicationsRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateApplications", "Required field: Identifier, is not set");
    return DisassociateApplicationsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociations");
  };

  return DisassociateApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportStreamSessionFilesOutcome GameLiftStreamsClient::ExportStreamSessionFiles(const ExportStreamSessionFilesRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportStreamSessionFiles", "Required field: Identifier, is not set");
    return ExportStreamSessionFilesOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.StreamSessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportStreamSessionFiles", "Required field: StreamSessionIdentifier, is not set");
    return ExportStreamSessionFilesOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamSessionIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamsessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamSessionIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/exportfiles");
  };

  return ExportStreamSessionFilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

GetApplicationOutcome GameLiftStreamsClient::GetApplication(const GetApplicationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: Identifier, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetStreamGroupOutcome GameLiftStreamsClient::GetStreamGroup(const GetStreamGroupRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStreamGroup", "Required field: Identifier, is not set");
    return GetStreamGroupOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetStreamGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetStreamSessionOutcome GameLiftStreamsClient::GetStreamSession(const GetStreamSessionRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStreamSession", "Required field: Identifier, is not set");
    return GetStreamSessionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.StreamSessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStreamSession", "Required field: StreamSessionIdentifier, is not set");
    return GetStreamSessionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamSessionIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamsessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamSessionIdentifier());
  };

  return GetStreamSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApplicationsOutcome GameLiftStreamsClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  return ListApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListStreamGroupsOutcome GameLiftStreamsClient::ListStreamGroups(const ListStreamGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups");
  };

  return ListStreamGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListStreamSessionsOutcome GameLiftStreamsClient::ListStreamSessions(const ListStreamSessionsRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStreamSessions", "Required field: Identifier, is not set");
    return ListStreamSessionsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamsessions");
  };

  return ListStreamSessionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListStreamSessionsByAccountOutcome GameLiftStreamsClient::ListStreamSessionsByAccount(
    const ListStreamSessionsByAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamsessions");
  };

  return ListStreamSessionsByAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome GameLiftStreamsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RemoveStreamGroupLocationsOutcome GameLiftStreamsClient::RemoveStreamGroupLocations(
    const RemoveStreamGroupLocationsRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveStreamGroupLocations", "Required field: Identifier, is not set");
    return RemoveStreamGroupLocationsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.LocationsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveStreamGroupLocations", "Required field: Locations, is not set");
    return RemoveStreamGroupLocationsOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Locations]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/locations");
  };

  return RemoveStreamGroupLocationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

StartStreamSessionOutcome GameLiftStreamsClient::StartStreamSession(const StartStreamSessionRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartStreamSession", "Required field: Identifier, is not set");
    return StartStreamSessionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamsessions");
  };

  return StartStreamSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome GameLiftStreamsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateStreamSessionOutcome GameLiftStreamsClient::TerminateStreamSession(const TerminateStreamSessionRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TerminateStreamSession", "Required field: Identifier, is not set");
    return TerminateStreamSessionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.StreamSessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TerminateStreamSession", "Required field: StreamSessionIdentifier, is not set");
    return TerminateStreamSessionOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamSessionIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamsessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamSessionIdentifier());
  };

  return TerminateStreamSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UntagResourceOutcome GameLiftStreamsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateApplicationOutcome GameLiftStreamsClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: Identifier, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateStreamGroupOutcome GameLiftStreamsClient::UpdateStreamGroup(const UpdateStreamGroupRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStreamGroup", "Required field: Identifier, is not set");
    return UpdateStreamGroupOutcome(Aws::Client::AWSError<GameLiftStreamsErrors>(
        GameLiftStreamsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streamgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateStreamGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
