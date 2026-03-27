/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/AutoScalingClient.h>
#include <aws/autoscaling/AutoScalingEndpointProvider.h>
#include <aws/autoscaling/AutoScalingErrorMarshaller.h>
#include <aws/autoscaling/model/AttachInstancesRequest.h>
#include <aws/autoscaling/model/AttachLoadBalancerTargetGroupsRequest.h>
#include <aws/autoscaling/model/AttachLoadBalancersRequest.h>
#include <aws/autoscaling/model/AttachTrafficSourcesRequest.h>
#include <aws/autoscaling/model/BatchDeleteScheduledActionRequest.h>
#include <aws/autoscaling/model/BatchPutScheduledUpdateGroupActionRequest.h>
#include <aws/autoscaling/model/CancelInstanceRefreshRequest.h>
#include <aws/autoscaling/model/CompleteLifecycleActionRequest.h>
#include <aws/autoscaling/model/CreateAutoScalingGroupRequest.h>
#include <aws/autoscaling/model/CreateLaunchConfigurationRequest.h>
#include <aws/autoscaling/model/CreateOrUpdateTagsRequest.h>
#include <aws/autoscaling/model/DeleteAutoScalingGroupRequest.h>
#include <aws/autoscaling/model/DeleteLaunchConfigurationRequest.h>
#include <aws/autoscaling/model/DeleteLifecycleHookRequest.h>
#include <aws/autoscaling/model/DeleteNotificationConfigurationRequest.h>
#include <aws/autoscaling/model/DeletePolicyRequest.h>
#include <aws/autoscaling/model/DeleteScheduledActionRequest.h>
#include <aws/autoscaling/model/DeleteTagsRequest.h>
#include <aws/autoscaling/model/DeleteWarmPoolRequest.h>
#include <aws/autoscaling/model/DescribeAccountLimitsRequest.h>
#include <aws/autoscaling/model/DescribeAdjustmentTypesRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingInstancesRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingNotificationTypesRequest.h>
#include <aws/autoscaling/model/DescribeInstanceRefreshesRequest.h>
#include <aws/autoscaling/model/DescribeLaunchConfigurationsRequest.h>
#include <aws/autoscaling/model/DescribeLifecycleHookTypesRequest.h>
#include <aws/autoscaling/model/DescribeLifecycleHooksRequest.h>
#include <aws/autoscaling/model/DescribeLoadBalancerTargetGroupsRequest.h>
#include <aws/autoscaling/model/DescribeLoadBalancersRequest.h>
#include <aws/autoscaling/model/DescribeMetricCollectionTypesRequest.h>
#include <aws/autoscaling/model/DescribeNotificationConfigurationsRequest.h>
#include <aws/autoscaling/model/DescribePoliciesRequest.h>
#include <aws/autoscaling/model/DescribeScalingActivitiesRequest.h>
#include <aws/autoscaling/model/DescribeScalingProcessTypesRequest.h>
#include <aws/autoscaling/model/DescribeScheduledActionsRequest.h>
#include <aws/autoscaling/model/DescribeTagsRequest.h>
#include <aws/autoscaling/model/DescribeTerminationPolicyTypesRequest.h>
#include <aws/autoscaling/model/DescribeTrafficSourcesRequest.h>
#include <aws/autoscaling/model/DescribeWarmPoolRequest.h>
#include <aws/autoscaling/model/DetachInstancesRequest.h>
#include <aws/autoscaling/model/DetachLoadBalancerTargetGroupsRequest.h>
#include <aws/autoscaling/model/DetachLoadBalancersRequest.h>
#include <aws/autoscaling/model/DetachTrafficSourcesRequest.h>
#include <aws/autoscaling/model/DisableMetricsCollectionRequest.h>
#include <aws/autoscaling/model/EnableMetricsCollectionRequest.h>
#include <aws/autoscaling/model/EnterStandbyRequest.h>
#include <aws/autoscaling/model/ExecutePolicyRequest.h>
#include <aws/autoscaling/model/ExitStandbyRequest.h>
#include <aws/autoscaling/model/GetPredictiveScalingForecastRequest.h>
#include <aws/autoscaling/model/LaunchInstancesRequest.h>
#include <aws/autoscaling/model/PutLifecycleHookRequest.h>
#include <aws/autoscaling/model/PutNotificationConfigurationRequest.h>
#include <aws/autoscaling/model/PutScalingPolicyRequest.h>
#include <aws/autoscaling/model/PutScheduledUpdateGroupActionRequest.h>
#include <aws/autoscaling/model/PutWarmPoolRequest.h>
#include <aws/autoscaling/model/RecordLifecycleActionHeartbeatRequest.h>
#include <aws/autoscaling/model/ResumeProcessesRequest.h>
#include <aws/autoscaling/model/RollbackInstanceRefreshRequest.h>
#include <aws/autoscaling/model/SetDesiredCapacityRequest.h>
#include <aws/autoscaling/model/SetInstanceHealthRequest.h>
#include <aws/autoscaling/model/SetInstanceProtectionRequest.h>
#include <aws/autoscaling/model/StartInstanceRefreshRequest.h>
#include <aws/autoscaling/model/SuspendProcessesRequest.h>
#include <aws/autoscaling/model/TerminateInstanceInAutoScalingGroupRequest.h>
#include <aws/autoscaling/model/UpdateAutoScalingGroupRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AutoScaling;
using namespace Aws::AutoScaling::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AutoScaling {
const char SERVICE_NAME[] = "autoscaling";
const char ALLOCATION_TAG[] = "AutoScalingClient";
}  // namespace AutoScaling
}  // namespace Aws
const char* AutoScalingClient::GetServiceName() { return SERVICE_NAME; }
const char* AutoScalingClient::GetAllocationTag() { return ALLOCATION_TAG; }

