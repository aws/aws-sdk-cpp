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
  return AttachInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachLoadBalancerTargetGroupsOutcome AutoScalingClient::AttachLoadBalancerTargetGroups(
    const AttachLoadBalancerTargetGroupsRequest& request) const {
  return AttachLoadBalancerTargetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachLoadBalancersOutcome AutoScalingClient::AttachLoadBalancers(const AttachLoadBalancersRequest& request) const {
  return AttachLoadBalancersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachTrafficSourcesOutcome AutoScalingClient::AttachTrafficSources(const AttachTrafficSourcesRequest& request) const {
  return AttachTrafficSourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteScheduledActionOutcome AutoScalingClient::BatchDeleteScheduledAction(const BatchDeleteScheduledActionRequest& request) const {
  return BatchDeleteScheduledActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchPutScheduledUpdateGroupActionOutcome AutoScalingClient::BatchPutScheduledUpdateGroupAction(
    const BatchPutScheduledUpdateGroupActionRequest& request) const {
  return BatchPutScheduledUpdateGroupActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelInstanceRefreshOutcome AutoScalingClient::CancelInstanceRefresh(const CancelInstanceRefreshRequest& request) const {
  return CancelInstanceRefreshOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CompleteLifecycleActionOutcome AutoScalingClient::CompleteLifecycleAction(const CompleteLifecycleActionRequest& request) const {
  return CompleteLifecycleActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAutoScalingGroupOutcome AutoScalingClient::CreateAutoScalingGroup(const CreateAutoScalingGroupRequest& request) const {
  return CreateAutoScalingGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLaunchConfigurationOutcome AutoScalingClient::CreateLaunchConfiguration(const CreateLaunchConfigurationRequest& request) const {
  return CreateLaunchConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOrUpdateTagsOutcome AutoScalingClient::CreateOrUpdateTags(const CreateOrUpdateTagsRequest& request) const {
  return CreateOrUpdateTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAutoScalingGroupOutcome AutoScalingClient::DeleteAutoScalingGroup(const DeleteAutoScalingGroupRequest& request) const {
  return DeleteAutoScalingGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLaunchConfigurationOutcome AutoScalingClient::DeleteLaunchConfiguration(const DeleteLaunchConfigurationRequest& request) const {
  return DeleteLaunchConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLifecycleHookOutcome AutoScalingClient::DeleteLifecycleHook(const DeleteLifecycleHookRequest& request) const {
  return DeleteLifecycleHookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNotificationConfigurationOutcome AutoScalingClient::DeleteNotificationConfiguration(
    const DeleteNotificationConfigurationRequest& request) const {
  return DeleteNotificationConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePolicyOutcome AutoScalingClient::DeletePolicy(const DeletePolicyRequest& request) const {
  return DeletePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteScheduledActionOutcome AutoScalingClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const {
  return DeleteScheduledActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTagsOutcome AutoScalingClient::DeleteTags(const DeleteTagsRequest& request) const {
  return DeleteTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWarmPoolOutcome AutoScalingClient::DeleteWarmPool(const DeleteWarmPoolRequest& request) const {
  return DeleteWarmPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountLimitsOutcome AutoScalingClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const {
  return DescribeAccountLimitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAdjustmentTypesOutcome AutoScalingClient::DescribeAdjustmentTypes(const DescribeAdjustmentTypesRequest& request) const {
  return DescribeAdjustmentTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAutoScalingGroupsOutcome AutoScalingClient::DescribeAutoScalingGroups(const DescribeAutoScalingGroupsRequest& request) const {
  return DescribeAutoScalingGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAutoScalingInstancesOutcome AutoScalingClient::DescribeAutoScalingInstances(
    const DescribeAutoScalingInstancesRequest& request) const {
  return DescribeAutoScalingInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAutoScalingNotificationTypesOutcome AutoScalingClient::DescribeAutoScalingNotificationTypes(
    const DescribeAutoScalingNotificationTypesRequest& request) const {
  return DescribeAutoScalingNotificationTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceRefreshesOutcome AutoScalingClient::DescribeInstanceRefreshes(const DescribeInstanceRefreshesRequest& request) const {
  return DescribeInstanceRefreshesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLaunchConfigurationsOutcome AutoScalingClient::DescribeLaunchConfigurations(
    const DescribeLaunchConfigurationsRequest& request) const {
  return DescribeLaunchConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLifecycleHookTypesOutcome AutoScalingClient::DescribeLifecycleHookTypes(const DescribeLifecycleHookTypesRequest& request) const {
  return DescribeLifecycleHookTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLifecycleHooksOutcome AutoScalingClient::DescribeLifecycleHooks(const DescribeLifecycleHooksRequest& request) const {
  return DescribeLifecycleHooksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLoadBalancerTargetGroupsOutcome AutoScalingClient::DescribeLoadBalancerTargetGroups(
    const DescribeLoadBalancerTargetGroupsRequest& request) const {
  return DescribeLoadBalancerTargetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLoadBalancersOutcome AutoScalingClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const {
  return DescribeLoadBalancersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetricCollectionTypesOutcome AutoScalingClient::DescribeMetricCollectionTypes(
    const DescribeMetricCollectionTypesRequest& request) const {
  return DescribeMetricCollectionTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNotificationConfigurationsOutcome AutoScalingClient::DescribeNotificationConfigurations(
    const DescribeNotificationConfigurationsRequest& request) const {
  return DescribeNotificationConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePoliciesOutcome AutoScalingClient::DescribePolicies(const DescribePoliciesRequest& request) const {
  return DescribePoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScalingActivitiesOutcome AutoScalingClient::DescribeScalingActivities(const DescribeScalingActivitiesRequest& request) const {
  return DescribeScalingActivitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScalingProcessTypesOutcome AutoScalingClient::DescribeScalingProcessTypes(const DescribeScalingProcessTypesRequest& request) const {
  return DescribeScalingProcessTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScheduledActionsOutcome AutoScalingClient::DescribeScheduledActions(const DescribeScheduledActionsRequest& request) const {
  return DescribeScheduledActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTagsOutcome AutoScalingClient::DescribeTags(const DescribeTagsRequest& request) const {
  return DescribeTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTerminationPolicyTypesOutcome AutoScalingClient::DescribeTerminationPolicyTypes(
    const DescribeTerminationPolicyTypesRequest& request) const {
  return DescribeTerminationPolicyTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrafficSourcesOutcome AutoScalingClient::DescribeTrafficSources(const DescribeTrafficSourcesRequest& request) const {
  return DescribeTrafficSourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWarmPoolOutcome AutoScalingClient::DescribeWarmPool(const DescribeWarmPoolRequest& request) const {
  return DescribeWarmPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachInstancesOutcome AutoScalingClient::DetachInstances(const DetachInstancesRequest& request) const {
  return DetachInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachLoadBalancerTargetGroupsOutcome AutoScalingClient::DetachLoadBalancerTargetGroups(
    const DetachLoadBalancerTargetGroupsRequest& request) const {
  return DetachLoadBalancerTargetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachLoadBalancersOutcome AutoScalingClient::DetachLoadBalancers(const DetachLoadBalancersRequest& request) const {
  return DetachLoadBalancersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachTrafficSourcesOutcome AutoScalingClient::DetachTrafficSources(const DetachTrafficSourcesRequest& request) const {
  return DetachTrafficSourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableMetricsCollectionOutcome AutoScalingClient::DisableMetricsCollection(const DisableMetricsCollectionRequest& request) const {
  return DisableMetricsCollectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableMetricsCollectionOutcome AutoScalingClient::EnableMetricsCollection(const EnableMetricsCollectionRequest& request) const {
  return EnableMetricsCollectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnterStandbyOutcome AutoScalingClient::EnterStandby(const EnterStandbyRequest& request) const {
  return EnterStandbyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExecutePolicyOutcome AutoScalingClient::ExecutePolicy(const ExecutePolicyRequest& request) const {
  return ExecutePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExitStandbyOutcome AutoScalingClient::ExitStandby(const ExitStandbyRequest& request) const {
  return ExitStandbyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPredictiveScalingForecastOutcome AutoScalingClient::GetPredictiveScalingForecast(
    const GetPredictiveScalingForecastRequest& request) const {
  return GetPredictiveScalingForecastOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

LaunchInstancesOutcome AutoScalingClient::LaunchInstances(const LaunchInstancesRequest& request) const {
  return LaunchInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLifecycleHookOutcome AutoScalingClient::PutLifecycleHook(const PutLifecycleHookRequest& request) const {
  return PutLifecycleHookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutNotificationConfigurationOutcome AutoScalingClient::PutNotificationConfiguration(
    const PutNotificationConfigurationRequest& request) const {
  return PutNotificationConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutScalingPolicyOutcome AutoScalingClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const {
  return PutScalingPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutScheduledUpdateGroupActionOutcome AutoScalingClient::PutScheduledUpdateGroupAction(
    const PutScheduledUpdateGroupActionRequest& request) const {
  return PutScheduledUpdateGroupActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutWarmPoolOutcome AutoScalingClient::PutWarmPool(const PutWarmPoolRequest& request) const {
  return PutWarmPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RecordLifecycleActionHeartbeatOutcome AutoScalingClient::RecordLifecycleActionHeartbeat(
    const RecordLifecycleActionHeartbeatRequest& request) const {
  return RecordLifecycleActionHeartbeatOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResumeProcessesOutcome AutoScalingClient::ResumeProcesses(const ResumeProcessesRequest& request) const {
  return ResumeProcessesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RollbackInstanceRefreshOutcome AutoScalingClient::RollbackInstanceRefresh(const RollbackInstanceRefreshRequest& request) const {
  return RollbackInstanceRefreshOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetDesiredCapacityOutcome AutoScalingClient::SetDesiredCapacity(const SetDesiredCapacityRequest& request) const {
  return SetDesiredCapacityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetInstanceHealthOutcome AutoScalingClient::SetInstanceHealth(const SetInstanceHealthRequest& request) const {
  return SetInstanceHealthOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetInstanceProtectionOutcome AutoScalingClient::SetInstanceProtection(const SetInstanceProtectionRequest& request) const {
  return SetInstanceProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartInstanceRefreshOutcome AutoScalingClient::StartInstanceRefresh(const StartInstanceRefreshRequest& request) const {
  return StartInstanceRefreshOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SuspendProcessesOutcome AutoScalingClient::SuspendProcesses(const SuspendProcessesRequest& request) const {
  return SuspendProcessesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateInstanceInAutoScalingGroupOutcome AutoScalingClient::TerminateInstanceInAutoScalingGroup(
    const TerminateInstanceInAutoScalingGroupRequest& request) const {
  return TerminateInstanceInAutoScalingGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAutoScalingGroupOutcome AutoScalingClient::UpdateAutoScalingGroup(const UpdateAutoScalingGroupRequest& request) const {
  return UpdateAutoScalingGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
