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
#include <aws/eventbridge/EventBridgeClient.h>
#include <aws/eventbridge/EventBridgeEndpointProvider.h>
#include <aws/eventbridge/EventBridgeErrorMarshaller.h>
#include <aws/eventbridge/model/ActivateEventSourceRequest.h>
#include <aws/eventbridge/model/CancelReplayRequest.h>
#include <aws/eventbridge/model/CreateApiDestinationRequest.h>
#include <aws/eventbridge/model/CreateArchiveRequest.h>
#include <aws/eventbridge/model/CreateConnectionRequest.h>
#include <aws/eventbridge/model/CreateEndpointRequest.h>
#include <aws/eventbridge/model/CreateEventBusRequest.h>
#include <aws/eventbridge/model/CreatePartnerEventSourceRequest.h>
#include <aws/eventbridge/model/DeactivateEventSourceRequest.h>
#include <aws/eventbridge/model/DeauthorizeConnectionRequest.h>
#include <aws/eventbridge/model/DeleteApiDestinationRequest.h>
#include <aws/eventbridge/model/DeleteArchiveRequest.h>
#include <aws/eventbridge/model/DeleteConnectionRequest.h>
#include <aws/eventbridge/model/DeleteEndpointRequest.h>
#include <aws/eventbridge/model/DeleteEventBusRequest.h>
#include <aws/eventbridge/model/DeletePartnerEventSourceRequest.h>
#include <aws/eventbridge/model/DeleteRuleRequest.h>
#include <aws/eventbridge/model/DescribeApiDestinationRequest.h>
#include <aws/eventbridge/model/DescribeArchiveRequest.h>
#include <aws/eventbridge/model/DescribeConnectionRequest.h>
#include <aws/eventbridge/model/DescribeEndpointRequest.h>
#include <aws/eventbridge/model/DescribeEventBusRequest.h>
#include <aws/eventbridge/model/DescribeEventSourceRequest.h>
#include <aws/eventbridge/model/DescribePartnerEventSourceRequest.h>
#include <aws/eventbridge/model/DescribeReplayRequest.h>
#include <aws/eventbridge/model/DescribeRuleRequest.h>
#include <aws/eventbridge/model/DisableRuleRequest.h>
#include <aws/eventbridge/model/EnableRuleRequest.h>
#include <aws/eventbridge/model/ListApiDestinationsRequest.h>
#include <aws/eventbridge/model/ListArchivesRequest.h>
#include <aws/eventbridge/model/ListConnectionsRequest.h>
#include <aws/eventbridge/model/ListEndpointsRequest.h>
#include <aws/eventbridge/model/ListEventBusesRequest.h>
#include <aws/eventbridge/model/ListEventSourcesRequest.h>
#include <aws/eventbridge/model/ListPartnerEventSourceAccountsRequest.h>
#include <aws/eventbridge/model/ListPartnerEventSourcesRequest.h>
#include <aws/eventbridge/model/ListReplaysRequest.h>
#include <aws/eventbridge/model/ListRuleNamesByTargetRequest.h>
#include <aws/eventbridge/model/ListRulesRequest.h>
#include <aws/eventbridge/model/ListTagsForResourceRequest.h>
#include <aws/eventbridge/model/ListTargetsByRuleRequest.h>
#include <aws/eventbridge/model/PutEventsRequest.h>
#include <aws/eventbridge/model/PutPartnerEventsRequest.h>
#include <aws/eventbridge/model/PutPermissionRequest.h>
#include <aws/eventbridge/model/PutRuleRequest.h>
#include <aws/eventbridge/model/PutTargetsRequest.h>
#include <aws/eventbridge/model/RemovePermissionRequest.h>
#include <aws/eventbridge/model/RemoveTargetsRequest.h>
#include <aws/eventbridge/model/StartReplayRequest.h>
#include <aws/eventbridge/model/TagResourceRequest.h>
#include <aws/eventbridge/model/TestEventPatternRequest.h>
#include <aws/eventbridge/model/UntagResourceRequest.h>
#include <aws/eventbridge/model/UpdateApiDestinationRequest.h>
#include <aws/eventbridge/model/UpdateArchiveRequest.h>
#include <aws/eventbridge/model/UpdateConnectionRequest.h>
#include <aws/eventbridge/model/UpdateEndpointRequest.h>
#include <aws/eventbridge/model/UpdateEventBusRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EventBridge;
using namespace Aws::EventBridge::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EventBridge {
const char SERVICE_NAME[] = "events";
const char ALLOCATION_TAG[] = "EventBridgeClient";
}  // namespace EventBridge
}  // namespace Aws
const char* EventBridgeClient::GetServiceName() { return SERVICE_NAME; }
const char* EventBridgeClient::GetAllocationTag() { return ALLOCATION_TAG; }

