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
#include <aws/eventbridgev2/EventBridgeV2Client.h>
#include <aws/eventbridgev2/EventBridgeV2EndpointProvider.h>
#include <aws/eventbridgev2/EventBridgeV2ErrorMarshaller.h>
#include <aws/eventbridgev2/model/CreateEventBusRequest.h>
#include <aws/eventbridgev2/model/CreateEventSourceRequest.h>
#include <aws/eventbridgev2/model/CreateSubscriberRequest.h>
#include <aws/eventbridgev2/model/DeleteEventBusRequest.h>
#include <aws/eventbridgev2/model/DeleteEventSourceRequest.h>
#include <aws/eventbridgev2/model/DeleteResourcePolicyRequest.h>
#include <aws/eventbridgev2/model/DeleteSubscriberRequest.h>
#include <aws/eventbridgev2/model/DescribeEventBusRequest.h>
#include <aws/eventbridgev2/model/DescribeEventSourceRequest.h>
#include <aws/eventbridgev2/model/DescribeSubscriberRequest.h>
#include <aws/eventbridgev2/model/GetResourcePolicyRequest.h>
#include <aws/eventbridgev2/model/ListEventBusesRequest.h>
#include <aws/eventbridgev2/model/ListEventSourcesRequest.h>
#include <aws/eventbridgev2/model/ListResourcePoliciesRequest.h>
#include <aws/eventbridgev2/model/ListSubscribersRequest.h>
#include <aws/eventbridgev2/model/ListTagsForResourceRequest.h>
#include <aws/eventbridgev2/model/PutEventsRequest.h>
#include <aws/eventbridgev2/model/PutRawEventsRequest.h>
#include <aws/eventbridgev2/model/PutResourcePolicyRequest.h>
#include <aws/eventbridgev2/model/RevokeResourceRequest.h>
#include <aws/eventbridgev2/model/TagResourceRequest.h>
#include <aws/eventbridgev2/model/UntagResourceRequest.h>
#include <aws/eventbridgev2/model/UpdateEventBusRequest.h>
#include <aws/eventbridgev2/model/UpdateEventSourceRequest.h>
#include <aws/eventbridgev2/model/UpdateSubscriberRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EventBridgeV2;
using namespace Aws::EventBridgeV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EventBridgeV2 {
const char SERVICE_NAME[] = "events";
const char ALLOCATION_TAG[] = "EventBridgeV2Client";
}  // namespace EventBridgeV2
}  // namespace Aws
const char* EventBridgeV2Client::GetServiceName() { return SERVICE_NAME; }
const char* EventBridgeV2Client::GetAllocationTag() { return ALLOCATION_TAG; }

