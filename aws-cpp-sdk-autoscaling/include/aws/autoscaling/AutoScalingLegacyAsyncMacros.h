/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AttachInstancesAsync(...)  SubmitAsync(&AutoScalingClient::AttachInstances, __VA_ARGS__)
#define AttachInstancesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::AttachInstances, REQUEST)

#define AttachLoadBalancerTargetGroupsAsync(...)  SubmitAsync(&AutoScalingClient::AttachLoadBalancerTargetGroups, __VA_ARGS__)
#define AttachLoadBalancerTargetGroupsCallable(REQUEST)  SubmitCallable(&AutoScalingClient::AttachLoadBalancerTargetGroups, REQUEST)

#define AttachLoadBalancersAsync(...)  SubmitAsync(&AutoScalingClient::AttachLoadBalancers, __VA_ARGS__)
#define AttachLoadBalancersCallable(REQUEST)  SubmitCallable(&AutoScalingClient::AttachLoadBalancers, REQUEST)

#define BatchDeleteScheduledActionAsync(...)  SubmitAsync(&AutoScalingClient::BatchDeleteScheduledAction, __VA_ARGS__)
#define BatchDeleteScheduledActionCallable(REQUEST)  SubmitCallable(&AutoScalingClient::BatchDeleteScheduledAction, REQUEST)

#define BatchPutScheduledUpdateGroupActionAsync(...)  SubmitAsync(&AutoScalingClient::BatchPutScheduledUpdateGroupAction, __VA_ARGS__)
#define BatchPutScheduledUpdateGroupActionCallable(REQUEST)  SubmitCallable(&AutoScalingClient::BatchPutScheduledUpdateGroupAction, REQUEST)

#define CancelInstanceRefreshAsync(...)  SubmitAsync(&AutoScalingClient::CancelInstanceRefresh, __VA_ARGS__)
#define CancelInstanceRefreshCallable(REQUEST)  SubmitCallable(&AutoScalingClient::CancelInstanceRefresh, REQUEST)

#define CompleteLifecycleActionAsync(...)  SubmitAsync(&AutoScalingClient::CompleteLifecycleAction, __VA_ARGS__)
#define CompleteLifecycleActionCallable(REQUEST)  SubmitCallable(&AutoScalingClient::CompleteLifecycleAction, REQUEST)

#define CreateAutoScalingGroupAsync(...)  SubmitAsync(&AutoScalingClient::CreateAutoScalingGroup, __VA_ARGS__)
#define CreateAutoScalingGroupCallable(REQUEST)  SubmitCallable(&AutoScalingClient::CreateAutoScalingGroup, REQUEST)

#define CreateLaunchConfigurationAsync(...)  SubmitAsync(&AutoScalingClient::CreateLaunchConfiguration, __VA_ARGS__)
#define CreateLaunchConfigurationCallable(REQUEST)  SubmitCallable(&AutoScalingClient::CreateLaunchConfiguration, REQUEST)

#define CreateOrUpdateTagsAsync(...)  SubmitAsync(&AutoScalingClient::CreateOrUpdateTags, __VA_ARGS__)
#define CreateOrUpdateTagsCallable(REQUEST)  SubmitCallable(&AutoScalingClient::CreateOrUpdateTags, REQUEST)

#define DeleteAutoScalingGroupAsync(...)  SubmitAsync(&AutoScalingClient::DeleteAutoScalingGroup, __VA_ARGS__)
#define DeleteAutoScalingGroupCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DeleteAutoScalingGroup, REQUEST)

#define DeleteLaunchConfigurationAsync(...)  SubmitAsync(&AutoScalingClient::DeleteLaunchConfiguration, __VA_ARGS__)
#define DeleteLaunchConfigurationCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DeleteLaunchConfiguration, REQUEST)

#define DeleteLifecycleHookAsync(...)  SubmitAsync(&AutoScalingClient::DeleteLifecycleHook, __VA_ARGS__)
#define DeleteLifecycleHookCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DeleteLifecycleHook, REQUEST)

#define DeleteNotificationConfigurationAsync(...)  SubmitAsync(&AutoScalingClient::DeleteNotificationConfiguration, __VA_ARGS__)
#define DeleteNotificationConfigurationCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DeleteNotificationConfiguration, REQUEST)

