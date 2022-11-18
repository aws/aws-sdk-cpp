/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateScalingPlanAsync(...)  SubmitAsync(&AutoScalingPlansClient::CreateScalingPlan, __VA_ARGS__)
#define CreateScalingPlanCallable(REQUEST)  SubmitCallable(&AutoScalingPlansClient::CreateScalingPlan, REQUEST)

#define DeleteScalingPlanAsync(...)  SubmitAsync(&AutoScalingPlansClient::DeleteScalingPlan, __VA_ARGS__)
#define DeleteScalingPlanCallable(REQUEST)  SubmitCallable(&AutoScalingPlansClient::DeleteScalingPlan, REQUEST)

#define DescribeScalingPlanResourcesAsync(...)  SubmitAsync(&AutoScalingPlansClient::DescribeScalingPlanResources, __VA_ARGS__)
#define DescribeScalingPlanResourcesCallable(REQUEST)  SubmitCallable(&AutoScalingPlansClient::DescribeScalingPlanResources, REQUEST)

#define DescribeScalingPlansAsync(...)  SubmitAsync(&AutoScalingPlansClient::DescribeScalingPlans, __VA_ARGS__)
#define DescribeScalingPlansCallable(REQUEST)  SubmitCallable(&AutoScalingPlansClient::DescribeScalingPlans, REQUEST)

#define GetScalingPlanResourceForecastDataAsync(...)  SubmitAsync(&AutoScalingPlansClient::GetScalingPlanResourceForecastData, __VA_ARGS__)
#define GetScalingPlanResourceForecastDataCallable(REQUEST)  SubmitCallable(&AutoScalingPlansClient::GetScalingPlanResourceForecastData, REQUEST)

#define UpdateScalingPlanAsync(...)  SubmitAsync(&AutoScalingPlansClient::UpdateScalingPlan, __VA_ARGS__)
#define UpdateScalingPlanCallable(REQUEST)  SubmitCallable(&AutoScalingPlansClient::UpdateScalingPlan, REQUEST)

