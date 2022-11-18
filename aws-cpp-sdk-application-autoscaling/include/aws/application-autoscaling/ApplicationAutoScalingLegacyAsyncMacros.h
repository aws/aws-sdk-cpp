/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteScalingPolicyAsync(...)  SubmitAsync(&ApplicationAutoScalingClient::DeleteScalingPolicy, __VA_ARGS__)
#define DeleteScalingPolicyCallable(REQUEST)  SubmitCallable(&ApplicationAutoScalingClient::DeleteScalingPolicy, REQUEST)

#define DeleteScheduledActionAsync(...)  SubmitAsync(&ApplicationAutoScalingClient::DeleteScheduledAction, __VA_ARGS__)
#define DeleteScheduledActionCallable(REQUEST)  SubmitCallable(&ApplicationAutoScalingClient::DeleteScheduledAction, REQUEST)

#define DeregisterScalableTargetAsync(...)  SubmitAsync(&ApplicationAutoScalingClient::DeregisterScalableTarget, __VA_ARGS__)
#define DeregisterScalableTargetCallable(REQUEST)  SubmitCallable(&ApplicationAutoScalingClient::DeregisterScalableTarget, REQUEST)

#define DescribeScalableTargetsAsync(...)  SubmitAsync(&ApplicationAutoScalingClient::DescribeScalableTargets, __VA_ARGS__)
#define DescribeScalableTargetsCallable(REQUEST)  SubmitCallable(&ApplicationAutoScalingClient::DescribeScalableTargets, REQUEST)

#define DescribeScalingActivitiesAsync(...)  SubmitAsync(&ApplicationAutoScalingClient::DescribeScalingActivities, __VA_ARGS__)
#define DescribeScalingActivitiesCallable(REQUEST)  SubmitCallable(&ApplicationAutoScalingClient::DescribeScalingActivities, REQUEST)

#define DescribeScalingPoliciesAsync(...)  SubmitAsync(&ApplicationAutoScalingClient::DescribeScalingPolicies, __VA_ARGS__)
#define DescribeScalingPoliciesCallable(REQUEST)  SubmitCallable(&ApplicationAutoScalingClient::DescribeScalingPolicies, REQUEST)

#define DescribeScheduledActionsAsync(...)  SubmitAsync(&ApplicationAutoScalingClient::DescribeScheduledActions, __VA_ARGS__)
#define DescribeScheduledActionsCallable(REQUEST)  SubmitCallable(&ApplicationAutoScalingClient::DescribeScheduledActions, REQUEST)

#define PutScalingPolicyAsync(...)  SubmitAsync(&ApplicationAutoScalingClient::PutScalingPolicy, __VA_ARGS__)
#define PutScalingPolicyCallable(REQUEST)  SubmitCallable(&ApplicationAutoScalingClient::PutScalingPolicy, REQUEST)

#define PutScheduledActionAsync(...)  SubmitAsync(&ApplicationAutoScalingClient::PutScheduledAction, __VA_ARGS__)
#define PutScheduledActionCallable(REQUEST)  SubmitCallable(&ApplicationAutoScalingClient::PutScheduledAction, REQUEST)

#define RegisterScalableTargetAsync(...)  SubmitAsync(&ApplicationAutoScalingClient::RegisterScalableTarget, __VA_ARGS__)
#define RegisterScalableTargetCallable(REQUEST)  SubmitCallable(&ApplicationAutoScalingClient::RegisterScalableTarget, REQUEST)