#define DeletePolicyAsync(...)  SubmitAsync(&AutoScalingClient::DeletePolicy, __VA_ARGS__)
#define DeletePolicyCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DeletePolicy, REQUEST)

#define DeleteScheduledActionAsync(...)  SubmitAsync(&AutoScalingClient::DeleteScheduledAction, __VA_ARGS__)
#define DeleteScheduledActionCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DeleteScheduledAction, REQUEST)

#define DeleteTagsAsync(...)  SubmitAsync(&AutoScalingClient::DeleteTags, __VA_ARGS__)
#define DeleteTagsCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DeleteTags, REQUEST)

#define DeleteWarmPoolAsync(...)  SubmitAsync(&AutoScalingClient::DeleteWarmPool, __VA_ARGS__)
#define DeleteWarmPoolCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DeleteWarmPool, REQUEST)

#define DescribeAccountLimitsAsync(...)  SubmitAsync(&AutoScalingClient::DescribeAccountLimits, __VA_ARGS__)
#define DescribeAccountLimitsCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeAccountLimits, REQUEST)

#define DescribeAdjustmentTypesAsync(...)  SubmitAsync(&AutoScalingClient::DescribeAdjustmentTypes, __VA_ARGS__)
#define DescribeAdjustmentTypesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeAdjustmentTypes, REQUEST)

#define DescribeAutoScalingGroupsAsync(...)  SubmitAsync(&AutoScalingClient::DescribeAutoScalingGroups, __VA_ARGS__)
#define DescribeAutoScalingGroupsCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeAutoScalingGroups, REQUEST)

#define DescribeAutoScalingInstancesAsync(...)  SubmitAsync(&AutoScalingClient::DescribeAutoScalingInstances, __VA_ARGS__)
#define DescribeAutoScalingInstancesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeAutoScalingInstances, REQUEST)

#define DescribeAutoScalingNotificationTypesAsync(...)  SubmitAsync(&AutoScalingClient::DescribeAutoScalingNotificationTypes, __VA_ARGS__)
#define DescribeAutoScalingNotificationTypesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeAutoScalingNotificationTypes, REQUEST)

#define DescribeInstanceRefreshesAsync(...)  SubmitAsync(&AutoScalingClient::DescribeInstanceRefreshes, __VA_ARGS__)
#define DescribeInstanceRefreshesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeInstanceRefreshes, REQUEST)

#define DescribeLaunchConfigurationsAsync(...)  SubmitAsync(&AutoScalingClient::DescribeLaunchConfigurations, __VA_ARGS__)
#define DescribeLaunchConfigurationsCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeLaunchConfigurations, REQUEST)

#define DescribeLifecycleHookTypesAsync(...)  SubmitAsync(&AutoScalingClient::DescribeLifecycleHookTypes, __VA_ARGS__)
#define DescribeLifecycleHookTypesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeLifecycleHookTypes, REQUEST)

#define DescribeLifecycleHooksAsync(...)  SubmitAsync(&AutoScalingClient::DescribeLifecycleHooks, __VA_ARGS__)
#define DescribeLifecycleHooksCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeLifecycleHooks, REQUEST)

#define DescribeLoadBalancerTargetGroupsAsync(...)  SubmitAsync(&AutoScalingClient::DescribeLoadBalancerTargetGroups, __VA_ARGS__)
#define DescribeLoadBalancerTargetGroupsCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeLoadBalancerTargetGroups, REQUEST)

#define DescribeLoadBalancersAsync(...)  SubmitAsync(&AutoScalingClient::DescribeLoadBalancers, __VA_ARGS__)
#define DescribeLoadBalancersCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeLoadBalancers, REQUEST)

#define DescribeMetricCollectionTypesAsync(...)  SubmitAsync(&AutoScalingClient::DescribeMetricCollectionTypes, __VA_ARGS__)
#define DescribeMetricCollectionTypesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeMetricCollectionTypes, REQUEST)

#define DescribeNotificationConfigurationsAsync(...)  SubmitAsync(&AutoScalingClient::DescribeNotificationConfigurations, __VA_ARGS__)
#define DescribeNotificationConfigurationsCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeNotificationConfigurations, REQUEST)