AutoScalingClient::AutoScalingClient(const AutoScaling::AutoScalingClientConfiguration& clientConfiguration,
                                     std::shared_ptr<AutoScalingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AutoScalingClient::AutoScalingClient(const AWSCredentials& credentials, std::shared_ptr<AutoScalingEndpointProviderBase> endpointProvider,
                                     const AutoScaling::AutoScalingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AutoScalingClient::AutoScalingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<AutoScalingEndpointProviderBase> endpointProvider,
                                     const AutoScaling::AutoScalingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AutoScalingClient::AutoScalingClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AutoScalingClient::AutoScalingClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AutoScalingClient::AutoScalingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AutoScalingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AutoScalingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AutoScalingClient::~AutoScalingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AutoScalingEndpointProviderBase>& AutoScalingClient::accessEndpointProvider() { return m_endpointProvider; }

void AutoScalingClient::init(const AutoScaling::AutoScalingClientConfiguration& config) {
  AWSClient::SetServiceClientName("Auto Scaling");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "autoscaling");
}

void AutoScalingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String AutoScalingClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert,
                                                            const char* region) const {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AutoScalingClient::InvokeOperationOutcome AutoScalingClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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
AttachInstancesOutcome AutoScalingClient::AttachInstances(const AttachInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachInstancesOutcome(result.GetResultWithOwnership())
                            : AttachInstancesOutcome(std::move(result.GetError()));
}

AttachLoadBalancerTargetGroupsOutcome AutoScalingClient::AttachLoadBalancerTargetGroups(
    const AttachLoadBalancerTargetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachLoadBalancerTargetGroupsOutcome(result.GetResultWithOwnership())
                            : AttachLoadBalancerTargetGroupsOutcome(std::move(result.GetError()));
}

AttachLoadBalancersOutcome AutoScalingClient::AttachLoadBalancers(const AttachLoadBalancersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachLoadBalancersOutcome(result.GetResultWithOwnership())
                            : AttachLoadBalancersOutcome(std::move(result.GetError()));
}

AttachTrafficSourcesOutcome AutoScalingClient::AttachTrafficSources(const AttachTrafficSourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachTrafficSourcesOutcome(result.GetResultWithOwnership())
                            : AttachTrafficSourcesOutcome(std::move(result.GetError()));
}

BatchDeleteScheduledActionOutcome AutoScalingClient::BatchDeleteScheduledAction(const BatchDeleteScheduledActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteScheduledActionOutcome(result.GetResultWithOwnership())
                            : BatchDeleteScheduledActionOutcome(std::move(result.GetError()));
}

BatchPutScheduledUpdateGroupActionOutcome AutoScalingClient::BatchPutScheduledUpdateGroupAction(
    const BatchPutScheduledUpdateGroupActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchPutScheduledUpdateGroupActionOutcome(result.GetResultWithOwnership())
                            : BatchPutScheduledUpdateGroupActionOutcome(std::move(result.GetError()));
}

CancelInstanceRefreshOutcome AutoScalingClient::CancelInstanceRefresh(const CancelInstanceRefreshRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelInstanceRefreshOutcome(result.GetResultWithOwnership())
                            : CancelInstanceRefreshOutcome(std::move(result.GetError()));
}

CompleteLifecycleActionOutcome AutoScalingClient::CompleteLifecycleAction(const CompleteLifecycleActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CompleteLifecycleActionOutcome(result.GetResultWithOwnership())
                            : CompleteLifecycleActionOutcome(std::move(result.GetError()));
}

CreateAutoScalingGroupOutcome AutoScalingClient::CreateAutoScalingGroup(const CreateAutoScalingGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAutoScalingGroupOutcome(result.GetResultWithOwnership())
                            : CreateAutoScalingGroupOutcome(std::move(result.GetError()));
}

CreateLaunchConfigurationOutcome AutoScalingClient::CreateLaunchConfiguration(const CreateLaunchConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLaunchConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateLaunchConfigurationOutcome(std::move(result.GetError()));
}

CreateOrUpdateTagsOutcome AutoScalingClient::CreateOrUpdateTags(const CreateOrUpdateTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOrUpdateTagsOutcome(result.GetResultWithOwnership())
                            : CreateOrUpdateTagsOutcome(std::move(result.GetError()));
}

DeleteAutoScalingGroupOutcome AutoScalingClient::DeleteAutoScalingGroup(const DeleteAutoScalingGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAutoScalingGroupOutcome(result.GetResultWithOwnership())
                            : DeleteAutoScalingGroupOutcome(std::move(result.GetError()));
}

DeleteLaunchConfigurationOutcome AutoScalingClient::DeleteLaunchConfiguration(const DeleteLaunchConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLaunchConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteLaunchConfigurationOutcome(std::move(result.GetError()));
}

DeleteLifecycleHookOutcome AutoScalingClient::DeleteLifecycleHook(const DeleteLifecycleHookRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLifecycleHookOutcome(result.GetResultWithOwnership())
                            : DeleteLifecycleHookOutcome(std::move(result.GetError()));
}

DeleteNotificationConfigurationOutcome AutoScalingClient::DeleteNotificationConfiguration(
    const DeleteNotificationConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteNotificationConfigurationOutcome(std::move(result.GetError()));
}

DeletePolicyOutcome AutoScalingClient::DeletePolicy(const DeletePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePolicyOutcome(result.GetResultWithOwnership()) : DeletePolicyOutcome(std::move(result.GetError()));
}

DeleteScheduledActionOutcome AutoScalingClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteScheduledActionOutcome(result.GetResultWithOwnership())
                            : DeleteScheduledActionOutcome(std::move(result.GetError()));
}

