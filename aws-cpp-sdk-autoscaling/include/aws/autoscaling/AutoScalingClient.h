/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/autoscaling/model/CompleteLifecycleActionResult.h>
#include <aws/autoscaling/model/DeleteLifecycleHookResult.h>
#include <aws/autoscaling/model/DescribeAccountLimitsResult.h>
#include <aws/autoscaling/model/DescribeAdjustmentTypesResult.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsResult.h>
#include <aws/autoscaling/model/DescribeAutoScalingInstancesResult.h>
#include <aws/autoscaling/model/DescribeAutoScalingNotificationTypesResult.h>
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
#include <aws/autoscaling/model/DetachInstancesResult.h>
#include <aws/autoscaling/model/DetachLoadBalancerTargetGroupsResult.h>
#include <aws/autoscaling/model/DetachLoadBalancersResult.h>
#include <aws/autoscaling/model/EnterStandbyResult.h>
#include <aws/autoscaling/model/ExitStandbyResult.h>
#include <aws/autoscaling/model/PutLifecycleHookResult.h>
#include <aws/autoscaling/model/PutScalingPolicyResult.h>
#include <aws/autoscaling/model/RecordLifecycleActionHeartbeatResult.h>
#include <aws/autoscaling/model/SetInstanceProtectionResult.h>
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
        class DescribeAccountLimitsRequest;
        class DescribeAdjustmentTypesRequest;
        class DescribeAutoScalingGroupsRequest;
        class DescribeAutoScalingInstancesRequest;
        class DescribeAutoScalingNotificationTypesRequest;
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
        class DetachInstancesRequest;
        class DetachLoadBalancerTargetGroupsRequest;
        class DetachLoadBalancersRequest;
        class DisableMetricsCollectionRequest;
        class EnableMetricsCollectionRequest;
        class EnterStandbyRequest;
        class ExecutePolicyRequest;
        class ExitStandbyRequest;
        class PutLifecycleHookRequest;
        class PutNotificationConfigurationRequest;
        class PutScalingPolicyRequest;
        class PutScheduledUpdateGroupActionRequest;
        class RecordLifecycleActionHeartbeatRequest;
        class ResumeProcessesRequest;
        class SetDesiredCapacityRequest;
        class SetInstanceHealthRequest;
        class SetInstanceProtectionRequest;
        class SuspendProcessesRequest;
        class TerminateInstanceInAutoScalingGroupRequest;
        class UpdateAutoScalingGroupRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> AttachInstancesOutcome;
        typedef Aws::Utils::Outcome<AttachLoadBalancerTargetGroupsResult, Aws::Client::AWSError<AutoScalingErrors>> AttachLoadBalancerTargetGroupsOutcome;
        typedef Aws::Utils::Outcome<AttachLoadBalancersResult, Aws::Client::AWSError<AutoScalingErrors>> AttachLoadBalancersOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteScheduledActionResult, Aws::Client::AWSError<AutoScalingErrors>> BatchDeleteScheduledActionOutcome;
        typedef Aws::Utils::Outcome<BatchPutScheduledUpdateGroupActionResult, Aws::Client::AWSError<AutoScalingErrors>> BatchPutScheduledUpdateGroupActionOutcome;
        typedef Aws::Utils::Outcome<CompleteLifecycleActionResult, Aws::Client::AWSError<AutoScalingErrors>> CompleteLifecycleActionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> CreateAutoScalingGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> CreateLaunchConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> CreateOrUpdateTagsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> DeleteAutoScalingGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> DeleteLaunchConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteLifecycleHookResult, Aws::Client::AWSError<AutoScalingErrors>> DeleteLifecycleHookOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> DeleteNotificationConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> DeletePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> DeleteScheduledActionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountLimitsResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeAccountLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeAdjustmentTypesResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeAdjustmentTypesOutcome;
        typedef Aws::Utils::Outcome<DescribeAutoScalingGroupsResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeAutoScalingGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeAutoScalingInstancesResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeAutoScalingInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeAutoScalingNotificationTypesResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeAutoScalingNotificationTypesOutcome;
        typedef Aws::Utils::Outcome<DescribeLaunchConfigurationsResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeLaunchConfigurationsOutcome;
        typedef Aws::Utils::Outcome<DescribeLifecycleHookTypesResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeLifecycleHookTypesOutcome;
        typedef Aws::Utils::Outcome<DescribeLifecycleHooksResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeLifecycleHooksOutcome;
        typedef Aws::Utils::Outcome<DescribeLoadBalancerTargetGroupsResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeLoadBalancerTargetGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeLoadBalancersResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeLoadBalancersOutcome;
        typedef Aws::Utils::Outcome<DescribeMetricCollectionTypesResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeMetricCollectionTypesOutcome;
        typedef Aws::Utils::Outcome<DescribeNotificationConfigurationsResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeNotificationConfigurationsOutcome;
        typedef Aws::Utils::Outcome<DescribePoliciesResult, Aws::Client::AWSError<AutoScalingErrors>> DescribePoliciesOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingActivitiesResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeScalingActivitiesOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingProcessTypesResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeScalingProcessTypesOutcome;
        typedef Aws::Utils::Outcome<DescribeScheduledActionsResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeScheduledActionsOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeTerminationPolicyTypesResult, Aws::Client::AWSError<AutoScalingErrors>> DescribeTerminationPolicyTypesOutcome;
        typedef Aws::Utils::Outcome<DetachInstancesResult, Aws::Client::AWSError<AutoScalingErrors>> DetachInstancesOutcome;
        typedef Aws::Utils::Outcome<DetachLoadBalancerTargetGroupsResult, Aws::Client::AWSError<AutoScalingErrors>> DetachLoadBalancerTargetGroupsOutcome;
        typedef Aws::Utils::Outcome<DetachLoadBalancersResult, Aws::Client::AWSError<AutoScalingErrors>> DetachLoadBalancersOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> DisableMetricsCollectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> EnableMetricsCollectionOutcome;
        typedef Aws::Utils::Outcome<EnterStandbyResult, Aws::Client::AWSError<AutoScalingErrors>> EnterStandbyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> ExecutePolicyOutcome;
        typedef Aws::Utils::Outcome<ExitStandbyResult, Aws::Client::AWSError<AutoScalingErrors>> ExitStandbyOutcome;
        typedef Aws::Utils::Outcome<PutLifecycleHookResult, Aws::Client::AWSError<AutoScalingErrors>> PutLifecycleHookOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> PutNotificationConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutScalingPolicyResult, Aws::Client::AWSError<AutoScalingErrors>> PutScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> PutScheduledUpdateGroupActionOutcome;
        typedef Aws::Utils::Outcome<RecordLifecycleActionHeartbeatResult, Aws::Client::AWSError<AutoScalingErrors>> RecordLifecycleActionHeartbeatOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> ResumeProcessesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> SetDesiredCapacityOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> SetInstanceHealthOutcome;
        typedef Aws::Utils::Outcome<SetInstanceProtectionResult, Aws::Client::AWSError<AutoScalingErrors>> SetInstanceProtectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> SuspendProcessesOutcome;
        typedef Aws::Utils::Outcome<TerminateInstanceInAutoScalingGroupResult, Aws::Client::AWSError<AutoScalingErrors>> TerminateInstanceInAutoScalingGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<AutoScalingErrors>> UpdateAutoScalingGroupOutcome;

        typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
        typedef std::future<AttachLoadBalancerTargetGroupsOutcome> AttachLoadBalancerTargetGroupsOutcomeCallable;
        typedef std::future<AttachLoadBalancersOutcome> AttachLoadBalancersOutcomeCallable;
        typedef std::future<BatchDeleteScheduledActionOutcome> BatchDeleteScheduledActionOutcomeCallable;
        typedef std::future<BatchPutScheduledUpdateGroupActionOutcome> BatchPutScheduledUpdateGroupActionOutcomeCallable;
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
        typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
        typedef std::future<DescribeAdjustmentTypesOutcome> DescribeAdjustmentTypesOutcomeCallable;
        typedef std::future<DescribeAutoScalingGroupsOutcome> DescribeAutoScalingGroupsOutcomeCallable;
        typedef std::future<DescribeAutoScalingInstancesOutcome> DescribeAutoScalingInstancesOutcomeCallable;
        typedef std::future<DescribeAutoScalingNotificationTypesOutcome> DescribeAutoScalingNotificationTypesOutcomeCallable;
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
        typedef std::future<DetachInstancesOutcome> DetachInstancesOutcomeCallable;
        typedef std::future<DetachLoadBalancerTargetGroupsOutcome> DetachLoadBalancerTargetGroupsOutcomeCallable;
        typedef std::future<DetachLoadBalancersOutcome> DetachLoadBalancersOutcomeCallable;
        typedef std::future<DisableMetricsCollectionOutcome> DisableMetricsCollectionOutcomeCallable;
        typedef std::future<EnableMetricsCollectionOutcome> EnableMetricsCollectionOutcomeCallable;
        typedef std::future<EnterStandbyOutcome> EnterStandbyOutcomeCallable;
        typedef std::future<ExecutePolicyOutcome> ExecutePolicyOutcomeCallable;
        typedef std::future<ExitStandbyOutcome> ExitStandbyOutcomeCallable;
        typedef std::future<PutLifecycleHookOutcome> PutLifecycleHookOutcomeCallable;
        typedef std::future<PutNotificationConfigurationOutcome> PutNotificationConfigurationOutcomeCallable;
        typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
        typedef std::future<PutScheduledUpdateGroupActionOutcome> PutScheduledUpdateGroupActionOutcomeCallable;
        typedef std::future<RecordLifecycleActionHeartbeatOutcome> RecordLifecycleActionHeartbeatOutcomeCallable;
        typedef std::future<ResumeProcessesOutcome> ResumeProcessesOutcomeCallable;
        typedef std::future<SetDesiredCapacityOutcome> SetDesiredCapacityOutcomeCallable;
        typedef std::future<SetInstanceHealthOutcome> SetInstanceHealthOutcomeCallable;
        typedef std::future<SetInstanceProtectionOutcome> SetInstanceProtectionOutcomeCallable;
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
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAccountLimitsRequest&, const Model::DescribeAccountLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountLimitsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAdjustmentTypesRequest&, const Model::DescribeAdjustmentTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAdjustmentTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAutoScalingGroupsRequest&, const Model::DescribeAutoScalingGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingGroupsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAutoScalingInstancesRequest&, const Model::DescribeAutoScalingInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingInstancesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAutoScalingNotificationTypesRequest&, const Model::DescribeAutoScalingNotificationTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingNotificationTypesResponseReceivedHandler;
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
    typedef std::function<void(const AutoScalingClient*, const Model::DetachInstancesRequest&, const Model::DetachInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachInstancesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DetachLoadBalancerTargetGroupsRequest&, const Model::DetachLoadBalancerTargetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachLoadBalancerTargetGroupsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DetachLoadBalancersRequest&, const Model::DetachLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DisableMetricsCollectionRequest&, const Model::DisableMetricsCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableMetricsCollectionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::EnableMetricsCollectionRequest&, const Model::EnableMetricsCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableMetricsCollectionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::EnterStandbyRequest&, const Model::EnterStandbyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnterStandbyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::ExecutePolicyRequest&, const Model::ExecutePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecutePolicyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::ExitStandbyRequest&, const Model::ExitStandbyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExitStandbyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutLifecycleHookRequest&, const Model::PutLifecycleHookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLifecycleHookResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutNotificationConfigurationRequest&, const Model::PutNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutScalingPolicyRequest&, const Model::PutScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutScheduledUpdateGroupActionRequest&, const Model::PutScheduledUpdateGroupActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScheduledUpdateGroupActionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::RecordLifecycleActionHeartbeatRequest&, const Model::RecordLifecycleActionHeartbeatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RecordLifecycleActionHeartbeatResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::ResumeProcessesRequest&, const Model::ResumeProcessesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeProcessesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::SetDesiredCapacityRequest&, const Model::SetDesiredCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDesiredCapacityResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::SetInstanceHealthRequest&, const Model::SetInstanceHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetInstanceHealthResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::SetInstanceProtectionRequest&, const Model::SetInstanceProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetInstanceProtectionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::SuspendProcessesRequest&, const Model::SuspendProcessesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SuspendProcessesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::TerminateInstanceInAutoScalingGroupRequest&, const Model::TerminateInstanceInAutoScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateInstanceInAutoScalingGroupResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::UpdateAutoScalingGroupRequest&, const Model::UpdateAutoScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAutoScalingGroupResponseReceivedHandler;

  /**
   * <fullname>Amazon EC2 Auto Scaling</fullname> <p>Amazon EC2 Auto Scaling is
   * designed to automatically launch or terminate EC2 instances based on
   * user-defined policies, schedules, and health checks. Use this service with AWS
   * Auto Scaling, Amazon CloudWatch, and Elastic Load Balancing.</p> <p>For more
   * information, including information about granting IAM users required permissions
   * for Amazon EC2 Auto Scaling actions, see the <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon
   * EC2 Auto Scaling User Guide</a>.</p>
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

        inline virtual const char* GetServiceClientName() const override { return "Auto Scaling"; }


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
         * EC2 Instances to Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
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
         * EC2 Instances to Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
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
         * EC2 Instances to Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches one or more target groups to the specified Auto Scaling group. </p>
         * <p>To describe the target groups for an Auto Scaling group, use
         * <a>DescribeLoadBalancerTargetGroups</a>. To detach the target group from the
         * Auto Scaling group, use <a>DetachLoadBalancerTargetGroups</a>.</p> <p>With
         * Application Load Balancers and Network Load Balancers, instances are registered
         * as targets with a target group. With Classic Load Balancers, instances are
         * registered with the load balancer. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-load-balancer-asg.html">Attaching
         * a Load Balancer to Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancerTargetGroupsOutcome AttachLoadBalancerTargetGroups(const Model::AttachLoadBalancerTargetGroupsRequest& request) const;

        /**
         * <p>Attaches one or more target groups to the specified Auto Scaling group. </p>
         * <p>To describe the target groups for an Auto Scaling group, use
         * <a>DescribeLoadBalancerTargetGroups</a>. To detach the target group from the
         * Auto Scaling group, use <a>DetachLoadBalancerTargetGroups</a>.</p> <p>With
         * Application Load Balancers and Network Load Balancers, instances are registered
         * as targets with a target group. With Classic Load Balancers, instances are
         * registered with the load balancer. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-load-balancer-asg.html">Attaching
         * a Load Balancer to Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachLoadBalancerTargetGroupsOutcomeCallable AttachLoadBalancerTargetGroupsCallable(const Model::AttachLoadBalancerTargetGroupsRequest& request) const;

        /**
         * <p>Attaches one or more target groups to the specified Auto Scaling group. </p>
         * <p>To describe the target groups for an Auto Scaling group, use
         * <a>DescribeLoadBalancerTargetGroups</a>. To detach the target group from the
         * Auto Scaling group, use <a>DetachLoadBalancerTargetGroups</a>.</p> <p>With
         * Application Load Balancers and Network Load Balancers, instances are registered
         * as targets with a target group. With Classic Load Balancers, instances are
         * registered with the load balancer. For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-load-balancer-asg.html">Attaching
         * a Load Balancer to Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachLoadBalancerTargetGroupsAsync(const Model::AttachLoadBalancerTargetGroupsRequest& request, const AttachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches one or more Classic Load Balancers to the specified Auto Scaling
         * group.</p> <p>To attach an Application Load Balancer or a Network Load Balancer
         * instead, see <a>AttachLoadBalancerTargetGroups</a>.</p> <p>To describe the load
         * balancers for an Auto Scaling group, use <a>DescribeLoadBalancers</a>. To detach
         * the load balancer from the Auto Scaling group, use
         * <a>DetachLoadBalancers</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-load-balancer-asg.html">Attaching
         * a Load Balancer to Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancersOutcome AttachLoadBalancers(const Model::AttachLoadBalancersRequest& request) const;

        /**
         * <p>Attaches one or more Classic Load Balancers to the specified Auto Scaling
         * group.</p> <p>To attach an Application Load Balancer or a Network Load Balancer
         * instead, see <a>AttachLoadBalancerTargetGroups</a>.</p> <p>To describe the load
         * balancers for an Auto Scaling group, use <a>DescribeLoadBalancers</a>. To detach
         * the load balancer from the Auto Scaling group, use
         * <a>DetachLoadBalancers</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-load-balancer-asg.html">Attaching
         * a Load Balancer to Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AttachLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachLoadBalancersOutcomeCallable AttachLoadBalancersCallable(const Model::AttachLoadBalancersRequest& request) const;

        /**
         * <p>Attaches one or more Classic Load Balancers to the specified Auto Scaling
         * group.</p> <p>To attach an Application Load Balancer or a Network Load Balancer
         * instead, see <a>AttachLoadBalancerTargetGroups</a>.</p> <p>To describe the load
         * balancers for an Auto Scaling group, use <a>DescribeLoadBalancers</a>. To detach
         * the load balancer from the Auto Scaling group, use
         * <a>DetachLoadBalancers</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-load-balancer-asg.html">Attaching
         * a Load Balancer to Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * group. If you leave a parameter unspecified when updating a scheduled scaling
         * action, the corresponding value remains unchanged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchPutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutScheduledUpdateGroupActionOutcome BatchPutScheduledUpdateGroupAction(const Model::BatchPutScheduledUpdateGroupActionRequest& request) const;

        /**
         * <p>Creates or updates one or more scheduled scaling actions for an Auto Scaling
         * group. If you leave a parameter unspecified when updating a scheduled scaling
         * action, the corresponding value remains unchanged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchPutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutScheduledUpdateGroupActionOutcomeCallable BatchPutScheduledUpdateGroupActionCallable(const Model::BatchPutScheduledUpdateGroupActionRequest& request) const;

        /**
         * <p>Creates or updates one or more scheduled scaling actions for an Auto Scaling
         * group. If you leave a parameter unspecified when updating a scheduled scaling
         * action, the corresponding value remains unchanged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BatchPutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutScheduledUpdateGroupActionAsync(const Model::BatchPutScheduledUpdateGroupActionRequest& request, const BatchPutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * EC2 Auto Scaling Lifecycle Hooks</a> in the <i>Amazon EC2 Auto Scaling User
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
         * EC2 Auto Scaling Lifecycle Hooks</a> in the <i>Amazon EC2 Auto Scaling User
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
         * EC2 Auto Scaling Lifecycle Hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CompleteLifecycleAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompleteLifecycleActionAsync(const Model::CompleteLifecycleActionRequest& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Auto Scaling group with the specified name and attributes.</p>
         * <p>If you exceed your maximum limit of Auto Scaling groups, the call fails. For
         * information about viewing this limit, see <a>DescribeAccountLimits</a>. For
         * information about updating this limit, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling Limits</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateAutoScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutoScalingGroupOutcome CreateAutoScalingGroup(const Model::CreateAutoScalingGroupRequest& request) const;

        /**
         * <p>Creates an Auto Scaling group with the specified name and attributes.</p>
         * <p>If you exceed your maximum limit of Auto Scaling groups, the call fails. For
         * information about viewing this limit, see <a>DescribeAccountLimits</a>. For
         * information about updating this limit, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling Limits</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAutoScalingGroupOutcomeCallable CreateAutoScalingGroupCallable(const Model::CreateAutoScalingGroupRequest& request) const;

        /**
         * <p>Creates an Auto Scaling group with the specified name and attributes.</p>
         * <p>If you exceed your maximum limit of Auto Scaling groups, the call fails. For
         * information about viewing this limit, see <a>DescribeAccountLimits</a>. For
         * information about updating this limit, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling Limits</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAutoScalingGroupAsync(const Model::CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of
         * launch configurations, the call fails. For information about viewing this limit,
         * see <a>DescribeAccountLimits</a>. For information about updating this limit, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling Limits</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchConfiguration.html">Launch
         * Configurations</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchConfigurationOutcome CreateLaunchConfiguration(const Model::CreateLaunchConfigurationRequest& request) const;

        /**
         * <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of
         * launch configurations, the call fails. For information about viewing this limit,
         * see <a>DescribeAccountLimits</a>. For information about updating this limit, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling Limits</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchConfiguration.html">Launch
         * Configurations</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CreateLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLaunchConfigurationOutcomeCallable CreateLaunchConfigurationCallable(const Model::CreateLaunchConfigurationRequest& request) const;

        /**
         * <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of
         * launch configurations, the call fails. For information about viewing this limit,
         * see <a>DescribeAccountLimits</a>. For information about updating this limit, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling Limits</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchConfiguration.html">Launch
         * Configurations</a> in the <i>Amazon EC2 Auto Scaling User
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
         * Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
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
         * Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
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
         * Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
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
         * Scaling group before deleting it, call <a>DetachInstances</a> with the list of
         * instances and the option to decrement the desired capacity. This ensures that
         * Amazon EC2 Auto Scaling does not launch replacement instances.</p> <p>To
         * terminate all instances before deleting the Auto Scaling group, call
         * <a>UpdateAutoScalingGroup</a> and set the minimum size and desired capacity of
         * the Auto Scaling group to zero.</p><p><h3>See Also:</h3>   <a
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
         * Scaling group before deleting it, call <a>DetachInstances</a> with the list of
         * instances and the option to decrement the desired capacity. This ensures that
         * Amazon EC2 Auto Scaling does not launch replacement instances.</p> <p>To
         * terminate all instances before deleting the Auto Scaling group, call
         * <a>UpdateAutoScalingGroup</a> and set the minimum size and desired capacity of
         * the Auto Scaling group to zero.</p><p><h3>See Also:</h3>   <a
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
         * Scaling group before deleting it, call <a>DetachInstances</a> with the list of
         * instances and the option to decrement the desired capacity. This ensures that
         * Amazon EC2 Auto Scaling does not launch replacement instances.</p> <p>To
         * terminate all instances before deleting the Auto Scaling group, call
         * <a>UpdateAutoScalingGroup</a> and set the minimum size and desired capacity of
         * the Auto Scaling group to zero.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes the specified scaling policy.</p> <p>Deleting a policy deletes the
         * underlying alarm action, but does not delete the alarm, even if it no longer has
         * an associated action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified scaling policy.</p> <p>Deleting a policy deletes the
         * underlying alarm action, but does not delete the alarm, even if it no longer has
         * an associated action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DeletePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified scaling policy.</p> <p>Deleting a policy deletes the
         * underlying alarm action, but does not delete the alarm, even if it no longer has
         * an associated action.</p><p><h3>See Also:</h3>   <a
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
         * <p>Describes the current Amazon EC2 Auto Scaling resource limits for your AWS
         * account.</p> <p>For information about requesting an increase in these limits,
         * see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling Limits</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Describes the current Amazon EC2 Auto Scaling resource limits for your AWS
         * account.</p> <p>For information about requesting an increase in these limits,
         * see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling Limits</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Describes the current Amazon EC2 Auto Scaling resource limits for your AWS
         * account.</p> <p>For information about requesting an increase in these limits,
         * see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon
         * EC2 Auto Scaling Limits</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the policy adjustment types for use with
         * <a>PutScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAdjustmentTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAdjustmentTypesOutcome DescribeAdjustmentTypes(const Model::DescribeAdjustmentTypesRequest& request) const;

        /**
         * <p>Describes the policy adjustment types for use with
         * <a>PutScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAdjustmentTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAdjustmentTypesOutcomeCallable DescribeAdjustmentTypesCallable(const Model::DescribeAdjustmentTypesRequest& request) const;

        /**
         * <p>Describes the policy adjustment types for use with
         * <a>PutScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAdjustmentTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAdjustmentTypesAsync(const Model::DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more Auto Scaling groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingGroupsOutcome DescribeAutoScalingGroups(const Model::DescribeAutoScalingGroupsRequest& request) const;

        /**
         * <p>Describes one or more Auto Scaling groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutoScalingGroupsOutcomeCallable DescribeAutoScalingGroupsCallable(const Model::DescribeAutoScalingGroupsRequest& request) const;

        /**
         * <p>Describes one or more Auto Scaling groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAutoScalingGroupsAsync(const Model::DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more Auto Scaling instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingInstancesOutcome DescribeAutoScalingInstances(const Model::DescribeAutoScalingInstancesRequest& request) const;

        /**
         * <p>Describes one or more Auto Scaling instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutoScalingInstancesOutcomeCallable DescribeAutoScalingInstancesCallable(const Model::DescribeAutoScalingInstancesRequest& request) const;

        /**
         * <p>Describes one or more Auto Scaling instances.</p><p><h3>See Also:</h3>   <a
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
         * <p>Describes one or more launch configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLaunchConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLaunchConfigurationsOutcome DescribeLaunchConfigurations(const Model::DescribeLaunchConfigurationsRequest& request) const;

        /**
         * <p>Describes one or more launch configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLaunchConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLaunchConfigurationsOutcomeCallable DescribeLaunchConfigurationsCallable(const Model::DescribeLaunchConfigurationsRequest& request) const;

        /**
         * <p>Describes one or more launch configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLaunchConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLaunchConfigurationsAsync(const Model::DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available types of lifecycle hooks.</p> <p>The following hook
         * types are supported:</p> <ul> <li> <p>autoscaling:EC2_INSTANCE_LAUNCHING</p>
         * </li> <li> <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHookTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLifecycleHookTypesOutcome DescribeLifecycleHookTypes(const Model::DescribeLifecycleHookTypesRequest& request) const;

        /**
         * <p>Describes the available types of lifecycle hooks.</p> <p>The following hook
         * types are supported:</p> <ul> <li> <p>autoscaling:EC2_INSTANCE_LAUNCHING</p>
         * </li> <li> <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHookTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLifecycleHookTypesOutcomeCallable DescribeLifecycleHookTypesCallable(const Model::DescribeLifecycleHookTypesRequest& request) const;

        /**
         * <p>Describes the available types of lifecycle hooks.</p> <p>The following hook
         * types are supported:</p> <ul> <li> <p>autoscaling:EC2_INSTANCE_LAUNCHING</p>
         * </li> <li> <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHookTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLifecycleHookTypesAsync(const Model::DescribeLifecycleHookTypesRequest& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the lifecycle hooks for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHooks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLifecycleHooksOutcome DescribeLifecycleHooks(const Model::DescribeLifecycleHooksRequest& request) const;

        /**
         * <p>Describes the lifecycle hooks for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHooks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLifecycleHooksOutcomeCallable DescribeLifecycleHooksCallable(const Model::DescribeLifecycleHooksRequest& request) const;

        /**
         * <p>Describes the lifecycle hooks for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLifecycleHooks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLifecycleHooksAsync(const Model::DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the target groups for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancerTargetGroupsOutcome DescribeLoadBalancerTargetGroups(const Model::DescribeLoadBalancerTargetGroupsRequest& request) const;

        /**
         * <p>Describes the target groups for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancerTargetGroupsOutcomeCallable DescribeLoadBalancerTargetGroupsCallable(const Model::DescribeLoadBalancerTargetGroupsRequest& request) const;

        /**
         * <p>Describes the target groups for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancerTargetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancerTargetGroupsAsync(const Model::DescribeLoadBalancerTargetGroupsRequest& request, const DescribeLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the load balancers for the specified Auto Scaling group.</p>
         * <p>This operation describes only Classic Load Balancers. If you have Application
         * Load Balancers or Network Load Balancers, use
         * <a>DescribeLoadBalancerTargetGroups</a> instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * <p>Describes the load balancers for the specified Auto Scaling group.</p>
         * <p>This operation describes only Classic Load Balancers. If you have Application
         * Load Balancers or Network Load Balancers, use
         * <a>DescribeLoadBalancerTargetGroups</a> instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * <p>Describes the load balancers for the specified Auto Scaling group.</p>
         * <p>This operation describes only Classic Load Balancers. If you have Application
         * Load Balancers or Network Load Balancers, use
         * <a>DescribeLoadBalancerTargetGroups</a> instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available CloudWatch metrics for Amazon EC2 Auto Scaling.</p>
         * <p>The <code>GroupStandbyInstances</code> metric is not returned by default. You
         * must explicitly request this metric when calling
         * <a>EnableMetricsCollection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeMetricCollectionTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricCollectionTypesOutcome DescribeMetricCollectionTypes(const Model::DescribeMetricCollectionTypesRequest& request) const;

        /**
         * <p>Describes the available CloudWatch metrics for Amazon EC2 Auto Scaling.</p>
         * <p>The <code>GroupStandbyInstances</code> metric is not returned by default. You
         * must explicitly request this metric when calling
         * <a>EnableMetricsCollection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeMetricCollectionTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMetricCollectionTypesOutcomeCallable DescribeMetricCollectionTypesCallable(const Model::DescribeMetricCollectionTypesRequest& request) const;

        /**
         * <p>Describes the available CloudWatch metrics for Amazon EC2 Auto Scaling.</p>
         * <p>The <code>GroupStandbyInstances</code> metric is not returned by default. You
         * must explicitly request this metric when calling
         * <a>EnableMetricsCollection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeMetricCollectionTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMetricCollectionTypesAsync(const Model::DescribeMetricCollectionTypesRequest& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the notification actions associated with the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeNotificationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationConfigurationsOutcome DescribeNotificationConfigurations(const Model::DescribeNotificationConfigurationsRequest& request) const;

        /**
         * <p>Describes the notification actions associated with the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeNotificationConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotificationConfigurationsOutcomeCallable DescribeNotificationConfigurationsCallable(const Model::DescribeNotificationConfigurationsRequest& request) const;

        /**
         * <p>Describes the notification actions associated with the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeNotificationConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotificationConfigurationsAsync(const Model::DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the policies for the specified Auto Scaling group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePoliciesOutcome DescribePolicies(const Model::DescribePoliciesRequest& request) const;

        /**
         * <p>Describes the policies for the specified Auto Scaling group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribePolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePoliciesOutcomeCallable DescribePoliciesCallable(const Model::DescribePoliciesRequest& request) const;

        /**
         * <p>Describes the policies for the specified Auto Scaling group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribePolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePoliciesAsync(const Model::DescribePoliciesRequest& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more scaling activities for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingActivitiesOutcome DescribeScalingActivities(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * <p>Describes one or more scaling activities for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingActivities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingActivitiesOutcomeCallable DescribeScalingActivitiesCallable(const Model::DescribeScalingActivitiesRequest& request) const;

        /**
         * <p>Describes one or more scaling activities for the specified Auto Scaling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingActivities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingActivitiesAsync(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the scaling process types for use with <a>ResumeProcesses</a> and
         * <a>SuspendProcesses</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingProcessTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingProcessTypesOutcome DescribeScalingProcessTypes(const Model::DescribeScalingProcessTypesRequest& request) const;

        /**
         * <p>Describes the scaling process types for use with <a>ResumeProcesses</a> and
         * <a>SuspendProcesses</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingProcessTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingProcessTypesOutcomeCallable DescribeScalingProcessTypesCallable(const Model::DescribeScalingProcessTypesRequest& request) const;

        /**
         * <p>Describes the scaling process types for use with <a>ResumeProcesses</a> and
         * <a>SuspendProcesses</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScalingProcessTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingProcessTypesAsync(const Model::DescribeScalingProcessTypesRequest& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the actions scheduled for your Auto Scaling group that haven't run.
         * To describe the actions that have already run, use
         * <a>DescribeScalingActivities</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScheduledActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledActionsOutcome DescribeScheduledActions(const Model::DescribeScheduledActionsRequest& request) const;

        /**
         * <p>Describes the actions scheduled for your Auto Scaling group that haven't run.
         * To describe the actions that have already run, use
         * <a>DescribeScalingActivities</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeScheduledActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduledActionsOutcomeCallable DescribeScheduledActionsCallable(const Model::DescribeScheduledActionsRequest& request) const;

        /**
         * <p>Describes the actions scheduled for your Auto Scaling group that haven't run.
         * To describe the actions that have already run, use
         * <a>DescribeScalingActivities</a>.</p><p><h3>See Also:</h3>   <a
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
         * is returned.</p><p><h3>See Also:</h3>   <a
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
         * is returned.</p><p><h3>See Also:</h3>   <a
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
         * is returned.</p><p><h3>See Also:</h3>   <a
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
         * Which Auto Scaling Instances Terminate During Scale In</a> in the <i>Amazon EC2
         * Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeTerminationPolicyTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTerminationPolicyTypesOutcome DescribeTerminationPolicyTypes(const Model::DescribeTerminationPolicyTypesRequest& request) const;

        /**
         * <p>Describes the termination policies supported by Amazon EC2 Auto Scaling.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
         * Which Auto Scaling Instances Terminate During Scale In</a> in the <i>Amazon EC2
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
         * Which Auto Scaling Instances Terminate During Scale In</a> in the <i>Amazon EC2
         * Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeTerminationPolicyTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTerminationPolicyTypesAsync(const Model::DescribeTerminationPolicyTypesRequest& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * EC2 Instances from Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
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
         * EC2 Instances from Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
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
         * EC2 Instances from Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
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
         * Application Load Balancers or Network Load Balancers, use
         * <a>DetachLoadBalancerTargetGroups</a> instead.</p> <p>When you detach a load
         * balancer, it enters the <code>Removing</code> state while deregistering the
         * instances in the group. When all instances are deregistered, then you can no
         * longer describe the load balancer using <a>DescribeLoadBalancers</a>. The
         * instances remain running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachLoadBalancersOutcome DetachLoadBalancers(const Model::DetachLoadBalancersRequest& request) const;

        /**
         * <p>Detaches one or more Classic Load Balancers from the specified Auto Scaling
         * group.</p> <p>This operation detaches only Classic Load Balancers. If you have
         * Application Load Balancers or Network Load Balancers, use
         * <a>DetachLoadBalancerTargetGroups</a> instead.</p> <p>When you detach a load
         * balancer, it enters the <code>Removing</code> state while deregistering the
         * instances in the group. When all instances are deregistered, then you can no
         * longer describe the load balancer using <a>DescribeLoadBalancers</a>. The
         * instances remain running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DetachLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachLoadBalancersOutcomeCallable DetachLoadBalancersCallable(const Model::DetachLoadBalancersRequest& request) const;

        /**
         * <p>Detaches one or more Classic Load Balancers from the specified Auto Scaling
         * group.</p> <p>This operation detaches only Classic Load Balancers. If you have
         * Application Load Balancers or Network Load Balancers, use
         * <a>DetachLoadBalancerTargetGroups</a> instead.</p> <p>When you detach a load
         * balancer, it enters the <code>Removing</code> state while deregistering the
         * instances in the group. When all instances are deregistered, then you can no
         * longer describe the load balancer using <a>DescribeLoadBalancers</a>. The
         * instances remain running.</p><p><h3>See Also:</h3>   <a
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
         * Your Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnableMetricsCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableMetricsCollectionOutcome EnableMetricsCollection(const Model::EnableMetricsCollectionRequest& request) const;

        /**
         * <p>Enables group metrics for the specified Auto Scaling group. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-monitoring.html">Monitoring
         * Your Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * Your Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnableMetricsCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableMetricsCollectionAsync(const Model::EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves the specified instances into the standby state.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * Removing Instances from Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnterStandby">AWS
         * API Reference</a></p>
         */
        virtual Model::EnterStandbyOutcome EnterStandby(const Model::EnterStandbyRequest& request) const;

        /**
         * <p>Moves the specified instances into the standby state.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * Removing Instances from Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnterStandby">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnterStandbyOutcomeCallable EnterStandbyCallable(const Model::EnterStandbyRequest& request) const;

        /**
         * <p>Moves the specified instances into the standby state.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * Removing Instances from Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnterStandby">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnterStandbyAsync(const Model::EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Executes the specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExecutePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecutePolicyOutcome ExecutePolicy(const Model::ExecutePolicyRequest& request) const;

        /**
         * <p>Executes the specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExecutePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecutePolicyOutcomeCallable ExecutePolicyCallable(const Model::ExecutePolicyRequest& request) const;

        /**
         * <p>Executes the specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExecutePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecutePolicyAsync(const Model::ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves the specified instances out of the standby state.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * Removing Instances from Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExitStandby">AWS
         * API Reference</a></p>
         */
        virtual Model::ExitStandbyOutcome ExitStandby(const Model::ExitStandbyRequest& request) const;

        /**
         * <p>Moves the specified instances out of the standby state.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * Removing Instances from Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExitStandby">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExitStandbyOutcomeCallable ExitStandbyCallable(const Model::ExitStandbyRequest& request) const;

        /**
         * <p>Moves the specified instances out of the standby state.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily
         * Removing Instances from Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto
         * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ExitStandby">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExitStandbyAsync(const Model::ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * to keep the instance in a pending state using using
         * <a>RecordLifecycleActionHeartbeat</a>.</p> </li> <li> <p>If you finish before
         * the timeout period ends, complete the lifecycle action using
         * <a>CompleteLifecycleAction</a>.</p> </li> </ol> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling Lifecycle Hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>If you exceed your maximum limit of lifecycle hooks, which by
         * default is 50 per Auto Scaling group, the call fails.</p> <p>You can view the
         * lifecycle hooks for an Auto Scaling group using <a>DescribeLifecycleHooks</a>.
         * If you are no longer using a lifecycle hook, you can delete it using
         * <a>DeleteLifecycleHook</a>.</p><p><h3>See Also:</h3>   <a
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
         * to keep the instance in a pending state using using
         * <a>RecordLifecycleActionHeartbeat</a>.</p> </li> <li> <p>If you finish before
         * the timeout period ends, complete the lifecycle action using
         * <a>CompleteLifecycleAction</a>.</p> </li> </ol> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling Lifecycle Hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>If you exceed your maximum limit of lifecycle hooks, which by
         * default is 50 per Auto Scaling group, the call fails.</p> <p>You can view the
         * lifecycle hooks for an Auto Scaling group using <a>DescribeLifecycleHooks</a>.
         * If you are no longer using a lifecycle hook, you can delete it using
         * <a>DeleteLifecycleHook</a>.</p><p><h3>See Also:</h3>   <a
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
         * to keep the instance in a pending state using using
         * <a>RecordLifecycleActionHeartbeat</a>.</p> </li> <li> <p>If you finish before
         * the timeout period ends, complete the lifecycle action using
         * <a>CompleteLifecycleAction</a>.</p> </li> </ol> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
         * EC2 Auto Scaling Lifecycle Hooks</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p> <p>If you exceed your maximum limit of lifecycle hooks, which by
         * default is 50 per Auto Scaling group, the call fails.</p> <p>You can view the
         * lifecycle hooks for an Auto Scaling group using <a>DescribeLifecycleHooks</a>.
         * If you are no longer using a lifecycle hook, you can delete it using
         * <a>DeleteLifecycleHook</a>.</p><p><h3>See Also:</h3>   <a
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
         * Amazon SNS Notifications When Your Auto Scaling Group Scales</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * Amazon SNS Notifications When Your Auto Scaling Group Scales</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * Amazon SNS Notifications When Your Auto Scaling Group Scales</a> in the
         * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutNotificationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutNotificationConfigurationAsync(const Model::PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a policy for an Auto Scaling group. To update an existing
         * policy, use the existing policy name and set the parameters to change. Any
         * existing parameter not changed in an update to an existing policy is not changed
         * in this update request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a policy for an Auto Scaling group. To update an existing
         * policy, use the existing policy name and set the parameters to change. Any
         * existing parameter not changed in an update to an existing policy is not changed
         * in this update request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a policy for an Auto Scaling group. To update an existing
         * policy, use the existing policy name and set the parameters to change. Any
         * existing parameter not changed in an update to an existing policy is not changed
         * in this update request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a scheduled scaling action for an Auto Scaling group. If
         * you leave a parameter unspecified when updating a scheduled scaling action, the
         * corresponding value remains unchanged.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/schedule_time.html">Scheduled
         * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScheduledUpdateGroupActionOutcome PutScheduledUpdateGroupAction(const Model::PutScheduledUpdateGroupActionRequest& request) const;

        /**
         * <p>Creates or updates a scheduled scaling action for an Auto Scaling group. If
         * you leave a parameter unspecified when updating a scheduled scaling action, the
         * corresponding value remains unchanged.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/schedule_time.html">Scheduled
         * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutScheduledUpdateGroupActionOutcomeCallable PutScheduledUpdateGroupActionCallable(const Model::PutScheduledUpdateGroupActionRequest& request) const;

        /**
         * <p>Creates or updates a scheduled scaling action for an Auto Scaling group. If
         * you leave a parameter unspecified when updating a scheduled scaling action, the
         * corresponding value remains unchanged.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/schedule_time.html">Scheduled
         * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PutScheduledUpdateGroupAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScheduledUpdateGroupActionAsync(const Model::PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Records a heartbeat for the lifecycle action associated with the specified
         * token or instance. This extends the timeout by the length of time defined using
         * <a>PutLifecycleHook</a>.</p> <p>This step is a part of the procedure for adding
         * a lifecycle hook to an Auto Scaling group:</p> <ol> <li> <p>(Optional) Create a
         * Lambda function and a rule that allows CloudWatch Events to invoke your Lambda
         * function when Amazon EC2 Auto Scaling launches or terminates instances.</p>
         * </li> <li> <p>(Optional) Create a notification target and an IAM role. The
         * target can be either an Amazon SQS queue or an Amazon SNS topic. The role allows
         * Amazon EC2 Auto Scaling to publish lifecycle notifications to the target.</p>
         * </li> <li> <p>Create the lifecycle hook. Specify whether the hook is used when
         * the instances launch or terminate.</p> </li> <li> <p> <b>If you need more time,
         * record the lifecycle action heartbeat to keep the instance in a pending
         * state.</b> </p> </li> <li> <p>If you finish before the timeout period ends,
         * complete the lifecycle action.</p> </li> </ol> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Auto
         * Scaling Lifecycle</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/RecordLifecycleActionHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::RecordLifecycleActionHeartbeatOutcome RecordLifecycleActionHeartbeat(const Model::RecordLifecycleActionHeartbeatRequest& request) const;

        /**
         * <p>Records a heartbeat for the lifecycle action associated with the specified
         * token or instance. This extends the timeout by the length of time defined using
         * <a>PutLifecycleHook</a>.</p> <p>This step is a part of the procedure for adding
         * a lifecycle hook to an Auto Scaling group:</p> <ol> <li> <p>(Optional) Create a
         * Lambda function and a rule that allows CloudWatch Events to invoke your Lambda
         * function when Amazon EC2 Auto Scaling launches or terminates instances.</p>
         * </li> <li> <p>(Optional) Create a notification target and an IAM role. The
         * target can be either an Amazon SQS queue or an Amazon SNS topic. The role allows
         * Amazon EC2 Auto Scaling to publish lifecycle notifications to the target.</p>
         * </li> <li> <p>Create the lifecycle hook. Specify whether the hook is used when
         * the instances launch or terminate.</p> </li> <li> <p> <b>If you need more time,
         * record the lifecycle action heartbeat to keep the instance in a pending
         * state.</b> </p> </li> <li> <p>If you finish before the timeout period ends,
         * complete the lifecycle action.</p> </li> </ol> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Auto
         * Scaling Lifecycle</a> in the <i>Amazon EC2 Auto Scaling User
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
         * <a>PutLifecycleHook</a>.</p> <p>This step is a part of the procedure for adding
         * a lifecycle hook to an Auto Scaling group:</p> <ol> <li> <p>(Optional) Create a
         * Lambda function and a rule that allows CloudWatch Events to invoke your Lambda
         * function when Amazon EC2 Auto Scaling launches or terminates instances.</p>
         * </li> <li> <p>(Optional) Create a notification target and an IAM role. The
         * target can be either an Amazon SQS queue or an Amazon SNS topic. The role allows
         * Amazon EC2 Auto Scaling to publish lifecycle notifications to the target.</p>
         * </li> <li> <p>Create the lifecycle hook. Specify whether the hook is used when
         * the instances launch or terminate.</p> </li> <li> <p> <b>If you need more time,
         * record the lifecycle action heartbeat to keep the instance in a pending
         * state.</b> </p> </li> <li> <p>If you finish before the timeout period ends,
         * complete the lifecycle action.</p> </li> </ol> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Auto
         * Scaling Lifecycle</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/RecordLifecycleActionHeartbeat">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RecordLifecycleActionHeartbeatAsync(const Model::RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resumes the specified suspended automatic scaling processes, or all suspended
         * process, for the specified Auto Scaling group.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and Resuming Scaling Processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ResumeProcesses">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeProcessesOutcome ResumeProcesses(const Model::ResumeProcessesRequest& request) const;

        /**
         * <p>Resumes the specified suspended automatic scaling processes, or all suspended
         * process, for the specified Auto Scaling group.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and Resuming Scaling Processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ResumeProcesses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeProcessesOutcomeCallable ResumeProcessesCallable(const Model::ResumeProcessesRequest& request) const;

        /**
         * <p>Resumes the specified suspended automatic scaling processes, or all suspended
         * process, for the specified Auto Scaling group.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and Resuming Scaling Processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ResumeProcesses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeProcessesAsync(const Model::ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the size of the specified Auto Scaling group.</p> <p>For more
         * information about desired capacity, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">What
         * Is Amazon EC2 Auto Scaling?</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetDesiredCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDesiredCapacityOutcome SetDesiredCapacity(const Model::SetDesiredCapacityRequest& request) const;

        /**
         * <p>Sets the size of the specified Auto Scaling group.</p> <p>For more
         * information about desired capacity, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">What
         * Is Amazon EC2 Auto Scaling?</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetDesiredCapacity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDesiredCapacityOutcomeCallable SetDesiredCapacityCallable(const Model::SetDesiredCapacityRequest& request) const;

        /**
         * <p>Sets the size of the specified Auto Scaling group.</p> <p>For more
         * information about desired capacity, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">What
         * Is Amazon EC2 Auto Scaling?</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::SetInstanceHealthOutcome SetInstanceHealth(const Model::SetInstanceHealthRequest& request) const;

        /**
         * <p>Sets the health status of the specified instance.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
         * Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
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
         * Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceHealth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetInstanceHealthAsync(const Model::SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the instance protection settings of the specified instances.</p>
         * <p>For more information about preventing instances that are part of an Auto
         * Scaling group from terminating on scale in, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
         * Protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::SetInstanceProtectionOutcome SetInstanceProtection(const Model::SetInstanceProtectionRequest& request) const;

        /**
         * <p>Updates the instance protection settings of the specified instances.</p>
         * <p>For more information about preventing instances that are part of an Auto
         * Scaling group from terminating on scale in, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
         * Protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetInstanceProtectionOutcomeCallable SetInstanceProtectionCallable(const Model::SetInstanceProtectionRequest& request) const;

        /**
         * <p>Updates the instance protection settings of the specified instances.</p>
         * <p>For more information about preventing instances that are part of an Auto
         * Scaling group from terminating on scale in, see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
         * Protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SetInstanceProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetInstanceProtectionAsync(const Model::SetInstanceProtectionRequest& request, const SetInstanceProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Suspends the specified automatic scaling processes, or all processes, for the
         * specified Auto Scaling group.</p> <p>If you suspend either the
         * <code>Launch</code> or <code>Terminate</code> process types, it can prevent
         * other process types from functioning properly.</p> <p>To resume processes that
         * have been suspended, use <a>ResumeProcesses</a>.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and Resuming Scaling Processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SuspendProcesses">AWS
         * API Reference</a></p>
         */
        virtual Model::SuspendProcessesOutcome SuspendProcesses(const Model::SuspendProcessesRequest& request) const;

        /**
         * <p>Suspends the specified automatic scaling processes, or all processes, for the
         * specified Auto Scaling group.</p> <p>If you suspend either the
         * <code>Launch</code> or <code>Terminate</code> process types, it can prevent
         * other process types from functioning properly.</p> <p>To resume processes that
         * have been suspended, use <a>ResumeProcesses</a>.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and Resuming Scaling Processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SuspendProcesses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SuspendProcessesOutcomeCallable SuspendProcessesCallable(const Model::SuspendProcessesRequest& request) const;

        /**
         * <p>Suspends the specified automatic scaling processes, or all processes, for the
         * specified Auto Scaling group.</p> <p>If you suspend either the
         * <code>Launch</code> or <code>Terminate</code> process types, it can prevent
         * other process types from functioning properly.</p> <p>To resume processes that
         * have been suspended, use <a>ResumeProcesses</a>.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending
         * and Resuming Scaling Processes</a> in the <i>Amazon EC2 Auto Scaling User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SuspendProcesses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SuspendProcessesAsync(const Model::SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the specified instance and optionally adjusts the desired group
         * size.</p> <p>This call simply makes a termination request. The instance is not
         * terminated immediately.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TerminateInstanceInAutoScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateInstanceInAutoScalingGroupOutcome TerminateInstanceInAutoScalingGroup(const Model::TerminateInstanceInAutoScalingGroupRequest& request) const;

        /**
         * <p>Terminates the specified instance and optionally adjusts the desired group
         * size.</p> <p>This call simply makes a termination request. The instance is not
         * terminated immediately.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TerminateInstanceInAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateInstanceInAutoScalingGroupOutcomeCallable TerminateInstanceInAutoScalingGroupCallable(const Model::TerminateInstanceInAutoScalingGroupRequest& request) const;

        /**
         * <p>Terminates the specified instance and optionally adjusts the desired group
         * size.</p> <p>This call simply makes a termination request. The instance is not
         * terminated immediately.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TerminateInstanceInAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateInstanceInAutoScalingGroupAsync(const Model::TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration for the specified Auto Scaling group.</p> <p>The
         * new settings take effect on any scaling activities after this call returns.
         * Scaling activities that are currently in progress aren't affected.</p> <p>To
         * update an Auto Scaling group with a launch configuration with
         * <code>InstanceMonitoring</code> set to <code>false</code>, you must first
         * disable the collection of group metrics. Otherwise, you get an error. If you
         * have previously enabled the collection of group metrics, you can disable it
         * using <a>DisableMetricsCollection</a>.</p> <p>Note the following:</p> <ul> <li>
         * <p>If you specify a new value for <code>MinSize</code> without specifying a
         * value for <code>DesiredCapacity</code>, and the new <code>MinSize</code> is
         * larger than the current size of the group, we implicitly call
         * <a>SetDesiredCapacity</a> to set the size of the group to the new value of
         * <code>MinSize</code>.</p> </li> <li> <p>If you specify a new value for
         * <code>MaxSize</code> without specifying a value for
         * <code>DesiredCapacity</code>, and the new <code>MaxSize</code> is smaller than
         * the current size of the group, we implicitly call <a>SetDesiredCapacity</a> to
         * set the size of the group to the new value of <code>MaxSize</code>.</p> </li>
         * <li> <p>All other optional parameters are left unchanged if not specified.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/UpdateAutoScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAutoScalingGroupOutcome UpdateAutoScalingGroup(const Model::UpdateAutoScalingGroupRequest& request) const;

        /**
         * <p>Updates the configuration for the specified Auto Scaling group.</p> <p>The
         * new settings take effect on any scaling activities after this call returns.
         * Scaling activities that are currently in progress aren't affected.</p> <p>To
         * update an Auto Scaling group with a launch configuration with
         * <code>InstanceMonitoring</code> set to <code>false</code>, you must first
         * disable the collection of group metrics. Otherwise, you get an error. If you
         * have previously enabled the collection of group metrics, you can disable it
         * using <a>DisableMetricsCollection</a>.</p> <p>Note the following:</p> <ul> <li>
         * <p>If you specify a new value for <code>MinSize</code> without specifying a
         * value for <code>DesiredCapacity</code>, and the new <code>MinSize</code> is
         * larger than the current size of the group, we implicitly call
         * <a>SetDesiredCapacity</a> to set the size of the group to the new value of
         * <code>MinSize</code>.</p> </li> <li> <p>If you specify a new value for
         * <code>MaxSize</code> without specifying a value for
         * <code>DesiredCapacity</code>, and the new <code>MaxSize</code> is smaller than
         * the current size of the group, we implicitly call <a>SetDesiredCapacity</a> to
         * set the size of the group to the new value of <code>MaxSize</code>.</p> </li>
         * <li> <p>All other optional parameters are left unchanged if not specified.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/UpdateAutoScalingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAutoScalingGroupOutcomeCallable UpdateAutoScalingGroupCallable(const Model::UpdateAutoScalingGroupRequest& request) const;

        /**
         * <p>Updates the configuration for the specified Auto Scaling group.</p> <p>The
         * new settings take effect on any scaling activities after this call returns.
         * Scaling activities that are currently in progress aren't affected.</p> <p>To
         * update an Auto Scaling group with a launch configuration with
         * <code>InstanceMonitoring</code> set to <code>false</code>, you must first
         * disable the collection of group metrics. Otherwise, you get an error. If you
         * have previously enabled the collection of group metrics, you can disable it
         * using <a>DisableMetricsCollection</a>.</p> <p>Note the following:</p> <ul> <li>
         * <p>If you specify a new value for <code>MinSize</code> without specifying a
         * value for <code>DesiredCapacity</code>, and the new <code>MinSize</code> is
         * larger than the current size of the group, we implicitly call
         * <a>SetDesiredCapacity</a> to set the size of the group to the new value of
         * <code>MinSize</code>.</p> </li> <li> <p>If you specify a new value for
         * <code>MaxSize</code> without specifying a value for
         * <code>DesiredCapacity</code>, and the new <code>MaxSize</code> is smaller than
         * the current size of the group, we implicitly call <a>SetDesiredCapacity</a> to
         * set the size of the group to the new value of <code>MaxSize</code>.</p> </li>
         * <li> <p>All other optional parameters are left unchanged if not specified.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
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
        void DescribeAccountLimitsAsyncHelper(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAdjustmentTypesAsyncHelper(const Model::DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoScalingGroupsAsyncHelper(const Model::DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoScalingInstancesAsyncHelper(const Model::DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoScalingNotificationTypesAsyncHelper(const Model::DescribeAutoScalingNotificationTypesRequest& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void DetachInstancesAsyncHelper(const Model::DetachInstancesRequest& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachLoadBalancerTargetGroupsAsyncHelper(const Model::DetachLoadBalancerTargetGroupsRequest& request, const DetachLoadBalancerTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachLoadBalancersAsyncHelper(const Model::DetachLoadBalancersRequest& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableMetricsCollectionAsyncHelper(const Model::DisableMetricsCollectionRequest& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableMetricsCollectionAsyncHelper(const Model::EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnterStandbyAsyncHelper(const Model::EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExecutePolicyAsyncHelper(const Model::ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExitStandbyAsyncHelper(const Model::ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLifecycleHookAsyncHelper(const Model::PutLifecycleHookRequest& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutNotificationConfigurationAsyncHelper(const Model::PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScalingPolicyAsyncHelper(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScheduledUpdateGroupActionAsyncHelper(const Model::PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RecordLifecycleActionHeartbeatAsyncHelper(const Model::RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResumeProcessesAsyncHelper(const Model::ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetDesiredCapacityAsyncHelper(const Model::SetDesiredCapacityRequest& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetInstanceHealthAsyncHelper(const Model::SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetInstanceProtectionAsyncHelper(const Model::SetInstanceProtectionRequest& request, const SetInstanceProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SuspendProcessesAsyncHelper(const Model::SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateInstanceInAutoScalingGroupAsyncHelper(const Model::TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAutoScalingGroupAsyncHelper(const Model::UpdateAutoScalingGroupRequest& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AutoScaling
} // namespace Aws
