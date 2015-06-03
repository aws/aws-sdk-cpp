/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/autoscaling/model/AttachLoadBalancersResult.h>
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
#include <aws/autoscaling/model/DetachLoadBalancersResult.h>
#include <aws/autoscaling/model/EnterStandbyResult.h>
#include <aws/autoscaling/model/ExitStandbyResult.h>
#include <aws/autoscaling/model/PutLifecycleHookResult.h>
#include <aws/autoscaling/model/PutScalingPolicyResult.h>
#include <aws/autoscaling/model/RecordLifecycleActionHeartbeatResult.h>
#include <aws/autoscaling/model/TerminateInstanceInAutoScalingGroupResult.h>
#include <aws/core/NoResult.h>
#include <future>

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
  class AttachLoadBalancersRequest;
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
  class SuspendProcessesRequest;
  class TerminateInstanceInAutoScalingGroupRequest;
  class UpdateAutoScalingGroupRequest;

  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> AttachInstancesOutcome;
  typedef Utils::Outcome<AttachLoadBalancersResult, Client::AWSError<AutoScalingErrors>> AttachLoadBalancersOutcome;
  typedef Utils::Outcome<CompleteLifecycleActionResult, Client::AWSError<AutoScalingErrors>> CompleteLifecycleActionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> CreateAutoScalingGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> CreateLaunchConfigurationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> CreateOrUpdateTagsOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeleteAutoScalingGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeleteLaunchConfigurationOutcome;
  typedef Utils::Outcome<DeleteLifecycleHookResult, Client::AWSError<AutoScalingErrors>> DeleteLifecycleHookOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeleteNotificationConfigurationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeletePolicyOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeleteScheduledActionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeleteTagsOutcome;
  typedef Utils::Outcome<DescribeAccountLimitsResult, Client::AWSError<AutoScalingErrors>> DescribeAccountLimitsOutcome;
  typedef Utils::Outcome<DescribeAdjustmentTypesResult, Client::AWSError<AutoScalingErrors>> DescribeAdjustmentTypesOutcome;
  typedef Utils::Outcome<DescribeAutoScalingGroupsResult, Client::AWSError<AutoScalingErrors>> DescribeAutoScalingGroupsOutcome;
  typedef Utils::Outcome<DescribeAutoScalingInstancesResult, Client::AWSError<AutoScalingErrors>> DescribeAutoScalingInstancesOutcome;
  typedef Utils::Outcome<DescribeAutoScalingNotificationTypesResult, Client::AWSError<AutoScalingErrors>> DescribeAutoScalingNotificationTypesOutcome;
  typedef Utils::Outcome<DescribeLaunchConfigurationsResult, Client::AWSError<AutoScalingErrors>> DescribeLaunchConfigurationsOutcome;
  typedef Utils::Outcome<DescribeLifecycleHookTypesResult, Client::AWSError<AutoScalingErrors>> DescribeLifecycleHookTypesOutcome;
  typedef Utils::Outcome<DescribeLifecycleHooksResult, Client::AWSError<AutoScalingErrors>> DescribeLifecycleHooksOutcome;
  typedef Utils::Outcome<DescribeLoadBalancersResult, Client::AWSError<AutoScalingErrors>> DescribeLoadBalancersOutcome;
  typedef Utils::Outcome<DescribeMetricCollectionTypesResult, Client::AWSError<AutoScalingErrors>> DescribeMetricCollectionTypesOutcome;
  typedef Utils::Outcome<DescribeNotificationConfigurationsResult, Client::AWSError<AutoScalingErrors>> DescribeNotificationConfigurationsOutcome;
  typedef Utils::Outcome<DescribePoliciesResult, Client::AWSError<AutoScalingErrors>> DescribePoliciesOutcome;
  typedef Utils::Outcome<DescribeScalingActivitiesResult, Client::AWSError<AutoScalingErrors>> DescribeScalingActivitiesOutcome;
  typedef Utils::Outcome<DescribeScalingProcessTypesResult, Client::AWSError<AutoScalingErrors>> DescribeScalingProcessTypesOutcome;
  typedef Utils::Outcome<DescribeScheduledActionsResult, Client::AWSError<AutoScalingErrors>> DescribeScheduledActionsOutcome;
  typedef Utils::Outcome<DescribeTagsResult, Client::AWSError<AutoScalingErrors>> DescribeTagsOutcome;
  typedef Utils::Outcome<DescribeTerminationPolicyTypesResult, Client::AWSError<AutoScalingErrors>> DescribeTerminationPolicyTypesOutcome;
  typedef Utils::Outcome<DetachInstancesResult, Client::AWSError<AutoScalingErrors>> DetachInstancesOutcome;
  typedef Utils::Outcome<DetachLoadBalancersResult, Client::AWSError<AutoScalingErrors>> DetachLoadBalancersOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DisableMetricsCollectionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> EnableMetricsCollectionOutcome;
  typedef Utils::Outcome<EnterStandbyResult, Client::AWSError<AutoScalingErrors>> EnterStandbyOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> ExecutePolicyOutcome;
  typedef Utils::Outcome<ExitStandbyResult, Client::AWSError<AutoScalingErrors>> ExitStandbyOutcome;
  typedef Utils::Outcome<PutLifecycleHookResult, Client::AWSError<AutoScalingErrors>> PutLifecycleHookOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> PutNotificationConfigurationOutcome;
  typedef Utils::Outcome<PutScalingPolicyResult, Client::AWSError<AutoScalingErrors>> PutScalingPolicyOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> PutScheduledUpdateGroupActionOutcome;
  typedef Utils::Outcome<RecordLifecycleActionHeartbeatResult, Client::AWSError<AutoScalingErrors>> RecordLifecycleActionHeartbeatOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> ResumeProcessesOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> SetDesiredCapacityOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> SetInstanceHealthOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> SuspendProcessesOutcome;
  typedef Utils::Outcome<TerminateInstanceInAutoScalingGroupResult, Client::AWSError<AutoScalingErrors>> TerminateInstanceInAutoScalingGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> UpdateAutoScalingGroupOutcome;

  typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
  typedef std::future<AttachLoadBalancersOutcome> AttachLoadBalancersOutcomeCallable;
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
  typedef std::future<SuspendProcessesOutcome> SuspendProcessesOutcomeCallable;
  typedef std::future<TerminateInstanceInAutoScalingGroupOutcome> TerminateInstanceInAutoScalingGroupOutcomeCallable;
  typedef std::future<UpdateAutoScalingGroupOutcome> UpdateAutoScalingGroupOutcomeCallable;
} // namespace Model

  class AutoScalingClient;

  typedef Aws::Utils::Event<AutoScalingClient, const Model::AttachInstancesRequest&, const Model::AttachInstancesOutcome&> AttachInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::AttachLoadBalancersRequest&, const Model::AttachLoadBalancersOutcome&> AttachLoadBalancersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::CompleteLifecycleActionRequest&, const Model::CompleteLifecycleActionOutcome&> CompleteLifecycleActionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::CreateAutoScalingGroupRequest&, const Model::CreateAutoScalingGroupOutcome&> CreateAutoScalingGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::CreateLaunchConfigurationRequest&, const Model::CreateLaunchConfigurationOutcome&> CreateLaunchConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::CreateOrUpdateTagsRequest&, const Model::CreateOrUpdateTagsOutcome&> CreateOrUpdateTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DeleteAutoScalingGroupRequest&, const Model::DeleteAutoScalingGroupOutcome&> DeleteAutoScalingGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DeleteLaunchConfigurationRequest&, const Model::DeleteLaunchConfigurationOutcome&> DeleteLaunchConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DeleteLifecycleHookRequest&, const Model::DeleteLifecycleHookOutcome&> DeleteLifecycleHookOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DeleteNotificationConfigurationRequest&, const Model::DeleteNotificationConfigurationOutcome&> DeleteNotificationConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&> DeletePolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DeleteScheduledActionRequest&, const Model::DeleteScheduledActionOutcome&> DeleteScheduledActionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&> DeleteTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeAccountLimitsRequest&, const Model::DescribeAccountLimitsOutcome&> DescribeAccountLimitsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeAdjustmentTypesRequest&, const Model::DescribeAdjustmentTypesOutcome&> DescribeAdjustmentTypesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeAutoScalingGroupsRequest&, const Model::DescribeAutoScalingGroupsOutcome&> DescribeAutoScalingGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeAutoScalingInstancesRequest&, const Model::DescribeAutoScalingInstancesOutcome&> DescribeAutoScalingInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeAutoScalingNotificationTypesRequest&, const Model::DescribeAutoScalingNotificationTypesOutcome&> DescribeAutoScalingNotificationTypesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeLaunchConfigurationsRequest&, const Model::DescribeLaunchConfigurationsOutcome&> DescribeLaunchConfigurationsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeLifecycleHookTypesRequest&, const Model::DescribeLifecycleHookTypesOutcome&> DescribeLifecycleHookTypesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeLifecycleHooksRequest&, const Model::DescribeLifecycleHooksOutcome&> DescribeLifecycleHooksOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeLoadBalancersRequest&, const Model::DescribeLoadBalancersOutcome&> DescribeLoadBalancersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeMetricCollectionTypesRequest&, const Model::DescribeMetricCollectionTypesOutcome&> DescribeMetricCollectionTypesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeNotificationConfigurationsRequest&, const Model::DescribeNotificationConfigurationsOutcome&> DescribeNotificationConfigurationsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribePoliciesRequest&, const Model::DescribePoliciesOutcome&> DescribePoliciesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeScalingActivitiesRequest&, const Model::DescribeScalingActivitiesOutcome&> DescribeScalingActivitiesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeScalingProcessTypesRequest&, const Model::DescribeScalingProcessTypesOutcome&> DescribeScalingProcessTypesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeScheduledActionsRequest&, const Model::DescribeScheduledActionsOutcome&> DescribeScheduledActionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&> DescribeTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DescribeTerminationPolicyTypesRequest&, const Model::DescribeTerminationPolicyTypesOutcome&> DescribeTerminationPolicyTypesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DetachInstancesRequest&, const Model::DetachInstancesOutcome&> DetachInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DetachLoadBalancersRequest&, const Model::DetachLoadBalancersOutcome&> DetachLoadBalancersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::DisableMetricsCollectionRequest&, const Model::DisableMetricsCollectionOutcome&> DisableMetricsCollectionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::EnableMetricsCollectionRequest&, const Model::EnableMetricsCollectionOutcome&> EnableMetricsCollectionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::EnterStandbyRequest&, const Model::EnterStandbyOutcome&> EnterStandbyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::ExecutePolicyRequest&, const Model::ExecutePolicyOutcome&> ExecutePolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::ExitStandbyRequest&, const Model::ExitStandbyOutcome&> ExitStandbyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::PutLifecycleHookRequest&, const Model::PutLifecycleHookOutcome&> PutLifecycleHookOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::PutNotificationConfigurationRequest&, const Model::PutNotificationConfigurationOutcome&> PutNotificationConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::PutScalingPolicyRequest&, const Model::PutScalingPolicyOutcome&> PutScalingPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::PutScheduledUpdateGroupActionRequest&, const Model::PutScheduledUpdateGroupActionOutcome&> PutScheduledUpdateGroupActionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::RecordLifecycleActionHeartbeatRequest&, const Model::RecordLifecycleActionHeartbeatOutcome&> RecordLifecycleActionHeartbeatOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::ResumeProcessesRequest&, const Model::ResumeProcessesOutcome&> ResumeProcessesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::SetDesiredCapacityRequest&, const Model::SetDesiredCapacityOutcome&> SetDesiredCapacityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::SetInstanceHealthRequest&, const Model::SetInstanceHealthOutcome&> SetInstanceHealthOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::SuspendProcessesRequest&, const Model::SuspendProcessesOutcome&> SuspendProcessesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::TerminateInstanceInAutoScalingGroupRequest&, const Model::TerminateInstanceInAutoScalingGroupOutcome&> TerminateInstanceInAutoScalingGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<AutoScalingClient, const Model::UpdateAutoScalingGroupRequest&, const Model::UpdateAutoScalingGroupOutcome&> UpdateAutoScalingGroupOutcomeReceivedEvent;

  /*
    <fullname>Auto Scaling</fullname> <p>Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies, schedules, and health checks. Use this service in conjunction with the Amazon CloudWatch and Elastic Load Balancing services.</p>
  */
  class AWS_AUTOSCALING_API AutoScalingClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      AutoScalingClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      AutoScalingClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      AutoScalingClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~AutoScalingClient();

     /*
       <p>Attaches one or more EC2 instances to the specified Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/attach-instance-asg.html">Attach Amazon EC2 Instances to Your Existing Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
     */
     Model::AttachInstancesOutcome AttachInstances(const Model::AttachInstancesRequest& request) const;

     /*
       <p>Attaches one or more EC2 instances to the specified Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/attach-instance-asg.html">Attach Amazon EC2 Instances to Your Existing Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AttachInstancesOutcomeCallable AttachInstancesCallable(const Model::AttachInstancesRequest& request) const;

     /*
       <p>Attaches one or more EC2 instances to the specified Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/attach-instance-asg.html">Attach Amazon EC2 Instances to Your Existing Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AttachInstancesAsync(const Model::AttachInstancesRequest& request) const;

     /*
       ${operation.documentation}
     */
     Model::AttachLoadBalancersOutcome AttachLoadBalancers(const Model::AttachLoadBalancersRequest& request) const;

     /*
       ${operation.documentation}

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AttachLoadBalancersOutcomeCallable AttachLoadBalancersCallable(const Model::AttachLoadBalancersRequest& request) const;

     /*
       ${operation.documentation}

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AttachLoadBalancersAsync(const Model::AttachLoadBalancersRequest& request) const;

     /*
       <p>Completes the lifecycle action for the associated token initiated under the given lifecycle hook with the specified result. </p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li> <b>Complete the lifecycle action</b>.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>
     */
     Model::CompleteLifecycleActionOutcome CompleteLifecycleAction(const Model::CompleteLifecycleActionRequest& request) const;

     /*
       <p>Completes the lifecycle action for the associated token initiated under the given lifecycle hook with the specified result. </p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li> <b>Complete the lifecycle action</b>.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CompleteLifecycleActionOutcomeCallable CompleteLifecycleActionCallable(const Model::CompleteLifecycleActionRequest& request) const;

     /*
       <p>Completes the lifecycle action for the associated token initiated under the given lifecycle hook with the specified result. </p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li> <b>Complete the lifecycle action</b>.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CompleteLifecycleActionAsync(const Model::CompleteLifecycleActionRequest& request) const;

     /*
       <p>Creates an Auto Scaling group with the specified name and attributes.</p> <p>If you exceed your maximum limit of Auto Scaling groups, which by default is 20 per region, the call fails. For information about viewing and updating these limits, see <a>DescribeAccountLimits</a>.</p>
     */
     Model::CreateAutoScalingGroupOutcome CreateAutoScalingGroup(const Model::CreateAutoScalingGroupRequest& request) const;

     /*
       <p>Creates an Auto Scaling group with the specified name and attributes.</p> <p>If you exceed your maximum limit of Auto Scaling groups, which by default is 20 per region, the call fails. For information about viewing and updating these limits, see <a>DescribeAccountLimits</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateAutoScalingGroupOutcomeCallable CreateAutoScalingGroupCallable(const Model::CreateAutoScalingGroupRequest& request) const;

     /*
       <p>Creates an Auto Scaling group with the specified name and attributes.</p> <p>If you exceed your maximum limit of Auto Scaling groups, which by default is 20 per region, the call fails. For information about viewing and updating these limits, see <a>DescribeAccountLimits</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateAutoScalingGroupAsync(const Model::CreateAutoScalingGroupRequest& request) const;

     /*
       <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of launch configurations, which by default is 100 per region, the call fails. For information about viewing and updating these limits, see <a>DescribeAccountLimits</a>.</p>
     */
     Model::CreateLaunchConfigurationOutcome CreateLaunchConfiguration(const Model::CreateLaunchConfigurationRequest& request) const;

     /*
       <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of launch configurations, which by default is 100 per region, the call fails. For information about viewing and updating these limits, see <a>DescribeAccountLimits</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateLaunchConfigurationOutcomeCallable CreateLaunchConfigurationCallable(const Model::CreateLaunchConfigurationRequest& request) const;

     /*
       <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of launch configurations, which by default is 100 per region, the call fails. For information about viewing and updating these limits, see <a>DescribeAccountLimits</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateLaunchConfigurationAsync(const Model::CreateLaunchConfigurationRequest& request) const;

     /*
       <p>Creates or updates tags for the specified Auto Scaling group.</p> <note> A tag's definition is composed of a resource ID, resource type, key and value, and the propagate flag. Value and the propagate flag are optional parameters. See the Request Parameters for more information. </note> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASTagging.html">Add, Modify, or Remove Auto Scaling Group Tags</a> in the <i>Auto Scaling Developer Guide</i>.</p>
     */
     Model::CreateOrUpdateTagsOutcome CreateOrUpdateTags(const Model::CreateOrUpdateTagsRequest& request) const;

     /*
       <p>Creates or updates tags for the specified Auto Scaling group.</p> <note> A tag's definition is composed of a resource ID, resource type, key and value, and the propagate flag. Value and the propagate flag are optional parameters. See the Request Parameters for more information. </note> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASTagging.html">Add, Modify, or Remove Auto Scaling Group Tags</a> in the <i>Auto Scaling Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateOrUpdateTagsOutcomeCallable CreateOrUpdateTagsCallable(const Model::CreateOrUpdateTagsRequest& request) const;

     /*
       <p>Creates or updates tags for the specified Auto Scaling group.</p> <note> A tag's definition is composed of a resource ID, resource type, key and value, and the propagate flag. Value and the propagate flag are optional parameters. See the Request Parameters for more information. </note> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASTagging.html">Add, Modify, or Remove Auto Scaling Group Tags</a> in the <i>Auto Scaling Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateOrUpdateTagsAsync(const Model::CreateOrUpdateTagsRequest& request) const;

     /*
       <p>Deletes the specified Auto Scaling group.</p> <p>The group must have no instances and no scaling activities in progress.</p> <p>To remove all instances before calling <a>DeleteAutoScalingGroup</a>, you can call <a>UpdateAutoScalingGroup</a> to set the minimum and maximum size of the AutoScalingGroup to zero.</p>
     */
     Model::DeleteAutoScalingGroupOutcome DeleteAutoScalingGroup(const Model::DeleteAutoScalingGroupRequest& request) const;

     /*
       <p>Deletes the specified Auto Scaling group.</p> <p>The group must have no instances and no scaling activities in progress.</p> <p>To remove all instances before calling <a>DeleteAutoScalingGroup</a>, you can call <a>UpdateAutoScalingGroup</a> to set the minimum and maximum size of the AutoScalingGroup to zero.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteAutoScalingGroupOutcomeCallable DeleteAutoScalingGroupCallable(const Model::DeleteAutoScalingGroupRequest& request) const;

     /*
       <p>Deletes the specified Auto Scaling group.</p> <p>The group must have no instances and no scaling activities in progress.</p> <p>To remove all instances before calling <a>DeleteAutoScalingGroup</a>, you can call <a>UpdateAutoScalingGroup</a> to set the minimum and maximum size of the AutoScalingGroup to zero.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteAutoScalingGroupAsync(const Model::DeleteAutoScalingGroupRequest& request) const;

     /*
       <p>Deletes the specified launch configuration.</p> <p>The launch configuration must not be attached to an Auto Scaling group. When this call completes, the launch configuration is no longer available for use.</p>
     */
     Model::DeleteLaunchConfigurationOutcome DeleteLaunchConfiguration(const Model::DeleteLaunchConfigurationRequest& request) const;

     /*
       <p>Deletes the specified launch configuration.</p> <p>The launch configuration must not be attached to an Auto Scaling group. When this call completes, the launch configuration is no longer available for use.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteLaunchConfigurationOutcomeCallable DeleteLaunchConfigurationCallable(const Model::DeleteLaunchConfigurationRequest& request) const;

     /*
       <p>Deletes the specified launch configuration.</p> <p>The launch configuration must not be attached to an Auto Scaling group. When this call completes, the launch configuration is no longer available for use.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteLaunchConfigurationAsync(const Model::DeleteLaunchConfigurationRequest& request) const;

     /*
       <p>Deletes the specified lifecycle hook.</p> <p>If there are any outstanding lifecycle actions, they are completed first (<code>ABANDON</code> for launching instances, <code>CONTINUE</code> for terminating instances).</p>
     */
     Model::DeleteLifecycleHookOutcome DeleteLifecycleHook(const Model::DeleteLifecycleHookRequest& request) const;

     /*
       <p>Deletes the specified lifecycle hook.</p> <p>If there are any outstanding lifecycle actions, they are completed first (<code>ABANDON</code> for launching instances, <code>CONTINUE</code> for terminating instances).</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteLifecycleHookOutcomeCallable DeleteLifecycleHookCallable(const Model::DeleteLifecycleHookRequest& request) const;

     /*
       <p>Deletes the specified lifecycle hook.</p> <p>If there are any outstanding lifecycle actions, they are completed first (<code>ABANDON</code> for launching instances, <code>CONTINUE</code> for terminating instances).</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteLifecycleHookAsync(const Model::DeleteLifecycleHookRequest& request) const;

     /*
       <p>Deletes the specified notification.</p>
     */
     Model::DeleteNotificationConfigurationOutcome DeleteNotificationConfiguration(const Model::DeleteNotificationConfigurationRequest& request) const;

     /*
       <p>Deletes the specified notification.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteNotificationConfigurationOutcomeCallable DeleteNotificationConfigurationCallable(const Model::DeleteNotificationConfigurationRequest& request) const;

     /*
       <p>Deletes the specified notification.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteNotificationConfigurationAsync(const Model::DeleteNotificationConfigurationRequest& request) const;

     /*
       <p>Deletes the specified Auto Scaling policy.</p>
     */
     Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

     /*
       <p>Deletes the specified Auto Scaling policy.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

     /*
       <p>Deletes the specified Auto Scaling policy.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeletePolicyAsync(const Model::DeletePolicyRequest& request) const;

     /*
       <p>Deletes the specified scheduled action.</p>
     */
     Model::DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest& request) const;

     /*
       <p>Deletes the specified scheduled action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteScheduledActionOutcomeCallable DeleteScheduledActionCallable(const Model::DeleteScheduledActionRequest& request) const;

     /*
       <p>Deletes the specified scheduled action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteScheduledActionAsync(const Model::DeleteScheduledActionRequest& request) const;

     /*
       <p>Deletes the specified tags.</p>
     */
     Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

     /*
       <p>Deletes the specified tags.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

     /*
       <p>Deletes the specified tags.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteTagsAsync(const Model::DeleteTagsRequest& request) const;

     /*
       <p>Describes the current Auto Scaling resource limits for your AWS account.</p> <p>For information about requesting an increase in these limits, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a>.</p>
     */
     Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

     /*
       <p>Describes the current Auto Scaling resource limits for your AWS account.</p> <p>For information about requesting an increase in these limits, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request) const;

     /*
       <p>Describes the current Auto Scaling resource limits for your AWS account.</p> <p>For information about requesting an increase in these limits, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request) const;

     /*
       <p>Lists the policy adjustment types for use with <a>PutScalingPolicy</a>.</p>
     */
     Model::DescribeAdjustmentTypesOutcome DescribeAdjustmentTypes(const Model::DescribeAdjustmentTypesRequest& request) const;

     /*
       <p>Lists the policy adjustment types for use with <a>PutScalingPolicy</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeAdjustmentTypesOutcomeCallable DescribeAdjustmentTypesCallable(const Model::DescribeAdjustmentTypesRequest& request) const;

     /*
       <p>Lists the policy adjustment types for use with <a>PutScalingPolicy</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeAdjustmentTypesAsync(const Model::DescribeAdjustmentTypesRequest& request) const;

     /*
       <p>Describes one or more Auto Scaling groups. If a list of names is not provided, the call describes all Auto Scaling groups.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>
     */
     Model::DescribeAutoScalingGroupsOutcome DescribeAutoScalingGroups(const Model::DescribeAutoScalingGroupsRequest& request) const;

     /*
       <p>Describes one or more Auto Scaling groups. If a list of names is not provided, the call describes all Auto Scaling groups.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeAutoScalingGroupsOutcomeCallable DescribeAutoScalingGroupsCallable(const Model::DescribeAutoScalingGroupsRequest& request) const;

     /*
       <p>Describes one or more Auto Scaling groups. If a list of names is not provided, the call describes all Auto Scaling groups.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeAutoScalingGroupsAsync(const Model::DescribeAutoScalingGroupsRequest& request) const;

     /*
       <p>Describes one or more Auto Scaling instances. If a list is not provided, the call describes all instances.</p> <p>You can describe up to a maximum of 50 instances with a single call. By default, a call returns up to 20 instances. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>
     */
     Model::DescribeAutoScalingInstancesOutcome DescribeAutoScalingInstances(const Model::DescribeAutoScalingInstancesRequest& request) const;

     /*
       <p>Describes one or more Auto Scaling instances. If a list is not provided, the call describes all instances.</p> <p>You can describe up to a maximum of 50 instances with a single call. By default, a call returns up to 20 instances. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeAutoScalingInstancesOutcomeCallable DescribeAutoScalingInstancesCallable(const Model::DescribeAutoScalingInstancesRequest& request) const;

     /*
       <p>Describes one or more Auto Scaling instances. If a list is not provided, the call describes all instances.</p> <p>You can describe up to a maximum of 50 instances with a single call. By default, a call returns up to 20 instances. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeAutoScalingInstancesAsync(const Model::DescribeAutoScalingInstancesRequest& request) const;

     /*
       <p>Lists the notification types that are supported by Auto Scaling.</p>
     */
     Model::DescribeAutoScalingNotificationTypesOutcome DescribeAutoScalingNotificationTypes(const Model::DescribeAutoScalingNotificationTypesRequest& request) const;

     /*
       <p>Lists the notification types that are supported by Auto Scaling.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeAutoScalingNotificationTypesOutcomeCallable DescribeAutoScalingNotificationTypesCallable(const Model::DescribeAutoScalingNotificationTypesRequest& request) const;

     /*
       <p>Lists the notification types that are supported by Auto Scaling.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeAutoScalingNotificationTypesAsync(const Model::DescribeAutoScalingNotificationTypesRequest& request) const;

     /*
       <p>Describes one or more launch configurations. If you omit the list of names, then the call describes all launch configurations.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>
     */
     Model::DescribeLaunchConfigurationsOutcome DescribeLaunchConfigurations(const Model::DescribeLaunchConfigurationsRequest& request) const;

     /*
       <p>Describes one or more launch configurations. If you omit the list of names, then the call describes all launch configurations.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLaunchConfigurationsOutcomeCallable DescribeLaunchConfigurationsCallable(const Model::DescribeLaunchConfigurationsRequest& request) const;

     /*
       <p>Describes one or more launch configurations. If you omit the list of names, then the call describes all launch configurations.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLaunchConfigurationsAsync(const Model::DescribeLaunchConfigurationsRequest& request) const;

     /*
       <p>Describes the available types of lifecycle hooks.</p>
     */
     Model::DescribeLifecycleHookTypesOutcome DescribeLifecycleHookTypes(const Model::DescribeLifecycleHookTypesRequest& request) const;

     /*
       <p>Describes the available types of lifecycle hooks.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLifecycleHookTypesOutcomeCallable DescribeLifecycleHookTypesCallable(const Model::DescribeLifecycleHookTypesRequest& request) const;

     /*
       <p>Describes the available types of lifecycle hooks.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLifecycleHookTypesAsync(const Model::DescribeLifecycleHookTypesRequest& request) const;

     /*
       <p>Describes the lifecycle hooks for the specified Auto Scaling group.</p>
     */
     Model::DescribeLifecycleHooksOutcome DescribeLifecycleHooks(const Model::DescribeLifecycleHooksRequest& request) const;

     /*
       <p>Describes the lifecycle hooks for the specified Auto Scaling group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLifecycleHooksOutcomeCallable DescribeLifecycleHooksCallable(const Model::DescribeLifecycleHooksRequest& request) const;

     /*
       <p>Describes the lifecycle hooks for the specified Auto Scaling group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLifecycleHooksAsync(const Model::DescribeLifecycleHooksRequest& request) const;

     /*
       ${operation.documentation}
     */
     Model::DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest& request) const;

     /*
       ${operation.documentation}

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;

     /*
       ${operation.documentation}

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request) const;

     /*
       <p> Returns a list of metrics and a corresponding list of granularities for each metric. </p> <note> <p>The <code>GroupStandbyInstances</code> metric is not returned by default. You must explicitly request it when calling <a>EnableMetricsCollection</a>.</p> </note>
     */
     Model::DescribeMetricCollectionTypesOutcome DescribeMetricCollectionTypes(const Model::DescribeMetricCollectionTypesRequest& request) const;

     /*
       <p> Returns a list of metrics and a corresponding list of granularities for each metric. </p> <note> <p>The <code>GroupStandbyInstances</code> metric is not returned by default. You must explicitly request it when calling <a>EnableMetricsCollection</a>.</p> </note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeMetricCollectionTypesOutcomeCallable DescribeMetricCollectionTypesCallable(const Model::DescribeMetricCollectionTypesRequest& request) const;

     /*
       <p> Returns a list of metrics and a corresponding list of granularities for each metric. </p> <note> <p>The <code>GroupStandbyInstances</code> metric is not returned by default. You must explicitly request it when calling <a>EnableMetricsCollection</a>.</p> </note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeMetricCollectionTypesAsync(const Model::DescribeMetricCollectionTypesRequest& request) const;

     /*
       <p>Describes the notification actions associated with the specified Auto Scaling group.</p>
     */
     Model::DescribeNotificationConfigurationsOutcome DescribeNotificationConfigurations(const Model::DescribeNotificationConfigurationsRequest& request) const;

     /*
       <p>Describes the notification actions associated with the specified Auto Scaling group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeNotificationConfigurationsOutcomeCallable DescribeNotificationConfigurationsCallable(const Model::DescribeNotificationConfigurationsRequest& request) const;

     /*
       <p>Describes the notification actions associated with the specified Auto Scaling group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeNotificationConfigurationsAsync(const Model::DescribeNotificationConfigurationsRequest& request) const;

     /*
       <p>Describes the policies for the specified Auto Scaling group.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>
     */
     Model::DescribePoliciesOutcome DescribePolicies(const Model::DescribePoliciesRequest& request) const;

     /*
       <p>Describes the policies for the specified Auto Scaling group.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribePoliciesOutcomeCallable DescribePoliciesCallable(const Model::DescribePoliciesRequest& request) const;

     /*
       <p>Describes the policies for the specified Auto Scaling group.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribePoliciesAsync(const Model::DescribePoliciesRequest& request) const;

     /*
       <p>Describes one or more scaling activities for the specified Auto Scaling group. If you omit the <code>ActivityIds</code>, the call returns all activities from the past six weeks. Activities are sorted by the start time. Activities still in progress appear first on the list.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>
     */
     Model::DescribeScalingActivitiesOutcome DescribeScalingActivities(const Model::DescribeScalingActivitiesRequest& request) const;

     /*
       <p>Describes one or more scaling activities for the specified Auto Scaling group. If you omit the <code>ActivityIds</code>, the call returns all activities from the past six weeks. Activities are sorted by the start time. Activities still in progress appear first on the list.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeScalingActivitiesOutcomeCallable DescribeScalingActivitiesCallable(const Model::DescribeScalingActivitiesRequest& request) const;

     /*
       <p>Describes one or more scaling activities for the specified Auto Scaling group. If you omit the <code>ActivityIds</code>, the call returns all activities from the past six weeks. Activities are sorted by the start time. Activities still in progress appear first on the list.</p> <p>You can specify a maximum number of items to be returned with a single call. If there are more items to return, the call returns a token. To get the next set of items, repeat the call with the returned token in the <code>NextToken</code> parameter.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeScalingActivitiesAsync(const Model::DescribeScalingActivitiesRequest& request) const;

     /*
       <p>Returns scaling process types for use in the <a>ResumeProcesses</a> and <a>SuspendProcesses</a> actions.</p>
     */
     Model::DescribeScalingProcessTypesOutcome DescribeScalingProcessTypes(const Model::DescribeScalingProcessTypesRequest& request) const;

     /*
       <p>Returns scaling process types for use in the <a>ResumeProcesses</a> and <a>SuspendProcesses</a> actions.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeScalingProcessTypesOutcomeCallable DescribeScalingProcessTypesCallable(const Model::DescribeScalingProcessTypesRequest& request) const;

     /*
       <p>Returns scaling process types for use in the <a>ResumeProcesses</a> and <a>SuspendProcesses</a> actions.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeScalingProcessTypesAsync(const Model::DescribeScalingProcessTypesRequest& request) const;

     /*
       <p>Lists the actions scheduled for your Auto Scaling group that haven't been executed. To list the actions that were already executed, use <a>DescribeScalingActivities</a>.</p>
     */
     Model::DescribeScheduledActionsOutcome DescribeScheduledActions(const Model::DescribeScheduledActionsRequest& request) const;

     /*
       <p>Lists the actions scheduled for your Auto Scaling group that haven't been executed. To list the actions that were already executed, use <a>DescribeScalingActivities</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeScheduledActionsOutcomeCallable DescribeScheduledActionsCallable(const Model::DescribeScheduledActionsRequest& request) const;

     /*
       <p>Lists the actions scheduled for your Auto Scaling group that haven't been executed. To list the actions that were already executed, use <a>DescribeScalingActivities</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeScheduledActionsAsync(const Model::DescribeScheduledActionsRequest& request) const;

     /*
       <p>Describes the specified tags.</p> <p>You can use filters to limit the results. For example, you can query for the tags for a specific Auto Scaling group. You can specify multiple values for a filter. A tag must match at least one of the specified values for it to be included in the results.</p> <p>You can also specify multiple filters. The result includes information for a particular tag only if it matches all the filters. If there's no match, no special message is returned.</p>
     */
     Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

     /*
       <p>Describes the specified tags.</p> <p>You can use filters to limit the results. For example, you can query for the tags for a specific Auto Scaling group. You can specify multiple values for a filter. A tag must match at least one of the specified values for it to be included in the results.</p> <p>You can also specify multiple filters. The result includes information for a particular tag only if it matches all the filters. If there's no match, no special message is returned.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

     /*
       <p>Describes the specified tags.</p> <p>You can use filters to limit the results. For example, you can query for the tags for a specific Auto Scaling group. You can specify multiple values for a filter. A tag must match at least one of the specified values for it to be included in the results.</p> <p>You can also specify multiple filters. The result includes information for a particular tag only if it matches all the filters. If there's no match, no special message is returned.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeTagsAsync(const Model::DescribeTagsRequest& request) const;

     /*
       <p>Lists the termination policies supported by Auto Scaling.</p>
     */
     Model::DescribeTerminationPolicyTypesOutcome DescribeTerminationPolicyTypes(const Model::DescribeTerminationPolicyTypesRequest& request) const;

     /*
       <p>Lists the termination policies supported by Auto Scaling.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeTerminationPolicyTypesOutcomeCallable DescribeTerminationPolicyTypesCallable(const Model::DescribeTerminationPolicyTypesRequest& request) const;

     /*
       <p>Lists the termination policies supported by Auto Scaling.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeTerminationPolicyTypesAsync(const Model::DescribeTerminationPolicyTypesRequest& request) const;

     /*
       <p>Removes one or more instances from the specified Auto Scaling group. After the instances are detached, you can manage them independently from the rest of the Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/detach-instance-asg.html">Detach EC2 Instances from Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
     */
     Model::DetachInstancesOutcome DetachInstances(const Model::DetachInstancesRequest& request) const;

     /*
       <p>Removes one or more instances from the specified Auto Scaling group. After the instances are detached, you can manage them independently from the rest of the Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/detach-instance-asg.html">Detach EC2 Instances from Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DetachInstancesOutcomeCallable DetachInstancesCallable(const Model::DetachInstancesRequest& request) const;

     /*
       <p>Removes one or more instances from the specified Auto Scaling group. After the instances are detached, you can manage them independently from the rest of the Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/detach-instance-asg.html">Detach EC2 Instances from Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DetachInstancesAsync(const Model::DetachInstancesRequest& request) const;

     /*
       ${operation.documentation}
     */
     Model::DetachLoadBalancersOutcome DetachLoadBalancers(const Model::DetachLoadBalancersRequest& request) const;

     /*
       ${operation.documentation}

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DetachLoadBalancersOutcomeCallable DetachLoadBalancersCallable(const Model::DetachLoadBalancersRequest& request) const;

     /*
       ${operation.documentation}

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DetachLoadBalancersAsync(const Model::DetachLoadBalancersRequest& request) const;

     /*
       <p>Disables monitoring of the specified metrics for the specified Auto Scaling group.</p>
     */
     Model::DisableMetricsCollectionOutcome DisableMetricsCollection(const Model::DisableMetricsCollectionRequest& request) const;

     /*
       <p>Disables monitoring of the specified metrics for the specified Auto Scaling group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DisableMetricsCollectionOutcomeCallable DisableMetricsCollectionCallable(const Model::DisableMetricsCollectionRequest& request) const;

     /*
       <p>Disables monitoring of the specified metrics for the specified Auto Scaling group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DisableMetricsCollectionAsync(const Model::DisableMetricsCollectionRequest& request) const;

     /*
       <p>Enables monitoring of the specified metrics for the specified Auto Scaling group.</p> <p>You can only enable metrics collection if <code>InstanceMonitoring</code> in the launch configuration for the group is set to <code>True</code>.</p>
     */
     Model::EnableMetricsCollectionOutcome EnableMetricsCollection(const Model::EnableMetricsCollectionRequest& request) const;

     /*
       <p>Enables monitoring of the specified metrics for the specified Auto Scaling group.</p> <p>You can only enable metrics collection if <code>InstanceMonitoring</code> in the launch configuration for the group is set to <code>True</code>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::EnableMetricsCollectionOutcomeCallable EnableMetricsCollectionCallable(const Model::EnableMetricsCollectionRequest& request) const;

     /*
       <p>Enables monitoring of the specified metrics for the specified Auto Scaling group.</p> <p>You can only enable metrics collection if <code>InstanceMonitoring</code> in the launch configuration for the group is set to <code>True</code>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void EnableMetricsCollectionAsync(const Model::EnableMetricsCollectionRequest& request) const;

     /*
       <p>Moves the specified instances into <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>
     */
     Model::EnterStandbyOutcome EnterStandby(const Model::EnterStandbyRequest& request) const;

     /*
       <p>Moves the specified instances into <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::EnterStandbyOutcomeCallable EnterStandbyCallable(const Model::EnterStandbyRequest& request) const;

     /*
       <p>Moves the specified instances into <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void EnterStandbyAsync(const Model::EnterStandbyRequest& request) const;

     /*
       <p>Executes the specified policy.</p>
     */
     Model::ExecutePolicyOutcome ExecutePolicy(const Model::ExecutePolicyRequest& request) const;

     /*
       <p>Executes the specified policy.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ExecutePolicyOutcomeCallable ExecutePolicyCallable(const Model::ExecutePolicyRequest& request) const;

     /*
       <p>Executes the specified policy.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ExecutePolicyAsync(const Model::ExecutePolicyRequest& request) const;

     /*
       <p>Moves the specified instances out of <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>
     */
     Model::ExitStandbyOutcome ExitStandby(const Model::ExitStandbyRequest& request) const;

     /*
       <p>Moves the specified instances out of <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ExitStandbyOutcomeCallable ExitStandbyCallable(const Model::ExitStandbyRequest& request) const;

     /*
       <p>Moves the specified instances out of <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ExitStandbyAsync(const Model::ExitStandbyRequest& request) const;

     /*
       <p>Creates or updates a lifecycle hook for the specified Auto Scaling Group.</p> <p>A lifecycle hook tells Auto Scaling that you want to perform an action on an instance that is not actively in service; for example, either when the instance launches or before the instance terminates.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li><b>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</b></li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>
     */
     Model::PutLifecycleHookOutcome PutLifecycleHook(const Model::PutLifecycleHookRequest& request) const;

     /*
       <p>Creates or updates a lifecycle hook for the specified Auto Scaling Group.</p> <p>A lifecycle hook tells Auto Scaling that you want to perform an action on an instance that is not actively in service; for example, either when the instance launches or before the instance terminates.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li><b>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</b></li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutLifecycleHookOutcomeCallable PutLifecycleHookCallable(const Model::PutLifecycleHookRequest& request) const;

     /*
       <p>Creates or updates a lifecycle hook for the specified Auto Scaling Group.</p> <p>A lifecycle hook tells Auto Scaling that you want to perform an action on an instance that is not actively in service; for example, either when the instance launches or before the instance terminates.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li><b>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</b></li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutLifecycleHookAsync(const Model::PutLifecycleHookRequest& request) const;

     /*
       <p> Configures an Auto Scaling group to send notifications when specified events take place. Subscribers to this topic can have messages for events delivered to an endpoint such as a web server or email address. </p> <p>For more information see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASGettingNotifications.html">Getting Notifications When Your Auto Scaling Group Changes</a> in the <i>Auto Scaling Developer Guide</i>.</p> <p>This configuration overwrites an existing configuration.</p>
     */
     Model::PutNotificationConfigurationOutcome PutNotificationConfiguration(const Model::PutNotificationConfigurationRequest& request) const;

     /*
       <p> Configures an Auto Scaling group to send notifications when specified events take place. Subscribers to this topic can have messages for events delivered to an endpoint such as a web server or email address. </p> <p>For more information see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASGettingNotifications.html">Getting Notifications When Your Auto Scaling Group Changes</a> in the <i>Auto Scaling Developer Guide</i>.</p> <p>This configuration overwrites an existing configuration.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutNotificationConfigurationOutcomeCallable PutNotificationConfigurationCallable(const Model::PutNotificationConfigurationRequest& request) const;

     /*
       <p> Configures an Auto Scaling group to send notifications when specified events take place. Subscribers to this topic can have messages for events delivered to an endpoint such as a web server or email address. </p> <p>For more information see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASGettingNotifications.html">Getting Notifications When Your Auto Scaling Group Changes</a> in the <i>Auto Scaling Developer Guide</i>.</p> <p>This configuration overwrites an existing configuration.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutNotificationConfigurationAsync(const Model::PutNotificationConfigurationRequest& request) const;

     /*
       <p>Creates or updates a policy for an Auto Scaling group. To update an existing policy, use the existing policy name and set the parameters you want to change. Any existing parameter not changed in an update to an existing policy is not changed in this update request.</p>
     */
     Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

     /*
       <p>Creates or updates a policy for an Auto Scaling group. To update an existing policy, use the existing policy name and set the parameters you want to change. Any existing parameter not changed in an update to an existing policy is not changed in this update request.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request) const;

     /*
       <p>Creates or updates a policy for an Auto Scaling group. To update an existing policy, use the existing policy name and set the parameters you want to change. Any existing parameter not changed in an update to an existing policy is not changed in this update request.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request) const;

     /*
       <p> Creates or updates a scheduled scaling action for an Auto Scaling group. When updating a scheduled scaling action, if you leave a parameter unspecified, the corresponding value remains unchanged in the affected Auto Scaling group. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/schedule_time.html">Scheduled Scaling</a> in the <i>Auto Scaling Developer Guide</i>.</p> <note> <p>Auto Scaling supports the date and time expressed in "YYYY-MM-DDThh:mm:ssZ" format in UTC/GMT only.</p> </note>
     */
     Model::PutScheduledUpdateGroupActionOutcome PutScheduledUpdateGroupAction(const Model::PutScheduledUpdateGroupActionRequest& request) const;

     /*
       <p> Creates or updates a scheduled scaling action for an Auto Scaling group. When updating a scheduled scaling action, if you leave a parameter unspecified, the corresponding value remains unchanged in the affected Auto Scaling group. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/schedule_time.html">Scheduled Scaling</a> in the <i>Auto Scaling Developer Guide</i>.</p> <note> <p>Auto Scaling supports the date and time expressed in "YYYY-MM-DDThh:mm:ssZ" format in UTC/GMT only.</p> </note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutScheduledUpdateGroupActionOutcomeCallable PutScheduledUpdateGroupActionCallable(const Model::PutScheduledUpdateGroupActionRequest& request) const;

     /*
       <p> Creates or updates a scheduled scaling action for an Auto Scaling group. When updating a scheduled scaling action, if you leave a parameter unspecified, the corresponding value remains unchanged in the affected Auto Scaling group. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/schedule_time.html">Scheduled Scaling</a> in the <i>Auto Scaling Developer Guide</i>.</p> <note> <p>Auto Scaling supports the date and time expressed in "YYYY-MM-DDThh:mm:ssZ" format in UTC/GMT only.</p> </note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutScheduledUpdateGroupActionAsync(const Model::PutScheduledUpdateGroupActionRequest& request) const;

     /*
       <p>Records a heartbeat for the lifecycle action associated with a specific token. This extends the timeout by the length of time defined by the <code>HeartbeatTimeout</code> parameter of <a>PutLifecycleHook</a>.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li><b>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</b></li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>
     */
     Model::RecordLifecycleActionHeartbeatOutcome RecordLifecycleActionHeartbeat(const Model::RecordLifecycleActionHeartbeatRequest& request) const;

     /*
       <p>Records a heartbeat for the lifecycle action associated with a specific token. This extends the timeout by the length of time defined by the <code>HeartbeatTimeout</code> parameter of <a>PutLifecycleHook</a>.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li><b>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</b></li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RecordLifecycleActionHeartbeatOutcomeCallable RecordLifecycleActionHeartbeatCallable(const Model::RecordLifecycleActionHeartbeatRequest& request) const;

     /*
       <p>Records a heartbeat for the lifecycle action associated with a specific token. This extends the timeout by the length of time defined by the <code>HeartbeatTimeout</code> parameter of <a>PutLifecycleHook</a>.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li><b>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</b></li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RecordLifecycleActionHeartbeatAsync(const Model::RecordLifecycleActionHeartbeatRequest& request) const;

     /*
       <p>Resumes the specified suspended Auto Scaling processes for the specified Auto Scaling group. To resume specific processes, use the <code>ScalingProcesses</code> parameter. To resume all processes, omit the <code>ScalingProcesses</code> parameter. For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>
     */
     Model::ResumeProcessesOutcome ResumeProcesses(const Model::ResumeProcessesRequest& request) const;

     /*
       <p>Resumes the specified suspended Auto Scaling processes for the specified Auto Scaling group. To resume specific processes, use the <code>ScalingProcesses</code> parameter. To resume all processes, omit the <code>ScalingProcesses</code> parameter. For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ResumeProcessesOutcomeCallable ResumeProcessesCallable(const Model::ResumeProcessesRequest& request) const;

     /*
       <p>Resumes the specified suspended Auto Scaling processes for the specified Auto Scaling group. To resume specific processes, use the <code>ScalingProcesses</code> parameter. To resume all processes, omit the <code>ScalingProcesses</code> parameter. For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ResumeProcessesAsync(const Model::ResumeProcessesRequest& request) const;

     /*
       <p>Sets the size of the specified <a>AutoScalingGroup</a>.</p>
     */
     Model::SetDesiredCapacityOutcome SetDesiredCapacity(const Model::SetDesiredCapacityRequest& request) const;

     /*
       <p>Sets the size of the specified <a>AutoScalingGroup</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetDesiredCapacityOutcomeCallable SetDesiredCapacityCallable(const Model::SetDesiredCapacityRequest& request) const;

     /*
       <p>Sets the size of the specified <a>AutoScalingGroup</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetDesiredCapacityAsync(const Model::SetDesiredCapacityRequest& request) const;

     /*
       <p>Sets the health status of the specified instance.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/healthcheck.html">Health Checks</a> in the <i>Auto Scaling Developer Guide</i>.</p>
     */
     Model::SetInstanceHealthOutcome SetInstanceHealth(const Model::SetInstanceHealthRequest& request) const;

     /*
       <p>Sets the health status of the specified instance.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/healthcheck.html">Health Checks</a> in the <i>Auto Scaling Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetInstanceHealthOutcomeCallable SetInstanceHealthCallable(const Model::SetInstanceHealthRequest& request) const;

     /*
       <p>Sets the health status of the specified instance.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/healthcheck.html">Health Checks</a> in the <i>Auto Scaling Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetInstanceHealthAsync(const Model::SetInstanceHealthRequest& request) const;

     /*
       <p>Suspends the specified Auto Scaling processes for the specified Auto Scaling group. To suspend specific processes, use the <code>ScalingProcesses</code> parameter. To suspend all processes, omit the <code>ScalingProcesses</code> parameter.</p> <p>Note that if you suspend either the <code>Launch</code> or <code>Terminate</code> process types, it can prevent other process types from functioning properly.</p> <p>To resume processes that have been suspended, use <a>ResumeProcesses</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>
     */
     Model::SuspendProcessesOutcome SuspendProcesses(const Model::SuspendProcessesRequest& request) const;

     /*
       <p>Suspends the specified Auto Scaling processes for the specified Auto Scaling group. To suspend specific processes, use the <code>ScalingProcesses</code> parameter. To suspend all processes, omit the <code>ScalingProcesses</code> parameter.</p> <p>Note that if you suspend either the <code>Launch</code> or <code>Terminate</code> process types, it can prevent other process types from functioning properly.</p> <p>To resume processes that have been suspended, use <a>ResumeProcesses</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SuspendProcessesOutcomeCallable SuspendProcessesCallable(const Model::SuspendProcessesRequest& request) const;

     /*
       <p>Suspends the specified Auto Scaling processes for the specified Auto Scaling group. To suspend specific processes, use the <code>ScalingProcesses</code> parameter. To suspend all processes, omit the <code>ScalingProcesses</code> parameter.</p> <p>Note that if you suspend either the <code>Launch</code> or <code>Terminate</code> process types, it can prevent other process types from functioning properly.</p> <p>To resume processes that have been suspended, use <a>ResumeProcesses</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SuspendProcessesAsync(const Model::SuspendProcessesRequest& request) const;

     /*
       <p>Terminates the specified instance and optionally adjusts the desired group size.</p> <note>This call simply makes a termination request. The instances is not terminated immediately.</note>
     */
     Model::TerminateInstanceInAutoScalingGroupOutcome TerminateInstanceInAutoScalingGroup(const Model::TerminateInstanceInAutoScalingGroupRequest& request) const;

     /*
       <p>Terminates the specified instance and optionally adjusts the desired group size.</p> <note>This call simply makes a termination request. The instances is not terminated immediately.</note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::TerminateInstanceInAutoScalingGroupOutcomeCallable TerminateInstanceInAutoScalingGroupCallable(const Model::TerminateInstanceInAutoScalingGroupRequest& request) const;

     /*
       <p>Terminates the specified instance and optionally adjusts the desired group size.</p> <note>This call simply makes a termination request. The instances is not terminated immediately.</note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void TerminateInstanceInAutoScalingGroupAsync(const Model::TerminateInstanceInAutoScalingGroupRequest& request) const;

     /*
       <p> Updates the configuration for the specified <a>AutoScalingGroup</a>. </p> <note> <p> To update an Auto Scaling group with a launch configuration that has the <code>InstanceMonitoring</code> flag set to <code>False</code>, you must first ensure that collection of group metrics is disabled. Otherwise, calls to <a>UpdateAutoScalingGroup</a> will fail. If you have previously enabled group metrics collection, you can disable collection of all group metrics by calling <a>DisableMetricsCollection</a>. </p> </note> <p> The new settings are registered upon the completion of this call. Any launch configuration settings take effect on any triggers after this call returns. Scaling activities that are currently in progress aren't affected. </p> <note> <ul> <li> <p>If a new value is specified for <i>MinSize</i> without specifying the value for <i>DesiredCapacity</i>, and if the new <i>MinSize</i> is larger than the current size of the Auto Scaling group, there will be an implicit call to <a>SetDesiredCapacity</a> to set the group to the new <i>MinSize</i>. </p> </li> <li> <p>If a new value is specified for <i>MaxSize</i> without specifying the value for <i>DesiredCapacity</i>, and the new <i>MaxSize</i> is smaller than the current size of the Auto Scaling group, there will be an implicit call to <a>SetDesiredCapacity</a> to set the group to the new <i>MaxSize</i>. </p> </li> <li> <p>All other optional parameters are left unchanged if not passed in the request.</p> </li> </ul> </note>
     */
     Model::UpdateAutoScalingGroupOutcome UpdateAutoScalingGroup(const Model::UpdateAutoScalingGroupRequest& request) const;

     /*
       <p> Updates the configuration for the specified <a>AutoScalingGroup</a>. </p> <note> <p> To update an Auto Scaling group with a launch configuration that has the <code>InstanceMonitoring</code> flag set to <code>False</code>, you must first ensure that collection of group metrics is disabled. Otherwise, calls to <a>UpdateAutoScalingGroup</a> will fail. If you have previously enabled group metrics collection, you can disable collection of all group metrics by calling <a>DisableMetricsCollection</a>. </p> </note> <p> The new settings are registered upon the completion of this call. Any launch configuration settings take effect on any triggers after this call returns. Scaling activities that are currently in progress aren't affected. </p> <note> <ul> <li> <p>If a new value is specified for <i>MinSize</i> without specifying the value for <i>DesiredCapacity</i>, and if the new <i>MinSize</i> is larger than the current size of the Auto Scaling group, there will be an implicit call to <a>SetDesiredCapacity</a> to set the group to the new <i>MinSize</i>. </p> </li> <li> <p>If a new value is specified for <i>MaxSize</i> without specifying the value for <i>DesiredCapacity</i>, and the new <i>MaxSize</i> is smaller than the current size of the Auto Scaling group, there will be an implicit call to <a>SetDesiredCapacity</a> to set the group to the new <i>MaxSize</i>. </p> </li> <li> <p>All other optional parameters are left unchanged if not passed in the request.</p> </li> </ul> </note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateAutoScalingGroupOutcomeCallable UpdateAutoScalingGroupCallable(const Model::UpdateAutoScalingGroupRequest& request) const;

     /*
       <p> Updates the configuration for the specified <a>AutoScalingGroup</a>. </p> <note> <p> To update an Auto Scaling group with a launch configuration that has the <code>InstanceMonitoring</code> flag set to <code>False</code>, you must first ensure that collection of group metrics is disabled. Otherwise, calls to <a>UpdateAutoScalingGroup</a> will fail. If you have previously enabled group metrics collection, you can disable collection of all group metrics by calling <a>DisableMetricsCollection</a>. </p> </note> <p> The new settings are registered upon the completion of this call. Any launch configuration settings take effect on any triggers after this call returns. Scaling activities that are currently in progress aren't affected. </p> <note> <ul> <li> <p>If a new value is specified for <i>MinSize</i> without specifying the value for <i>DesiredCapacity</i>, and if the new <i>MinSize</i> is larger than the current size of the Auto Scaling group, there will be an implicit call to <a>SetDesiredCapacity</a> to set the group to the new <i>MinSize</i>. </p> </li> <li> <p>If a new value is specified for <i>MaxSize</i> without specifying the value for <i>DesiredCapacity</i>, and the new <i>MaxSize</i> is smaller than the current size of the Auto Scaling group, there will be an implicit call to <a>SetDesiredCapacity</a> to set the group to the new <i>MaxSize</i>. </p> </li> <li> <p>All other optional parameters are left unchanged if not passed in the request.</p> </li> </ul> </note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateAutoScalingGroupAsync(const Model::UpdateAutoScalingGroupRequest& request) const;

   /**
    * Adds an event handler for AttachInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use AttachInstancesAsync.
    */
    inline void RegisterAttachInstancesOutcomeReceivedHandler(const AttachInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAttachInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AttachInstances.
    */
    inline void ClearAllAttachInstancesOutcomeReceivedHandlers()
    {
      m_onAttachInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AttachLoadBalancersAsync to call upon completion to the handler chain. You need to call this to
    * use AttachLoadBalancersAsync.
    */
    inline void RegisterAttachLoadBalancersOutcomeReceivedHandler(const AttachLoadBalancersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAttachLoadBalancersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AttachLoadBalancers.
    */
    inline void ClearAllAttachLoadBalancersOutcomeReceivedHandlers()
    {
      m_onAttachLoadBalancersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CompleteLifecycleActionAsync to call upon completion to the handler chain. You need to call this to
    * use CompleteLifecycleActionAsync.
    */
    inline void RegisterCompleteLifecycleActionOutcomeReceivedHandler(const CompleteLifecycleActionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCompleteLifecycleActionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CompleteLifecycleAction.
    */
    inline void ClearAllCompleteLifecycleActionOutcomeReceivedHandlers()
    {
      m_onCompleteLifecycleActionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateAutoScalingGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateAutoScalingGroupAsync.
    */
    inline void RegisterCreateAutoScalingGroupOutcomeReceivedHandler(const CreateAutoScalingGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateAutoScalingGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateAutoScalingGroup.
    */
    inline void ClearAllCreateAutoScalingGroupOutcomeReceivedHandlers()
    {
      m_onCreateAutoScalingGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateLaunchConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use CreateLaunchConfigurationAsync.
    */
    inline void RegisterCreateLaunchConfigurationOutcomeReceivedHandler(const CreateLaunchConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateLaunchConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateLaunchConfiguration.
    */
    inline void ClearAllCreateLaunchConfigurationOutcomeReceivedHandlers()
    {
      m_onCreateLaunchConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateOrUpdateTagsAsync to call upon completion to the handler chain. You need to call this to
    * use CreateOrUpdateTagsAsync.
    */
    inline void RegisterCreateOrUpdateTagsOutcomeReceivedHandler(const CreateOrUpdateTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateOrUpdateTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateOrUpdateTags.
    */
    inline void ClearAllCreateOrUpdateTagsOutcomeReceivedHandlers()
    {
      m_onCreateOrUpdateTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteAutoScalingGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteAutoScalingGroupAsync.
    */
    inline void RegisterDeleteAutoScalingGroupOutcomeReceivedHandler(const DeleteAutoScalingGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteAutoScalingGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteAutoScalingGroup.
    */
    inline void ClearAllDeleteAutoScalingGroupOutcomeReceivedHandlers()
    {
      m_onDeleteAutoScalingGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteLaunchConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteLaunchConfigurationAsync.
    */
    inline void RegisterDeleteLaunchConfigurationOutcomeReceivedHandler(const DeleteLaunchConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteLaunchConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteLaunchConfiguration.
    */
    inline void ClearAllDeleteLaunchConfigurationOutcomeReceivedHandlers()
    {
      m_onDeleteLaunchConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteLifecycleHookAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteLifecycleHookAsync.
    */
    inline void RegisterDeleteLifecycleHookOutcomeReceivedHandler(const DeleteLifecycleHookOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteLifecycleHookOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteLifecycleHook.
    */
    inline void ClearAllDeleteLifecycleHookOutcomeReceivedHandlers()
    {
      m_onDeleteLifecycleHookOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteNotificationConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteNotificationConfigurationAsync.
    */
    inline void RegisterDeleteNotificationConfigurationOutcomeReceivedHandler(const DeleteNotificationConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteNotificationConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteNotificationConfiguration.
    */
    inline void ClearAllDeleteNotificationConfigurationOutcomeReceivedHandlers()
    {
      m_onDeleteNotificationConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeletePolicyAsync to call upon completion to the handler chain. You need to call this to
    * use DeletePolicyAsync.
    */
    inline void RegisterDeletePolicyOutcomeReceivedHandler(const DeletePolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeletePolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeletePolicy.
    */
    inline void ClearAllDeletePolicyOutcomeReceivedHandlers()
    {
      m_onDeletePolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteScheduledActionAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteScheduledActionAsync.
    */
    inline void RegisterDeleteScheduledActionOutcomeReceivedHandler(const DeleteScheduledActionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteScheduledActionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteScheduledAction.
    */
    inline void ClearAllDeleteScheduledActionOutcomeReceivedHandlers()
    {
      m_onDeleteScheduledActionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteTagsAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteTagsAsync.
    */
    inline void RegisterDeleteTagsOutcomeReceivedHandler(const DeleteTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteTags.
    */
    inline void ClearAllDeleteTagsOutcomeReceivedHandlers()
    {
      m_onDeleteTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeAccountLimitsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeAccountLimitsAsync.
    */
    inline void RegisterDescribeAccountLimitsOutcomeReceivedHandler(const DescribeAccountLimitsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeAccountLimitsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeAccountLimits.
    */
    inline void ClearAllDescribeAccountLimitsOutcomeReceivedHandlers()
    {
      m_onDescribeAccountLimitsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeAdjustmentTypesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeAdjustmentTypesAsync.
    */
    inline void RegisterDescribeAdjustmentTypesOutcomeReceivedHandler(const DescribeAdjustmentTypesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeAdjustmentTypesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeAdjustmentTypes.
    */
    inline void ClearAllDescribeAdjustmentTypesOutcomeReceivedHandlers()
    {
      m_onDescribeAdjustmentTypesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeAutoScalingGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeAutoScalingGroupsAsync.
    */
    inline void RegisterDescribeAutoScalingGroupsOutcomeReceivedHandler(const DescribeAutoScalingGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeAutoScalingGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeAutoScalingGroups.
    */
    inline void ClearAllDescribeAutoScalingGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeAutoScalingGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeAutoScalingInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeAutoScalingInstancesAsync.
    */
    inline void RegisterDescribeAutoScalingInstancesOutcomeReceivedHandler(const DescribeAutoScalingInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeAutoScalingInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeAutoScalingInstances.
    */
    inline void ClearAllDescribeAutoScalingInstancesOutcomeReceivedHandlers()
    {
      m_onDescribeAutoScalingInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeAutoScalingNotificationTypesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeAutoScalingNotificationTypesAsync.
    */
    inline void RegisterDescribeAutoScalingNotificationTypesOutcomeReceivedHandler(const DescribeAutoScalingNotificationTypesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeAutoScalingNotificationTypesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeAutoScalingNotificationTypes.
    */
    inline void ClearAllDescribeAutoScalingNotificationTypesOutcomeReceivedHandlers()
    {
      m_onDescribeAutoScalingNotificationTypesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLaunchConfigurationsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLaunchConfigurationsAsync.
    */
    inline void RegisterDescribeLaunchConfigurationsOutcomeReceivedHandler(const DescribeLaunchConfigurationsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLaunchConfigurationsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLaunchConfigurations.
    */
    inline void ClearAllDescribeLaunchConfigurationsOutcomeReceivedHandlers()
    {
      m_onDescribeLaunchConfigurationsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLifecycleHookTypesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLifecycleHookTypesAsync.
    */
    inline void RegisterDescribeLifecycleHookTypesOutcomeReceivedHandler(const DescribeLifecycleHookTypesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLifecycleHookTypesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLifecycleHookTypes.
    */
    inline void ClearAllDescribeLifecycleHookTypesOutcomeReceivedHandlers()
    {
      m_onDescribeLifecycleHookTypesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLifecycleHooksAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLifecycleHooksAsync.
    */
    inline void RegisterDescribeLifecycleHooksOutcomeReceivedHandler(const DescribeLifecycleHooksOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLifecycleHooksOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLifecycleHooks.
    */
    inline void ClearAllDescribeLifecycleHooksOutcomeReceivedHandlers()
    {
      m_onDescribeLifecycleHooksOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLoadBalancersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLoadBalancersAsync.
    */
    inline void RegisterDescribeLoadBalancersOutcomeReceivedHandler(const DescribeLoadBalancersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLoadBalancersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLoadBalancers.
    */
    inline void ClearAllDescribeLoadBalancersOutcomeReceivedHandlers()
    {
      m_onDescribeLoadBalancersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeMetricCollectionTypesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeMetricCollectionTypesAsync.
    */
    inline void RegisterDescribeMetricCollectionTypesOutcomeReceivedHandler(const DescribeMetricCollectionTypesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeMetricCollectionTypesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeMetricCollectionTypes.
    */
    inline void ClearAllDescribeMetricCollectionTypesOutcomeReceivedHandlers()
    {
      m_onDescribeMetricCollectionTypesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeNotificationConfigurationsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeNotificationConfigurationsAsync.
    */
    inline void RegisterDescribeNotificationConfigurationsOutcomeReceivedHandler(const DescribeNotificationConfigurationsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeNotificationConfigurationsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeNotificationConfigurations.
    */
    inline void ClearAllDescribeNotificationConfigurationsOutcomeReceivedHandlers()
    {
      m_onDescribeNotificationConfigurationsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribePoliciesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribePoliciesAsync.
    */
    inline void RegisterDescribePoliciesOutcomeReceivedHandler(const DescribePoliciesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribePoliciesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribePolicies.
    */
    inline void ClearAllDescribePoliciesOutcomeReceivedHandlers()
    {
      m_onDescribePoliciesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeScalingActivitiesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeScalingActivitiesAsync.
    */
    inline void RegisterDescribeScalingActivitiesOutcomeReceivedHandler(const DescribeScalingActivitiesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeScalingActivitiesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeScalingActivities.
    */
    inline void ClearAllDescribeScalingActivitiesOutcomeReceivedHandlers()
    {
      m_onDescribeScalingActivitiesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeScalingProcessTypesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeScalingProcessTypesAsync.
    */
    inline void RegisterDescribeScalingProcessTypesOutcomeReceivedHandler(const DescribeScalingProcessTypesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeScalingProcessTypesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeScalingProcessTypes.
    */
    inline void ClearAllDescribeScalingProcessTypesOutcomeReceivedHandlers()
    {
      m_onDescribeScalingProcessTypesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeScheduledActionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeScheduledActionsAsync.
    */
    inline void RegisterDescribeScheduledActionsOutcomeReceivedHandler(const DescribeScheduledActionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeScheduledActionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeScheduledActions.
    */
    inline void ClearAllDescribeScheduledActionsOutcomeReceivedHandlers()
    {
      m_onDescribeScheduledActionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeTagsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeTagsAsync.
    */
    inline void RegisterDescribeTagsOutcomeReceivedHandler(const DescribeTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeTags.
    */
    inline void ClearAllDescribeTagsOutcomeReceivedHandlers()
    {
      m_onDescribeTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeTerminationPolicyTypesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeTerminationPolicyTypesAsync.
    */
    inline void RegisterDescribeTerminationPolicyTypesOutcomeReceivedHandler(const DescribeTerminationPolicyTypesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeTerminationPolicyTypesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeTerminationPolicyTypes.
    */
    inline void ClearAllDescribeTerminationPolicyTypesOutcomeReceivedHandlers()
    {
      m_onDescribeTerminationPolicyTypesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DetachInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use DetachInstancesAsync.
    */
    inline void RegisterDetachInstancesOutcomeReceivedHandler(const DetachInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDetachInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DetachInstances.
    */
    inline void ClearAllDetachInstancesOutcomeReceivedHandlers()
    {
      m_onDetachInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DetachLoadBalancersAsync to call upon completion to the handler chain. You need to call this to
    * use DetachLoadBalancersAsync.
    */
    inline void RegisterDetachLoadBalancersOutcomeReceivedHandler(const DetachLoadBalancersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDetachLoadBalancersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DetachLoadBalancers.
    */
    inline void ClearAllDetachLoadBalancersOutcomeReceivedHandlers()
    {
      m_onDetachLoadBalancersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DisableMetricsCollectionAsync to call upon completion to the handler chain. You need to call this to
    * use DisableMetricsCollectionAsync.
    */
    inline void RegisterDisableMetricsCollectionOutcomeReceivedHandler(const DisableMetricsCollectionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDisableMetricsCollectionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DisableMetricsCollection.
    */
    inline void ClearAllDisableMetricsCollectionOutcomeReceivedHandlers()
    {
      m_onDisableMetricsCollectionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for EnableMetricsCollectionAsync to call upon completion to the handler chain. You need to call this to
    * use EnableMetricsCollectionAsync.
    */
    inline void RegisterEnableMetricsCollectionOutcomeReceivedHandler(const EnableMetricsCollectionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onEnableMetricsCollectionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for EnableMetricsCollection.
    */
    inline void ClearAllEnableMetricsCollectionOutcomeReceivedHandlers()
    {
      m_onEnableMetricsCollectionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for EnterStandbyAsync to call upon completion to the handler chain. You need to call this to
    * use EnterStandbyAsync.
    */
    inline void RegisterEnterStandbyOutcomeReceivedHandler(const EnterStandbyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onEnterStandbyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for EnterStandby.
    */
    inline void ClearAllEnterStandbyOutcomeReceivedHandlers()
    {
      m_onEnterStandbyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ExecutePolicyAsync to call upon completion to the handler chain. You need to call this to
    * use ExecutePolicyAsync.
    */
    inline void RegisterExecutePolicyOutcomeReceivedHandler(const ExecutePolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onExecutePolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ExecutePolicy.
    */
    inline void ClearAllExecutePolicyOutcomeReceivedHandlers()
    {
      m_onExecutePolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ExitStandbyAsync to call upon completion to the handler chain. You need to call this to
    * use ExitStandbyAsync.
    */
    inline void RegisterExitStandbyOutcomeReceivedHandler(const ExitStandbyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onExitStandbyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ExitStandby.
    */
    inline void ClearAllExitStandbyOutcomeReceivedHandlers()
    {
      m_onExitStandbyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutLifecycleHookAsync to call upon completion to the handler chain. You need to call this to
    * use PutLifecycleHookAsync.
    */
    inline void RegisterPutLifecycleHookOutcomeReceivedHandler(const PutLifecycleHookOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutLifecycleHookOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutLifecycleHook.
    */
    inline void ClearAllPutLifecycleHookOutcomeReceivedHandlers()
    {
      m_onPutLifecycleHookOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutNotificationConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use PutNotificationConfigurationAsync.
    */
    inline void RegisterPutNotificationConfigurationOutcomeReceivedHandler(const PutNotificationConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutNotificationConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutNotificationConfiguration.
    */
    inline void ClearAllPutNotificationConfigurationOutcomeReceivedHandlers()
    {
      m_onPutNotificationConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutScalingPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use PutScalingPolicyAsync.
    */
    inline void RegisterPutScalingPolicyOutcomeReceivedHandler(const PutScalingPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutScalingPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutScalingPolicy.
    */
    inline void ClearAllPutScalingPolicyOutcomeReceivedHandlers()
    {
      m_onPutScalingPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutScheduledUpdateGroupActionAsync to call upon completion to the handler chain. You need to call this to
    * use PutScheduledUpdateGroupActionAsync.
    */
    inline void RegisterPutScheduledUpdateGroupActionOutcomeReceivedHandler(const PutScheduledUpdateGroupActionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutScheduledUpdateGroupActionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutScheduledUpdateGroupAction.
    */
    inline void ClearAllPutScheduledUpdateGroupActionOutcomeReceivedHandlers()
    {
      m_onPutScheduledUpdateGroupActionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RecordLifecycleActionHeartbeatAsync to call upon completion to the handler chain. You need to call this to
    * use RecordLifecycleActionHeartbeatAsync.
    */
    inline void RegisterRecordLifecycleActionHeartbeatOutcomeReceivedHandler(const RecordLifecycleActionHeartbeatOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRecordLifecycleActionHeartbeatOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RecordLifecycleActionHeartbeat.
    */
    inline void ClearAllRecordLifecycleActionHeartbeatOutcomeReceivedHandlers()
    {
      m_onRecordLifecycleActionHeartbeatOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ResumeProcessesAsync to call upon completion to the handler chain. You need to call this to
    * use ResumeProcessesAsync.
    */
    inline void RegisterResumeProcessesOutcomeReceivedHandler(const ResumeProcessesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onResumeProcessesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ResumeProcesses.
    */
    inline void ClearAllResumeProcessesOutcomeReceivedHandlers()
    {
      m_onResumeProcessesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetDesiredCapacityAsync to call upon completion to the handler chain. You need to call this to
    * use SetDesiredCapacityAsync.
    */
    inline void RegisterSetDesiredCapacityOutcomeReceivedHandler(const SetDesiredCapacityOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetDesiredCapacityOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetDesiredCapacity.
    */
    inline void ClearAllSetDesiredCapacityOutcomeReceivedHandlers()
    {
      m_onSetDesiredCapacityOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetInstanceHealthAsync to call upon completion to the handler chain. You need to call this to
    * use SetInstanceHealthAsync.
    */
    inline void RegisterSetInstanceHealthOutcomeReceivedHandler(const SetInstanceHealthOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetInstanceHealthOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetInstanceHealth.
    */
    inline void ClearAllSetInstanceHealthOutcomeReceivedHandlers()
    {
      m_onSetInstanceHealthOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SuspendProcessesAsync to call upon completion to the handler chain. You need to call this to
    * use SuspendProcessesAsync.
    */
    inline void RegisterSuspendProcessesOutcomeReceivedHandler(const SuspendProcessesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSuspendProcessesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SuspendProcesses.
    */
    inline void ClearAllSuspendProcessesOutcomeReceivedHandlers()
    {
      m_onSuspendProcessesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for TerminateInstanceInAutoScalingGroupAsync to call upon completion to the handler chain. You need to call this to
    * use TerminateInstanceInAutoScalingGroupAsync.
    */
    inline void RegisterTerminateInstanceInAutoScalingGroupOutcomeReceivedHandler(const TerminateInstanceInAutoScalingGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onTerminateInstanceInAutoScalingGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for TerminateInstanceInAutoScalingGroup.
    */
    inline void ClearAllTerminateInstanceInAutoScalingGroupOutcomeReceivedHandlers()
    {
      m_onTerminateInstanceInAutoScalingGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateAutoScalingGroupAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateAutoScalingGroupAsync.
    */
    inline void RegisterUpdateAutoScalingGroupOutcomeReceivedHandler(const UpdateAutoScalingGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateAutoScalingGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateAutoScalingGroup.
    */
    inline void ClearAllUpdateAutoScalingGroupOutcomeReceivedHandlers()
    {
      m_onUpdateAutoScalingGroupOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AttachInstancesAsyncHelper(const Model::AttachInstancesRequest& request) const;
    void AttachLoadBalancersAsyncHelper(const Model::AttachLoadBalancersRequest& request) const;
    void CompleteLifecycleActionAsyncHelper(const Model::CompleteLifecycleActionRequest& request) const;
    void CreateAutoScalingGroupAsyncHelper(const Model::CreateAutoScalingGroupRequest& request) const;
    void CreateLaunchConfigurationAsyncHelper(const Model::CreateLaunchConfigurationRequest& request) const;
    void CreateOrUpdateTagsAsyncHelper(const Model::CreateOrUpdateTagsRequest& request) const;
    void DeleteAutoScalingGroupAsyncHelper(const Model::DeleteAutoScalingGroupRequest& request) const;
    void DeleteLaunchConfigurationAsyncHelper(const Model::DeleteLaunchConfigurationRequest& request) const;
    void DeleteLifecycleHookAsyncHelper(const Model::DeleteLifecycleHookRequest& request) const;
    void DeleteNotificationConfigurationAsyncHelper(const Model::DeleteNotificationConfigurationRequest& request) const;
    void DeletePolicyAsyncHelper(const Model::DeletePolicyRequest& request) const;
    void DeleteScheduledActionAsyncHelper(const Model::DeleteScheduledActionRequest& request) const;
    void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request) const;
    void DescribeAccountLimitsAsyncHelper(const Model::DescribeAccountLimitsRequest& request) const;
    void DescribeAdjustmentTypesAsyncHelper(const Model::DescribeAdjustmentTypesRequest& request) const;
    void DescribeAutoScalingGroupsAsyncHelper(const Model::DescribeAutoScalingGroupsRequest& request) const;
    void DescribeAutoScalingInstancesAsyncHelper(const Model::DescribeAutoScalingInstancesRequest& request) const;
    void DescribeAutoScalingNotificationTypesAsyncHelper(const Model::DescribeAutoScalingNotificationTypesRequest& request) const;
    void DescribeLaunchConfigurationsAsyncHelper(const Model::DescribeLaunchConfigurationsRequest& request) const;
    void DescribeLifecycleHookTypesAsyncHelper(const Model::DescribeLifecycleHookTypesRequest& request) const;
    void DescribeLifecycleHooksAsyncHelper(const Model::DescribeLifecycleHooksRequest& request) const;
    void DescribeLoadBalancersAsyncHelper(const Model::DescribeLoadBalancersRequest& request) const;
    void DescribeMetricCollectionTypesAsyncHelper(const Model::DescribeMetricCollectionTypesRequest& request) const;
    void DescribeNotificationConfigurationsAsyncHelper(const Model::DescribeNotificationConfigurationsRequest& request) const;
    void DescribePoliciesAsyncHelper(const Model::DescribePoliciesRequest& request) const;
    void DescribeScalingActivitiesAsyncHelper(const Model::DescribeScalingActivitiesRequest& request) const;
    void DescribeScalingProcessTypesAsyncHelper(const Model::DescribeScalingProcessTypesRequest& request) const;
    void DescribeScheduledActionsAsyncHelper(const Model::DescribeScheduledActionsRequest& request) const;
    void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request) const;
    void DescribeTerminationPolicyTypesAsyncHelper(const Model::DescribeTerminationPolicyTypesRequest& request) const;
    void DetachInstancesAsyncHelper(const Model::DetachInstancesRequest& request) const;
    void DetachLoadBalancersAsyncHelper(const Model::DetachLoadBalancersRequest& request) const;
    void DisableMetricsCollectionAsyncHelper(const Model::DisableMetricsCollectionRequest& request) const;
    void EnableMetricsCollectionAsyncHelper(const Model::EnableMetricsCollectionRequest& request) const;
    void EnterStandbyAsyncHelper(const Model::EnterStandbyRequest& request) const;
    void ExecutePolicyAsyncHelper(const Model::ExecutePolicyRequest& request) const;
    void ExitStandbyAsyncHelper(const Model::ExitStandbyRequest& request) const;
    void PutLifecycleHookAsyncHelper(const Model::PutLifecycleHookRequest& request) const;
    void PutNotificationConfigurationAsyncHelper(const Model::PutNotificationConfigurationRequest& request) const;
    void PutScalingPolicyAsyncHelper(const Model::PutScalingPolicyRequest& request) const;
    void PutScheduledUpdateGroupActionAsyncHelper(const Model::PutScheduledUpdateGroupActionRequest& request) const;
    void RecordLifecycleActionHeartbeatAsyncHelper(const Model::RecordLifecycleActionHeartbeatRequest& request) const;
    void ResumeProcessesAsyncHelper(const Model::ResumeProcessesRequest& request) const;
    void SetDesiredCapacityAsyncHelper(const Model::SetDesiredCapacityRequest& request) const;
    void SetInstanceHealthAsyncHelper(const Model::SetInstanceHealthRequest& request) const;
    void SuspendProcessesAsyncHelper(const Model::SuspendProcessesRequest& request) const;
    void TerminateInstanceInAutoScalingGroupAsyncHelper(const Model::TerminateInstanceInAutoScalingGroupRequest& request) const;
    void UpdateAutoScalingGroupAsyncHelper(const Model::UpdateAutoScalingGroupRequest& request) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AttachInstancesOutcomeReceivedEvent m_onAttachInstancesOutcomeReceived;
    AttachLoadBalancersOutcomeReceivedEvent m_onAttachLoadBalancersOutcomeReceived;
    CompleteLifecycleActionOutcomeReceivedEvent m_onCompleteLifecycleActionOutcomeReceived;
    CreateAutoScalingGroupOutcomeReceivedEvent m_onCreateAutoScalingGroupOutcomeReceived;
    CreateLaunchConfigurationOutcomeReceivedEvent m_onCreateLaunchConfigurationOutcomeReceived;
    CreateOrUpdateTagsOutcomeReceivedEvent m_onCreateOrUpdateTagsOutcomeReceived;
    DeleteAutoScalingGroupOutcomeReceivedEvent m_onDeleteAutoScalingGroupOutcomeReceived;
    DeleteLaunchConfigurationOutcomeReceivedEvent m_onDeleteLaunchConfigurationOutcomeReceived;
    DeleteLifecycleHookOutcomeReceivedEvent m_onDeleteLifecycleHookOutcomeReceived;
    DeleteNotificationConfigurationOutcomeReceivedEvent m_onDeleteNotificationConfigurationOutcomeReceived;
    DeletePolicyOutcomeReceivedEvent m_onDeletePolicyOutcomeReceived;
    DeleteScheduledActionOutcomeReceivedEvent m_onDeleteScheduledActionOutcomeReceived;
    DeleteTagsOutcomeReceivedEvent m_onDeleteTagsOutcomeReceived;
    DescribeAccountLimitsOutcomeReceivedEvent m_onDescribeAccountLimitsOutcomeReceived;
    DescribeAdjustmentTypesOutcomeReceivedEvent m_onDescribeAdjustmentTypesOutcomeReceived;
    DescribeAutoScalingGroupsOutcomeReceivedEvent m_onDescribeAutoScalingGroupsOutcomeReceived;
    DescribeAutoScalingInstancesOutcomeReceivedEvent m_onDescribeAutoScalingInstancesOutcomeReceived;
    DescribeAutoScalingNotificationTypesOutcomeReceivedEvent m_onDescribeAutoScalingNotificationTypesOutcomeReceived;
    DescribeLaunchConfigurationsOutcomeReceivedEvent m_onDescribeLaunchConfigurationsOutcomeReceived;
    DescribeLifecycleHookTypesOutcomeReceivedEvent m_onDescribeLifecycleHookTypesOutcomeReceived;
    DescribeLifecycleHooksOutcomeReceivedEvent m_onDescribeLifecycleHooksOutcomeReceived;
    DescribeLoadBalancersOutcomeReceivedEvent m_onDescribeLoadBalancersOutcomeReceived;
    DescribeMetricCollectionTypesOutcomeReceivedEvent m_onDescribeMetricCollectionTypesOutcomeReceived;
    DescribeNotificationConfigurationsOutcomeReceivedEvent m_onDescribeNotificationConfigurationsOutcomeReceived;
    DescribePoliciesOutcomeReceivedEvent m_onDescribePoliciesOutcomeReceived;
    DescribeScalingActivitiesOutcomeReceivedEvent m_onDescribeScalingActivitiesOutcomeReceived;
    DescribeScalingProcessTypesOutcomeReceivedEvent m_onDescribeScalingProcessTypesOutcomeReceived;
    DescribeScheduledActionsOutcomeReceivedEvent m_onDescribeScheduledActionsOutcomeReceived;
    DescribeTagsOutcomeReceivedEvent m_onDescribeTagsOutcomeReceived;
    DescribeTerminationPolicyTypesOutcomeReceivedEvent m_onDescribeTerminationPolicyTypesOutcomeReceived;
    DetachInstancesOutcomeReceivedEvent m_onDetachInstancesOutcomeReceived;
    DetachLoadBalancersOutcomeReceivedEvent m_onDetachLoadBalancersOutcomeReceived;
    DisableMetricsCollectionOutcomeReceivedEvent m_onDisableMetricsCollectionOutcomeReceived;
    EnableMetricsCollectionOutcomeReceivedEvent m_onEnableMetricsCollectionOutcomeReceived;
    EnterStandbyOutcomeReceivedEvent m_onEnterStandbyOutcomeReceived;
    ExecutePolicyOutcomeReceivedEvent m_onExecutePolicyOutcomeReceived;
    ExitStandbyOutcomeReceivedEvent m_onExitStandbyOutcomeReceived;
    PutLifecycleHookOutcomeReceivedEvent m_onPutLifecycleHookOutcomeReceived;
    PutNotificationConfigurationOutcomeReceivedEvent m_onPutNotificationConfigurationOutcomeReceived;
    PutScalingPolicyOutcomeReceivedEvent m_onPutScalingPolicyOutcomeReceived;
    PutScheduledUpdateGroupActionOutcomeReceivedEvent m_onPutScheduledUpdateGroupActionOutcomeReceived;
    RecordLifecycleActionHeartbeatOutcomeReceivedEvent m_onRecordLifecycleActionHeartbeatOutcomeReceived;
    ResumeProcessesOutcomeReceivedEvent m_onResumeProcessesOutcomeReceived;
    SetDesiredCapacityOutcomeReceivedEvent m_onSetDesiredCapacityOutcomeReceived;
    SetInstanceHealthOutcomeReceivedEvent m_onSetInstanceHealthOutcomeReceived;
    SuspendProcessesOutcomeReceivedEvent m_onSuspendProcessesOutcomeReceived;
    TerminateInstanceInAutoScalingGroupOutcomeReceivedEvent m_onTerminateInstanceInAutoScalingGroupOutcomeReceived;
    UpdateAutoScalingGroupOutcomeReceivedEvent m_onUpdateAutoScalingGroupOutcomeReceived;
  };

} // namespace AutoScaling
} // namespace Aws