DeleteTagsOutcome AutoScalingClient::DeleteTags(const DeleteTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTagsOutcome(result.GetResultWithOwnership()) : DeleteTagsOutcome(std::move(result.GetError()));
}

DeleteWarmPoolOutcome AutoScalingClient::DeleteWarmPool(const DeleteWarmPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWarmPoolOutcome(result.GetResultWithOwnership()) : DeleteWarmPoolOutcome(std::move(result.GetError()));
}

DescribeAccountLimitsOutcome AutoScalingClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountLimitsOutcome(result.GetResultWithOwnership())
                            : DescribeAccountLimitsOutcome(std::move(result.GetError()));
}

DescribeAdjustmentTypesOutcome AutoScalingClient::DescribeAdjustmentTypes(const DescribeAdjustmentTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAdjustmentTypesOutcome(result.GetResultWithOwnership())
                            : DescribeAdjustmentTypesOutcome(std::move(result.GetError()));
}

DescribeAutoScalingGroupsOutcome AutoScalingClient::DescribeAutoScalingGroups(const DescribeAutoScalingGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAutoScalingGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeAutoScalingGroupsOutcome(std::move(result.GetError()));
}

DescribeAutoScalingInstancesOutcome AutoScalingClient::DescribeAutoScalingInstances(
    const DescribeAutoScalingInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAutoScalingInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeAutoScalingInstancesOutcome(std::move(result.GetError()));
}

