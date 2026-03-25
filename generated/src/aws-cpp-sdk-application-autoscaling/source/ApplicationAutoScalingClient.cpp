/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/ApplicationAutoScalingClient.h>
#include <aws/application-autoscaling/ApplicationAutoScalingEndpointProvider.h>
#include <aws/application-autoscaling/ApplicationAutoScalingErrorMarshaller.h>
#include <aws/application-autoscaling/model/DeleteScalingPolicyRequest.h>
#include <aws/application-autoscaling/model/DeleteScheduledActionRequest.h>
#include <aws/application-autoscaling/model/DeregisterScalableTargetRequest.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsRequest.h>
#include <aws/application-autoscaling/model/DescribeScalingActivitiesRequest.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesRequest.h>
#include <aws/application-autoscaling/model/DescribeScheduledActionsRequest.h>
#include <aws/application-autoscaling/model/GetPredictiveScalingForecastRequest.h>
#include <aws/application-autoscaling/model/ListTagsForResourceRequest.h>
#include <aws/application-autoscaling/model/PutScalingPolicyRequest.h>
#include <aws/application-autoscaling/model/PutScheduledActionRequest.h>
#include <aws/application-autoscaling/model/RegisterScalableTargetRequest.h>
#include <aws/application-autoscaling/model/TagResourceRequest.h>
#include <aws/application-autoscaling/model/UntagResourceRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ApplicationAutoScaling;
using namespace Aws::ApplicationAutoScaling::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ApplicationAutoScaling {
const char SERVICE_NAME[] = "application-autoscaling";
const char ALLOCATION_TAG[] = "ApplicationAutoScalingClient";
}  // namespace ApplicationAutoScaling
}  // namespace Aws
const char* ApplicationAutoScalingClient::GetServiceName() { return SERVICE_NAME; }
const char* ApplicationAutoScalingClient::GetAllocationTag() { return ALLOCATION_TAG; }

ApplicationAutoScalingClient::ApplicationAutoScalingClient(
    const ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration& clientConfiguration,
    std::shared_ptr<ApplicationAutoScalingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationAutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationAutoScalingClient::ApplicationAutoScalingClient(
    const AWSCredentials& credentials, std::shared_ptr<ApplicationAutoScalingEndpointProviderBase> endpointProvider,
    const ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationAutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationAutoScalingClient::ApplicationAutoScalingClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<ApplicationAutoScalingEndpointProviderBase> endpointProvider,
    const ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationAutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ApplicationAutoScalingClient::ApplicationAutoScalingClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationAutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationAutoScalingClient::ApplicationAutoScalingClient(const AWSCredentials& credentials,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationAutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationAutoScalingClient::ApplicationAutoScalingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationAutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ApplicationAutoScalingClient::~ApplicationAutoScalingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ApplicationAutoScalingEndpointProviderBase>& ApplicationAutoScalingClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void ApplicationAutoScalingClient::init(const ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration& config) {
  AWSClient::SetServiceClientName("Application Auto Scaling");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "application-autoscaling");
}

void ApplicationAutoScalingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ApplicationAutoScalingClient::InvokeOperationOutcome ApplicationAutoScalingClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

DeleteScalingPolicyOutcome ApplicationAutoScalingClient::DeleteScalingPolicy(const DeleteScalingPolicyRequest& request) const {
  return DeleteScalingPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteScheduledActionOutcome ApplicationAutoScalingClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const {
  return DeleteScheduledActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterScalableTargetOutcome ApplicationAutoScalingClient::DeregisterScalableTarget(
    const DeregisterScalableTargetRequest& request) const {
  return DeregisterScalableTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScalableTargetsOutcome ApplicationAutoScalingClient::DescribeScalableTargets(const DescribeScalableTargetsRequest& request) const {
  return DescribeScalableTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScalingActivitiesOutcome ApplicationAutoScalingClient::DescribeScalingActivities(
    const DescribeScalingActivitiesRequest& request) const {
  return DescribeScalingActivitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScalingPoliciesOutcome ApplicationAutoScalingClient::DescribeScalingPolicies(const DescribeScalingPoliciesRequest& request) const {
  return DescribeScalingPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScheduledActionsOutcome ApplicationAutoScalingClient::DescribeScheduledActions(
    const DescribeScheduledActionsRequest& request) const {
  return DescribeScheduledActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPredictiveScalingForecastOutcome ApplicationAutoScalingClient::GetPredictiveScalingForecast(
    const GetPredictiveScalingForecastRequest& request) const {
  return GetPredictiveScalingForecastOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ApplicationAutoScalingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutScalingPolicyOutcome ApplicationAutoScalingClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const {
  return PutScalingPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutScheduledActionOutcome ApplicationAutoScalingClient::PutScheduledAction(const PutScheduledActionRequest& request) const {
  return PutScheduledActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterScalableTargetOutcome ApplicationAutoScalingClient::RegisterScalableTarget(const RegisterScalableTargetRequest& request) const {
  return RegisterScalableTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ApplicationAutoScalingClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ApplicationAutoScalingClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
