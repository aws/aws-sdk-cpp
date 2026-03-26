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
#include <aws/events/CloudWatchEventsClient.h>
#include <aws/events/CloudWatchEventsEndpointProvider.h>
#include <aws/events/CloudWatchEventsErrorMarshaller.h>
#include <aws/events/model/ActivateEventSourceRequest.h>
#include <aws/events/model/CancelReplayRequest.h>
#include <aws/events/model/CreateApiDestinationRequest.h>
#include <aws/events/model/CreateArchiveRequest.h>
#include <aws/events/model/CreateConnectionRequest.h>
#include <aws/events/model/CreateEventBusRequest.h>
#include <aws/events/model/CreatePartnerEventSourceRequest.h>
#include <aws/events/model/DeactivateEventSourceRequest.h>
#include <aws/events/model/DeauthorizeConnectionRequest.h>
#include <aws/events/model/DeleteApiDestinationRequest.h>
#include <aws/events/model/DeleteArchiveRequest.h>
#include <aws/events/model/DeleteConnectionRequest.h>
#include <aws/events/model/DeleteEventBusRequest.h>
#include <aws/events/model/DeletePartnerEventSourceRequest.h>
#include <aws/events/model/DeleteRuleRequest.h>
#include <aws/events/model/DescribeApiDestinationRequest.h>
#include <aws/events/model/DescribeArchiveRequest.h>
#include <aws/events/model/DescribeConnectionRequest.h>
#include <aws/events/model/DescribeEventBusRequest.h>
#include <aws/events/model/DescribeEventSourceRequest.h>
#include <aws/events/model/DescribePartnerEventSourceRequest.h>
#include <aws/events/model/DescribeReplayRequest.h>
#include <aws/events/model/DescribeRuleRequest.h>
#include <aws/events/model/DisableRuleRequest.h>
#include <aws/events/model/EnableRuleRequest.h>
#include <aws/events/model/ListApiDestinationsRequest.h>
#include <aws/events/model/ListArchivesRequest.h>
#include <aws/events/model/ListConnectionsRequest.h>
#include <aws/events/model/ListEventBusesRequest.h>
#include <aws/events/model/ListEventSourcesRequest.h>
#include <aws/events/model/ListPartnerEventSourceAccountsRequest.h>
#include <aws/events/model/ListPartnerEventSourcesRequest.h>
#include <aws/events/model/ListReplaysRequest.h>
#include <aws/events/model/ListRuleNamesByTargetRequest.h>
#include <aws/events/model/ListRulesRequest.h>
#include <aws/events/model/ListTagsForResourceRequest.h>
#include <aws/events/model/ListTargetsByRuleRequest.h>
#include <aws/events/model/PutEventsRequest.h>
#include <aws/events/model/PutPartnerEventsRequest.h>
#include <aws/events/model/PutPermissionRequest.h>
#include <aws/events/model/PutRuleRequest.h>
#include <aws/events/model/PutTargetsRequest.h>
#include <aws/events/model/RemovePermissionRequest.h>
#include <aws/events/model/RemoveTargetsRequest.h>
#include <aws/events/model/StartReplayRequest.h>
#include <aws/events/model/TagResourceRequest.h>
#include <aws/events/model/TestEventPatternRequest.h>
#include <aws/events/model/UntagResourceRequest.h>
#include <aws/events/model/UpdateApiDestinationRequest.h>
#include <aws/events/model/UpdateArchiveRequest.h>
#include <aws/events/model/UpdateConnectionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchEvents;
using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudWatchEvents {
const char SERVICE_NAME[] = "events";
const char ALLOCATION_TAG[] = "CloudWatchEventsClient";
}  // namespace CloudWatchEvents
}  // namespace Aws
const char* CloudWatchEventsClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudWatchEventsClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudWatchEventsClient::CloudWatchEventsClient(const CloudWatchEvents::CloudWatchEventsClientConfiguration& clientConfiguration,
                                               std::shared_ptr<CloudWatchEventsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudWatchEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchEventsClient::CloudWatchEventsClient(const AWSCredentials& credentials,
                                               std::shared_ptr<CloudWatchEventsEndpointProviderBase> endpointProvider,
                                               const CloudWatchEvents::CloudWatchEventsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudWatchEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchEventsClient::CloudWatchEventsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<CloudWatchEventsEndpointProviderBase> endpointProvider,
                                               const CloudWatchEvents::CloudWatchEventsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudWatchEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudWatchEventsClient::CloudWatchEventsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchEventsClient::CloudWatchEventsClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchEventsClient::CloudWatchEventsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudWatchEventsClient::~CloudWatchEventsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudWatchEventsEndpointProviderBase>& CloudWatchEventsClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudWatchEventsClient::init(const CloudWatchEvents::CloudWatchEventsClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudWatch Events");
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

void CloudWatchEventsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CloudWatchEventsClient::InvokeOperationOutcome CloudWatchEventsClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

ActivateEventSourceOutcome CloudWatchEventsClient::ActivateEventSource(const ActivateEventSourceRequest& request) const {
  return ActivateEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelReplayOutcome CloudWatchEventsClient::CancelReplay(const CancelReplayRequest& request) const {
  return CancelReplayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApiDestinationOutcome CloudWatchEventsClient::CreateApiDestination(const CreateApiDestinationRequest& request) const {
  return CreateApiDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateArchiveOutcome CloudWatchEventsClient::CreateArchive(const CreateArchiveRequest& request) const {
  return CreateArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectionOutcome CloudWatchEventsClient::CreateConnection(const CreateConnectionRequest& request) const {
  return CreateConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventBusOutcome CloudWatchEventsClient::CreateEventBus(const CreateEventBusRequest& request) const {
  return CreateEventBusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePartnerEventSourceOutcome CloudWatchEventsClient::CreatePartnerEventSource(const CreatePartnerEventSourceRequest& request) const {
  return CreatePartnerEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeactivateEventSourceOutcome CloudWatchEventsClient::DeactivateEventSource(const DeactivateEventSourceRequest& request) const {
  return DeactivateEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeauthorizeConnectionOutcome CloudWatchEventsClient::DeauthorizeConnection(const DeauthorizeConnectionRequest& request) const {
  return DeauthorizeConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApiDestinationOutcome CloudWatchEventsClient::DeleteApiDestination(const DeleteApiDestinationRequest& request) const {
  return DeleteApiDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteArchiveOutcome CloudWatchEventsClient::DeleteArchive(const DeleteArchiveRequest& request) const {
  return DeleteArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectionOutcome CloudWatchEventsClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  return DeleteConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEventBusOutcome CloudWatchEventsClient::DeleteEventBus(const DeleteEventBusRequest& request) const {
  return DeleteEventBusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePartnerEventSourceOutcome CloudWatchEventsClient::DeletePartnerEventSource(const DeletePartnerEventSourceRequest& request) const {
  return DeletePartnerEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRuleOutcome CloudWatchEventsClient::DeleteRule(const DeleteRuleRequest& request) const {
  return DeleteRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApiDestinationOutcome CloudWatchEventsClient::DescribeApiDestination(const DescribeApiDestinationRequest& request) const {
  return DescribeApiDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeArchiveOutcome CloudWatchEventsClient::DescribeArchive(const DescribeArchiveRequest& request) const {
  return DescribeArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConnectionOutcome CloudWatchEventsClient::DescribeConnection(const DescribeConnectionRequest& request) const {
  return DescribeConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventBusOutcome CloudWatchEventsClient::DescribeEventBus(const DescribeEventBusRequest& request) const {
  return DescribeEventBusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventSourceOutcome CloudWatchEventsClient::DescribeEventSource(const DescribeEventSourceRequest& request) const {
  return DescribeEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePartnerEventSourceOutcome CloudWatchEventsClient::DescribePartnerEventSource(
    const DescribePartnerEventSourceRequest& request) const {
  return DescribePartnerEventSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplayOutcome CloudWatchEventsClient::DescribeReplay(const DescribeReplayRequest& request) const {
  return DescribeReplayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRuleOutcome CloudWatchEventsClient::DescribeRule(const DescribeRuleRequest& request) const {
  return DescribeRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableRuleOutcome CloudWatchEventsClient::DisableRule(const DisableRuleRequest& request) const {
  return DisableRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableRuleOutcome CloudWatchEventsClient::EnableRule(const EnableRuleRequest& request) const {
  return EnableRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApiDestinationsOutcome CloudWatchEventsClient::ListApiDestinations(const ListApiDestinationsRequest& request) const {
  return ListApiDestinationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListArchivesOutcome CloudWatchEventsClient::ListArchives(const ListArchivesRequest& request) const {
  return ListArchivesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConnectionsOutcome CloudWatchEventsClient::ListConnections(const ListConnectionsRequest& request) const {
  return ListConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEventBusesOutcome CloudWatchEventsClient::ListEventBuses(const ListEventBusesRequest& request) const {
  return ListEventBusesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEventSourcesOutcome CloudWatchEventsClient::ListEventSources(const ListEventSourcesRequest& request) const {
  return ListEventSourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPartnerEventSourceAccountsOutcome CloudWatchEventsClient::ListPartnerEventSourceAccounts(
    const ListPartnerEventSourceAccountsRequest& request) const {
  return ListPartnerEventSourceAccountsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPartnerEventSourcesOutcome CloudWatchEventsClient::ListPartnerEventSources(const ListPartnerEventSourcesRequest& request) const {
  return ListPartnerEventSourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReplaysOutcome CloudWatchEventsClient::ListReplays(const ListReplaysRequest& request) const {
  return ListReplaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRuleNamesByTargetOutcome CloudWatchEventsClient::ListRuleNamesByTarget(const ListRuleNamesByTargetRequest& request) const {
  return ListRuleNamesByTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRulesOutcome CloudWatchEventsClient::ListRules(const ListRulesRequest& request) const {
  return ListRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome CloudWatchEventsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTargetsByRuleOutcome CloudWatchEventsClient::ListTargetsByRule(const ListTargetsByRuleRequest& request) const {
  return ListTargetsByRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEventsOutcome CloudWatchEventsClient::PutEvents(const PutEventsRequest& request) const {
  return PutEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPartnerEventsOutcome CloudWatchEventsClient::PutPartnerEvents(const PutPartnerEventsRequest& request) const {
  return PutPartnerEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPermissionOutcome CloudWatchEventsClient::PutPermission(const PutPermissionRequest& request) const {
  return PutPermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRuleOutcome CloudWatchEventsClient::PutRule(const PutRuleRequest& request) const {
  return PutRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutTargetsOutcome CloudWatchEventsClient::PutTargets(const PutTargetsRequest& request) const {
  return PutTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemovePermissionOutcome CloudWatchEventsClient::RemovePermission(const RemovePermissionRequest& request) const {
  return RemovePermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTargetsOutcome CloudWatchEventsClient::RemoveTargets(const RemoveTargetsRequest& request) const {
  return RemoveTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReplayOutcome CloudWatchEventsClient::StartReplay(const StartReplayRequest& request) const {
  return StartReplayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CloudWatchEventsClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestEventPatternOutcome CloudWatchEventsClient::TestEventPattern(const TestEventPatternRequest& request) const {
  return TestEventPatternOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CloudWatchEventsClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApiDestinationOutcome CloudWatchEventsClient::UpdateApiDestination(const UpdateApiDestinationRequest& request) const {
  return UpdateApiDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateArchiveOutcome CloudWatchEventsClient::UpdateArchive(const UpdateArchiveRequest& request) const {
  return UpdateArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConnectionOutcome CloudWatchEventsClient::UpdateConnection(const UpdateConnectionRequest& request) const {
  return UpdateConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