DescribeAutoScalingNotificationTypesOutcome AutoScalingClient::DescribeAutoScalingNotificationTypes(
    const DescribeAutoScalingNotificationTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAutoScalingNotificationTypesOutcome(result.GetResultWithOwnership())
                            : DescribeAutoScalingNotificationTypesOutcome(std::move(result.GetError()));
}

DescribeInstanceRefreshesOutcome AutoScalingClient::DescribeInstanceRefreshes(const DescribeInstanceRefreshesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceRefreshesOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceRefreshesOutcome(std::move(result.GetError()));
}

DescribeLaunchConfigurationsOutcome AutoScalingClient::DescribeLaunchConfigurations(
    const DescribeLaunchConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLaunchConfigurationsOutcome(result.GetResultWithOwnership())
                            : DescribeLaunchConfigurationsOutcome(std::move(result.GetError()));
}

DescribeLifecycleHookTypesOutcome AutoScalingClient::DescribeLifecycleHookTypes(const DescribeLifecycleHookTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLifecycleHookTypesOutcome(result.GetResultWithOwnership())
                            : DescribeLifecycleHookTypesOutcome(std::move(result.GetError()));
}

DescribeLifecycleHooksOutcome AutoScalingClient::DescribeLifecycleHooks(const DescribeLifecycleHooksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLifecycleHooksOutcome(result.GetResultWithOwnership())
                            : DescribeLifecycleHooksOutcome(std::move(result.GetError()));
}

DescribeLoadBalancerTargetGroupsOutcome AutoScalingClient::DescribeLoadBalancerTargetGroups(
    const DescribeLoadBalancerTargetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLoadBalancerTargetGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeLoadBalancerTargetGroupsOutcome(std::move(result.GetError()));
}

DescribeLoadBalancersOutcome AutoScalingClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLoadBalancersOutcome(result.GetResultWithOwnership())
                            : DescribeLoadBalancersOutcome(std::move(result.GetError()));
}

DescribeMetricCollectionTypesOutcome AutoScalingClient::DescribeMetricCollectionTypes(
    const DescribeMetricCollectionTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMetricCollectionTypesOutcome(result.GetResultWithOwnership())
                            : DescribeMetricCollectionTypesOutcome(std::move(result.GetError()));
}

DescribeNotificationConfigurationsOutcome AutoScalingClient::DescribeNotificationConfigurations(
    const DescribeNotificationConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNotificationConfigurationsOutcome(result.GetResultWithOwnership())
                            : DescribeNotificationConfigurationsOutcome(std::move(result.GetError()));
}

DescribePoliciesOutcome AutoScalingClient::DescribePolicies(const DescribePoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePoliciesOutcome(result.GetResultWithOwnership())
                            : DescribePoliciesOutcome(std::move(result.GetError()));
}

DescribeScalingActivitiesOutcome AutoScalingClient::DescribeScalingActivities(const DescribeScalingActivitiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeScalingActivitiesOutcome(result.GetResultWithOwnership())
                            : DescribeScalingActivitiesOutcome(std::move(result.GetError()));
}

DescribeScalingProcessTypesOutcome AutoScalingClient::DescribeScalingProcessTypes(const DescribeScalingProcessTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeScalingProcessTypesOutcome(result.GetResultWithOwnership())
                            : DescribeScalingProcessTypesOutcome(std::move(result.GetError()));
}