#define DescribePoliciesAsync(...)  SubmitAsync(&AutoScalingClient::DescribePolicies, __VA_ARGS__)
#define DescribePoliciesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribePolicies, REQUEST)

#define DescribeScalingActivitiesAsync(...)  SubmitAsync(&AutoScalingClient::DescribeScalingActivities, __VA_ARGS__)
#define DescribeScalingActivitiesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeScalingActivities, REQUEST)

#define DescribeScalingProcessTypesAsync(...)  SubmitAsync(&AutoScalingClient::DescribeScalingProcessTypes, __VA_ARGS__)
#define DescribeScalingProcessTypesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeScalingProcessTypes, REQUEST)

#define DescribeScheduledActionsAsync(...)  SubmitAsync(&AutoScalingClient::DescribeScheduledActions, __VA_ARGS__)
#define DescribeScheduledActionsCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeScheduledActions, REQUEST)

#define DescribeTagsAsync(...)  SubmitAsync(&AutoScalingClient::DescribeTags, __VA_ARGS__)
#define DescribeTagsCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeTags, REQUEST)

#define DescribeTerminationPolicyTypesAsync(...)  SubmitAsync(&AutoScalingClient::DescribeTerminationPolicyTypes, __VA_ARGS__)
#define DescribeTerminationPolicyTypesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeTerminationPolicyTypes, REQUEST)

#define DescribeWarmPoolAsync(...)  SubmitAsync(&AutoScalingClient::DescribeWarmPool, __VA_ARGS__)
#define DescribeWarmPoolCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DescribeWarmPool, REQUEST)

#define DetachInstancesAsync(...)  SubmitAsync(&AutoScalingClient::DetachInstances, __VA_ARGS__)
#define DetachInstancesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DetachInstances, REQUEST)

#define DetachLoadBalancerTargetGroupsAsync(...)  SubmitAsync(&AutoScalingClient::DetachLoadBalancerTargetGroups, __VA_ARGS__)
#define DetachLoadBalancerTargetGroupsCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DetachLoadBalancerTargetGroups, REQUEST)

#define DetachLoadBalancersAsync(...)  SubmitAsync(&AutoScalingClient::DetachLoadBalancers, __VA_ARGS__)
#define DetachLoadBalancersCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DetachLoadBalancers, REQUEST)

#define DisableMetricsCollectionAsync(...)  SubmitAsync(&AutoScalingClient::DisableMetricsCollection, __VA_ARGS__)
#define DisableMetricsCollectionCallable(REQUEST)  SubmitCallable(&AutoScalingClient::DisableMetricsCollection, REQUEST)

#define EnableMetricsCollectionAsync(...)  SubmitAsync(&AutoScalingClient::EnableMetricsCollection, __VA_ARGS__)
#define EnableMetricsCollectionCallable(REQUEST)  SubmitCallable(&AutoScalingClient::EnableMetricsCollection, REQUEST)

#define EnterStandbyAsync(...)  SubmitAsync(&AutoScalingClient::EnterStandby, __VA_ARGS__)
#define EnterStandbyCallable(REQUEST)  SubmitCallable(&AutoScalingClient::EnterStandby, REQUEST)

#define ExecutePolicyAsync(...)  SubmitAsync(&AutoScalingClient::ExecutePolicy, __VA_ARGS__)
#define ExecutePolicyCallable(REQUEST)  SubmitCallable(&AutoScalingClient::ExecutePolicy, REQUEST)

#define ExitStandbyAsync(...)  SubmitAsync(&AutoScalingClient::ExitStandby, __VA_ARGS__)
#define ExitStandbyCallable(REQUEST)  SubmitCallable(&AutoScalingClient::ExitStandby, REQUEST)

#define GetPredictiveScalingForecastAsync(...)  SubmitAsync(&AutoScalingClient::GetPredictiveScalingForecast, __VA_ARGS__)
#define GetPredictiveScalingForecastCallable(REQUEST)  SubmitCallable(&AutoScalingClient::GetPredictiveScalingForecast, REQUEST)

