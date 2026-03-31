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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ActivateEventSourceOutcome(result.GetResultWithOwnership())
                            : ActivateEventSourceOutcome(std::move(result.GetError()));
}

CancelReplayOutcome CloudWatchEventsClient::CancelReplay(const CancelReplayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelReplayOutcome(result.GetResultWithOwnership()) : CancelReplayOutcome(std::move(result.GetError()));
}

CreateApiDestinationOutcome CloudWatchEventsClient::CreateApiDestination(const CreateApiDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApiDestinationOutcome(result.GetResultWithOwnership())
                            : CreateApiDestinationOutcome(std::move(result.GetError()));
}

CreateArchiveOutcome CloudWatchEventsClient::CreateArchive(const CreateArchiveRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateArchiveOutcome(result.GetResultWithOwnership()) : CreateArchiveOutcome(std::move(result.GetError()));
}

CreateConnectionOutcome CloudWatchEventsClient::CreateConnection(const CreateConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectionOutcome(result.GetResultWithOwnership())
                            : CreateConnectionOutcome(std::move(result.GetError()));
}

CreateEventBusOutcome CloudWatchEventsClient::CreateEventBus(const CreateEventBusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventBusOutcome(result.GetResultWithOwnership()) : CreateEventBusOutcome(std::move(result.GetError()));
}

CreatePartnerEventSourceOutcome CloudWatchEventsClient::CreatePartnerEventSource(const CreatePartnerEventSourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePartnerEventSourceOutcome(result.GetResultWithOwnership())
                            : CreatePartnerEventSourceOutcome(std::move(result.GetError()));
}

DeactivateEventSourceOutcome CloudWatchEventsClient::DeactivateEventSource(const DeactivateEventSourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeactivateEventSourceOutcome(result.GetResultWithOwnership())
                            : DeactivateEventSourceOutcome(std::move(result.GetError()));
}

DeauthorizeConnectionOutcome CloudWatchEventsClient::DeauthorizeConnection(const DeauthorizeConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeauthorizeConnectionOutcome(result.GetResultWithOwnership())
                            : DeauthorizeConnectionOutcome(std::move(result.GetError()));
}

DeleteApiDestinationOutcome CloudWatchEventsClient::DeleteApiDestination(const DeleteApiDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteApiDestinationOutcome(result.GetResultWithOwnership())
                            : DeleteApiDestinationOutcome(std::move(result.GetError()));
}

DeleteArchiveOutcome CloudWatchEventsClient::DeleteArchive(const DeleteArchiveRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteArchiveOutcome(result.GetResultWithOwnership()) : DeleteArchiveOutcome(std::move(result.GetError()));
}

DeleteConnectionOutcome CloudWatchEventsClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteConnectionOutcome(std::move(result.GetError()));
}

DeleteEventBusOutcome CloudWatchEventsClient::DeleteEventBus(const DeleteEventBusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventBusOutcome(result.GetResultWithOwnership()) : DeleteEventBusOutcome(std::move(result.GetError()));
}

DeletePartnerEventSourceOutcome CloudWatchEventsClient::DeletePartnerEventSource(const DeletePartnerEventSourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePartnerEventSourceOutcome(result.GetResultWithOwnership())
                            : DeletePartnerEventSourceOutcome(std::move(result.GetError()));
}

DeleteRuleOutcome CloudWatchEventsClient::DeleteRule(const DeleteRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRuleOutcome(result.GetResultWithOwnership()) : DeleteRuleOutcome(std::move(result.GetError()));
}

DescribeApiDestinationOutcome CloudWatchEventsClient::DescribeApiDestination(const DescribeApiDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeApiDestinationOutcome(result.GetResultWithOwnership())
                            : DescribeApiDestinationOutcome(std::move(result.GetError()));
}

DescribeArchiveOutcome CloudWatchEventsClient::DescribeArchive(const DescribeArchiveRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeArchiveOutcome(result.GetResultWithOwnership())
                            : DescribeArchiveOutcome(std::move(result.GetError()));
}

DescribeConnectionOutcome CloudWatchEventsClient::DescribeConnection(const DescribeConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConnectionOutcome(result.GetResultWithOwnership())
                            : DescribeConnectionOutcome(std::move(result.GetError()));
}

DescribeEventBusOutcome CloudWatchEventsClient::DescribeEventBus(const DescribeEventBusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventBusOutcome(result.GetResultWithOwnership())
                            : DescribeEventBusOutcome(std::move(result.GetError()));
}

DescribeEventSourceOutcome CloudWatchEventsClient::DescribeEventSource(const DescribeEventSourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventSourceOutcome(result.GetResultWithOwnership())
                            : DescribeEventSourceOutcome(std::move(result.GetError()));
}

DescribePartnerEventSourceOutcome CloudWatchEventsClient::DescribePartnerEventSource(
    const DescribePartnerEventSourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePartnerEventSourceOutcome(result.GetResultWithOwnership())
                            : DescribePartnerEventSourceOutcome(std::move(result.GetError()));
}

DescribeReplayOutcome CloudWatchEventsClient::DescribeReplay(const DescribeReplayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplayOutcome(result.GetResultWithOwnership()) : DescribeReplayOutcome(std::move(result.GetError()));
}

DescribeRuleOutcome CloudWatchEventsClient::DescribeRule(const DescribeRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRuleOutcome(result.GetResultWithOwnership()) : DescribeRuleOutcome(std::move(result.GetError()));
}

DisableRuleOutcome CloudWatchEventsClient::DisableRule(const DisableRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableRuleOutcome(result.GetResultWithOwnership()) : DisableRuleOutcome(std::move(result.GetError()));
}