DescribeScheduledActionsOutcome AutoScalingClient::DescribeScheduledActions(const DescribeScheduledActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeScheduledActionsOutcome(result.GetResultWithOwnership())
                            : DescribeScheduledActionsOutcome(std::move(result.GetError()));
}

DescribeTagsOutcome AutoScalingClient::DescribeTags(const DescribeTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTagsOutcome(result.GetResultWithOwnership()) : DescribeTagsOutcome(std::move(result.GetError()));
}

DescribeTerminationPolicyTypesOutcome AutoScalingClient::DescribeTerminationPolicyTypes(
    const DescribeTerminationPolicyTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTerminationPolicyTypesOutcome(result.GetResultWithOwnership())
                            : DescribeTerminationPolicyTypesOutcome(std::move(result.GetError()));
}

DescribeTrafficSourcesOutcome AutoScalingClient::DescribeTrafficSources(const DescribeTrafficSourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrafficSourcesOutcome(result.GetResultWithOwnership())
                            : DescribeTrafficSourcesOutcome(std::move(result.GetError()));
}

DescribeWarmPoolOutcome AutoScalingClient::DescribeWarmPool(const DescribeWarmPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWarmPoolOutcome(result.GetResultWithOwnership())
                            : DescribeWarmPoolOutcome(std::move(result.GetError()));
}

DetachInstancesOutcome AutoScalingClient::DetachInstances(const DetachInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachInstancesOutcome(result.GetResultWithOwnership())
                            : DetachInstancesOutcome(std::move(result.GetError()));
}

DetachLoadBalancerTargetGroupsOutcome AutoScalingClient::DetachLoadBalancerTargetGroups(
    const DetachLoadBalancerTargetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachLoadBalancerTargetGroupsOutcome(result.GetResultWithOwnership())
                            : DetachLoadBalancerTargetGroupsOutcome(std::move(result.GetError()));
}

DetachLoadBalancersOutcome AutoScalingClient::DetachLoadBalancers(const DetachLoadBalancersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachLoadBalancersOutcome(result.GetResultWithOwnership())
                            : DetachLoadBalancersOutcome(std::move(result.GetError()));
}

DetachTrafficSourcesOutcome AutoScalingClient::DetachTrafficSources(const DetachTrafficSourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachTrafficSourcesOutcome(result.GetResultWithOwnership())
                            : DetachTrafficSourcesOutcome(std::move(result.GetError()));
}

DisableMetricsCollectionOutcome AutoScalingClient::DisableMetricsCollection(const DisableMetricsCollectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableMetricsCollectionOutcome(result.GetResultWithOwnership())
                            : DisableMetricsCollectionOutcome(std::move(result.GetError()));
}

EnableMetricsCollectionOutcome AutoScalingClient::EnableMetricsCollection(const EnableMetricsCollectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableMetricsCollectionOutcome(result.GetResultWithOwnership())
                            : EnableMetricsCollectionOutcome(std::move(result.GetError()));
}

EnterStandbyOutcome AutoScalingClient::EnterStandby(const EnterStandbyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnterStandbyOutcome(result.GetResultWithOwnership()) : EnterStandbyOutcome(std::move(result.GetError()));
}

ExecutePolicyOutcome AutoScalingClient::ExecutePolicy(const ExecutePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExecutePolicyOutcome(result.GetResultWithOwnership()) : ExecutePolicyOutcome(std::move(result.GetError()));
}

ExitStandbyOutcome AutoScalingClient::ExitStandby(const ExitStandbyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExitStandbyOutcome(result.GetResultWithOwnership()) : ExitStandbyOutcome(std::move(result.GetError()));
}

GetPredictiveScalingForecastOutcome AutoScalingClient::GetPredictiveScalingForecast(
    const GetPredictiveScalingForecastRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPredictiveScalingForecastOutcome(result.GetResultWithOwnership())
                            : GetPredictiveScalingForecastOutcome(std::move(result.GetError()));
}

LaunchInstancesOutcome AutoScalingClient::LaunchInstances(const LaunchInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? LaunchInstancesOutcome(result.GetResultWithOwnership())
                            : LaunchInstancesOutcome(std::move(result.GetError()));
}

