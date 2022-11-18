/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteRecommendationPreferencesAsync(...)  SubmitAsync(&ComputeOptimizerClient::DeleteRecommendationPreferences, __VA_ARGS__)
#define DeleteRecommendationPreferencesCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::DeleteRecommendationPreferences, REQUEST)

#define DescribeRecommendationExportJobsAsync(...)  SubmitAsync(&ComputeOptimizerClient::DescribeRecommendationExportJobs, __VA_ARGS__)
#define DescribeRecommendationExportJobsCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::DescribeRecommendationExportJobs, REQUEST)

#define ExportAutoScalingGroupRecommendationsAsync(...)  SubmitAsync(&ComputeOptimizerClient::ExportAutoScalingGroupRecommendations, __VA_ARGS__)
#define ExportAutoScalingGroupRecommendationsCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::ExportAutoScalingGroupRecommendations, REQUEST)

#define ExportEBSVolumeRecommendationsAsync(...)  SubmitAsync(&ComputeOptimizerClient::ExportEBSVolumeRecommendations, __VA_ARGS__)
#define ExportEBSVolumeRecommendationsCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::ExportEBSVolumeRecommendations, REQUEST)

#define ExportEC2InstanceRecommendationsAsync(...)  SubmitAsync(&ComputeOptimizerClient::ExportEC2InstanceRecommendations, __VA_ARGS__)
#define ExportEC2InstanceRecommendationsCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::ExportEC2InstanceRecommendations, REQUEST)

#define ExportLambdaFunctionRecommendationsAsync(...)  SubmitAsync(&ComputeOptimizerClient::ExportLambdaFunctionRecommendations, __VA_ARGS__)
#define ExportLambdaFunctionRecommendationsCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::ExportLambdaFunctionRecommendations, REQUEST)

#define GetAutoScalingGroupRecommendationsAsync(...)  SubmitAsync(&ComputeOptimizerClient::GetAutoScalingGroupRecommendations, __VA_ARGS__)
#define GetAutoScalingGroupRecommendationsCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::GetAutoScalingGroupRecommendations, REQUEST)

#define GetEBSVolumeRecommendationsAsync(...)  SubmitAsync(&ComputeOptimizerClient::GetEBSVolumeRecommendations, __VA_ARGS__)
#define GetEBSVolumeRecommendationsCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::GetEBSVolumeRecommendations, REQUEST)

#define GetEC2InstanceRecommendationsAsync(...)  SubmitAsync(&ComputeOptimizerClient::GetEC2InstanceRecommendations, __VA_ARGS__)
#define GetEC2InstanceRecommendationsCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::GetEC2InstanceRecommendations, REQUEST)

#define GetEC2RecommendationProjectedMetricsAsync(...)  SubmitAsync(&ComputeOptimizerClient::GetEC2RecommendationProjectedMetrics, __VA_ARGS__)
#define GetEC2RecommendationProjectedMetricsCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::GetEC2RecommendationProjectedMetrics, REQUEST)

#define GetEffectiveRecommendationPreferencesAsync(...)  SubmitAsync(&ComputeOptimizerClient::GetEffectiveRecommendationPreferences, __VA_ARGS__)
#define GetEffectiveRecommendationPreferencesCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::GetEffectiveRecommendationPreferences, REQUEST)

#define GetEnrollmentStatusAsync(...)  SubmitAsync(&ComputeOptimizerClient::GetEnrollmentStatus, __VA_ARGS__)
#define GetEnrollmentStatusCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::GetEnrollmentStatus, REQUEST)

#define GetEnrollmentStatusesForOrganizationAsync(...)  SubmitAsync(&ComputeOptimizerClient::GetEnrollmentStatusesForOrganization, __VA_ARGS__)
#define GetEnrollmentStatusesForOrganizationCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::GetEnrollmentStatusesForOrganization, REQUEST)

#define GetLambdaFunctionRecommendationsAsync(...)  SubmitAsync(&ComputeOptimizerClient::GetLambdaFunctionRecommendations, __VA_ARGS__)
#define GetLambdaFunctionRecommendationsCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::GetLambdaFunctionRecommendations, REQUEST)

#define GetRecommendationPreferencesAsync(...)  SubmitAsync(&ComputeOptimizerClient::GetRecommendationPreferences, __VA_ARGS__)
#define GetRecommendationPreferencesCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::GetRecommendationPreferences, REQUEST)

#define GetRecommendationSummariesAsync(...)  SubmitAsync(&ComputeOptimizerClient::GetRecommendationSummaries, __VA_ARGS__)
#define GetRecommendationSummariesCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::GetRecommendationSummaries, REQUEST)

#define PutRecommendationPreferencesAsync(...)  SubmitAsync(&ComputeOptimizerClient::PutRecommendationPreferences, __VA_ARGS__)
#define PutRecommendationPreferencesCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::PutRecommendationPreferences, REQUEST)

#define UpdateEnrollmentStatusAsync(...)  SubmitAsync(&ComputeOptimizerClient::UpdateEnrollmentStatus, __VA_ARGS__)
#define UpdateEnrollmentStatusCallable(REQUEST)  SubmitCallable(&ComputeOptimizerClient::UpdateEnrollmentStatus, REQUEST)