EnableRuleOutcome CloudWatchEventsClient::EnableRule(const EnableRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableRuleOutcome(result.GetResultWithOwnership()) : EnableRuleOutcome(std::move(result.GetError()));
}

ListApiDestinationsOutcome CloudWatchEventsClient::ListApiDestinations(const ListApiDestinationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApiDestinationsOutcome(result.GetResultWithOwnership())
                            : ListApiDestinationsOutcome(std::move(result.GetError()));
}

ListArchivesOutcome CloudWatchEventsClient::ListArchives(const ListArchivesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListArchivesOutcome(result.GetResultWithOwnership()) : ListArchivesOutcome(std::move(result.GetError()));
}

ListConnectionsOutcome CloudWatchEventsClient::ListConnections(const ListConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConnectionsOutcome(result.GetResultWithOwnership())
                            : ListConnectionsOutcome(std::move(result.GetError()));
}

ListEventBusesOutcome CloudWatchEventsClient::ListEventBuses(const ListEventBusesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEventBusesOutcome(result.GetResultWithOwnership()) : ListEventBusesOutcome(std::move(result.GetError()));
}

ListEventSourcesOutcome CloudWatchEventsClient::ListEventSources(const ListEventSourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEventSourcesOutcome(result.GetResultWithOwnership())
                            : ListEventSourcesOutcome(std::move(result.GetError()));
}

ListPartnerEventSourceAccountsOutcome CloudWatchEventsClient::ListPartnerEventSourceAccounts(
    const ListPartnerEventSourceAccountsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPartnerEventSourceAccountsOutcome(result.GetResultWithOwnership())
                            : ListPartnerEventSourceAccountsOutcome(std::move(result.GetError()));
}

ListPartnerEventSourcesOutcome CloudWatchEventsClient::ListPartnerEventSources(const ListPartnerEventSourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPartnerEventSourcesOutcome(result.GetResultWithOwnership())
                            : ListPartnerEventSourcesOutcome(std::move(result.GetError()));
}

ListReplaysOutcome CloudWatchEventsClient::ListReplays(const ListReplaysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReplaysOutcome(result.GetResultWithOwnership()) : ListReplaysOutcome(std::move(result.GetError()));
}

ListRuleNamesByTargetOutcome CloudWatchEventsClient::ListRuleNamesByTarget(const ListRuleNamesByTargetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRuleNamesByTargetOutcome(result.GetResultWithOwnership())
                            : ListRuleNamesByTargetOutcome(std::move(result.GetError()));
}

ListRulesOutcome CloudWatchEventsClient::ListRules(const ListRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRulesOutcome(result.GetResultWithOwnership()) : ListRulesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome CloudWatchEventsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTargetsByRuleOutcome CloudWatchEventsClient::ListTargetsByRule(const ListTargetsByRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTargetsByRuleOutcome(result.GetResultWithOwnership())
                            : ListTargetsByRuleOutcome(std::move(result.GetError()));
}

PutEventsOutcome CloudWatchEventsClient::PutEvents(const PutEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutEventsOutcome(result.GetResultWithOwnership()) : PutEventsOutcome(std::move(result.GetError()));
}

PutPartnerEventsOutcome CloudWatchEventsClient::PutPartnerEvents(const PutPartnerEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutPartnerEventsOutcome(result.GetResultWithOwnership())
                            : PutPartnerEventsOutcome(std::move(result.GetError()));
}

PutPermissionOutcome CloudWatchEventsClient::PutPermission(const PutPermissionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutPermissionOutcome(result.GetResultWithOwnership()) : PutPermissionOutcome(std::move(result.GetError()));
}

PutRuleOutcome CloudWatchEventsClient::PutRule(const PutRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRuleOutcome(result.GetResultWithOwnership()) : PutRuleOutcome(std::move(result.GetError()));
}

PutTargetsOutcome CloudWatchEventsClient::PutTargets(const PutTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutTargetsOutcome(result.GetResultWithOwnership()) : PutTargetsOutcome(std::move(result.GetError()));
}

RemovePermissionOutcome CloudWatchEventsClient::RemovePermission(const RemovePermissionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemovePermissionOutcome(result.GetResultWithOwnership())
                            : RemovePermissionOutcome(std::move(result.GetError()));
}

RemoveTargetsOutcome CloudWatchEventsClient::RemoveTargets(const RemoveTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTargetsOutcome(result.GetResultWithOwnership()) : RemoveTargetsOutcome(std::move(result.GetError()));
}

StartReplayOutcome CloudWatchEventsClient::StartReplay(const StartReplayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReplayOutcome(result.GetResultWithOwnership()) : StartReplayOutcome(std::move(result.GetError()));
}

TagResourceOutcome CloudWatchEventsClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TestEventPatternOutcome CloudWatchEventsClient::TestEventPattern(const TestEventPatternRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestEventPatternOutcome(result.GetResultWithOwnership())
                            : TestEventPatternOutcome(std::move(result.GetError()));
}

UntagResourceOutcome CloudWatchEventsClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateApiDestinationOutcome CloudWatchEventsClient::UpdateApiDestination(const UpdateApiDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateApiDestinationOutcome(result.GetResultWithOwnership())
                            : UpdateApiDestinationOutcome(std::move(result.GetError()));
}

UpdateArchiveOutcome CloudWatchEventsClient::UpdateArchive(const UpdateArchiveRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateArchiveOutcome(result.GetResultWithOwnership()) : UpdateArchiveOutcome(std::move(result.GetError()));
}

UpdateConnectionOutcome CloudWatchEventsClient::UpdateConnection(const UpdateConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateConnectionOutcome(result.GetResultWithOwnership())
                            : UpdateConnectionOutcome(std::move(result.GetError()));
}