PutLifecycleHookOutcome AutoScalingClient::PutLifecycleHook(const PutLifecycleHookRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutLifecycleHookOutcome(result.GetResultWithOwnership())
                            : PutLifecycleHookOutcome(std::move(result.GetError()));
}

PutNotificationConfigurationOutcome AutoScalingClient::PutNotificationConfiguration(
    const PutNotificationConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : PutNotificationConfigurationOutcome(std::move(result.GetError()));
}

PutScalingPolicyOutcome AutoScalingClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutScalingPolicyOutcome(result.GetResultWithOwnership())
                            : PutScalingPolicyOutcome(std::move(result.GetError()));
}

PutScheduledUpdateGroupActionOutcome AutoScalingClient::PutScheduledUpdateGroupAction(
    const PutScheduledUpdateGroupActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutScheduledUpdateGroupActionOutcome(result.GetResultWithOwnership())
                            : PutScheduledUpdateGroupActionOutcome(std::move(result.GetError()));
}

PutWarmPoolOutcome AutoScalingClient::PutWarmPool(const PutWarmPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutWarmPoolOutcome(result.GetResultWithOwnership()) : PutWarmPoolOutcome(std::move(result.GetError()));
}

RecordLifecycleActionHeartbeatOutcome AutoScalingClient::RecordLifecycleActionHeartbeat(
    const RecordLifecycleActionHeartbeatRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RecordLifecycleActionHeartbeatOutcome(result.GetResultWithOwnership())
                            : RecordLifecycleActionHeartbeatOutcome(std::move(result.GetError()));
}

ResumeProcessesOutcome AutoScalingClient::ResumeProcesses(const ResumeProcessesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResumeProcessesOutcome(result.GetResultWithOwnership())
                            : ResumeProcessesOutcome(std::move(result.GetError()));
}

RollbackInstanceRefreshOutcome AutoScalingClient::RollbackInstanceRefresh(const RollbackInstanceRefreshRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RollbackInstanceRefreshOutcome(result.GetResultWithOwnership())
                            : RollbackInstanceRefreshOutcome(std::move(result.GetError()));
}

SetDesiredCapacityOutcome AutoScalingClient::SetDesiredCapacity(const SetDesiredCapacityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetDesiredCapacityOutcome(result.GetResultWithOwnership())
                            : SetDesiredCapacityOutcome(std::move(result.GetError()));
}

SetInstanceHealthOutcome AutoScalingClient::SetInstanceHealth(const SetInstanceHealthRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetInstanceHealthOutcome(result.GetResultWithOwnership())
                            : SetInstanceHealthOutcome(std::move(result.GetError()));
}

SetInstanceProtectionOutcome AutoScalingClient::SetInstanceProtection(const SetInstanceProtectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetInstanceProtectionOutcome(result.GetResultWithOwnership())
                            : SetInstanceProtectionOutcome(std::move(result.GetError()));
}

StartInstanceRefreshOutcome AutoScalingClient::StartInstanceRefresh(const StartInstanceRefreshRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartInstanceRefreshOutcome(result.GetResultWithOwnership())
                            : StartInstanceRefreshOutcome(std::move(result.GetError()));
}

SuspendProcessesOutcome AutoScalingClient::SuspendProcesses(const SuspendProcessesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SuspendProcessesOutcome(result.GetResultWithOwnership())
                            : SuspendProcessesOutcome(std::move(result.GetError()));
}

TerminateInstanceInAutoScalingGroupOutcome AutoScalingClient::TerminateInstanceInAutoScalingGroup(
    const TerminateInstanceInAutoScalingGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateInstanceInAutoScalingGroupOutcome(result.GetResultWithOwnership())
                            : TerminateInstanceInAutoScalingGroupOutcome(std::move(result.GetError()));
}

UpdateAutoScalingGroupOutcome AutoScalingClient::UpdateAutoScalingGroup(const UpdateAutoScalingGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAutoScalingGroupOutcome(result.GetResultWithOwnership())
                            : UpdateAutoScalingGroupOutcome(std::move(result.GetError()));
}
