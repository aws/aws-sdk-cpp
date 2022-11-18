/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddDraftAppVersionResourceMappingsAsync(...)  SubmitAsync(&ResilienceHubClient::AddDraftAppVersionResourceMappings, __VA_ARGS__)
#define AddDraftAppVersionResourceMappingsCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::AddDraftAppVersionResourceMappings, REQUEST)

#define CreateAppAsync(...)  SubmitAsync(&ResilienceHubClient::CreateApp, __VA_ARGS__)
#define CreateAppCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::CreateApp, REQUEST)

#define CreateRecommendationTemplateAsync(...)  SubmitAsync(&ResilienceHubClient::CreateRecommendationTemplate, __VA_ARGS__)
#define CreateRecommendationTemplateCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::CreateRecommendationTemplate, REQUEST)

#define CreateResiliencyPolicyAsync(...)  SubmitAsync(&ResilienceHubClient::CreateResiliencyPolicy, __VA_ARGS__)
#define CreateResiliencyPolicyCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::CreateResiliencyPolicy, REQUEST)

#define DeleteAppAsync(...)  SubmitAsync(&ResilienceHubClient::DeleteApp, __VA_ARGS__)
#define DeleteAppCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::DeleteApp, REQUEST)

#define DeleteAppAssessmentAsync(...)  SubmitAsync(&ResilienceHubClient::DeleteAppAssessment, __VA_ARGS__)
#define DeleteAppAssessmentCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::DeleteAppAssessment, REQUEST)

#define DeleteRecommendationTemplateAsync(...)  SubmitAsync(&ResilienceHubClient::DeleteRecommendationTemplate, __VA_ARGS__)
#define DeleteRecommendationTemplateCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::DeleteRecommendationTemplate, REQUEST)

#define DeleteResiliencyPolicyAsync(...)  SubmitAsync(&ResilienceHubClient::DeleteResiliencyPolicy, __VA_ARGS__)
#define DeleteResiliencyPolicyCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::DeleteResiliencyPolicy, REQUEST)

#define DescribeAppAsync(...)  SubmitAsync(&ResilienceHubClient::DescribeApp, __VA_ARGS__)
#define DescribeAppCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::DescribeApp, REQUEST)

#define DescribeAppAssessmentAsync(...)  SubmitAsync(&ResilienceHubClient::DescribeAppAssessment, __VA_ARGS__)
#define DescribeAppAssessmentCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::DescribeAppAssessment, REQUEST)

#define DescribeAppVersionResourcesResolutionStatusAsync(...)  SubmitAsync(&ResilienceHubClient::DescribeAppVersionResourcesResolutionStatus, __VA_ARGS__)
#define DescribeAppVersionResourcesResolutionStatusCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::DescribeAppVersionResourcesResolutionStatus, REQUEST)

#define DescribeAppVersionTemplateAsync(...)  SubmitAsync(&ResilienceHubClient::DescribeAppVersionTemplate, __VA_ARGS__)
#define DescribeAppVersionTemplateCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::DescribeAppVersionTemplate, REQUEST)

#define DescribeDraftAppVersionResourcesImportStatusAsync(...)  SubmitAsync(&ResilienceHubClient::DescribeDraftAppVersionResourcesImportStatus, __VA_ARGS__)
#define DescribeDraftAppVersionResourcesImportStatusCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::DescribeDraftAppVersionResourcesImportStatus, REQUEST)

#define DescribeResiliencyPolicyAsync(...)  SubmitAsync(&ResilienceHubClient::DescribeResiliencyPolicy, __VA_ARGS__)
#define DescribeResiliencyPolicyCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::DescribeResiliencyPolicy, REQUEST)

#define ImportResourcesToDraftAppVersionAsync(...)  SubmitAsync(&ResilienceHubClient::ImportResourcesToDraftAppVersion, __VA_ARGS__)
#define ImportResourcesToDraftAppVersionCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ImportResourcesToDraftAppVersion, REQUEST)

#define ListAlarmRecommendationsAsync(...)  SubmitAsync(&ResilienceHubClient::ListAlarmRecommendations, __VA_ARGS__)
#define ListAlarmRecommendationsCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListAlarmRecommendations, REQUEST)

#define ListAppAssessmentsAsync(...)  SubmitAsync(&ResilienceHubClient::ListAppAssessments, __VA_ARGS__)
#define ListAppAssessmentsCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListAppAssessments, REQUEST)

#define ListAppComponentCompliancesAsync(...)  SubmitAsync(&ResilienceHubClient::ListAppComponentCompliances, __VA_ARGS__)
#define ListAppComponentCompliancesCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListAppComponentCompliances, REQUEST)

