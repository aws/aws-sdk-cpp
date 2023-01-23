/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/autoscaling/AutoScalingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/autoscaling/AutoScalingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AutoScalingClient header */
#include <aws/autoscaling/model/AttachLoadBalancerTargetGroupsResult.h>
#include <aws/autoscaling/model/AttachLoadBalancersResult.h>
#include <aws/autoscaling/model/AttachTrafficSourcesResult.h>
#include <aws/autoscaling/model/BatchDeleteScheduledActionResult.h>
#include <aws/autoscaling/model/BatchPutScheduledUpdateGroupActionResult.h>
#include <aws/autoscaling/model/CancelInstanceRefreshResult.h>
#include <aws/autoscaling/model/CompleteLifecycleActionResult.h>
#include <aws/autoscaling/model/DeleteLifecycleHookResult.h>
#include <aws/autoscaling/model/DeleteWarmPoolResult.h>
#include <aws/autoscaling/model/DescribeAccountLimitsResult.h>
#include <aws/autoscaling/model/DescribeAdjustmentTypesResult.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsResult.h>
#include <aws/autoscaling/model/DescribeAutoScalingInstancesResult.h>
#include <aws/autoscaling/model/DescribeAutoScalingNotificationTypesResult.h>
#include <aws/autoscaling/model/DescribeInstanceRefreshesResult.h>
#include <aws/autoscaling/model/DescribeLaunchConfigurationsResult.h>
#include <aws/autoscaling/model/DescribeLifecycleHookTypesResult.h>
#include <aws/autoscaling/model/DescribeLifecycleHooksResult.h>
#include <aws/autoscaling/model/DescribeLoadBalancerTargetGroupsResult.h>
#include <aws/autoscaling/model/DescribeLoadBalancersResult.h>
#include <aws/autoscaling/model/DescribeMetricCollectionTypesResult.h>
#include <aws/autoscaling/model/DescribeNotificationConfigurationsResult.h>
#include <aws/autoscaling/model/DescribePoliciesResult.h>
#include <aws/autoscaling/model/DescribeScalingActivitiesResult.h>
#include <aws/autoscaling/model/DescribeScalingProcessTypesResult.h>
#include <aws/autoscaling/model/DescribeScheduledActionsResult.h>
#include <aws/autoscaling/model/DescribeTagsResult.h>
#include <aws/autoscaling/model/DescribeTerminationPolicyTypesResult.h>
#include <aws/autoscaling/model/DescribeTrafficSourcesResult.h>
#include <aws/autoscaling/model/DescribeWarmPoolResult.h>
#include <aws/autoscaling/model/DetachInstancesResult.h>
#include <aws/autoscaling/model/DetachLoadBalancerTargetGroupsResult.h>
#include <aws/autoscaling/model/DetachLoadBalancersResult.h>
#include <aws/autoscaling/model/DetachTrafficSourcesResult.h>
#include <aws/autoscaling/model/EnterStandbyResult.h>
#include <aws/autoscaling/model/ExitStandbyResult.h>
#include <aws/autoscaling/model/GetPredictiveScalingForecastResult.h>
#include <aws/autoscaling/model/PutLifecycleHookResult.h>
#include <aws/autoscaling/model/PutScalingPolicyResult.h>
#include <aws/autoscaling/model/PutWarmPoolResult.h>
#include <aws/autoscaling/model/RecordLifecycleActionHeartbeatResult.h>
#include <aws/autoscaling/model/SetInstanceProtectionResult.h>
#include <aws/autoscaling/model/StartInstanceRefreshResult.h>
#include <aws/autoscaling/model/TerminateInstanceInAutoScalingGroupResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in AutoScalingClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace AutoScaling
  {
    using AutoScalingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AutoScalingEndpointProviderBase = Aws::AutoScaling::Endpoint::AutoScalingEndpointProviderBase;
    using AutoScalingEndpointProvider = Aws::AutoScaling::Endpoint::AutoScalingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AutoScalingClient header */
      class AttachInstancesRequest;
      class AttachLoadBalancerTargetGroupsRequest;
      class AttachLoadBalancersRequest;
      class AttachTrafficSourcesRequest;
      class BatchDeleteScheduledActionRequest;
      class BatchPutScheduledUpdateGroupActionRequest;
      class CancelInstanceRefreshRequest;
      class CompleteLifecycleActionRequest;
      class CreateAutoScalingGroupRequest;
      class CreateLaunchConfigurationRequest;
      class CreateOrUpdateTagsRequest;
      class DeleteAutoScalingGroupRequest;
      class DeleteLaunchConfigurationRequest;
      class DeleteLifecycleHookRequest;
      class DeleteNotificationConfigurationRequest;
      class DeletePolicyRequest;
      class DeleteScheduledActionRequest;
      class DeleteTagsRequest;
      class DeleteWarmPoolRequest;
      class DescribeAccountLimitsRequest;
      class DescribeAdjustmentTypesRequest;
      class DescribeAutoScalingGroupsRequest;
      class DescribeAutoScalingInstancesRequest;
      class DescribeAutoScalingNotificationTypesRequest;
      class DescribeInstanceRefreshesRequest;
      class DescribeLaunchConfigurationsRequest;
      class DescribeLifecycleHookTypesRequest;
      class DescribeLifecycleHooksRequest;
      class DescribeLoadBalancerTargetGroupsRequest;
      class DescribeLoadBalancersRequest;
      class DescribeMetricCollectionTypesRequest;
      class DescribeNotificationConfigurationsRequest;
      class DescribePoliciesRequest;
      class DescribeScalingActivitiesRequest;
      class DescribeScalingProcessTypesRequest;
      class DescribeScheduledActionsRequest;
      class DescribeTagsRequest;
      class DescribeTerminationPolicyTypesRequest;
      class DescribeTrafficSourcesRequest;
      class DescribeWarmPoolRequest;
      class DetachInstancesRequest;
      class DetachLoadBalancerTargetGroupsRequest;
      class DetachLoadBalancersRequest;
      class DetachTrafficSourcesRequest;
      class DisableMetricsCollectionRequest;
      class EnableMetricsCollectionRequest;
      class EnterStandbyRequest;
      class ExecutePolicyRequest;
      class ExitStandbyRequest;
      class GetPredictiveScalingForecastRequest;
      class PutLifecycleHookRequest;
      class PutNotificationConfigurationRequest;
      class PutScalingPolicyRequest;
      class PutScheduledUpdateGroupActionRequest;
      class PutWarmPoolRequest;
      class RecordLifecycleActionHeartbeatRequest;
      class ResumeProcessesRequest;
      class SetDesiredCapacityRequest;
      class SetInstanceHealthRequest;
      class SetInstanceProtectionRequest;
      class StartInstanceRefreshRequest;
      class SuspendProcessesRequest;
      class TerminateInstanceInAutoScalingGroupRequest;
      class UpdateAutoScalingGroupRequest;
      /* End of service model forward declarations required in AutoScalingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> AttachInstancesOutcome;
      typedef Aws::Utils::Outcome<AttachLoadBalancerTargetGroupsResult, AutoScalingError> AttachLoadBalancerTargetGroupsOutcome;
      typedef Aws::Utils::Outcome<AttachLoadBalancersResult, AutoScalingError> AttachLoadBalancersOutcome;
      typedef Aws::Utils::Outcome<AttachTrafficSourcesResult, AutoScalingError> AttachTrafficSourcesOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteScheduledActionResult, AutoScalingError> BatchDeleteScheduledActionOutcome;
      typedef Aws::Utils::Outcome<BatchPutScheduledUpdateGroupActionResult, AutoScalingError> BatchPutScheduledUpdateGroupActionOutcome;
      typedef Aws::Utils::Outcome<CancelInstanceRefreshResult, AutoScalingError> CancelInstanceRefreshOutcome;
      typedef Aws::Utils::Outcome<CompleteLifecycleActionResult, AutoScalingError> CompleteLifecycleActionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> CreateAutoScalingGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> CreateLaunchConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> CreateOrUpdateTagsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> DeleteAutoScalingGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> DeleteLaunchConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteLifecycleHookResult, AutoScalingError> DeleteLifecycleHookOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> DeleteNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> DeletePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> DeleteScheduledActionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> DeleteTagsOutcome;
      typedef Aws::Utils::Outcome<DeleteWarmPoolResult, AutoScalingError> DeleteWarmPoolOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountLimitsResult, AutoScalingError> DescribeAccountLimitsOutcome;
      typedef Aws::Utils::Outcome<DescribeAdjustmentTypesResult, AutoScalingError> DescribeAdjustmentTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeAutoScalingGroupsResult, AutoScalingError> DescribeAutoScalingGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeAutoScalingInstancesResult, AutoScalingError> DescribeAutoScalingInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeAutoScalingNotificationTypesResult, AutoScalingError> DescribeAutoScalingNotificationTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceRefreshesResult, AutoScalingError> DescribeInstanceRefreshesOutcome;
      typedef Aws::Utils::Outcome<DescribeLaunchConfigurationsResult, AutoScalingError> DescribeLaunchConfigurationsOutcome;
      typedef Aws::Utils::Outcome<DescribeLifecycleHookTypesResult, AutoScalingError> DescribeLifecycleHookTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeLifecycleHooksResult, AutoScalingError> DescribeLifecycleHooksOutcome;
      typedef Aws::Utils::Outcome<DescribeLoadBalancerTargetGroupsResult, AutoScalingError> DescribeLoadBalancerTargetGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeLoadBalancersResult, AutoScalingError> DescribeLoadBalancersOutcome;
      typedef Aws::Utils::Outcome<DescribeMetricCollectionTypesResult, AutoScalingError> DescribeMetricCollectionTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeNotificationConfigurationsResult, AutoScalingError> DescribeNotificationConfigurationsOutcome;
      typedef Aws::Utils::Outcome<DescribePoliciesResult, AutoScalingError> DescribePoliciesOutcome;
      typedef Aws::Utils::Outcome<DescribeScalingActivitiesResult, AutoScalingError> DescribeScalingActivitiesOutcome;
      typedef Aws::Utils::Outcome<DescribeScalingProcessTypesResult, AutoScalingError> DescribeScalingProcessTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeScheduledActionsResult, AutoScalingError> DescribeScheduledActionsOutcome;
      typedef Aws::Utils::Outcome<DescribeTagsResult, AutoScalingError> DescribeTagsOutcome;
      typedef Aws::Utils::Outcome<DescribeTerminationPolicyTypesResult, AutoScalingError> DescribeTerminationPolicyTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeTrafficSourcesResult, AutoScalingError> DescribeTrafficSourcesOutcome;
      typedef Aws::Utils::Outcome<DescribeWarmPoolResult, AutoScalingError> DescribeWarmPoolOutcome;
      typedef Aws::Utils::Outcome<DetachInstancesResult, AutoScalingError> DetachInstancesOutcome;
      typedef Aws::Utils::Outcome<DetachLoadBalancerTargetGroupsResult, AutoScalingError> DetachLoadBalancerTargetGroupsOutcome;
      typedef Aws::Utils::Outcome<DetachLoadBalancersResult, AutoScalingError> DetachLoadBalancersOutcome;
      typedef Aws::Utils::Outcome<DetachTrafficSourcesResult, AutoScalingError> DetachTrafficSourcesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> DisableMetricsCollectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> EnableMetricsCollectionOutcome;
      typedef Aws::Utils::Outcome<EnterStandbyResult, AutoScalingError> EnterStandbyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> ExecutePolicyOutcome;
      typedef Aws::Utils::Outcome<ExitStandbyResult, AutoScalingError> ExitStandbyOutcome;
      typedef Aws::Utils::Outcome<GetPredictiveScalingForecastResult, AutoScalingError> GetPredictiveScalingForecastOutcome;
      typedef Aws::Utils::Outcome<PutLifecycleHookResult, AutoScalingError> PutLifecycleHookOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> PutNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutScalingPolicyResult, AutoScalingError> PutScalingPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> PutScheduledUpdateGroupActionOutcome;
      typedef Aws::Utils::Outcome<PutWarmPoolResult, AutoScalingError> PutWarmPoolOutcome;
      typedef Aws::Utils::Outcome<RecordLifecycleActionHeartbeatResult, AutoScalingError> RecordLifecycleActionHeartbeatOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> ResumeProcessesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> SetDesiredCapacityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> SetInstanceHealthOutcome;
      typedef Aws::Utils::Outcome<SetInstanceProtectionResult, AutoScalingError> SetInstanceProtectionOutcome;
      typedef Aws::Utils::Outcome<StartInstanceRefreshResult, AutoScalingError> StartInstanceRefreshOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> SuspendProcessesOutcome;
      typedef Aws::Utils::Outcome<TerminateInstanceInAutoScalingGroupResult, AutoScalingError> TerminateInstanceInAutoScalingGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> UpdateAutoScalingGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
      typedef std::future<AttachLoadBalancerTargetGroupsOutcome> AttachLoadBalancerTargetGroupsOutcomeCallable;
      typedef std::future<AttachLoadBalancersOutcome> AttachLoadBalancersOutcomeCallable;
      typedef std::future<AttachTrafficSourcesOutcome> AttachTrafficSourcesOutcomeCallable;
      typedef std::future<BatchDeleteScheduledActionOutcome> BatchDeleteScheduledActionOutcomeCallable;
      typedef std::future<BatchPutScheduledUpdateGroupActionOutcome> BatchPutScheduledUpdateGroupActionOutcomeCallable;
      typedef std::future<CancelInstanceRefreshOutcome> CancelInstanceRefreshOutcomeCallable;
      typedef std::future<CompleteLifecycleActionOutcome> CompleteLifecycleActionOutcomeCallable;
      typedef std::future<CreateAutoScalingGroupOutcome> CreateAutoScalingGroupOutcomeCallable;
      typedef std::future<CreateLaunchConfigurationOutcome> CreateLaunchConfigurationOutcomeCallable;
      typedef std::future<CreateOrUpdateTagsOutcome> CreateOrUpdateTagsOutcomeCallable;
      typedef std::future<DeleteAutoScalingGroupOutcome> DeleteAutoScalingGroupOutcomeCallable;
      typedef std::future<DeleteLaunchConfigurationOutcome> DeleteLaunchConfigurationOutcomeCallable;
      typedef std::future<DeleteLifecycleHookOutcome> DeleteLifecycleHookOutcomeCallable;
      typedef std::future<DeleteNotificationConfigurationOutcome> DeleteNotificationConfigurationOutcomeCallable;
      typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
      typedef std::future<DeleteScheduledActionOutcome> DeleteScheduledActionOutcomeCallable;
      typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
      typedef std::future<DeleteWarmPoolOutcome> DeleteWarmPoolOutcomeCallable;
      typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
      typedef std::future<DescribeAdjustmentTypesOutcome> DescribeAdjustmentTypesOutcomeCallable;
      typedef std::future<DescribeAutoScalingGroupsOutcome> DescribeAutoScalingGroupsOutcomeCallable;
      typedef std::future<DescribeAutoScalingInstancesOutcome> DescribeAutoScalingInstancesOutcomeCallable;
      typedef std::future<DescribeAutoScalingNotificationTypesOutcome> DescribeAutoScalingNotificationTypesOutcomeCallable;
      typedef std::future<DescribeInstanceRefreshesOutcome> DescribeInstanceRefreshesOutcomeCallable;
      typedef std::future<DescribeLaunchConfigurationsOutcome> DescribeLaunchConfigurationsOutcomeCallable;
      typedef std::future<DescribeLifecycleHookTypesOutcome> DescribeLifecycleHookTypesOutcomeCallable;
      typedef std::future<DescribeLifecycleHooksOutcome> DescribeLifecycleHooksOutcomeCallable;
      typedef std::future<DescribeLoadBalancerTargetGroupsOutcome> DescribeLoadBalancerTargetGroupsOutcomeCallable;
      typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
      typedef std::future<DescribeMetricCollectionTypesOutcome> DescribeMetricCollectionTypesOutcomeCallable;
      typedef std::future<DescribeNotificationConfigurationsOutcome> DescribeNotificationConfigurationsOutcomeCallable;
      typedef std::future<DescribePoliciesOutcome> DescribePoliciesOutcomeCallable;
      typedef std::future<DescribeScalingActivitiesOutcome> DescribeScalingActivitiesOutcomeCallable;
      typedef std::future<DescribeScalingProcessTypesOutcome> DescribeScalingProcessTypesOutcomeCallable;
      typedef std::future<DescribeScheduledActionsOutcome> DescribeScheduledActionsOutcomeCallable;
      typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
      typedef std::future<DescribeTerminationPolicyTypesOutcome> DescribeTerminationPolicyTypesOutcomeCallable;
      typedef std::future<DescribeTrafficSourcesOutcome> DescribeTrafficSourcesOutcomeCallable;
      typedef std::future<DescribeWarmPoolOutcome> DescribeWarmPoolOutcomeCallable;
      typedef std::future<DetachInstancesOutcome> DetachInstancesOutcomeCallable;
      typedef std::future<DetachLoadBalancerTargetGroupsOutcome> DetachLoadBalancerTargetGroupsOutcomeCallable;
      typedef std::future<DetachLoadBalancersOutcome> DetachLoadBalancersOutcomeCallable;
      typedef std::future<DetachTrafficSourcesOutcome> DetachTrafficSourcesOutcomeCallable;
      typedef std::future<DisableMetricsCollectionOutcome> DisableMetricsCollectionOutcomeCallable;
      typedef std::future<EnableMetricsCollectionOutcome> EnableMetricsCollectionOutcomeCallable;
      typedef std::future<EnterStandbyOutcome> EnterStandbyOutcomeCallable;
      typedef std::future<ExecutePolicyOutcome> ExecutePolicyOutcomeCallable;
      typedef std::future<ExitStandbyOutcome> ExitStandbyOutcomeCallable;
      typedef std::future<GetPredictiveScalingForecastOutcome> GetPredictiveScalingForecastOutcomeCallable;
      typedef std::future<PutLifecycleHookOutcome> PutLifecycleHookOutcomeCallable;
      typedef std::future<PutNotificationConfigurationOutcome> PutNotificationConfigurationOutcomeCallable;
      typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
      typedef std::future<PutScheduledUpdateGroupActionOutcome> PutScheduledUpdateGroupActionOutcomeCallable;
      typedef std::future<PutWarmPoolOutcome> PutWarmPoolOutcomeCallable;
      typedef std::future<RecordLifecycleActionHeartbeatOutcome> RecordLifecycleActionHeartbeatOutcomeCallable;
      typedef std::future<ResumeProcessesOutcome> ResumeProcessesOutcomeCallable;
      typedef std::future<SetDesiredCapacityOutcome> SetDesiredCapacityOutcomeCallable;
      typedef std::future<SetInstanceHealthOutcome> SetInstanceHealthOutcomeCallable;
      typedef std::future<SetInstanceProtectionOutcome> SetInstanceProtectionOutcomeCallable;
      typedef std::future<StartInstanceRefreshOutcome> StartInstanceRefreshOutcomeCallable;
      typedef std::future<SuspendProcessesOutcome> SuspendProcessesOutcomeCallable;
      typedef std::future<TerminateInstanceInAutoScalingGroupOutcome> TerminateInstanceInAutoScalingGroupOutcomeCallable;
      typedef std::future<UpdateAutoScalingGroupOutcome> UpdateAutoScalingGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AutoScalingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AutoScalingClient*, const Model::AttachInstancesRequest&, const Model::AttachInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachInstancesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::AttachLoadBalancerTargetGroupsRequest&, const Model::AttachLoadBalancerTargetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachLoadBalancerTargetGroupsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::AttachLoadBalancersRequest&, const Model::AttachLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::AttachTrafficSourcesRequest&, const Model::AttachTrafficSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachTrafficSourcesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::BatchDeleteScheduledActionRequest&, const Model::BatchDeleteScheduledActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteScheduledActionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::BatchPutScheduledUpdateGroupActionRequest&, const Model::BatchPutScheduledUpdateGroupActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutScheduledUpdateGroupActionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::CancelInstanceRefreshRequest&, const Model::CancelInstanceRefreshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelInstanceRefreshResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::CompleteLifecycleActionRequest&, const Model::CompleteLifecycleActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteLifecycleActionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::CreateAutoScalingGroupRequest&, const Model::CreateAutoScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAutoScalingGroupResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::CreateLaunchConfigurationRequest&, const Model::CreateLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::CreateOrUpdateTagsRequest&, const Model::CreateOrUpdateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOrUpdateTagsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteAutoScalingGroupRequest&, const Model::DeleteAutoScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAutoScalingGroupResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteLaunchConfigurationRequest&, const Model::DeleteLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteLifecycleHookRequest&, const Model::DeleteLifecycleHookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLifecycleHookResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteNotificationConfigurationRequest&, const Model::DeleteNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteScheduledActionRequest&, const Model::DeleteScheduledActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduledActionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteWarmPoolRequest&, const Model::DeleteWarmPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWarmPoolResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAccountLimitsRequest&, const Model::DescribeAccountLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountLimitsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAdjustmentTypesRequest&, const Model::DescribeAdjustmentTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAdjustmentTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAutoScalingGroupsRequest&, const Model::DescribeAutoScalingGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingGroupsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAutoScalingInstancesRequest&, const Model::DescribeAutoScalingInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingInstancesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAutoScalingNotificationTypesRequest&, const Model::DescribeAutoScalingNotificationTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingNotificationTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeInstanceRefreshesRequest&, const Model::DescribeInstanceRefreshesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceRefreshesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeLaunchConfigurationsRequest&, const Model::DescribeLaunchConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLaunchConfigurationsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeLifecycleHookTypesRequest&, const Model::DescribeLifecycleHookTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLifecycleHookTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeLifecycleHooksRequest&, const Model::DescribeLifecycleHooksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLifecycleHooksResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeLoadBalancerTargetGroupsRequest&, const Model::DescribeLoadBalancerTargetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoadBalancerTargetGroupsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeLoadBalancersRequest&, const Model::DescribeLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeMetricCollectionTypesRequest&, const Model::DescribeMetricCollectionTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetricCollectionTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeNotificationConfigurationsRequest&, const Model::DescribeNotificationConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotificationConfigurationsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribePoliciesRequest&, const Model::DescribePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePoliciesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeScalingActivitiesRequest&, const Model::DescribeScalingActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingActivitiesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeScalingProcessTypesRequest&, const Model::DescribeScalingProcessTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingProcessTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeScheduledActionsRequest&, const Model::DescribeScheduledActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledActionsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeTerminationPolicyTypesRequest&, const Model::DescribeTerminationPolicyTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTerminationPolicyTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeTrafficSourcesRequest&, const Model::DescribeTrafficSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrafficSourcesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeWarmPoolRequest&, const Model::DescribeWarmPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWarmPoolResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DetachInstancesRequest&, const Model::DetachInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachInstancesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DetachLoadBalancerTargetGroupsRequest&, const Model::DetachLoadBalancerTargetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachLoadBalancerTargetGroupsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DetachLoadBalancersRequest&, const Model::DetachLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DetachTrafficSourcesRequest&, const Model::DetachTrafficSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachTrafficSourcesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DisableMetricsCollectionRequest&, const Model::DisableMetricsCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableMetricsCollectionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::EnableMetricsCollectionRequest&, const Model::EnableMetricsCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableMetricsCollectionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::EnterStandbyRequest&, const Model::EnterStandbyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnterStandbyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::ExecutePolicyRequest&, const Model::ExecutePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecutePolicyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::ExitStandbyRequest&, const Model::ExitStandbyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExitStandbyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::GetPredictiveScalingForecastRequest&, const Model::GetPredictiveScalingForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPredictiveScalingForecastResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutLifecycleHookRequest&, const Model::PutLifecycleHookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLifecycleHookResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutNotificationConfigurationRequest&, const Model::PutNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutScalingPolicyRequest&, const Model::PutScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutScheduledUpdateGroupActionRequest&, const Model::PutScheduledUpdateGroupActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScheduledUpdateGroupActionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutWarmPoolRequest&, const Model::PutWarmPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutWarmPoolResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::RecordLifecycleActionHeartbeatRequest&, const Model::RecordLifecycleActionHeartbeatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RecordLifecycleActionHeartbeatResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::ResumeProcessesRequest&, const Model::ResumeProcessesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeProcessesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::SetDesiredCapacityRequest&, const Model::SetDesiredCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDesiredCapacityResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::SetInstanceHealthRequest&, const Model::SetInstanceHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetInstanceHealthResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::SetInstanceProtectionRequest&, const Model::SetInstanceProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetInstanceProtectionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::StartInstanceRefreshRequest&, const Model::StartInstanceRefreshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInstanceRefreshResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::SuspendProcessesRequest&, const Model::SuspendProcessesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SuspendProcessesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::TerminateInstanceInAutoScalingGroupRequest&, const Model::TerminateInstanceInAutoScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateInstanceInAutoScalingGroupResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::UpdateAutoScalingGroupRequest&, const Model::UpdateAutoScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAutoScalingGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AutoScaling
} // namespace Aws