#define PutLifecycleHookAsync(...)  SubmitAsync(&AutoScalingClient::PutLifecycleHook, __VA_ARGS__)
#define PutLifecycleHookCallable(REQUEST)  SubmitCallable(&AutoScalingClient::PutLifecycleHook, REQUEST)

#define PutNotificationConfigurationAsync(...)  SubmitAsync(&AutoScalingClient::PutNotificationConfiguration, __VA_ARGS__)
#define PutNotificationConfigurationCallable(REQUEST)  SubmitCallable(&AutoScalingClient::PutNotificationConfiguration, REQUEST)

#define PutScalingPolicyAsync(...)  SubmitAsync(&AutoScalingClient::PutScalingPolicy, __VA_ARGS__)
#define PutScalingPolicyCallable(REQUEST)  SubmitCallable(&AutoScalingClient::PutScalingPolicy, REQUEST)

#define PutScheduledUpdateGroupActionAsync(...)  SubmitAsync(&AutoScalingClient::PutScheduledUpdateGroupAction, __VA_ARGS__)
#define PutScheduledUpdateGroupActionCallable(REQUEST)  SubmitCallable(&AutoScalingClient::PutScheduledUpdateGroupAction, REQUEST)

#define PutWarmPoolAsync(...)  SubmitAsync(&AutoScalingClient::PutWarmPool, __VA_ARGS__)
#define PutWarmPoolCallable(REQUEST)  SubmitCallable(&AutoScalingClient::PutWarmPool, REQUEST)

#define RecordLifecycleActionHeartbeatAsync(...)  SubmitAsync(&AutoScalingClient::RecordLifecycleActionHeartbeat, __VA_ARGS__)
#define RecordLifecycleActionHeartbeatCallable(REQUEST)  SubmitCallable(&AutoScalingClient::RecordLifecycleActionHeartbeat, REQUEST)

#define ResumeProcessesAsync(...)  SubmitAsync(&AutoScalingClient::ResumeProcesses, __VA_ARGS__)
#define ResumeProcessesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::ResumeProcesses, REQUEST)

#define SetDesiredCapacityAsync(...)  SubmitAsync(&AutoScalingClient::SetDesiredCapacity, __VA_ARGS__)
#define SetDesiredCapacityCallable(REQUEST)  SubmitCallable(&AutoScalingClient::SetDesiredCapacity, REQUEST)

#define SetInstanceHealthAsync(...)  SubmitAsync(&AutoScalingClient::SetInstanceHealth, __VA_ARGS__)
#define SetInstanceHealthCallable(REQUEST)  SubmitCallable(&AutoScalingClient::SetInstanceHealth, REQUEST)

#define SetInstanceProtectionAsync(...)  SubmitAsync(&AutoScalingClient::SetInstanceProtection, __VA_ARGS__)
#define SetInstanceProtectionCallable(REQUEST)  SubmitCallable(&AutoScalingClient::SetInstanceProtection, REQUEST)

#define StartInstanceRefreshAsync(...)  SubmitAsync(&AutoScalingClient::StartInstanceRefresh, __VA_ARGS__)
#define StartInstanceRefreshCallable(REQUEST)  SubmitCallable(&AutoScalingClient::StartInstanceRefresh, REQUEST)

#define SuspendProcessesAsync(...)  SubmitAsync(&AutoScalingClient::SuspendProcesses, __VA_ARGS__)
#define SuspendProcessesCallable(REQUEST)  SubmitCallable(&AutoScalingClient::SuspendProcesses, REQUEST)

#define TerminateInstanceInAutoScalingGroupAsync(...)  SubmitAsync(&AutoScalingClient::TerminateInstanceInAutoScalingGroup, __VA_ARGS__)
#define TerminateInstanceInAutoScalingGroupCallable(REQUEST)  SubmitCallable(&AutoScalingClient::TerminateInstanceInAutoScalingGroup, REQUEST)

#define UpdateAutoScalingGroupAsync(...)  SubmitAsync(&AutoScalingClient::UpdateAutoScalingGroup, __VA_ARGS__)
#define UpdateAutoScalingGroupCallable(REQUEST)  SubmitCallable(&AutoScalingClient::UpdateAutoScalingGroup, REQUEST)