#define ListAppComponentRecommendationsAsync(...)  SubmitAsync(&ResilienceHubClient::ListAppComponentRecommendations, __VA_ARGS__)
#define ListAppComponentRecommendationsCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListAppComponentRecommendations, REQUEST)

#define ListAppVersionResourceMappingsAsync(...)  SubmitAsync(&ResilienceHubClient::ListAppVersionResourceMappings, __VA_ARGS__)
#define ListAppVersionResourceMappingsCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListAppVersionResourceMappings, REQUEST)

#define ListAppVersionResourcesAsync(...)  SubmitAsync(&ResilienceHubClient::ListAppVersionResources, __VA_ARGS__)
#define ListAppVersionResourcesCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListAppVersionResources, REQUEST)

#define ListAppVersionsAsync(...)  SubmitAsync(&ResilienceHubClient::ListAppVersions, __VA_ARGS__)
#define ListAppVersionsCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListAppVersions, REQUEST)

#define ListAppsAsync(...)  SubmitAsync(&ResilienceHubClient::ListApps, __VA_ARGS__)
#define ListAppsCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListApps, REQUEST)

#define ListRecommendationTemplatesAsync(...)  SubmitAsync(&ResilienceHubClient::ListRecommendationTemplates, __VA_ARGS__)
#define ListRecommendationTemplatesCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListRecommendationTemplates, REQUEST)

#define ListResiliencyPoliciesAsync(...)  SubmitAsync(&ResilienceHubClient::ListResiliencyPolicies, __VA_ARGS__)
#define ListResiliencyPoliciesCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListResiliencyPolicies, REQUEST)

#define ListSopRecommendationsAsync(...)  SubmitAsync(&ResilienceHubClient::ListSopRecommendations, __VA_ARGS__)
#define ListSopRecommendationsCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListSopRecommendations, REQUEST)

#define ListSuggestedResiliencyPoliciesAsync(...)  SubmitAsync(&ResilienceHubClient::ListSuggestedResiliencyPolicies, __VA_ARGS__)
#define ListSuggestedResiliencyPoliciesCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListSuggestedResiliencyPolicies, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ResilienceHubClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListTagsForResource, REQUEST)

#define ListTestRecommendationsAsync(...)  SubmitAsync(&ResilienceHubClient::ListTestRecommendations, __VA_ARGS__)
#define ListTestRecommendationsCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListTestRecommendations, REQUEST)

#define ListUnsupportedAppVersionResourcesAsync(...)  SubmitAsync(&ResilienceHubClient::ListUnsupportedAppVersionResources, __VA_ARGS__)
#define ListUnsupportedAppVersionResourcesCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ListUnsupportedAppVersionResources, REQUEST)

#define PublishAppVersionAsync(...)  SubmitAsync(&ResilienceHubClient::PublishAppVersion, __VA_ARGS__)
#define PublishAppVersionCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::PublishAppVersion, REQUEST)

#define PutDraftAppVersionTemplateAsync(...)  SubmitAsync(&ResilienceHubClient::PutDraftAppVersionTemplate, __VA_ARGS__)
#define PutDraftAppVersionTemplateCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::PutDraftAppVersionTemplate, REQUEST)

#define RemoveDraftAppVersionResourceMappingsAsync(...)  SubmitAsync(&ResilienceHubClient::RemoveDraftAppVersionResourceMappings, __VA_ARGS__)
#define RemoveDraftAppVersionResourceMappingsCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::RemoveDraftAppVersionResourceMappings, REQUEST)

#define ResolveAppVersionResourcesAsync(...)  SubmitAsync(&ResilienceHubClient::ResolveAppVersionResources, __VA_ARGS__)
#define ResolveAppVersionResourcesCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::ResolveAppVersionResources, REQUEST)

#define StartAppAssessmentAsync(...)  SubmitAsync(&ResilienceHubClient::StartAppAssessment, __VA_ARGS__)
#define StartAppAssessmentCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::StartAppAssessment, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ResilienceHubClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ResilienceHubClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::UntagResource, REQUEST)

#define UpdateAppAsync(...)  SubmitAsync(&ResilienceHubClient::UpdateApp, __VA_ARGS__)
#define UpdateAppCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::UpdateApp, REQUEST)

#define UpdateResiliencyPolicyAsync(...)  SubmitAsync(&ResilienceHubClient::UpdateResiliencyPolicy, __VA_ARGS__)
#define UpdateResiliencyPolicyCallable(REQUEST)  SubmitCallable(&ResilienceHubClient::UpdateResiliencyPolicy, REQUEST)