EventBridgeV2Client::EventBridgeV2Client(const EventBridgeV2::EventBridgeV2ClientConfiguration& clientConfiguration,
                                         std::shared_ptr<EventBridgeV2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EventBridgeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EventBridgeV2Client::EventBridgeV2Client(const AWSCredentials& credentials,
                                         std::shared_ptr<EventBridgeV2EndpointProviderBase> endpointProvider,
                                         const EventBridgeV2::EventBridgeV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EventBridgeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EventBridgeV2Client::EventBridgeV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<EventBridgeV2EndpointProviderBase> endpointProvider,
                                         const EventBridgeV2::EventBridgeV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EventBridgeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EventBridgeV2Client::EventBridgeV2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EventBridgeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EventBridgeV2Client::EventBridgeV2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EventBridgeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EventBridgeV2Client::EventBridgeV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EventBridgeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EventBridgeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EventBridgeV2Client::~EventBridgeV2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EventBridgeV2EndpointProviderBase>& EventBridgeV2Client::accessEndpointProvider() { return m_endpointProvider; }

void EventBridgeV2Client::init(const EventBridgeV2::EventBridgeV2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("EventBridgeV2");
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

void EventBridgeV2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
EventBridgeV2Client::InvokeOperationOutcome EventBridgeV2Client::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        endpointResolutionOutcome.GetResult().AddPathSegments("/service/AWSEventsV2/operation/");
        endpointResolutionOutcome.GetResult().AddPathSegment(operationName);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateEventBusOutcome EventBridgeV2Client::CreateEventBus(const CreateEventBusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventBusOutcome(result.GetResultWithOwnership()) : CreateEventBusOutcome(std::move(result.GetError()));
}

CreateEventSourceOutcome EventBridgeV2Client::CreateEventSource(const CreateEventSourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventSourceOutcome(result.GetResultWithOwnership())
                            : CreateEventSourceOutcome(std::move(result.GetError()));
}

CreateSubscriberOutcome EventBridgeV2Client::CreateSubscriber(const CreateSubscriberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSubscriberOutcome(result.GetResultWithOwnership())
                            : CreateSubscriberOutcome(std::move(result.GetError()));
}

DeleteEventBusOutcome EventBridgeV2Client::DeleteEventBus(const DeleteEventBusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventBusOutcome(result.GetResultWithOwnership()) : DeleteEventBusOutcome(std::move(result.GetError()));
}

DeleteEventSourceOutcome EventBridgeV2Client::DeleteEventSource(const DeleteEventSourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventSourceOutcome(result.GetResultWithOwnership())
                            : DeleteEventSourceOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome EventBridgeV2Client::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteSubscriberOutcome EventBridgeV2Client::DeleteSubscriber(const DeleteSubscriberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSubscriberOutcome(result.GetResultWithOwnership())
                            : DeleteSubscriberOutcome(std::move(result.GetError()));
}

DescribeEventBusOutcome EventBridgeV2Client::DescribeEventBus(const DescribeEventBusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventBusOutcome(result.GetResultWithOwnership())
                            : DescribeEventBusOutcome(std::move(result.GetError()));
}

DescribeEventSourceOutcome EventBridgeV2Client::DescribeEventSource(const DescribeEventSourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventSourceOutcome(result.GetResultWithOwnership())
                            : DescribeEventSourceOutcome(std::move(result.GetError()));
}

DescribeSubscriberOutcome EventBridgeV2Client::DescribeSubscriber(const DescribeSubscriberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSubscriberOutcome(result.GetResultWithOwnership())
                            : DescribeSubscriberOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome EventBridgeV2Client::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

ListEventBusesOutcome EventBridgeV2Client::ListEventBuses(const ListEventBusesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEventBusesOutcome(result.GetResultWithOwnership()) : ListEventBusesOutcome(std::move(result.GetError()));
}

ListEventSourcesOutcome EventBridgeV2Client::ListEventSources(const ListEventSourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEventSourcesOutcome(result.GetResultWithOwnership())
                            : ListEventSourcesOutcome(std::move(result.GetError()));
}

ListResourcePoliciesOutcome EventBridgeV2Client::ListResourcePolicies(const ListResourcePoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourcePoliciesOutcome(result.GetResultWithOwnership())
                            : ListResourcePoliciesOutcome(std::move(result.GetError()));
}

ListSubscribersOutcome EventBridgeV2Client::ListSubscribers(const ListSubscribersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSubscribersOutcome(result.GetResultWithOwnership())
                            : ListSubscribersOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome EventBridgeV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutEventsOutcome EventBridgeV2Client::PutEvents(const PutEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutEventsOutcome(result.GetResultWithOwnership()) : PutEventsOutcome(std::move(result.GetError()));
}

PutRawEventsOutcome EventBridgeV2Client::PutRawEvents(const PutRawEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRawEventsOutcome(result.GetResultWithOwnership()) : PutRawEventsOutcome(std::move(result.GetError()));
}

PutResourcePolicyOutcome EventBridgeV2Client::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

RevokeResourceOutcome EventBridgeV2Client::RevokeResource(const RevokeResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeResourceOutcome(result.GetResultWithOwnership()) : RevokeResourceOutcome(std::move(result.GetError()));
}

TagResourceOutcome EventBridgeV2Client::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome EventBridgeV2Client::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateEventBusOutcome EventBridgeV2Client::UpdateEventBus(const UpdateEventBusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEventBusOutcome(result.GetResultWithOwnership()) : UpdateEventBusOutcome(std::move(result.GetError()));
}

UpdateEventSourceOutcome EventBridgeV2Client::UpdateEventSource(const UpdateEventSourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEventSourceOutcome(result.GetResultWithOwnership())
                            : UpdateEventSourceOutcome(std::move(result.GetError()));
}

UpdateSubscriberOutcome EventBridgeV2Client::UpdateSubscriber(const UpdateSubscriberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSubscriberOutcome(result.GetResultWithOwnership())
                            : UpdateSubscriberOutcome(std::move(result.GetError()));
}
