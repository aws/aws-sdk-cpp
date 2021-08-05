﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/autoscaling/model/AttachLoadBalancerTargetGroupsResult.h>
#include <aws/autoscaling/model/AttachLoadBalancersResult.h>
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
#include <aws/autoscaling/model/DescribeWarmPoolResult.h>
#include <aws/autoscaling/model/DetachInstancesResult.h>
#include <aws/autoscaling/model/DetachLoadBalancerTargetGroupsResult.h>
#include <aws/autoscaling/model/DetachLoadBalancersResult.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Xml
{
  class XmlDocument;
} // namespace Xml
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

namespace Model
{
        class AttachInstancesRequest;
        class AttachLoadBalancerTargetGroupsRequest;
        class AttachLoadBalancersRequest;
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
        class DescribeWarmPoolRequest;
        class DetachInstancesRequest;
        class DetachLoadBalancerTargetGroupsRequest;
        class DetachLoadBalancersRequest;
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

        typedef Aws::Utils::Outcome<Aws::NoResult, AutoScalingError> AttachInstancesOutcome;
        typedef Aws::Utils::Outcome<AttachLoadBalancerTargetGroupsResult, AutoScalingError> AttachLoadBalancerTargetGroupsOutcome;
        typedef Aws::Utils::Outcome<AttachLoadBalancersResult, AutoScalingError> AttachLoadBalancersOutcome;
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
        typedef Aws::Utils::Outcome<DescribeWarmPoolResult, AutoScalingError> DescribeWarmPoolOutcome;
        typedef Aws::Utils::Outcome<DetachInstancesResult, AutoScalingError> DetachInstancesOutcome;
        typedef Aws::Utils::Outcome<DetachLoadBalancerTargetGroupsResult, AutoScalingError> DetachLoadBalancerTargetGroupsOutcome;
        typedef Aws::Utils::Outcome<DetachLoadBalancersResult, AutoScalingError> DetachLoadBalancersOutcome;
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

        typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
        typedef std::future<AttachLoadBalancerTargetGroupsOutcome> AttachLoadBalancerTargetGroupsOutcomeCallable;
        typedef std::future<AttachLoadBalancersOutcome> AttachLoadBalancersOutcomeCallable;
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
        typedef std::future<DescribeWarmPoolOutcome> DescribeWarmPoolOutcomeCallable;
        typedef std::future<DetachInstancesOutcome> DetachInstancesOutcomeCallable;
        typedef std::future<DetachLoadBalancerTargetGroupsOutcome> DetachLoadBalancerTargetGroupsOutcomeCallable;
        typedef std::future<DetachLoadBalancersOutcome> DetachLoadBalancersOutcomeCallable;
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
} // namespace Model

  class AutoScalingClient;

    typedef std::function<void(const AutoScalingClient*, const Model::AttachInstancesRequest&, const Model::AttachInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachInstancesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::AttachLoadBalancerTargetGroupsRequest&, const Model::AttachLoadBalancerTargetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachLoadBalancerTargetGroupsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::AttachLoadBalancersRequest&, const Model::AttachLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachLoadBalancersResponseReceivedHandler;
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
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeWarmPoolRequest&, const Model::DescribeWarmPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWarmPoolResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DetachInstancesRequest&, const Model::DetachInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachInstancesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DetachLoadBalancerTargetGroupsRequest&, const Model::DetachLoadBalancerTargetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachLoadBalancerTargetGroupsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DetachLoadBalancersRequest&, const Model::DetachLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachLoadBalancersResponseReceivedHandler;
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

  /**
   * <fullname>Amazon EC2 Auto Scaling</fullname> <p>Amazon EC2 Auto Scaling is
   * designed to automatically launch or terminate EC2 instances based on
   * user-defined scaling policies, scheduled actions, and health checks.</p> <p>For
   * more information about Amazon EC2 Auto Scaling, see the <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon
   * EC2 Auto Scaling User Guide</a>. For information about granting IAM users
   * required permissions for calls to Amazon EC2 Auto Scaling, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/ec2-auto-scaling-api-permissions.html">Granting
   * IAM users required permissions for Amazon EC2 Auto Scaling resources</a> in the
   * <i>Amazon EC2 Auto Scaling API Reference</i>.</p>
   */
  class AWS_AUTOSCALING_API AutoScalingClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AutoScalingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AutoScalingClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Attaches one or more EC2 instances to the specified Auto Scaling group.</p>
         * <p>When you attach instances, Amazon EC2 Auto Scaling increases the desired
         * capacity of the group by the number of instances being attached. If the number
         * of instances being attached plus the desired capacity of the group exceeds the
         * maximum size of the group, the operation fails.</p> <p>If there is a Classic
         * Load Balancer attached to your Auto Scaling group, the instances are also
         * registered with the load balancer. If there are target groups attached to your
         * Auto Scaling group, the instances are also registered with the target
         * groups.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-instance-asg.html">Attach
         * EC2 instances to your Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachInstancesOutcome AttachInstances(const Model::AttachInstancesRequest& request) const;

        /**
         * <p>Attaches one or more EC2 instances to the specified Auto Scaling group.</p>
         * <p>When you attach instances, Amazon EC2 Auto Scaling increases the desired
         * capacity of the group by the number of instances being attached. If the number
         * of instances being attached plus the desired capacity of the group exceeds the
         * maximum size of the group, the operation fails.</p> <p>If there is a Classic
         * Load Balancer attached to your Auto Scaling group, the instances are also
         * registered with the load balancer. If there are target groups attached to your
         * Auto Scaling group, the instances are also registered with the target
         * groups.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-instance-asg.html">Attach
         * EC2 instances to your Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachInstancesOutcomeCallable AttachInstancesCallable(const Model::AttachInstancesRequest& request) const;

        /**
         * <p>Attaches one or more EC2 instances to the specified Auto Scaling group.</p>
         * <p>When you attach instances, Amazon EC2 Auto Scaling increases the desired
         * capacity of the group by the number of instances being attached. If the number
         * of instances being attached plus the desired capacity of the group exceeds the
         * maximum size of the group, the operation fails.</p> <p>If there is a Classic
         * Load Balancer attached to your Auto Scaling group, the instances are also
         * registered with the load balancer. If there are target groups attached to your
         * Auto Scaling group, the instances are also registered with the target
         * groups.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-instance-asg.html">Attach
         * EC2 instances to your Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches one or more target groups to the specified Auto Scaling group.</p>
         * <p>This operation is used with the following load balancer types: </p> <ul> <li>
         * <p> Application Load Balancer - Operates at the application layer (layer 7) and
         * supports HTTP and HTTPS. </p> </li> <li> <p> Network Load Balancer - Operates at
         * the transport layer (layer 4) and supports TCP, TLS, and UDP. </p> </li> <li>
         * <p> Gateway Load Balancer - Operates at the network layer (layer 3).</p> </li>
         * </ul> <p>To describe the target groups for an Auto Scaling group, call the
         * <a>DescribeLoadBalancerTargetGroups</a> API. To detach the target group from the
         * Auto Scaling group, call the <a>DetachLoadBalancerTargetGroups</a> API.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancerTargetGroupsOutcome AttachLoadBalancerTargetGroups(const Model::AttachLoadBalancerTargetGroupsRequest& request) const;

        /**
         * <p>Attaches one or more target groups to the specified Auto Scaling group.</p>
         * <p>This operation is used with the following load balancer types: </p> <ul> <li>
         * <p> Application Load Balancer - Operates at the application layer (layer 7) and
         * supports HTTP and HTTPS. </p> </li> <li> <p> Network Load Balancer - Operates at
         * the transport layer (layer 4) and supports TCP, TLS, and UDP. </p> </li> <li>
         * <p> Gateway Load Balancer - Operates at the network layer (layer 3).</p> </li>
         * </ul> <p>To describe the target groups for an Auto Scaling group, call the
         * <a>DescribeLoadBalancerTargetGroups</a> API. To detach the target group from the
         * Auto Scaling group, call the <a>DetachLoadBalancerTargetGroups</a> API.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachLoadBalancerTargetGroupsOutcomeCallable AttachLoadBalancerTargetGroupsCallable(const Model::AttachLoadBalancerTargetGroupsRequest& request) const;

        /**
         * <p>Attaches one or more target groups to the specified Auto Scaling group.</p>
         * <p>This operation is used with the following load balancer types: </p> <ul> <li>
         * <p> Application Load Balancer - Operates at the application layer (layer 7) and
         * supports HTTP and HTTPS. </p> </li> <li> <p> Network Load Balancer - Operates at
         * the transport layer (layer 4) and supports TCP, TLS, and UDP. </p> </li> <li>
         * <p> Gateway Load Balancer - Operates at the network layer (layer 3).</p> </li>
         * </ul> <p>To describe the target groups for an Auto Scaling group, call the
         * <a>DescribeLoadBalancerTargetGroups</a> API. To detach the target group from the
         * Auto Scaling group, call the <a>DetachLoadBalancerTargetGroups</a> API.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachLoadBalancerTargetGroupsAsync(const Model::AttachLoadBalancerTargetGroupsRequest& request, const AttachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>To attach an Application Load Balancer, Network Load Balancer, or
         * Gateway Load Balancer, use the <a>AttachLoadBalancerTargetGroups</a> API
         * operation instead.</p>  <p>Attaches one or more Classic Load Balancers to
         * the specified Auto Scaling group. Amazon EC2 Auto Scaling registers the running
         * instances with these Classic Load Balancers.</p> <p>To describe the load
         * balancers for an Auto Scaling group, call the <a>DescribeLoadBalancers</a> API.
         * To detach the load balancer from the Auto Scaling group, call the
         * <a>DetachLoadBalancers</a> API.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancersOutcome AttachLoadBalancers(const Model::AttachLoadBalancersRequest& request) const;

        /**
         *  <p>To attach an Application Load Balancer, Network Load Balancer, or
         * Gateway Load Balancer, use the <a>AttachLoadBalancerTargetGroups</a> API
         * operation instead.</p>  <p>Attaches one or more Classic Load Balancers to
         * the specified Auto Scaling group. Amazon EC2 Auto Scaling registers the running
         * instances with these Classic Load Balancers.</p> <p>To describe the load
         * balancers for an Auto Scaling group, call the <a>DescribeLoadBalancers</a> API.
         * To detach the load balancer from the Auto Scaling group, call the
         * <a>DetachLoadBalancers</a> API.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachLoadBalancersOutcomeCallable AttachLoadBalancersCallable(const Model::AttachLoadBalancersRequest& request) const;

        /**
         *  <p>To attach an Application Load Balancer, Network Load Balancer, or
         * Gateway Load Balancer, use the <a>AttachLoadBalancerTargetGroups</a> API
         * operation instead.</p>  <p>Attaches one or more Classic Load Balancers to
         * the specified Auto Scaling group. Amazon EC2 Auto Scaling registers the running
         * instances with these Classic Load Balancers.</p> <p>To describe the load
         * balancers for an Auto Scaling group, call the <a>DescribeLoadBalancers</a> API.
         * To detach the load balancer from the Auto Scaling group, call the
         * <a>DetachLoadBalancers</a> API.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachLoadBalancersAsync(const Model::AttachLoadBalancersRequest& request, const AttachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more scheduled actions for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchDeleteScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteScheduledActionOutcome BatchDeleteScheduledAction(const Model::BatchDeleteScheduledActionRequest& request) const;

        /**
         * <p>Deletes one or more scheduled actions for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchDeleteScheduledAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteScheduledActionOutcomeCallable BatchDeleteScheduledActionCallable(const Model::BatchDeleteScheduledActionRequest& request) const;

        /**
         * <p>Deletes one or more scheduled actions for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchDeleteScheduledAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteScheduledActionAsync(const Model::BatchDeleteScheduledActionRequest& request, const BatchDeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates one or more scheduled scaling actions for an Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchPutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutScheduledUpdateGroupActionOutcome BatchPutScheduledUpdateGroupAction(const Model::BatchPutScheduledUpdateGroupActionRequest& request) const;

        /**
         * <p>Creates or updates one or more scheduled scaling actions for an Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchPutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutScheduledUpdateGroupActionOutcomeCallable BatchPutScheduledUpdateGroupActionCallable(const Model::BatchPutScheduledUpdateGroupActionRequest& request) const;

        /**
         * <p>Creates or updates one or more scheduled scaling actions for an Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchPutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutScheduledUpdateGroupActionAsync(const Model::BatchPutScheduledUpdateGroupActionRequest& request, const BatchPutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an instance refresh operation in progress. Cancellation does not roll
         * back any replacements that have already been completed, but it prevents new
         * replacements from being started. </p> <p>This operation is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group after you make configuration changes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CancelInstanceRefresh">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelInstanceRefreshOutcome CancelInstanceRefresh(const Model::CancelInstanceRefreshRequest& request) const;

        /**
         * <p>Cancels an instance refresh operation in progress. Cancellation does not roll
         * back any replacements that have already been completed, but it prevents new
         * replacements from being started. </p> <p>This operation is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group after you make configuration changes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CancelInstanceRefresh">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelInstanceRefreshOutcomeCallable CancelInstanceRefreshCallable(const Model::CancelInstanceRefreshRequest& request) const;

        /**
         * <p>Cancels an instance refresh operation in progress. Cancellation does not roll
         * back any replacements that have already been completed, but it prevents new
         * replacements from being started. </p> <p>This operation is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group after you make configuration changes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CancelInstanceRefresh">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelInstanceRefreshAsync(const Model::CancelInstanceRefreshRequest& request, const CancelInstanceRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Completes the lifecycle action for the specified token or instance with the
         * specified result.</p> <p>This step is a part of the procedure for adding a
         * lifecycle hook to an Auto Scaling group:</p> <ol> <li> <p>(Optional) Create a
         * Lambda function and a rule that allows CloudWatch Events to invoke your Lambda
         * function when Amazon EC2 Auto Scaling launches or terminates instances.</p>
         * </li> <li> <p>(Optional) Create a notification target and an IAM role. The
         * target can be either an Amazon SQS queue or an Amazon SNS topic. The role allows
         * Amazon EC2 Auto Scaling to publish lifecycle notifications to the target.</p>
         * </li> <li> <p>Create the lifecycle hook. Specify whether the hook is used when
         * the instances launch or terminate.</p> </li> <li> <p>If you need more time,
         * record the lifecycle action heartbeat to keep the instance in a pending
         * state.</p> </li> <li> <p> <b>If you finish before the timeout period ends,
         * complete the lifecycle action.</b> </p> </li> </ol> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CompleteLifecycleAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteLifecycleActionOutcome CompleteLifecycleAction(const Model::CompleteLifecycleActionRequest& request) const;

        /**
         * <p>Completes the lifecycle action for the specified token or instance with the
         * specified result.</p> <p>This step is a part of the procedure for adding a
         * lifecycle hook to an Auto Scaling group:</p> <ol> <li> <p>(Optional) Create a
         * Lambda function and a rule that allows CloudWatch Events to invoke your Lambda
         * function when Amazon EC2 Auto Scaling launches or terminates instances.</p>
         * </li> <li> <p>(Optional) Create a notification target and an IAM role. The
         * target can be either an Amazon SQS queue or an Amazon SNS topic. The role allows
         * Amazon EC2 Auto Scaling to publish lifecycle notifications to the target.</p>
         * </li> <li> <p>Create the lifecycle hook. Specify whether the hook is used when
         * the instances launch or terminate.</p> </li> <li> <p>If you need more time,
         * record the lifecycle action heartbeat to keep the instance in a pending
         * state.</p> </li> <li> <p> <b>If you finish before the timeout period ends,
         * complete the lifecycle action.</b> </p> </li> </ol> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CompleteLifecycleAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CompleteLifecycleActionOutcomeCallable CompleteLifecycleActionCallable(const Model::CompleteLifecycleActionRequest& request) const;

        /**
         * <p>Completes the lifecycle action for the specified token or instance with the
         * specified result.</p> <p>This step is a part of the procedure for adding a
         * lifecycle hook to an Auto Scaling group:</p> <ol> <li> <p>(Optional) Create a
         * Lambda function and a rule that allows CloudWatch Events to invoke your Lambda
         * function when Amazon EC2 Auto Scaling launches or terminates instances.</p>
         * </li> <li> <p>(Optional) Create a notification target and an IAM role. The
         * target can be either an Amazon SQS queue or an Amazon SNS topic. The role allows
         * Amazon EC2 Auto Scaling to publish lifecycle notifications to the target.</p>
         * </li> <li> <p>Create the lifecycle hook. Specify whether the hook is used when
         * the instances launch or terminate.</p> </li> <li> <p>If you need more time,
         * record the lifecycle action heartbeat to keep the instance in a pending
         * state.</p> </li> <li> <p> <b>If you finish before the timeout period ends,
         * complete the lifecycle action.</b> </p> </li> </ol> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CompleteLifecycleAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompleteLifecycleActionAsync(const Model::CompleteLifecycleActionRequest& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>We strongly recommend using a launch template when calling this operation
         * to ensure full functionality for Amazon EC2 Auto Scaling and Amazon EC2.</b>
         * </p> <p>Creates an Auto Scaling group with the specified name and attributes.
         * </p> <p>If you exceed your maximum limit of Auto Scaling groups, the call fails.
         * To query this limit, call the <a>DescribeAccountLimits</a> API. For information
         * about updating this limit, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling service quotas</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For introductory exercises for creating an Auto Scaling group,
         * see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/GettingStartedTutorial.html">Getting
         * started with Amazon EC2 Auto Scaling</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-register-lbs-with-asg.html">Tutorial:
         * Set up a scaled and load-balanced application</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroup.html">Auto
         * Scaling groups</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
         * <p>Every Auto Scaling group has three size parameters
         * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
         * Usually, you set these sizes based on a specific number of instances. However,
         * if you configure a mixed instances policy that defines weights for the instance
         * types, you must specify these sizes with the same units that you use for
         * weighting instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateAutoScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutoScalingGroupOutcome CreateAutoScalingGroup(const Model::CreateAutoScalingGroupRequest& request) const;

        /**
         * <p> <b>We strongly recommend using a launch template when calling this operation
         * to ensure full functionality for Amazon EC2 Auto Scaling and Amazon EC2.</b>
         * </p> <p>Creates an Auto Scaling group with the specified name and attributes.
         * </p> <p>If you exceed your maximum limit of Auto Scaling groups, the call fails.
         * To query this limit, call the <a>DescribeAccountLimits</a> API. For information
         * about updating this limit, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling service quotas</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For introductory exercises for creating an Auto Scaling group,
         * see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/GettingStartedTutorial.html">Getting
         * started with Amazon EC2 Auto Scaling</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-register-lbs-with-asg.html">Tutorial:
         * Set up a scaled and load-balanced application</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroup.html">Auto
         * Scaling groups</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
         * <p>Every Auto Scaling group has three size parameters
         * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
         * Usually, you set these sizes based on a specific number of instances. However,
         * if you configure a mixed instances policy that defines weights for the instance
         * types, you must specify these sizes with the same units that you use for
         * weighting instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAutoScalingGroupOutcomeCallable CreateAutoScalingGroupCallable(const Model::CreateAutoScalingGroupRequest& request) const;

        /**
         * <p> <b>We strongly recommend using a launch template when calling this operation
         * to ensure full functionality for Amazon EC2 Auto Scaling and Amazon EC2.</b>
         * </p> <p>Creates an Auto Scaling group with the specified name and attributes.
         * </p> <p>If you exceed your maximum limit of Auto Scaling groups, the call fails.
         * To query this limit, call the <a>DescribeAccountLimits</a> API. For information
         * about updating this limit, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling service quotas</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For introductory exercises for creating an Auto Scaling group,
         * see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/GettingStartedTutorial.html">Getting
         * started with Amazon EC2 Auto Scaling</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-register-lbs-with-asg.html">Tutorial:
         * Set up a scaled and load-balanced application</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroup.html">Auto
         * Scaling groups</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
         * <p>Every Auto Scaling group has three size parameters
         * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
         * Usually, you set these sizes based on a specific number of instances. However,
         * if you configure a mixed instances policy that defines weights for the instance
         * types, you must specify these sizes with the same units that you use for
         * weighting instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAutoScalingGroupAsync(const Model::CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of
         * launch configurations, the call fails. To query this limit, call the
         * <a>DescribeAccountLimits</a> API. For information about updating this limit, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling service quotas</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchConfiguration.html">Launch
         * configurations</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchConfigurationOutcome CreateLaunchConfiguration(const Model::CreateLaunchConfigurationRequest& request) const;

        /**
         * <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of
         * launch configurations, the call fails. To query this limit, call the
         * <a>DescribeAccountLimits</a> API. For information about updating this limit, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling service quotas</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchConfiguration.html">Launch
         * configurations</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLaunchConfigurationOutcomeCallable CreateLaunchConfigurationCallable(const Model::CreateLaunchConfigurationRequest& request) const;

        /**
         * <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of
         * launch configurations, the call fails. To query this limit, call the
         * <a>DescribeAccountLimits</a> API. For information about updating this limit, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling service quotas</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchConfiguration.html">Launch
         * configurations</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLaunchConfigurationAsync(const Model::CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates tags for the specified Auto Scaling group.</p> <p>When you
         * specify a tag with a key that already exists, the operation overwrites the
         * previous tag definition, and you do not get an error message.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
         * Auto Scaling groups and instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateOrUpdateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrUpdateTagsOutcome CreateOrUpdateTags(const Model::CreateOrUpdateTagsRequest& request) const;

        /**
         * <p>Creates or updates tags for the specified Auto Scaling group.</p> <p>When you
         * specify a tag with a key that already exists, the operation overwrites the
         * previous tag definition, and you do not get an error message.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
         * Auto Scaling groups and instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateOrUpdateTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOrUpdateTagsOutcomeCallable CreateOrUpdateTagsCallable(const Model::CreateOrUpdateTagsRequest& request) const;

        /**
         * <p>Creates or updates tags for the specified Auto Scaling group.</p> <p>When you
         * specify a tag with a key that already exists, the operation overwrites the
         * previous tag definition, and you do not get an error message.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
         * Auto Scaling groups and instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateOrUpdateTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOrUpdateTagsAsync(const Model::CreateOrUpdateTagsRequest& request, const CreateOrUpdateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Auto Scaling group.</p> <p>If the group has instances
         * or scaling activities in progress, you must specify the option to force the
         * deletion in order for it to succeed.</p> <p>If the group has policies, deleting
         * the group deletes the policies, the underlying alarm actions, and any alarm that
         * no longer has an associated action.</p> <p>To remove instances from the Auto
         * Scaling group before deleting it, call the <a>DetachInstances</a> API with the
         * list of instances and the option to decrement the desired capacity. This ensures
         * that Amazon EC2 Auto Scaling does not launch replacement instances.</p> <p>To
         * terminate all instances before deleting the Auto Scaling group, call the
         * <a>UpdateAutoScalingGroup</a> API and set the minimum size and desired capacity
         * of the Auto Scaling group to zero.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteAutoScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAutoScalingGroupOutcome DeleteAutoScalingGroup(const Model::DeleteAutoScalingGroupRequest& request) const;

        /**
         * <p>Deletes the specified Auto Scaling group.</p> <p>If the group has instances
         * or scaling activities in progress, you must specify the option to force the
         * deletion in order for it to succeed.</p> <p>If the group has policies, deleting
         * the group deletes the policies, the underlying alarm actions, and any alarm that
         * no longer has an associated action.</p> <p>To remove instances from the Auto
         * Scaling group before deleting it, call the <a>DetachInstances</a> API with the
         * list of instances and the option to decrement the desired capacity. This ensures
         * that Amazon EC2 Auto Scaling does not launch replacement instances.</p> <p>To
         * terminate all instances before deleting the Auto Scaling group, call the
         * <a>UpdateAutoScalingGroup</a> API and set the minimum size and desired capacity
         * of the Auto Scaling group to zero.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAutoScalingGroupOutcomeCallable DeleteAutoScalingGroupCallable(const Model::DeleteAutoScalingGroupRequest& request) const;

        /**
         * <p>Deletes the specified Auto Scaling group.</p> <p>If the group has instances
         * or scaling activities in progress, you must specify the option to force the
         * deletion in order for it to succeed.</p> <p>If the group has policies, deleting
         * the group deletes the policies, the underlying alarm actions, and any alarm that
         * no longer has an associated action.</p> <p>To remove instances from the Auto
         * Scaling group before deleting it, call the <a>DetachInstances</a> API with the
         * list of instances and the option to decrement the desired capacity. This ensures
         * that Amazon EC2 Auto Scaling does not launch replacement instances.</p> <p>To
         * terminate all instances before deleting the Auto Scaling group, call the
         * <a>UpdateAutoScalingGroup</a> API and set the minimum size and desired capacity
         * of the Auto Scaling group to zero.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAutoScalingGroupAsync(const Model::DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified launch configuration.</p> <p>The launch configuration
         * must not be attached to an Auto Scaling group. When this call completes, the
         * launch configuration is no longer available for use.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchConfigurationOutcome DeleteLaunchConfiguration(const Model::DeleteLaunchConfigurationRequest& request) const;

        /**
         * <p>Deletes the specified launch configuration.</p> <p>The launch configuration
         * must not be attached to an Auto Scaling group. When this call completes, the
         * launch configuration is no longer available for use.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLaunchConfigurationOutcomeCallable DeleteLaunchConfigurationCallable(const Model::DeleteLaunchConfigurationRequest& request) const;

        /**
         * <p>Deletes the specified launch configuration.</p> <p>The launch configuration
         * must not be attached to an Auto Scaling group. When this call completes, the
         * launch configuration is no longer available for use.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLaunchConfigurationAsync(const Model::DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified lifecycle hook.</p> <p>If there are any outstanding
         * lifecycle actions, they are completed first (<code>ABANDON</code> for launching
         * instances, <code>CONTINUE</code> for terminating instances).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteLifecycleHook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLifecycleHookOutcome DeleteLifecycleHook(const Model::DeleteLifecycleHookRequest& request) const;

        /**
         * <p>Deletes the specified lifecycle hook.</p> <p>If there are any outstanding
         * lifecycle actions, they are completed first (<code>ABANDON</code> for launching
         * instances, <code>CONTINUE</code> for terminating instances).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteLifecycleHook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLifecycleHookOutcomeCallable DeleteLifecycleHookCallable(const Model::DeleteLifecycleHookRequest& request) const;

        /**
         * <p>Deletes the specified lifecycle hook.</p> <p>If there are any outstanding
         * lifecycle actions, they are completed first (<code>ABANDON</code> for launching
         * instances, <code>CONTINUE</code> for terminating instances).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteLifecycleHook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLifecycleHookAsync(const Model::DeleteLifecycleHookRequest& request, const DeleteLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationConfigurationOutcome DeleteNotificationConfiguration(const Model::DeleteNotificationConfigurationRequest& request) const;

        /**
         * <p>Deletes the specified notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteNotificationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotificationConfigurationOutcomeCallable DeleteNotificationConfigurationCallable(const Model::DeleteNotificationConfigurationRequest& request) const;

        /**
         * <p>Deletes the specified notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteNotificationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotificationConfigurationAsync(const Model::DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified scaling policy.</p> <p>Deleting either a step scaling
         * policy or a simple scaling policy deletes the underlying alarm action, but does
         * not delete the alarm, even if it no longer has an associated action.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/deleting-scaling-policy.html">Deleting
         * a scaling policy</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified scaling policy.</p> <p>Deleting either a step scaling
         * policy or a simple scaling policy deletes the underlying alarm action, but does
         * not delete the alarm, even if it no longer has an associated action.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/deleting-scaling-policy.html">Deleting
         * a scaling policy</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeletePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified scaling policy.</p> <p>Deleting either a step scaling
         * policy or a simple scaling policy deletes the underlying alarm action, but does
         * not delete the alarm, even if it no longer has an associated action.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/deleting-scaling-policy.html">Deleting
         * a scaling policy</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeletePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified scheduled action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest& request) const;

        /**
         * <p>Deletes the specified scheduled action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteScheduledAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduledActionOutcomeCallable DeleteScheduledActionCallable(const Model::DeleteScheduledActionRequest& request) const;

        /**
         * <p>Deletes the specified scheduled action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteScheduledAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduledActionAsync(const Model::DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the warm pool for the specified Auto Scaling group.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteWarmPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWarmPoolOutcome DeleteWarmPool(const Model::DeleteWarmPoolRequest& request) const;

        /**
         * <p>Deletes the warm pool for the specified Auto Scaling group.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteWarmPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWarmPoolOutcomeCallable DeleteWarmPoolCallable(const Model::DeleteWarmPoolRequest& request) const;

        /**
         * <p>Deletes the warm pool for the specified Auto Scaling group.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeleteWarmPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWarmPoolAsync(const Model::DeleteWarmPoolRequest& request, const DeleteWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the current Amazon EC2 Auto Scaling resource quotas for your
         * account.</p> <p>When you establish an account, the account has initial quotas on
         * the maximum number of Auto Scaling groups and launch configurations that you can
         * create in a given Region. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling service quotas</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Describes the current Amazon EC2 Auto Scaling resource quotas for your
         * account.</p> <p>When you establish an account, the account has initial quotas on
         * the maximum number of Auto Scaling groups and launch configurations that you can
         * create in a given Region. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling service quotas</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Describes the current Amazon EC2 Auto Scaling resource quotas for your
         * account.</p> <p>When you establish an account, the account has initial quotas on
         * the maximum number of Auto Scaling groups and launch configurations that you can
         * create in a given Region. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling service quotas</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available adjustment types for step scaling and simple scaling
         * policies.</p> <p>The following adjustment types are supported:</p> <ul> <li> <p>
         * <code>ChangeInCapacity</code> </p> </li> <li> <p> <code>ExactCapacity</code>
         * </p> </li> <li> <p> <code>PercentChangeInCapacity</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAdjustmentTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAdjustmentTypesOutcome DescribeAdjustmentTypes(const Model::DescribeAdjustmentTypesRequest& request) const;

        /**
         * <p>Describes the available adjustment types for step scaling and simple scaling
         * policies.</p> <p>The following adjustment types are supported:</p> <ul> <li> <p>
         * <code>ChangeInCapacity</code> </p> </li> <li> <p> <code>ExactCapacity</code>
         * </p> </li> <li> <p> <code>PercentChangeInCapacity</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAdjustmentTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAdjustmentTypesOutcomeCallable DescribeAdjustmentTypesCallable(const Model::DescribeAdjustmentTypesRequest& request) const;

        /**
         * <p>Describes the available adjustment types for step scaling and simple scaling
         * policies.</p> <p>The following adjustment types are supported:</p> <ul> <li> <p>
         * <code>ChangeInCapacity</code> </p> </li> <li> <p> <code>ExactCapacity</code>
         * </p> </li> <li> <p> <code>PercentChangeInCapacity</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAdjustmentTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAdjustmentTypesAsync(const Model::DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the Auto Scaling groups in the account and Region.</p>
         * <p>This operation returns information about instances in Auto Scaling groups. To
         * retrieve information about the instances in a warm pool, you must call the
         * <a>DescribeWarmPool</a> API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingGroupsOutcome DescribeAutoScalingGroups(const Model::DescribeAutoScalingGroupsRequest& request) const;

        /**
         * <p>Gets information about the Auto Scaling groups in the account and Region.</p>
         * <p>This operation returns information about instances in Auto Scaling groups. To
         * retrieve information about the instances in a warm pool, you must call the
         * <a>DescribeWarmPool</a> API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutoScalingGroupsOutcomeCallable DescribeAutoScalingGroupsCallable(const Model::DescribeAutoScalingGroupsRequest& request) const;

        /**
         * <p>Gets information about the Auto Scaling groups in the account and Region.</p>
         * <p>This operation returns information about instances in Auto Scaling groups. To
         * retrieve information about the instances in a warm pool, you must call the
         * <a>DescribeWarmPool</a> API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAutoScalingGroupsAsync(const Model::DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the Auto Scaling instances in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingInstancesOutcome DescribeAutoScalingInstances(const Model::DescribeAutoScalingInstancesRequest& request) const;

        /**
         * <p>Gets information about the Auto Scaling instances in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutoScalingInstancesOutcomeCallable DescribeAutoScalingInstancesCallable(const Model::DescribeAutoScalingInstancesRequest& request) const;

        /**
         * <p>Gets information about the Auto Scaling instances in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAutoScalingInstancesAsync(const Model::DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the notification types that are supported by Amazon EC2 Auto
         * Scaling.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingNotificationTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingNotificationTypesOutcome DescribeAutoScalingNotificationTypes(const Model::DescribeAutoScalingNotificationTypesRequest& request) const;

        /**
         * <p>Describes the notification types that are supported by Amazon EC2 Auto
         * Scaling.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingNotificationTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutoScalingNotificationTypesOutcomeCallable DescribeAutoScalingNotificationTypesCallable(const Model::DescribeAutoScalingNotificationTypesRequest& request) const;

        /**
         * <p>Describes the notification types that are supported by Amazon EC2 Auto
         * Scaling.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingNotificationTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAutoScalingNotificationTypesAsync(const Model::DescribeAutoScalingNotificationTypesRequest& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the instance refreshes for the specified Auto Scaling
         * group.</p> <p>This operation is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group after you make configuration changes.</p> <p>To help
         * you determine the status of an instance refresh, this operation returns
         * information about the instance refreshes you previously initiated, including
         * their status, end time, the percentage of the instance refresh that is complete,
         * and the number of instances remaining to update before the instance refresh is
         * complete.</p> <p>The following are the possible statuses: </p> <ul> <li> <p>
         * <code>Pending</code> - The request was created, but the operation has not
         * started.</p> </li> <li> <p> <code>InProgress</code> - The operation is in
         * progress.</p> </li> <li> <p> <code>Successful</code> - The operation completed
         * successfully.</p> </li> <li> <p> <code>Failed</code> - The operation failed to
         * complete. You can troubleshoot using the status reason and the scaling
         * activities. </p> </li> <li> <p> <code>Cancelling</code> - An ongoing operation
         * is being cancelled. Cancellation does not roll back any replacements that have
         * already been completed, but it prevents new replacements from being started.
         * </p> </li> <li> <p> <code>Cancelled</code> - The operation is cancelled. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeInstanceRefreshes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceRefreshesOutcome DescribeInstanceRefreshes(const Model::DescribeInstanceRefreshesRequest& request) const;

        /**
         * <p>Gets information about the instance refreshes for the specified Auto Scaling
         * group.</p> <p>This operation is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group after you make configuration changes.</p> <p>To help
         * you determine the status of an instance refresh, this operation returns
         * information about the instance refreshes you previously initiated, including
         * their status, end time, the percentage of the instance refresh that is complete,
         * and the number of instances remaining to update before the instance refresh is
         * complete.</p> <p>The following are the possible statuses: </p> <ul> <li> <p>
         * <code>Pending</code> - The request was created, but the operation has not
         * started.</p> </li> <li> <p> <code>InProgress</code> - The operation is in
         * progress.</p> </li> <li> <p> <code>Successful</code> - The operation completed
         * successfully.</p> </li> <li> <p> <code>Failed</code> - The operation failed to
         * complete. You can troubleshoot using the status reason and the scaling
         * activities. </p> </li> <li> <p> <code>Cancelling</code> - An ongoing operation
         * is being cancelled. Cancellation does not roll back any replacements that have
         * already been completed, but it prevents new replacements from being started.
         * </p> </li> <li> <p> <code>Cancelled</code> - The operation is cancelled. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeInstanceRefreshes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceRefreshesOutcomeCallable DescribeInstanceRefreshesCallable(const Model::DescribeInstanceRefreshesRequest& request) const;

        /**
         * <p>Gets information about the instance refreshes for the specified Auto Scaling
         * group.</p> <p>This operation is part of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group after you make configuration changes.</p> <p>To help
         * you determine the status of an instance refresh, this operation returns
         * information about the instance refreshes you previously initiated, including
         * their status, end time, the percentage of the instance refresh that is complete,
         * and the number of instances remaining to update before the instance refresh is
         * complete.</p> <p>The following are the possible statuses: </p> <ul> <li> <p>
         * <code>Pending</code> - The request was created, but the operation has not
         * started.</p> </li> <li> <p> <code>InProgress</code> - The operation is in
         * progress.</p> </li> <li> <p> <code>Successful</code> - The operation completed
         * successfully.</p> </li> <li> <p> <code>Failed</code> - The operation failed to
         * complete. You can troubleshoot using the status reason and the scaling
         * activities. </p> </li> <li> <p> <code>Cancelling</code> - An ongoing operation
         * is being cancelled. Cancellation does not roll back any replacements that have
         * already been completed, but it prevents new replacements from being started.
         * </p> </li> <li> <p> <code>Cancelled</code> - The operation is cancelled. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeInstanceRefreshes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceRefreshesAsync(const Model::DescribeInstanceRefreshesRequest& request, const DescribeInstanceRefreshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the launch configurations in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLaunchConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLaunchConfigurationsOutcome DescribeLaunchConfigurations(const Model::DescribeLaunchConfigurationsRequest& request) const;

        /**
         * <p>Gets information about the launch configurations in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLaunchConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLaunchConfigurationsOutcomeCallable DescribeLaunchConfigurationsCallable(const Model::DescribeLaunchConfigurationsRequest& request) const;

        /**
         * <p>Gets information about the launch configurations in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLaunchConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLaunchConfigurationsAsync(const Model::DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available types of lifecycle hooks.</p> <p>The following hook
         * types are supported:</p> <ul> <li> <p>
         * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> </p> </li> <li> <p>
         * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHookTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLifecycleHookTypesOutcome DescribeLifecycleHookTypes(const Model::DescribeLifecycleHookTypesRequest& request) const;

        /**
         * <p>Describes the available types of lifecycle hooks.</p> <p>The following hook
         * types are supported:</p> <ul> <li> <p>
         * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> </p> </li> <li> <p>
         * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHookTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLifecycleHookTypesOutcomeCallable DescribeLifecycleHookTypesCallable(const Model::DescribeLifecycleHookTypesRequest& request) const;

        /**
         * <p>Describes the available types of lifecycle hooks.</p> <p>The following hook
         * types are supported:</p> <ul> <li> <p>
         * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> </p> </li> <li> <p>
         * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHookTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLifecycleHookTypesAsync(const Model::DescribeLifecycleHookTypesRequest& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the lifecycle hooks for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHooks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLifecycleHooksOutcome DescribeLifecycleHooks(const Model::DescribeLifecycleHooksRequest& request) const;

        /**
         * <p>Gets information about the lifecycle hooks for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHooks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLifecycleHooksOutcomeCallable DescribeLifecycleHooksCallable(const Model::DescribeLifecycleHooksRequest& request) const;

        /**
         * <p>Gets information about the lifecycle hooks for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHooks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLifecycleHooksAsync(const Model::DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the load balancer target groups for the specified Auto
         * Scaling group.</p> <p>To determine the availability of registered instances, use
         * the <code>State</code> element in the response. When you attach a target group
         * to an Auto Scaling group, the initial <code>State</code> value is
         * <code>Adding</code>. The state transitions to <code>Added</code> after all Auto
         * Scaling instances are registered with the target group. If Elastic Load
         * Balancing health checks are enabled for the Auto Scaling group, the state
         * transitions to <code>InService</code> after at least one Auto Scaling instance
         * passes the health check. When the target group is in the <code>InService</code>
         * state, Amazon EC2 Auto Scaling can terminate and replace any instances that are
         * reported as unhealthy. If no registered instances pass the health checks, the
         * target group doesn't enter the <code>InService</code> state. </p> <p>Target
         * groups also have an <code>InService</code> state if you attach them in the
         * <a>CreateAutoScalingGroup</a> API call. If your target group state is
         * <code>InService</code>, but it is not working properly, check the scaling
         * activities by calling <a>DescribeScalingActivities</a> and take any corrective
         * actions necessary.</p> <p>For help with failed health checks, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ts-as-healthchecks.html">Troubleshooting
         * Amazon EC2 Auto Scaling: Health checks</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancerTargetGroupsOutcome DescribeLoadBalancerTargetGroups(const Model::DescribeLoadBalancerTargetGroupsRequest& request) const;

        /**
         * <p>Gets information about the load balancer target groups for the specified Auto
         * Scaling group.</p> <p>To determine the availability of registered instances, use
         * the <code>State</code> element in the response. When you attach a target group
         * to an Auto Scaling group, the initial <code>State</code> value is
         * <code>Adding</code>. The state transitions to <code>Added</code> after all Auto
         * Scaling instances are registered with the target group. If Elastic Load
         * Balancing health checks are enabled for the Auto Scaling group, the state
         * transitions to <code>InService</code> after at least one Auto Scaling instance
         * passes the health check. When the target group is in the <code>InService</code>
         * state, Amazon EC2 Auto Scaling can terminate and replace any instances that are
         * reported as unhealthy. If no registered instances pass the health checks, the
         * target group doesn't enter the <code>InService</code> state. </p> <p>Target
         * groups also have an <code>InService</code> state if you attach them in the
         * <a>CreateAutoScalingGroup</a> API call. If your target group state is
         * <code>InService</code>, but it is not working properly, check the scaling
         * activities by calling <a>DescribeScalingActivities</a> and take any corrective
         * actions necessary.</p> <p>For help with failed health checks, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ts-as-healthchecks.html">Troubleshooting
         * Amazon EC2 Auto Scaling: Health checks</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancerTargetGroupsOutcomeCallable DescribeLoadBalancerTargetGroupsCallable(const Model::DescribeLoadBalancerTargetGroupsRequest& request) const;

        /**
         * <p>Gets information about the load balancer target groups for the specified Auto
         * Scaling group.</p> <p>To determine the availability of registered instances, use
         * the <code>State</code> element in the response. When you attach a target group
         * to an Auto Scaling group, the initial <code>State</code> value is
         * <code>Adding</code>. The state transitions to <code>Added</code> after all Auto
         * Scaling instances are registered with the target group. If Elastic Load
         * Balancing health checks are enabled for the Auto Scaling group, the state
         * transitions to <code>InService</code> after at least one Auto Scaling instance
         * passes the health check. When the target group is in the <code>InService</code>
         * state, Amazon EC2 Auto Scaling can terminate and replace any instances that are
         * reported as unhealthy. If no registered instances pass the health checks, the
         * target group doesn't enter the <code>InService</code> state. </p> <p>Target
         * groups also have an <code>InService</code> state if you attach them in the
         * <a>CreateAutoScalingGroup</a> API call. If your target group state is
         * <code>InService</code>, but it is not working properly, check the scaling
         * activities by calling <a>DescribeScalingActivities</a> and take any corrective
         * actions necessary.</p> <p>For help with failed health checks, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ts-as-healthchecks.html">Troubleshooting
         * Amazon EC2 Auto Scaling: Health checks</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancerTargetGroupsAsync(const Model::DescribeLoadBalancerTargetGroupsRequest& request, const DescribeLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the load balancers for the specified Auto Scaling
         * group.</p> <p>This operation describes only Classic Load Balancers. If you have
         * Application Load Balancers, Network Load Balancers, or Gateway Load Balancers,
         * use the <a>DescribeLoadBalancerTargetGroups</a> API instead.</p> <p>To determine
         * the availability of registered instances, use the <code>State</code> element in
         * the response. When you attach a load balancer to an Auto Scaling group, the
         * initial <code>State</code> value is <code>Adding</code>. The state transitions
         * to <code>Added</code> after all Auto Scaling instances are registered with the
         * load balancer. If Elastic Load Balancing health checks are enabled for the Auto
         * Scaling group, the state transitions to <code>InService</code> after at least
         * one Auto Scaling instance passes the health check. When the load balancer is in
         * the <code>InService</code> state, Amazon EC2 Auto Scaling can terminate and
         * replace any instances that are reported as unhealthy. If no registered instances
         * pass the health checks, the load balancer doesn't enter the
         * <code>InService</code> state. </p> <p>Load balancers also have an
         * <code>InService</code> state if you attach them in the
         * <a>CreateAutoScalingGroup</a> API call. If your load balancer state is
         * <code>InService</code>, but it is not working properly, check the scaling
         * activities by calling <a>DescribeScalingActivities</a> and take any corrective
         * actions necessary.</p> <p>For help with failed health checks, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ts-as-healthchecks.html">Troubleshooting
         * Amazon EC2 Auto Scaling: Health checks</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * <p>Gets information about the load balancers for the specified Auto Scaling
         * group.</p> <p>This operation describes only Classic Load Balancers. If you have
         * Application Load Balancers, Network Load Balancers, or Gateway Load Balancers,
         * use the <a>DescribeLoadBalancerTargetGroups</a> API instead.</p> <p>To determine
         * the availability of registered instances, use the <code>State</code> element in
         * the response. When you attach a load balancer to an Auto Scaling group, the
         * initial <code>State</code> value is <code>Adding</code>. The state transitions
         * to <code>Added</code> after all Auto Scaling instances are registered with the
         * load balancer. If Elastic Load Balancing health checks are enabled for the Auto
         * Scaling group, the state transitions to <code>InService</code> after at least
         * one Auto Scaling instance passes the health check. When the load balancer is in
         * the <code>InService</code> state, Amazon EC2 Auto Scaling can terminate and
         * replace any instances that are reported as unhealthy. If no registered instances
         * pass the health checks, the load balancer doesn't enter the
         * <code>InService</code> state. </p> <p>Load balancers also have an
         * <code>InService</code> state if you attach them in the
         * <a>CreateAutoScalingGroup</a> API call. If your load balancer state is
         * <code>InService</code>, but it is not working properly, check the scaling
         * activities by calling <a>DescribeScalingActivities</a> and take any corrective
         * actions necessary.</p> <p>For help with failed health checks, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ts-as-healthchecks.html">Troubleshooting
         * Amazon EC2 Auto Scaling: Health checks</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * <p>Gets information about the load balancers for the specified Auto Scaling
         * group.</p> <p>This operation describes only Classic Load Balancers. If you have
         * Application Load Balancers, Network Load Balancers, or Gateway Load Balancers,
         * use the <a>DescribeLoadBalancerTargetGroups</a> API instead.</p> <p>To determine
         * the availability of registered instances, use the <code>State</code> element in
         * the response. When you attach a load balancer to an Auto Scaling group, the
         * initial <code>State</code> value is <code>Adding</code>. The state transitions
         * to <code>Added</code> after all Auto Scaling instances are registered with the
         * load balancer. If Elastic Load Balancing health checks are enabled for the Auto
         * Scaling group, the state transitions to <code>InService</code> after at least
         * one Auto Scaling instance passes the health check. When the load balancer is in
         * the <code>InService</code> state, Amazon EC2 Auto Scaling can terminate and
         * replace any instances that are reported as unhealthy. If no registered instances
         * pass the health checks, the load balancer doesn't enter the
         * <code>InService</code> state. </p> <p>Load balancers also have an
         * <code>InService</code> state if you attach them in the
         * <a>CreateAutoScalingGroup</a> API call. If your load balancer state is
         * <code>InService</code>, but it is not working properly, check the scaling
         * activities by calling <a>DescribeScalingActivities</a> and take any corrective
         * actions necessary.</p> <p>For help with failed health checks, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ts-as-healthchecks.html">Troubleshooting
         * Amazon EC2 Auto Scaling: Health checks</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic
         * Load Balancing and Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available CloudWatch metrics for Amazon EC2 Auto Scaling.</p>
         * <p>The <code>GroupStandbyInstances</code> metric is not returned by default. You
         * must explicitly request this metric when calling the
         * <a>EnableMetricsCollection</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeMetricCollectionTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricCollectionTypesOutcome DescribeMetricCollectionTypes(const Model::DescribeMetricCollectionTypesRequest& request) const;

        /**
         * <p>Describes the available CloudWatch metrics for Amazon EC2 Auto Scaling.</p>
         * <p>The <code>GroupStandbyInstances</code> metric is not returned by default. You
         * must explicitly request this metric when calling the
         * <a>EnableMetricsCollection</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeMetricCollectionTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMetricCollectionTypesOutcomeCallable DescribeMetricCollectionTypesCallable(const Model::DescribeMetricCollectionTypesRequest& request) const;

        /**
         * <p>Describes the available CloudWatch metrics for Amazon EC2 Auto Scaling.</p>
         * <p>The <code>GroupStandbyInstances</code> metric is not returned by default. You
         * must explicitly request this metric when calling the
         * <a>EnableMetricsCollection</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeMetricCollectionTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMetricCollectionTypesAsync(const Model::DescribeMetricCollectionTypesRequest& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the Amazon SNS notifications that are configured for
         * one or more Auto Scaling groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeNotificationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationConfigurationsOutcome DescribeNotificationConfigurations(const Model::DescribeNotificationConfigurationsRequest& request) const;

        /**
         * <p>Gets information about the Amazon SNS notifications that are configured for
         * one or more Auto Scaling groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeNotificationConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotificationConfigurationsOutcomeCallable DescribeNotificationConfigurationsCallable(const Model::DescribeNotificationConfigurationsRequest& request) const;

        /**
         * <p>Gets information about the Amazon SNS notifications that are configured for
         * one or more Auto Scaling groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeNotificationConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotificationConfigurationsAsync(const Model::DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the scaling policies in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePoliciesOutcome DescribePolicies(const Model::DescribePoliciesRequest& request) const;

        /**
         * <p>Gets information about the scaling policies in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribePolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePoliciesOutcomeCallable DescribePoliciesCallable(const Model::DescribePoliciesRequest& request) const;

        /**
         * <p>Gets information about the scaling policies in the account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribePolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePoliciesAsync(const Model::DescribePoliciesRequest& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the scaling activities in the account and Region.</p>
         * <p>When scaling events occur, you see a record of the scaling activity in the
         * scaling activities. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-verify-scaling-activity.html">Verifying
         * a scaling activity for an Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p> <p>If the scaling event succeeds, the value of the
         * <code>StatusCode</code> element in the response is <code>Successful</code>. If
         * an attempt to launch instances failed, the <code>StatusCode</code> value is
         * <code>Failed</code> or <code>Cancelled</code> and the <code>StatusMessage</code>
         * element in the response indicates the cause of the failure. For help
         * interpreting the <code>StatusMessage</code>, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/CHAP_Troubleshooting.html">Troubleshooting
         * Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingActivitiesOutcome DescribeScalingActivities(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * <p>Gets information about the scaling activities in the account and Region.</p>
         * <p>When scaling events occur, you see a record of the scaling activity in the
         * scaling activities. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-verify-scaling-activity.html">Verifying
         * a scaling activity for an Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p> <p>If the scaling event succeeds, the value of the
         * <code>StatusCode</code> element in the response is <code>Successful</code>. If
         * an attempt to launch instances failed, the <code>StatusCode</code> value is
         * <code>Failed</code> or <code>Cancelled</code> and the <code>StatusMessage</code>
         * element in the response indicates the cause of the failure. For help
         * interpreting the <code>StatusMessage</code>, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/CHAP_Troubleshooting.html">Troubleshooting
         * Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingActivities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingActivitiesOutcomeCallable DescribeScalingActivitiesCallable(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * <p>Gets information about the scaling activities in the account and Region.</p>
         * <p>When scaling events occur, you see a record of the scaling activity in the
         * scaling activities. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-verify-scaling-activity.html">Verifying
         * a scaling activity for an Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p> <p>If the scaling event succeeds, the value of the
         * <code>StatusCode</code> element in the response is <code>Successful</code>. If
         * an attempt to launch instances failed, the <code>StatusCode</code> value is
         * <code>Failed</code> or <code>Cancelled</code> and the <code>StatusMessage</code>
         * element in the response indicates the cause of the failure. For help
         * interpreting the <code>StatusMessage</code>, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/CHAP_Troubleshooting.html">Troubleshooting
         * Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingActivities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingActivitiesAsync(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the scaling process types for use with the <a>ResumeProcesses</a>
         * and <a>SuspendProcesses</a> APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingProcessTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingProcessTypesOutcome DescribeScalingProcessTypes(const Model::DescribeScalingProcessTypesRequest& request) const;

        /**
         * <p>Describes the scaling process types for use with the <a>ResumeProcesses</a>
         * and <a>SuspendProcesses</a> APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingProcessTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingProcessTypesOutcomeCallable DescribeScalingProcessTypesCallable(const Model::DescribeScalingProcessTypesRequest& request) const;

        /**
         * <p>Describes the scaling process types for use with the <a>ResumeProcesses</a>
         * and <a>SuspendProcesses</a> APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingProcessTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingProcessTypesAsync(const Model::DescribeScalingProcessTypesRequest& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the scheduled actions that haven't run or that have
         * not reached their end time.</p> <p>To describe the scaling activities for
         * scheduled actions that have already run, call the
         * <a>DescribeScalingActivities</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScheduledActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledActionsOutcome DescribeScheduledActions(const Model::DescribeScheduledActionsRequest& request) const;

        /**
         * <p>Gets information about the scheduled actions that haven't run or that have
         * not reached their end time.</p> <p>To describe the scaling activities for
         * scheduled actions that have already run, call the
         * <a>DescribeScalingActivities</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScheduledActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduledActionsOutcomeCallable DescribeScheduledActionsCallable(const Model::DescribeScheduledActionsRequest& request) const;

        /**
         * <p>Gets information about the scheduled actions that haven't run or that have
         * not reached their end time.</p> <p>To describe the scaling activities for
         * scheduled actions that have already run, call the
         * <a>DescribeScalingActivities</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScheduledActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduledActionsAsync(const Model::DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified tags.</p> <p>You can use filters to limit the
         * results. For example, you can query for the tags for a specific Auto Scaling
         * group. You can specify multiple values for a filter. A tag must match at least
         * one of the specified values for it to be included in the results.</p> <p>You can
         * also specify multiple filters. The result includes information for a particular
         * tag only if it matches all the filters. If there's no match, no special message
         * is returned.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
         * Auto Scaling groups and instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the specified tags.</p> <p>You can use filters to limit the
         * results. For example, you can query for the tags for a specific Auto Scaling
         * group. You can specify multiple values for a filter. A tag must match at least
         * one of the specified values for it to be included in the results.</p> <p>You can
         * also specify multiple filters. The result includes information for a particular
         * tag only if it matches all the filters. If there's no match, no special message
         * is returned.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
         * Auto Scaling groups and instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the specified tags.</p> <p>You can use filters to limit the
         * results. For example, you can query for the tags for a specific Auto Scaling
         * group. You can specify multiple values for a filter. A tag must match at least
         * one of the specified values for it to be included in the results.</p> <p>You can
         * also specify multiple filters. The result includes information for a particular
         * tag only if it matches all the filters. If there's no match, no special message
         * is returned.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
         * Auto Scaling groups and instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the termination policies supported by Amazon EC2 Auto Scaling.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
         * which Auto Scaling instances terminate during scale in</a> in the <i>Amazon EC2
         * Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeTerminationPolicyTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTerminationPolicyTypesOutcome DescribeTerminationPolicyTypes(const Model::DescribeTerminationPolicyTypesRequest& request) const;

        /**
         * <p>Describes the termination policies supported by Amazon EC2 Auto Scaling.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
         * which Auto Scaling instances terminate during scale in</a> in the <i>Amazon EC2
         * Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeTerminationPolicyTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTerminationPolicyTypesOutcomeCallable DescribeTerminationPolicyTypesCallable(const Model::DescribeTerminationPolicyTypesRequest& request) const;

        /**
         * <p>Describes the termination policies supported by Amazon EC2 Auto Scaling.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
         * which Auto Scaling instances terminate during scale in</a> in the <i>Amazon EC2
         * Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeTerminationPolicyTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTerminationPolicyTypesAsync(const Model::DescribeTerminationPolicyTypesRequest& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a warm pool and its instances.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeWarmPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWarmPoolOutcome DescribeWarmPool(const Model::DescribeWarmPoolRequest& request) const;

        /**
         * <p>Gets information about a warm pool and its instances.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeWarmPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWarmPoolOutcomeCallable DescribeWarmPoolCallable(const Model::DescribeWarmPoolRequest& request) const;

        /**
         * <p>Gets information about a warm pool and its instances.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeWarmPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWarmPoolAsync(const Model::DescribeWarmPoolRequest& request, const DescribeWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more instances from the specified Auto Scaling group.</p>
         * <p>After the instances are detached, you can manage them independent of the Auto
         * Scaling group.</p> <p>If you do not specify the option to decrement the desired
         * capacity, Amazon EC2 Auto Scaling launches instances to replace the ones that
         * are detached.</p> <p>If there is a Classic Load Balancer attached to the Auto
         * Scaling group, the instances are deregistered from the load balancer. If there
         * are target groups attached to the Auto Scaling group, the instances are
         * deregistered from the target groups.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/detach-instance-asg.html">Detach
         * EC2 instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachInstancesOutcome DetachInstances(const Model::DetachInstancesRequest& request) const;

        /**
         * <p>Removes one or more instances from the specified Auto Scaling group.</p>
         * <p>After the instances are detached, you can manage them independent of the Auto
         * Scaling group.</p> <p>If you do not specify the option to decrement the desired
         * capacity, Amazon EC2 Auto Scaling launches instances to replace the ones that
         * are detached.</p> <p>If there is a Classic Load Balancer attached to the Auto
         * Scaling group, the instances are deregistered from the load balancer. If there
         * are target groups attached to the Auto Scaling group, the instances are
         * deregistered from the target groups.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/detach-instance-asg.html">Detach
         * EC2 instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachInstancesOutcomeCallable DetachInstancesCallable(const Model::DetachInstancesRequest& request) const;

        /**
         * <p>Removes one or more instances from the specified Auto Scaling group.</p>
         * <p>After the instances are detached, you can manage them independent of the Auto
         * Scaling group.</p> <p>If you do not specify the option to decrement the desired
         * capacity, Amazon EC2 Auto Scaling launches instances to replace the ones that
         * are detached.</p> <p>If there is a Classic Load Balancer attached to the Auto
         * Scaling group, the instances are deregistered from the load balancer. If there
         * are target groups attached to the Auto Scaling group, the instances are
         * deregistered from the target groups.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/detach-instance-asg.html">Detach
         * EC2 instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachInstancesAsync(const Model::DetachInstancesRequest& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches one or more target groups from the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachLoadBalancerTargetGroupsOutcome DetachLoadBalancerTargetGroups(const Model::DetachLoadBalancerTargetGroupsRequest& request) const;

        /**
         * <p>Detaches one or more target groups from the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachLoadBalancerTargetGroupsOutcomeCallable DetachLoadBalancerTargetGroupsCallable(const Model::DetachLoadBalancerTargetGroupsRequest& request) const;

        /**
         * <p>Detaches one or more target groups from the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachLoadBalancerTargetGroupsAsync(const Model::DetachLoadBalancerTargetGroupsRequest& request, const DetachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches one or more Classic Load Balancers from the specified Auto Scaling
         * group.</p> <p>This operation detaches only Classic Load Balancers. If you have
         * Application Load Balancers, Network Load Balancers, or Gateway Load Balancers,
         * use the <a>DetachLoadBalancerTargetGroups</a> API instead.</p> <p>When you
         * detach a load balancer, it enters the <code>Removing</code> state while
         * deregistering the instances in the group. When all instances are deregistered,
         * then you can no longer describe the load balancer using the
         * <a>DescribeLoadBalancers</a> API call. The instances remain
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachLoadBalancersOutcome DetachLoadBalancers(const Model::DetachLoadBalancersRequest& request) const;

        /**
         * <p>Detaches one or more Classic Load Balancers from the specified Auto Scaling
         * group.</p> <p>This operation detaches only Classic Load Balancers. If you have
         * Application Load Balancers, Network Load Balancers, or Gateway Load Balancers,
         * use the <a>DetachLoadBalancerTargetGroups</a> API instead.</p> <p>When you
         * detach a load balancer, it enters the <code>Removing</code> state while
         * deregistering the instances in the group. When all instances are deregistered,
         * then you can no longer describe the load balancer using the
         * <a>DescribeLoadBalancers</a> API call. The instances remain
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachLoadBalancersOutcomeCallable DetachLoadBalancersCallable(const Model::DetachLoadBalancersRequest& request) const;

        /**
         * <p>Detaches one or more Classic Load Balancers from the specified Auto Scaling
         * group.</p> <p>This operation detaches only Classic Load Balancers. If you have
         * Application Load Balancers, Network Load Balancers, or Gateway Load Balancers,
         * use the <a>DetachLoadBalancerTargetGroups</a> API instead.</p> <p>When you
         * detach a load balancer, it enters the <code>Removing</code> state while
         * deregistering the instances in the group. When all instances are deregistered,
         * then you can no longer describe the load balancer using the
         * <a>DescribeLoadBalancers</a> API call. The instances remain
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachLoadBalancers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachLoadBalancersAsync(const Model::DetachLoadBalancersRequest& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables group metrics for the specified Auto Scaling group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DisableMetricsCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableMetricsCollectionOutcome DisableMetricsCollection(const Model::DisableMetricsCollectionRequest& request) const;

        /**
         * <p>Disables group metrics for the specified Auto Scaling group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DisableMetricsCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableMetricsCollectionOutcomeCallable DisableMetricsCollectionCallable(const Model::DisableMetricsCollectionRequest& request) const;

        /**
         * <p>Disables group metrics for the specified Auto Scaling group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DisableMetricsCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableMetricsCollectionAsync(const Model::DisableMetricsCollectionRequest& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables group metrics for the specified Auto Scaling group. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-monitoring.html">Monitoring
         * CloudWatch metrics for your Auto Scaling groups and instances</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnableMetricsCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableMetricsCollectionOutcome EnableMetricsCollection(const Model::EnableMetricsCollectionRequest& request) const;

        /**
         * <p>Enables group metrics for the specified Auto Scaling group. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-monitoring.html">Monitoring
         * CloudWatch metrics for your Auto Scaling groups and instances</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnableMetricsCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableMetricsCollectionOutcomeCallable EnableMetricsCollectionCallable(const Model::EnableMetricsCollectionRequest& request) const;

        /**
         * <p>Enables group metrics for the specified Auto Scaling group. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-monitoring.html">Monitoring
         * CloudWatch metrics for your Auto Scaling groups and instances</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnableMetricsCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableMetricsCollectionAsync(const Model::EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves the specified instances into the standby state.</p> <p>If you choose to
         * decrement the desired capacity of the Auto Scaling group, the instances can
         * enter standby as long as the desired capacity of the Auto Scaling group after
         * the instances are placed into standby is equal to or greater than the minimum
         * capacity of the group.</p> <p>If you choose not to decrement the desired
         * capacity of the Auto Scaling group, the Auto Scaling group launches new
         * instances to replace the instances on standby.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * removing instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnterStandby">AWS
         * API Reference</a></p>
         */
        virtual Model::EnterStandbyOutcome EnterStandby(const Model::EnterStandbyRequest& request) const;

        /**
         * <p>Moves the specified instances into the standby state.</p> <p>If you choose to
         * decrement the desired capacity of the Auto Scaling group, the instances can
         * enter standby as long as the desired capacity of the Auto Scaling group after
         * the instances are placed into standby is equal to or greater than the minimum
         * capacity of the group.</p> <p>If you choose not to decrement the desired
         * capacity of the Auto Scaling group, the Auto Scaling group launches new
         * instances to replace the instances on standby.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * removing instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnterStandby">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnterStandbyOutcomeCallable EnterStandbyCallable(const Model::EnterStandbyRequest& request) const;

        /**
         * <p>Moves the specified instances into the standby state.</p> <p>If you choose to
         * decrement the desired capacity of the Auto Scaling group, the instances can
         * enter standby as long as the desired capacity of the Auto Scaling group after
         * the instances are placed into standby is equal to or greater than the minimum
         * capacity of the group.</p> <p>If you choose not to decrement the desired
         * capacity of the Auto Scaling group, the Auto Scaling group launches new
         * instances to replace the instances on standby.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * removing instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnterStandby">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnterStandbyAsync(const Model::EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Executes the specified policy. This can be useful for testing the design of
         * your scaling policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExecutePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecutePolicyOutcome ExecutePolicy(const Model::ExecutePolicyRequest& request) const;

        /**
         * <p>Executes the specified policy. This can be useful for testing the design of
         * your scaling policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExecutePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecutePolicyOutcomeCallable ExecutePolicyCallable(const Model::ExecutePolicyRequest& request) const;

        /**
         * <p>Executes the specified policy. This can be useful for testing the design of
         * your scaling policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExecutePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecutePolicyAsync(const Model::ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves the specified instances out of the standby state.</p> <p>After you put
         * the instances back in service, the desired capacity is incremented.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * removing instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExitStandby">AWS
         * API Reference</a></p>
         */
        virtual Model::ExitStandbyOutcome ExitStandby(const Model::ExitStandbyRequest& request) const;

        /**
         * <p>Moves the specified instances out of the standby state.</p> <p>After you put
         * the instances back in service, the desired capacity is incremented.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * removing instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExitStandby">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExitStandbyOutcomeCallable ExitStandbyCallable(const Model::ExitStandbyRequest& request) const;

        /**
         * <p>Moves the specified instances out of the standby state.</p> <p>After you put
         * the instances back in service, the desired capacity is incremented.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * removing instances from your Auto Scaling group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExitStandby">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExitStandbyAsync(const Model::ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the forecast data for a predictive scaling policy.</p> <p>Load
         * forecasts are predictions of the hourly load values using historical load data
         * from CloudWatch and an analysis of historical trends. Capacity forecasts are
         * represented as predicted values for the minimum capacity that is needed on an
         * hourly basis, based on the hourly load forecast.</p> <p>A minimum of 24 hours of
         * data is required to create the initial forecasts. However, having a full 14 days
         * of historical data results in more accurate forecasts.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-predictive-scaling.html">Predictive
         * scaling for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/GetPredictiveScalingForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPredictiveScalingForecastOutcome GetPredictiveScalingForecast(const Model::GetPredictiveScalingForecastRequest& request) const;

        /**
         * <p>Retrieves the forecast data for a predictive scaling policy.</p> <p>Load
         * forecasts are predictions of the hourly load values using historical load data
         * from CloudWatch and an analysis of historical trends. Capacity forecasts are
         * represented as predicted values for the minimum capacity that is needed on an
         * hourly basis, based on the hourly load forecast.</p> <p>A minimum of 24 hours of
         * data is required to create the initial forecasts. However, having a full 14 days
         * of historical data results in more accurate forecasts.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-predictive-scaling.html">Predictive
         * scaling for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/GetPredictiveScalingForecast">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPredictiveScalingForecastOutcomeCallable GetPredictiveScalingForecastCallable(const Model::GetPredictiveScalingForecastRequest& request) const;

        /**
         * <p>Retrieves the forecast data for a predictive scaling policy.</p> <p>Load
         * forecasts are predictions of the hourly load values using historical load data
         * from CloudWatch and an analysis of historical trends. Capacity forecasts are
         * represented as predicted values for the minimum capacity that is needed on an
         * hourly basis, based on the hourly load forecast.</p> <p>A minimum of 24 hours of
         * data is required to create the initial forecasts. However, having a full 14 days
         * of historical data results in more accurate forecasts.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-predictive-scaling.html">Predictive
         * scaling for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/GetPredictiveScalingForecast">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPredictiveScalingForecastAsync(const Model::GetPredictiveScalingForecastRequest& request, const GetPredictiveScalingForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a lifecycle hook for the specified Auto Scaling group.</p>
         * <p>A lifecycle hook tells Amazon EC2 Auto Scaling to perform an action on an
         * instance when the instance launches (before it is put into service) or as the
         * instance terminates (before it is fully terminated).</p> <p>This step is a part
         * of the procedure for adding a lifecycle hook to an Auto Scaling group:</p> <ol>
         * <li> <p>(Optional) Create a Lambda function and a rule that allows CloudWatch
         * Events to invoke your Lambda function when Amazon EC2 Auto Scaling launches or
         * terminates instances.</p> </li> <li> <p>(Optional) Create a notification target
         * and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
         * topic. The role allows Amazon EC2 Auto Scaling to publish lifecycle
         * notifications to the target.</p> </li> <li> <p> <b>Create the lifecycle hook.
         * Specify whether the hook is used when the instances launch or terminate.</b>
         * </p> </li> <li> <p>If you need more time, record the lifecycle action heartbeat
         * to keep the instance in a pending state using the
         * <a>RecordLifecycleActionHeartbeat</a> API call.</p> </li> <li> <p>If you finish
         * before the timeout period ends, complete the lifecycle action using the
         * <a>CompleteLifecycleAction</a> API call.</p> </li> </ol> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>If you exceed your maximum limit of lifecycle hooks, which by
         * default is 50 per Auto Scaling group, the call fails.</p> <p>You can view the
         * lifecycle hooks for an Auto Scaling group using the
         * <a>DescribeLifecycleHooks</a> API call. If you are no longer using a lifecycle
         * hook, you can delete it by calling the <a>DeleteLifecycleHook</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutLifecycleHook">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLifecycleHookOutcome PutLifecycleHook(const Model::PutLifecycleHookRequest& request) const;

        /**
         * <p>Creates or updates a lifecycle hook for the specified Auto Scaling group.</p>
         * <p>A lifecycle hook tells Amazon EC2 Auto Scaling to perform an action on an
         * instance when the instance launches (before it is put into service) or as the
         * instance terminates (before it is fully terminated).</p> <p>This step is a part
         * of the procedure for adding a lifecycle hook to an Auto Scaling group:</p> <ol>
         * <li> <p>(Optional) Create a Lambda function and a rule that allows CloudWatch
         * Events to invoke your Lambda function when Amazon EC2 Auto Scaling launches or
         * terminates instances.</p> </li> <li> <p>(Optional) Create a notification target
         * and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
         * topic. The role allows Amazon EC2 Auto Scaling to publish lifecycle
         * notifications to the target.</p> </li> <li> <p> <b>Create the lifecycle hook.
         * Specify whether the hook is used when the instances launch or terminate.</b>
         * </p> </li> <li> <p>If you need more time, record the lifecycle action heartbeat
         * to keep the instance in a pending state using the
         * <a>RecordLifecycleActionHeartbeat</a> API call.</p> </li> <li> <p>If you finish
         * before the timeout period ends, complete the lifecycle action using the
         * <a>CompleteLifecycleAction</a> API call.</p> </li> </ol> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>If you exceed your maximum limit of lifecycle hooks, which by
         * default is 50 per Auto Scaling group, the call fails.</p> <p>You can view the
         * lifecycle hooks for an Auto Scaling group using the
         * <a>DescribeLifecycleHooks</a> API call. If you are no longer using a lifecycle
         * hook, you can delete it by calling the <a>DeleteLifecycleHook</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutLifecycleHook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLifecycleHookOutcomeCallable PutLifecycleHookCallable(const Model::PutLifecycleHookRequest& request) const;

        /**
         * <p>Creates or updates a lifecycle hook for the specified Auto Scaling group.</p>
         * <p>A lifecycle hook tells Amazon EC2 Auto Scaling to perform an action on an
         * instance when the instance launches (before it is put into service) or as the
         * instance terminates (before it is fully terminated).</p> <p>This step is a part
         * of the procedure for adding a lifecycle hook to an Auto Scaling group:</p> <ol>
         * <li> <p>(Optional) Create a Lambda function and a rule that allows CloudWatch
         * Events to invoke your Lambda function when Amazon EC2 Auto Scaling launches or
         * terminates instances.</p> </li> <li> <p>(Optional) Create a notification target
         * and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
         * topic. The role allows Amazon EC2 Auto Scaling to publish lifecycle
         * notifications to the target.</p> </li> <li> <p> <b>Create the lifecycle hook.
         * Specify whether the hook is used when the instances launch or terminate.</b>
         * </p> </li> <li> <p>If you need more time, record the lifecycle action heartbeat
         * to keep the instance in a pending state using the
         * <a>RecordLifecycleActionHeartbeat</a> API call.</p> </li> <li> <p>If you finish
         * before the timeout period ends, complete the lifecycle action using the
         * <a>CompleteLifecycleAction</a> API call.</p> </li> </ol> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>If you exceed your maximum limit of lifecycle hooks, which by
         * default is 50 per Auto Scaling group, the call fails.</p> <p>You can view the
         * lifecycle hooks for an Auto Scaling group using the
         * <a>DescribeLifecycleHooks</a> API call. If you are no longer using a lifecycle
         * hook, you can delete it by calling the <a>DeleteLifecycleHook</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutLifecycleHook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLifecycleHookAsync(const Model::PutLifecycleHookRequest& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures an Auto Scaling group to send notifications when specified events
         * take place. Subscribers to the specified topic can have messages delivered to an
         * endpoint such as a web server or an email address.</p> <p>This configuration
         * overwrites any existing configuration.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ASGettingNotifications.html">Getting
         * Amazon SNS notifications when your Auto Scaling group scales</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>If you exceed your maximum
         * limit of SNS topics, which is 10 per Auto Scaling group, the call
         * fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutNotificationConfigurationOutcome PutNotificationConfiguration(const Model::PutNotificationConfigurationRequest& request) const;

        /**
         * <p>Configures an Auto Scaling group to send notifications when specified events
         * take place. Subscribers to the specified topic can have messages delivered to an
         * endpoint such as a web server or an email address.</p> <p>This configuration
         * overwrites any existing configuration.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ASGettingNotifications.html">Getting
         * Amazon SNS notifications when your Auto Scaling group scales</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>If you exceed your maximum
         * limit of SNS topics, which is 10 per Auto Scaling group, the call
         * fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutNotificationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutNotificationConfigurationOutcomeCallable PutNotificationConfigurationCallable(const Model::PutNotificationConfigurationRequest& request) const;

        /**
         * <p>Configures an Auto Scaling group to send notifications when specified events
         * take place. Subscribers to the specified topic can have messages delivered to an
         * endpoint such as a web server or an email address.</p> <p>This configuration
         * overwrites any existing configuration.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ASGettingNotifications.html">Getting
         * Amazon SNS notifications when your Auto Scaling group scales</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>If you exceed your maximum
         * limit of SNS topics, which is 10 per Auto Scaling group, the call
         * fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutNotificationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutNotificationConfigurationAsync(const Model::PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a scaling policy for an Auto Scaling group. Scaling
         * policies are used to scale an Auto Scaling group based on configurable metrics.
         * If no policies are defined, the dynamic scaling and predictive scaling features
         * are not used. </p> <p>For more information about using dynamic scaling, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-target-tracking.html">Target
         * tracking scaling policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-simple-step.html">Step
         * and simple scaling policies</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For more information about using predictive scaling, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-predictive-scaling.html">Predictive
         * scaling for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>You can view the scaling policies for an Auto Scaling group
         * using the <a>DescribePolicies</a> API call. If you are no longer using a scaling
         * policy, you can delete it by calling the <a>DeletePolicy</a> API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a scaling policy for an Auto Scaling group. Scaling
         * policies are used to scale an Auto Scaling group based on configurable metrics.
         * If no policies are defined, the dynamic scaling and predictive scaling features
         * are not used. </p> <p>For more information about using dynamic scaling, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-target-tracking.html">Target
         * tracking scaling policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-simple-step.html">Step
         * and simple scaling policies</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For more information about using predictive scaling, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-predictive-scaling.html">Predictive
         * scaling for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>You can view the scaling policies for an Auto Scaling group
         * using the <a>DescribePolicies</a> API call. If you are no longer using a scaling
         * policy, you can delete it by calling the <a>DeletePolicy</a> API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a scaling policy for an Auto Scaling group. Scaling
         * policies are used to scale an Auto Scaling group based on configurable metrics.
         * If no policies are defined, the dynamic scaling and predictive scaling features
         * are not used. </p> <p>For more information about using dynamic scaling, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-target-tracking.html">Target
         * tracking scaling policies</a> and <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-simple-step.html">Step
         * and simple scaling policies</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For more information about using predictive scaling, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-predictive-scaling.html">Predictive
         * scaling for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>You can view the scaling policies for an Auto Scaling group
         * using the <a>DescribePolicies</a> API call. If you are no longer using a scaling
         * policy, you can delete it by calling the <a>DeletePolicy</a> API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a scheduled scaling action for an Auto Scaling group.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/schedule_time.html">Scheduled
         * scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>You can
         * view the scheduled actions for an Auto Scaling group using the
         * <a>DescribeScheduledActions</a> API call. If you are no longer using a scheduled
         * action, you can delete it by calling the <a>DeleteScheduledAction</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScheduledUpdateGroupActionOutcome PutScheduledUpdateGroupAction(const Model::PutScheduledUpdateGroupActionRequest& request) const;

        /**
         * <p>Creates or updates a scheduled scaling action for an Auto Scaling group.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/schedule_time.html">Scheduled
         * scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>You can
         * view the scheduled actions for an Auto Scaling group using the
         * <a>DescribeScheduledActions</a> API call. If you are no longer using a scheduled
         * action, you can delete it by calling the <a>DeleteScheduledAction</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutScheduledUpdateGroupActionOutcomeCallable PutScheduledUpdateGroupActionCallable(const Model::PutScheduledUpdateGroupActionRequest& request) const;

        /**
         * <p>Creates or updates a scheduled scaling action for an Auto Scaling group.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/schedule_time.html">Scheduled
         * scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>You can
         * view the scheduled actions for an Auto Scaling group using the
         * <a>DescribeScheduledActions</a> API call. If you are no longer using a scheduled
         * action, you can delete it by calling the <a>DeleteScheduledAction</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScheduledUpdateGroupActionAsync(const Model::PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a warm pool for the specified Auto Scaling group. A warm
         * pool is a pool of pre-initialized EC2 instances that sits alongside the Auto
         * Scaling group. Whenever your application needs to scale out, the Auto Scaling
         * group can draw on the warm pool to meet its new desired capacity. For more
         * information and example configurations, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>This operation must be called from the Region in which the
         * Auto Scaling group was created. This operation cannot be called on an Auto
         * Scaling group that has a mixed instances policy or a launch template or launch
         * configuration that requests Spot Instances.</p> <p>You can view the instances in
         * the warm pool using the <a>DescribeWarmPool</a> API call. If you are no longer
         * using a warm pool, you can delete it by calling the <a>DeleteWarmPool</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutWarmPool">AWS
         * API Reference</a></p>
         */
        virtual Model::PutWarmPoolOutcome PutWarmPool(const Model::PutWarmPoolRequest& request) const;

        /**
         * <p>Creates or updates a warm pool for the specified Auto Scaling group. A warm
         * pool is a pool of pre-initialized EC2 instances that sits alongside the Auto
         * Scaling group. Whenever your application needs to scale out, the Auto Scaling
         * group can draw on the warm pool to meet its new desired capacity. For more
         * information and example configurations, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>This operation must be called from the Region in which the
         * Auto Scaling group was created. This operation cannot be called on an Auto
         * Scaling group that has a mixed instances policy or a launch template or launch
         * configuration that requests Spot Instances.</p> <p>You can view the instances in
         * the warm pool using the <a>DescribeWarmPool</a> API call. If you are no longer
         * using a warm pool, you can delete it by calling the <a>DeleteWarmPool</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutWarmPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutWarmPoolOutcomeCallable PutWarmPoolCallable(const Model::PutWarmPoolRequest& request) const;

        /**
         * <p>Creates or updates a warm pool for the specified Auto Scaling group. A warm
         * pool is a pool of pre-initialized EC2 instances that sits alongside the Auto
         * Scaling group. Whenever your application needs to scale out, the Auto Scaling
         * group can draw on the warm pool to meet its new desired capacity. For more
         * information and example configurations, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
         * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>This operation must be called from the Region in which the
         * Auto Scaling group was created. This operation cannot be called on an Auto
         * Scaling group that has a mixed instances policy or a launch template or launch
         * configuration that requests Spot Instances.</p> <p>You can view the instances in
         * the warm pool using the <a>DescribeWarmPool</a> API call. If you are no longer
         * using a warm pool, you can delete it by calling the <a>DeleteWarmPool</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutWarmPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutWarmPoolAsync(const Model::PutWarmPoolRequest& request, const PutWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Records a heartbeat for the lifecycle action associated with the specified
         * token or instance. This extends the timeout by the length of time defined using
         * the <a>PutLifecycleHook</a> API call.</p> <p>This step is a part of the
         * procedure for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>
         * <p>(Optional) Create a Lambda function and a rule that allows CloudWatch Events
         * to invoke your Lambda function when Amazon EC2 Auto Scaling launches or
         * terminates instances.</p> </li> <li> <p>(Optional) Create a notification target
         * and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
         * topic. The role allows Amazon EC2 Auto Scaling to publish lifecycle
         * notifications to the target.</p> </li> <li> <p>Create the lifecycle hook.
         * Specify whether the hook is used when the instances launch or terminate.</p>
         * </li> <li> <p> <b>If you need more time, record the lifecycle action heartbeat
         * to keep the instance in a pending state.</b> </p> </li> <li> <p>If you finish
         * before the timeout period ends, complete the lifecycle action.</p> </li> </ol>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/RecordLifecycleActionHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::RecordLifecycleActionHeartbeatOutcome RecordLifecycleActionHeartbeat(const Model::RecordLifecycleActionHeartbeatRequest& request) const;

        /**
         * <p>Records a heartbeat for the lifecycle action associated with the specified
         * token or instance. This extends the timeout by the length of time defined using
         * the <a>PutLifecycleHook</a> API call.</p> <p>This step is a part of the
         * procedure for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>
         * <p>(Optional) Create a Lambda function and a rule that allows CloudWatch Events
         * to invoke your Lambda function when Amazon EC2 Auto Scaling launches or
         * terminates instances.</p> </li> <li> <p>(Optional) Create a notification target
         * and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
         * topic. The role allows Amazon EC2 Auto Scaling to publish lifecycle
         * notifications to the target.</p> </li> <li> <p>Create the lifecycle hook.
         * Specify whether the hook is used when the instances launch or terminate.</p>
         * </li> <li> <p> <b>If you need more time, record the lifecycle action heartbeat
         * to keep the instance in a pending state.</b> </p> </li> <li> <p>If you finish
         * before the timeout period ends, complete the lifecycle action.</p> </li> </ol>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/RecordLifecycleActionHeartbeat">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RecordLifecycleActionHeartbeatOutcomeCallable RecordLifecycleActionHeartbeatCallable(const Model::RecordLifecycleActionHeartbeatRequest& request) const;

        /**
         * <p>Records a heartbeat for the lifecycle action associated with the specified
         * token or instance. This extends the timeout by the length of time defined using
         * the <a>PutLifecycleHook</a> API call.</p> <p>This step is a part of the
         * procedure for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>
         * <p>(Optional) Create a Lambda function and a rule that allows CloudWatch Events
         * to invoke your Lambda function when Amazon EC2 Auto Scaling launches or
         * terminates instances.</p> </li> <li> <p>(Optional) Create a notification target
         * and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
         * topic. The role allows Amazon EC2 Auto Scaling to publish lifecycle
         * notifications to the target.</p> </li> <li> <p>Create the lifecycle hook.
         * Specify whether the hook is used when the instances launch or terminate.</p>
         * </li> <li> <p> <b>If you need more time, record the lifecycle action heartbeat
         * to keep the instance in a pending state.</b> </p> </li> <li> <p>If you finish
         * before the timeout period ends, complete the lifecycle action.</p> </li> </ol>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/RecordLifecycleActionHeartbeat">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RecordLifecycleActionHeartbeatAsync(const Model::RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resumes the specified suspended auto scaling processes, or all suspended
         * process, for the specified Auto Scaling group.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and resuming scaling processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ResumeProcesses">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeProcessesOutcome ResumeProcesses(const Model::ResumeProcessesRequest& request) const;

        /**
         * <p>Resumes the specified suspended auto scaling processes, or all suspended
         * process, for the specified Auto Scaling group.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and resuming scaling processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ResumeProcesses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeProcessesOutcomeCallable ResumeProcessesCallable(const Model::ResumeProcessesRequest& request) const;

        /**
         * <p>Resumes the specified suspended auto scaling processes, or all suspended
         * process, for the specified Auto Scaling group.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and resuming scaling processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ResumeProcesses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeProcessesAsync(const Model::ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the size of the specified Auto Scaling group.</p> <p>If a scale-in
         * activity occurs as a result of a new <code>DesiredCapacity</code> value that is
         * lower than the current size of the group, the Auto Scaling group uses its
         * termination policy to determine which instances to terminate. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-manual-scaling.html">Manual
         * scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetDesiredCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDesiredCapacityOutcome SetDesiredCapacity(const Model::SetDesiredCapacityRequest& request) const;

        /**
         * <p>Sets the size of the specified Auto Scaling group.</p> <p>If a scale-in
         * activity occurs as a result of a new <code>DesiredCapacity</code> value that is
         * lower than the current size of the group, the Auto Scaling group uses its
         * termination policy to determine which instances to terminate. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-manual-scaling.html">Manual
         * scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetDesiredCapacity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDesiredCapacityOutcomeCallable SetDesiredCapacityCallable(const Model::SetDesiredCapacityRequest& request) const;

        /**
         * <p>Sets the size of the specified Auto Scaling group.</p> <p>If a scale-in
         * activity occurs as a result of a new <code>DesiredCapacity</code> value that is
         * lower than the current size of the group, the Auto Scaling group uses its
         * termination policy to determine which instances to terminate. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-manual-scaling.html">Manual
         * scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetDesiredCapacity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetDesiredCapacityAsync(const Model::SetDesiredCapacityRequest& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the health status of the specified instance.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
         * checks for Auto Scaling instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::SetInstanceHealthOutcome SetInstanceHealth(const Model::SetInstanceHealthRequest& request) const;

        /**
         * <p>Sets the health status of the specified instance.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
         * checks for Auto Scaling instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceHealth">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetInstanceHealthOutcomeCallable SetInstanceHealthCallable(const Model::SetInstanceHealthRequest& request) const;

        /**
         * <p>Sets the health status of the specified instance.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
         * checks for Auto Scaling instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceHealth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetInstanceHealthAsync(const Model::SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the instance protection settings of the specified instances. This
         * operation cannot be called on instances in a warm pool.</p> <p>For more
         * information about preventing instances that are part of an Auto Scaling group
         * from terminating on scale in, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
         * scale-in protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
         * <p>If you exceed your maximum limit of instance IDs, which is 50 per Auto
         * Scaling group, the call fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::SetInstanceProtectionOutcome SetInstanceProtection(const Model::SetInstanceProtectionRequest& request) const;

        /**
         * <p>Updates the instance protection settings of the specified instances. This
         * operation cannot be called on instances in a warm pool.</p> <p>For more
         * information about preventing instances that are part of an Auto Scaling group
         * from terminating on scale in, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
         * scale-in protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
         * <p>If you exceed your maximum limit of instance IDs, which is 50 per Auto
         * Scaling group, the call fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetInstanceProtectionOutcomeCallable SetInstanceProtectionCallable(const Model::SetInstanceProtectionRequest& request) const;

        /**
         * <p>Updates the instance protection settings of the specified instances. This
         * operation cannot be called on instances in a warm pool.</p> <p>For more
         * information about preventing instances that are part of an Auto Scaling group
         * from terminating on scale in, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
         * scale-in protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
         * <p>If you exceed your maximum limit of instance IDs, which is 50 per Auto
         * Scaling group, the call fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetInstanceProtectionAsync(const Model::SetInstanceProtectionRequest& request, const SetInstanceProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new instance refresh operation. An instance refresh performs a
         * rolling replacement of all or some instances in an Auto Scaling group. Each
         * instance is terminated first and then replaced, which temporarily reduces the
         * capacity available within your Auto Scaling group.</p> <p>This operation is part
         * of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group. This feature is helpful, for example, when you have
         * a new AMI or a new user data script. You just need to create a new launch
         * template that specifies the new AMI or user data script. Then start an instance
         * refresh to immediately begin the process of updating instances in the group.
         * </p> <p>If the call succeeds, it creates a new instance refresh request with a
         * unique ID that you can use to track its progress. To query its status, call the
         * <a>DescribeInstanceRefreshes</a> API. To describe the instance refreshes that
         * have already run, call the <a>DescribeInstanceRefreshes</a> API. To cancel an
         * instance refresh operation in progress, use the <a>CancelInstanceRefresh</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/StartInstanceRefresh">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceRefreshOutcome StartInstanceRefresh(const Model::StartInstanceRefreshRequest& request) const;

        /**
         * <p>Starts a new instance refresh operation. An instance refresh performs a
         * rolling replacement of all or some instances in an Auto Scaling group. Each
         * instance is terminated first and then replaced, which temporarily reduces the
         * capacity available within your Auto Scaling group.</p> <p>This operation is part
         * of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group. This feature is helpful, for example, when you have
         * a new AMI or a new user data script. You just need to create a new launch
         * template that specifies the new AMI or user data script. Then start an instance
         * refresh to immediately begin the process of updating instances in the group.
         * </p> <p>If the call succeeds, it creates a new instance refresh request with a
         * unique ID that you can use to track its progress. To query its status, call the
         * <a>DescribeInstanceRefreshes</a> API. To describe the instance refreshes that
         * have already run, call the <a>DescribeInstanceRefreshes</a> API. To cancel an
         * instance refresh operation in progress, use the <a>CancelInstanceRefresh</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/StartInstanceRefresh">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInstanceRefreshOutcomeCallable StartInstanceRefreshCallable(const Model::StartInstanceRefreshRequest& request) const;

        /**
         * <p>Starts a new instance refresh operation. An instance refresh performs a
         * rolling replacement of all or some instances in an Auto Scaling group. Each
         * instance is terminated first and then replaced, which temporarily reduces the
         * capacity available within your Auto Scaling group.</p> <p>This operation is part
         * of the <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance
         * refresh feature</a> in Amazon EC2 Auto Scaling, which helps you update instances
         * in your Auto Scaling group. This feature is helpful, for example, when you have
         * a new AMI or a new user data script. You just need to create a new launch
         * template that specifies the new AMI or user data script. Then start an instance
         * refresh to immediately begin the process of updating instances in the group.
         * </p> <p>If the call succeeds, it creates a new instance refresh request with a
         * unique ID that you can use to track its progress. To query its status, call the
         * <a>DescribeInstanceRefreshes</a> API. To describe the instance refreshes that
         * have already run, call the <a>DescribeInstanceRefreshes</a> API. To cancel an
         * instance refresh operation in progress, use the <a>CancelInstanceRefresh</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/StartInstanceRefresh">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInstanceRefreshAsync(const Model::StartInstanceRefreshRequest& request, const StartInstanceRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Suspends the specified auto scaling processes, or all processes, for the
         * specified Auto Scaling group.</p> <p>If you suspend either the
         * <code>Launch</code> or <code>Terminate</code> process types, it can prevent
         * other process types from functioning properly. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and resuming scaling processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>To resume processes that have been suspended, call the
         * <a>ResumeProcesses</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SuspendProcesses">AWS
         * API Reference</a></p>
         */
        virtual Model::SuspendProcessesOutcome SuspendProcesses(const Model::SuspendProcessesRequest& request) const;

        /**
         * <p>Suspends the specified auto scaling processes, or all processes, for the
         * specified Auto Scaling group.</p> <p>If you suspend either the
         * <code>Launch</code> or <code>Terminate</code> process types, it can prevent
         * other process types from functioning properly. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and resuming scaling processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>To resume processes that have been suspended, call the
         * <a>ResumeProcesses</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SuspendProcesses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SuspendProcessesOutcomeCallable SuspendProcessesCallable(const Model::SuspendProcessesRequest& request) const;

        /**
         * <p>Suspends the specified auto scaling processes, or all processes, for the
         * specified Auto Scaling group.</p> <p>If you suspend either the
         * <code>Launch</code> or <code>Terminate</code> process types, it can prevent
         * other process types from functioning properly. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and resuming scaling processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>To resume processes that have been suspended, call the
         * <a>ResumeProcesses</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SuspendProcesses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SuspendProcessesAsync(const Model::SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the specified instance and optionally adjusts the desired group
         * size. This operation cannot be called on instances in a warm pool.</p> <p>This
         * call simply makes a termination request. The instance is not terminated
         * immediately. When an instance is terminated, the instance status changes to
         * <code>terminated</code>. You can't connect to or start an instance after you've
         * terminated it.</p> <p>If you do not specify the option to decrement the desired
         * capacity, Amazon EC2 Auto Scaling launches instances to replace the ones that
         * are terminated. </p> <p>By default, Amazon EC2 Auto Scaling balances instances
         * across all Availability Zones. If you decrement the desired capacity, your Auto
         * Scaling group can become unbalanced between Availability Zones. Amazon EC2 Auto
         * Scaling tries to rebalance the group, and rebalancing might terminate instances
         * in other zones. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-benefits.html#AutoScalingBehavior.InstanceUsage">Rebalancing
         * activities</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TerminateInstanceInAutoScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateInstanceInAutoScalingGroupOutcome TerminateInstanceInAutoScalingGroup(const Model::TerminateInstanceInAutoScalingGroupRequest& request) const;

        /**
         * <p>Terminates the specified instance and optionally adjusts the desired group
         * size. This operation cannot be called on instances in a warm pool.</p> <p>This
         * call simply makes a termination request. The instance is not terminated
         * immediately. When an instance is terminated, the instance status changes to
         * <code>terminated</code>. You can't connect to or start an instance after you've
         * terminated it.</p> <p>If you do not specify the option to decrement the desired
         * capacity, Amazon EC2 Auto Scaling launches instances to replace the ones that
         * are terminated. </p> <p>By default, Amazon EC2 Auto Scaling balances instances
         * across all Availability Zones. If you decrement the desired capacity, your Auto
         * Scaling group can become unbalanced between Availability Zones. Amazon EC2 Auto
         * Scaling tries to rebalance the group, and rebalancing might terminate instances
         * in other zones. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-benefits.html#AutoScalingBehavior.InstanceUsage">Rebalancing
         * activities</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TerminateInstanceInAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateInstanceInAutoScalingGroupOutcomeCallable TerminateInstanceInAutoScalingGroupCallable(const Model::TerminateInstanceInAutoScalingGroupRequest& request) const;

        /**
         * <p>Terminates the specified instance and optionally adjusts the desired group
         * size. This operation cannot be called on instances in a warm pool.</p> <p>This
         * call simply makes a termination request. The instance is not terminated
         * immediately. When an instance is terminated, the instance status changes to
         * <code>terminated</code>. You can't connect to or start an instance after you've
         * terminated it.</p> <p>If you do not specify the option to decrement the desired
         * capacity, Amazon EC2 Auto Scaling launches instances to replace the ones that
         * are terminated. </p> <p>By default, Amazon EC2 Auto Scaling balances instances
         * across all Availability Zones. If you decrement the desired capacity, your Auto
         * Scaling group can become unbalanced between Availability Zones. Amazon EC2 Auto
         * Scaling tries to rebalance the group, and rebalancing might terminate instances
         * in other zones. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-benefits.html#AutoScalingBehavior.InstanceUsage">Rebalancing
         * activities</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TerminateInstanceInAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateInstanceInAutoScalingGroupAsync(const Model::TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>We strongly recommend that all Auto Scaling groups use launch templates
         * to ensure full functionality for Amazon EC2 Auto Scaling and Amazon EC2.</b>
         * </p> <p>Updates the configuration for the specified Auto Scaling group.</p>
         * <p>To update an Auto Scaling group, specify the name of the group and the
         * parameter that you want to change. Any parameters that you don't specify are not
         * changed by this update request. The new settings take effect on any scaling
         * activities after this call returns. </p> <p>If you associate a new launch
         * configuration or template with an Auto Scaling group, all new instances will get
         * the updated configuration. Existing instances continue to run with the
         * configuration that they were originally launched with. When you update a group
         * to specify a mixed instances policy instead of a launch configuration or
         * template, existing instances may be replaced to match the new purchasing options
         * that you specified in the policy. For example, if the group currently has 100%
         * On-Demand capacity and the policy specifies 50% Spot capacity, this means that
         * half of your instances will be gradually terminated and relaunched as Spot
         * Instances. When replacing instances, Amazon EC2 Auto Scaling launches new
         * instances before terminating the old ones, so that updating your group does not
         * compromise the performance or availability of your application.</p> <p>Note the
         * following about changing <code>DesiredCapacity</code>, <code>MaxSize</code>, or
         * <code>MinSize</code>:</p> <ul> <li> <p>If a scale-in activity occurs as a result
         * of a new <code>DesiredCapacity</code> value that is lower than the current size
         * of the group, the Auto Scaling group uses its termination policy to determine
         * which instances to terminate.</p> </li> <li> <p>If you specify a new value for
         * <code>MinSize</code> without specifying a value for
         * <code>DesiredCapacity</code>, and the new <code>MinSize</code> is larger than
         * the current size of the group, this sets the group's
         * <code>DesiredCapacity</code> to the new <code>MinSize</code> value.</p> </li>
         * <li> <p>If you specify a new value for <code>MaxSize</code> without specifying a
         * value for <code>DesiredCapacity</code>, and the new <code>MaxSize</code> is
         * smaller than the current size of the group, this sets the group's
         * <code>DesiredCapacity</code> to the new <code>MaxSize</code> value.</p> </li>
         * </ul> <p>To see which parameters have been set, call the
         * <a>DescribeAutoScalingGroups</a> API. To view the scaling policies for an Auto
         * Scaling group, call the <a>DescribePolicies</a> API. If the group has scaling
         * policies, you can update them by calling the <a>PutScalingPolicy</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/UpdateAutoScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAutoScalingGroupOutcome UpdateAutoScalingGroup(const Model::UpdateAutoScalingGroupRequest& request) const;

        /**
         * <p> <b>We strongly recommend that all Auto Scaling groups use launch templates
         * to ensure full functionality for Amazon EC2 Auto Scaling and Amazon EC2.</b>
         * </p> <p>Updates the configuration for the specified Auto Scaling group.</p>
         * <p>To update an Auto Scaling group, specify the name of the group and the
         * parameter that you want to change. Any parameters that you don't specify are not
         * changed by this update request. The new settings take effect on any scaling
         * activities after this call returns. </p> <p>If you associate a new launch
         * configuration or template with an Auto Scaling group, all new instances will get
         * the updated configuration. Existing instances continue to run with the
         * configuration that they were originally launched with. When you update a group
         * to specify a mixed instances policy instead of a launch configuration or
         * template, existing instances may be replaced to match the new purchasing options
         * that you specified in the policy. For example, if the group currently has 100%
         * On-Demand capacity and the policy specifies 50% Spot capacity, this means that
         * half of your instances will be gradually terminated and relaunched as Spot
         * Instances. When replacing instances, Amazon EC2 Auto Scaling launches new
         * instances before terminating the old ones, so that updating your group does not
         * compromise the performance or availability of your application.</p> <p>Note the
         * following about changing <code>DesiredCapacity</code>, <code>MaxSize</code>, or
         * <code>MinSize</code>:</p> <ul> <li> <p>If a scale-in activity occurs as a result
         * of a new <code>DesiredCapacity</code> value that is lower than the current size
         * of the group, the Auto Scaling group uses its termination policy to determine
         * which instances to terminate.</p> </li> <li> <p>If you specify a new value for
         * <code>MinSize</code> without specifying a value for
         * <code>DesiredCapacity</code>, and the new <code>MinSize</code> is larger than
         * the current size of the group, this sets the group's
         * <code>DesiredCapacity</code> to the new <code>MinSize</code> value.</p> </li>
         * <li> <p>If you specify a new value for <code>MaxSize</code> without specifying a
         * value for <code>DesiredCapacity</code>, and the new <code>MaxSize</code> is
         * smaller than the current size of the group, this sets the group's
         * <code>DesiredCapacity</code> to the new <code>MaxSize</code> value.</p> </li>
         * </ul> <p>To see which parameters have been set, call the
         * <a>DescribeAutoScalingGroups</a> API. To view the scaling policies for an Auto
         * Scaling group, call the <a>DescribePolicies</a> API. If the group has scaling
         * policies, you can update them by calling the <a>PutScalingPolicy</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/UpdateAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAutoScalingGroupOutcomeCallable UpdateAutoScalingGroupCallable(const Model::UpdateAutoScalingGroupRequest& request) const;

        /**
         * <p> <b>We strongly recommend that all Auto Scaling groups use launch templates
         * to ensure full functionality for Amazon EC2 Auto Scaling and Amazon EC2.</b>
         * </p> <p>Updates the configuration for the specified Auto Scaling group.</p>
         * <p>To update an Auto Scaling group, specify the name of the group and the
         * parameter that you want to change. Any parameters that you don't specify are not
         * changed by this update request. The new settings take effect on any scaling
         * activities after this call returns. </p> <p>If you associate a new launch
         * configuration or template with an Auto Scaling group, all new instances will get
         * the updated configuration. Existing instances continue to run with the
         * configuration that they were originally launched with. When you update a group
         * to specify a mixed instances policy instead of a launch configuration or
         * template, existing instances may be replaced to match the new purchasing options
         * that you specified in the policy. For example, if the group currently has 100%
         * On-Demand capacity and the policy specifies 50% Spot capacity, this means that
         * half of your instances will be gradually terminated and relaunched as Spot
         * Instances. When replacing instances, Amazon EC2 Auto Scaling launches new
         * instances before terminating the old ones, so that updating your group does not
         * compromise the performance or availability of your application.</p> <p>Note the
         * following about changing <code>DesiredCapacity</code>, <code>MaxSize</code>, or
         * <code>MinSize</code>:</p> <ul> <li> <p>If a scale-in activity occurs as a result
         * of a new <code>DesiredCapacity</code> value that is lower than the current size
         * of the group, the Auto Scaling group uses its termination policy to determine
         * which instances to terminate.</p> </li> <li> <p>If you specify a new value for
         * <code>MinSize</code> without specifying a value for
         * <code>DesiredCapacity</code>, and the new <code>MinSize</code> is larger than
         * the current size of the group, this sets the group's
         * <code>DesiredCapacity</code> to the new <code>MinSize</code> value.</p> </li>
         * <li> <p>If you specify a new value for <code>MaxSize</code> without specifying a
         * value for <code>DesiredCapacity</code>, and the new <code>MaxSize</code> is
         * smaller than the current size of the group, this sets the group's
         * <code>DesiredCapacity</code> to the new <code>MaxSize</code> value.</p> </li>
         * </ul> <p>To see which parameters have been set, call the
         * <a>DescribeAutoScalingGroups</a> API. To view the scaling policies for an Auto
         * Scaling group, call the <a>DescribePolicies</a> API. If the group has scaling
         * policies, you can update them by calling the <a>PutScalingPolicy</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/UpdateAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAutoScalingGroupAsync(const Model::UpdateAutoScalingGroupRequest& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AttachInstancesAsyncHelper(const Model::AttachInstancesRequest& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachLoadBalancerTargetGroupsAsyncHelper(const Model::AttachLoadBalancerTargetGroupsRequest& request, const AttachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachLoadBalancersAsyncHelper(const Model::AttachLoadBalancersRequest& request, const AttachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteScheduledActionAsyncHelper(const Model::BatchDeleteScheduledActionRequest& request, const BatchDeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchPutScheduledUpdateGroupActionAsyncHelper(const Model::BatchPutScheduledUpdateGroupActionRequest& request, const BatchPutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelInstanceRefreshAsyncHelper(const Model::CancelInstanceRefreshRequest& request, const CancelInstanceRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CompleteLifecycleActionAsyncHelper(const Model::CompleteLifecycleActionRequest& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAutoScalingGroupAsyncHelper(const Model::CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLaunchConfigurationAsyncHelper(const Model::CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOrUpdateTagsAsyncHelper(const Model::CreateOrUpdateTagsRequest& request, const CreateOrUpdateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAutoScalingGroupAsyncHelper(const Model::DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLaunchConfigurationAsyncHelper(const Model::DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLifecycleHookAsyncHelper(const Model::DeleteLifecycleHookRequest& request, const DeleteLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotificationConfigurationAsyncHelper(const Model::DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyAsyncHelper(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteScheduledActionAsyncHelper(const Model::DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWarmPoolAsyncHelper(const Model::DeleteWarmPoolRequest& request, const DeleteWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountLimitsAsyncHelper(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAdjustmentTypesAsyncHelper(const Model::DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoScalingGroupsAsyncHelper(const Model::DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoScalingInstancesAsyncHelper(const Model::DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoScalingNotificationTypesAsyncHelper(const Model::DescribeAutoScalingNotificationTypesRequest& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceRefreshesAsyncHelper(const Model::DescribeInstanceRefreshesRequest& request, const DescribeInstanceRefreshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLaunchConfigurationsAsyncHelper(const Model::DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLifecycleHookTypesAsyncHelper(const Model::DescribeLifecycleHookTypesRequest& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLifecycleHooksAsyncHelper(const Model::DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoadBalancerTargetGroupsAsyncHelper(const Model::DescribeLoadBalancerTargetGroupsRequest& request, const DescribeLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoadBalancersAsyncHelper(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMetricCollectionTypesAsyncHelper(const Model::DescribeMetricCollectionTypesRequest& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotificationConfigurationsAsyncHelper(const Model::DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePoliciesAsyncHelper(const Model::DescribePoliciesRequest& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingActivitiesAsyncHelper(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingProcessTypesAsyncHelper(const Model::DescribeScalingProcessTypesRequest& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScheduledActionsAsyncHelper(const Model::DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTerminationPolicyTypesAsyncHelper(const Model::DescribeTerminationPolicyTypesRequest& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWarmPoolAsyncHelper(const Model::DescribeWarmPoolRequest& request, const DescribeWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachInstancesAsyncHelper(const Model::DetachInstancesRequest& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachLoadBalancerTargetGroupsAsyncHelper(const Model::DetachLoadBalancerTargetGroupsRequest& request, const DetachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachLoadBalancersAsyncHelper(const Model::DetachLoadBalancersRequest& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableMetricsCollectionAsyncHelper(const Model::DisableMetricsCollectionRequest& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableMetricsCollectionAsyncHelper(const Model::EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnterStandbyAsyncHelper(const Model::EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExecutePolicyAsyncHelper(const Model::ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExitStandbyAsyncHelper(const Model::ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPredictiveScalingForecastAsyncHelper(const Model::GetPredictiveScalingForecastRequest& request, const GetPredictiveScalingForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLifecycleHookAsyncHelper(const Model::PutLifecycleHookRequest& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutNotificationConfigurationAsyncHelper(const Model::PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScalingPolicyAsyncHelper(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScheduledUpdateGroupActionAsyncHelper(const Model::PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutWarmPoolAsyncHelper(const Model::PutWarmPoolRequest& request, const PutWarmPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RecordLifecycleActionHeartbeatAsyncHelper(const Model::RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResumeProcessesAsyncHelper(const Model::ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetDesiredCapacityAsyncHelper(const Model::SetDesiredCapacityRequest& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetInstanceHealthAsyncHelper(const Model::SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetInstanceProtectionAsyncHelper(const Model::SetInstanceProtectionRequest& request, const SetInstanceProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartInstanceRefreshAsyncHelper(const Model::StartInstanceRefreshRequest& request, const StartInstanceRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SuspendProcessesAsyncHelper(const Model::SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateInstanceInAutoScalingGroupAsyncHelper(const Model::TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAutoScalingGroupAsyncHelper(const Model::UpdateAutoScalingGroupRequest& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AutoScaling
} // namespace Aws