EventBridgeClient::EventBridgeClient(const EventBridge::EventBridgeClientConfiguration& clientConfiguration,
                                     std::shared_ptr<EventBridgeEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EventBridgeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EventBridgeClient::EventBridgeClient(const AWSCredentials& credentials, std::shared_ptr<EventBridgeEndpointProviderBase> endpointProvider,
                                     const EventBridge::EventBridgeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EventBridgeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EventBridgeClient::EventBridgeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<EventBridgeEndpointProviderBase> endpointProvider,
                                     const EventBridge::EventBridgeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EventBridgeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EventBridgeClient::EventBridgeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EventBridgeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EventBridgeClient::EventBridgeClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EventBridgeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EventBridgeClient::EventBridgeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EventBridgeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EventBridgeClient::~EventBridgeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EventBridgeEndpointProviderBase>& EventBridgeClient::accessEndpointProvider() { return m_endpointProvider; }

void EventBridgeClient::init(const EventBridge::EventBridgeClientConfiguration& config) {
  AWSClient::SetServiceClientName("EventBridge");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "events");
}

void EventBridgeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
EventBridgeClient::InvokeOperationOutcome EventBridgeClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

ActivateEventSourceOutcome EventBridgeClient::ActivateEventSource(const ActivateEventSourceRequest& request) const {
  return ActivateEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelReplayOutcome EventBridgeClient::CancelReplay(const CancelReplayRequest& request) const {
  return CancelReplayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApiDestinationOutcome EventBridgeClient::CreateApiDestination(const CreateApiDestinationRequest& request) const {
  return CreateApiDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateArchiveOutcome EventBridgeClient::CreateArchive(const CreateArchiveRequest& request) const {
  return CreateArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectionOutcome EventBridgeClient::CreateConnection(const CreateConnectionRequest& request) const {
  return CreateConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEndpointOutcome EventBridgeClient::CreateEndpoint(const CreateEndpointRequest& request) const {
  return CreateEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventBusOutcome EventBridgeClient::CreateEventBus(const CreateEventBusRequest& request) const {
  return CreateEventBusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePartnerEventSourceOutcome EventBridgeClient::CreatePartnerEventSource(const CreatePartnerEventSourceRequest& request) const {
  return CreatePartnerEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeactivateEventSourceOutcome EventBridgeClient::DeactivateEventSource(const DeactivateEventSourceRequest& request) const {
  return DeactivateEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeauthorizeConnectionOutcome EventBridgeClient::DeauthorizeConnection(const DeauthorizeConnectionRequest& request) const {
  return DeauthorizeConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApiDestinationOutcome EventBridgeClient::DeleteApiDestination(const DeleteApiDestinationRequest& request) const {
  return DeleteApiDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteArchiveOutcome EventBridgeClient::DeleteArchive(const DeleteArchiveRequest& request) const {
  return DeleteArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectionOutcome EventBridgeClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  return DeleteConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEndpointOutcome EventBridgeClient::DeleteEndpoint(const DeleteEndpointRequest& request) const {
  return DeleteEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEventBusOutcome EventBridgeClient::DeleteEventBus(const DeleteEventBusRequest& request) const {
  return DeleteEventBusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePartnerEventSourceOutcome EventBridgeClient::DeletePartnerEventSource(const DeletePartnerEventSourceRequest& request) const {
  return DeletePartnerEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRuleOutcome EventBridgeClient::DeleteRule(const DeleteRuleRequest& request) const {
  return DeleteRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApiDestinationOutcome EventBridgeClient::DescribeApiDestination(const DescribeApiDestinationRequest& request) const {
  return DescribeApiDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeArchiveOutcome EventBridgeClient::DescribeArchive(const DescribeArchiveRequest& request) const {
  return DescribeArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConnectionOutcome EventBridgeClient::DescribeConnection(const DescribeConnectionRequest& request) const {
  return DescribeConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEndpointOutcome EventBridgeClient::DescribeEndpoint(const DescribeEndpointRequest& request) const {
  return DescribeEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventBusOutcome EventBridgeClient::DescribeEventBus(const DescribeEventBusRequest& request) const {
  return DescribeEventBusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventSourceOutcome EventBridgeClient::DescribeEventSource(const DescribeEventSourceRequest& request) const {
  return DescribeEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePartnerEventSourceOutcome EventBridgeClient::DescribePartnerEventSource(const DescribePartnerEventSourceRequest& request) const {
  return DescribePartnerEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplayOutcome EventBridgeClient::DescribeReplay(const DescribeReplayRequest& request) const {
  return DescribeReplayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRuleOutcome EventBridgeClient::DescribeRule(const DescribeRuleRequest& request) const {
  return DescribeRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableRuleOutcome EventBridgeClient::DisableRule(const DisableRuleRequest& request) const {
  return DisableRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableRuleOutcome EventBridgeClient::EnableRule(const EnableRuleRequest& request) const {
  return EnableRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApiDestinationsOutcome EventBridgeClient::ListApiDestinations(const ListApiDestinationsRequest& request) const {
  return ListApiDestinationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListArchivesOutcome EventBridgeClient::ListArchives(const ListArchivesRequest& request) const {
  return ListArchivesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConnectionsOutcome EventBridgeClient::ListConnections(const ListConnectionsRequest& request) const {
  return ListConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEndpointsOutcome EventBridgeClient::ListEndpoints(const ListEndpointsRequest& request) const {
  return ListEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEventBusesOutcome EventBridgeClient::ListEventBuses(const ListEventBusesRequest& request) const {
  return ListEventBusesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEventSourcesOutcome EventBridgeClient::ListEventSources(const ListEventSourcesRequest& request) const {
  return ListEventSourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPartnerEventSourceAccountsOutcome EventBridgeClient::ListPartnerEventSourceAccounts(
    const ListPartnerEventSourceAccountsRequest& request) const {
  return ListPartnerEventSourceAccountsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPartnerEventSourcesOutcome EventBridgeClient::ListPartnerEventSources(const ListPartnerEventSourcesRequest& request) const {
  return ListPartnerEventSourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReplaysOutcome EventBridgeClient::ListReplays(const ListReplaysRequest& request) const {
  return ListReplaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRuleNamesByTargetOutcome EventBridgeClient::ListRuleNamesByTarget(const ListRuleNamesByTargetRequest& request) const {
  return ListRuleNamesByTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRulesOutcome EventBridgeClient::ListRules(const ListRulesRequest& request) const {
  return ListRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome EventBridgeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTargetsByRuleOutcome EventBridgeClient::ListTargetsByRule(const ListTargetsByRuleRequest& request) const {
  return ListTargetsByRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEventsOutcome EventBridgeClient::PutEvents(const PutEventsRequest& request) const {
  return PutEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPartnerEventsOutcome EventBridgeClient::PutPartnerEvents(const PutPartnerEventsRequest& request) const {
  return PutPartnerEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPermissionOutcome EventBridgeClient::PutPermission(const PutPermissionRequest& request) const {
  return PutPermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRuleOutcome EventBridgeClient::PutRule(const PutRuleRequest& request) const {
  return PutRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutTargetsOutcome EventBridgeClient::PutTargets(const PutTargetsRequest& request) const {
  return PutTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemovePermissionOutcome EventBridgeClient::RemovePermission(const RemovePermissionRequest& request) const {
  return RemovePermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTargetsOutcome EventBridgeClient::RemoveTargets(const RemoveTargetsRequest& request) const {
  return RemoveTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReplayOutcome EventBridgeClient::StartReplay(const StartReplayRequest& request) const {
  return StartReplayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome EventBridgeClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestEventPatternOutcome EventBridgeClient::TestEventPattern(const TestEventPatternRequest& request) const {
  return TestEventPatternOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome EventBridgeClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApiDestinationOutcome EventBridgeClient::UpdateApiDestination(const UpdateApiDestinationRequest& request) const {
  return UpdateApiDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateArchiveOutcome EventBridgeClient::UpdateArchive(const UpdateArchiveRequest& request) const {
  return UpdateArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConnectionOutcome EventBridgeClient::UpdateConnection(const UpdateConnectionRequest& request) const {
  return UpdateConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEndpointOutcome EventBridgeClient::UpdateEndpoint(const UpdateEndpointRequest& request) const {
  return UpdateEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEventBusOutcome EventBridgeClient::UpdateEventBus(const UpdateEventBusRequest& request) const {
  return UpdateEventBusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
