/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddNotificationChannelAsync(...)  SubmitAsync(&DevOpsGuruClient::AddNotificationChannel, __VA_ARGS__)
#define AddNotificationChannelCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::AddNotificationChannel, REQUEST)

#define DeleteInsightAsync(...)  SubmitAsync(&DevOpsGuruClient::DeleteInsight, __VA_ARGS__)
#define DeleteInsightCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DeleteInsight, REQUEST)

#define DescribeAccountHealthAsync(...)  SubmitAsync(&DevOpsGuruClient::DescribeAccountHealth, __VA_ARGS__)
#define DescribeAccountHealthCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DescribeAccountHealth, REQUEST)

#define DescribeAccountOverviewAsync(...)  SubmitAsync(&DevOpsGuruClient::DescribeAccountOverview, __VA_ARGS__)
#define DescribeAccountOverviewCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DescribeAccountOverview, REQUEST)

#define DescribeAnomalyAsync(...)  SubmitAsync(&DevOpsGuruClient::DescribeAnomaly, __VA_ARGS__)
#define DescribeAnomalyCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DescribeAnomaly, REQUEST)

#define DescribeEventSourcesConfigAsync(...)  SubmitAsync(&DevOpsGuruClient::DescribeEventSourcesConfig, __VA_ARGS__)
#define DescribeEventSourcesConfigCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DescribeEventSourcesConfig, REQUEST)

#define DescribeFeedbackAsync(...)  SubmitAsync(&DevOpsGuruClient::DescribeFeedback, __VA_ARGS__)
#define DescribeFeedbackCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DescribeFeedback, REQUEST)

#define DescribeInsightAsync(...)  SubmitAsync(&DevOpsGuruClient::DescribeInsight, __VA_ARGS__)
#define DescribeInsightCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DescribeInsight, REQUEST)

#define DescribeOrganizationHealthAsync(...)  SubmitAsync(&DevOpsGuruClient::DescribeOrganizationHealth, __VA_ARGS__)
#define DescribeOrganizationHealthCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DescribeOrganizationHealth, REQUEST)

#define DescribeOrganizationOverviewAsync(...)  SubmitAsync(&DevOpsGuruClient::DescribeOrganizationOverview, __VA_ARGS__)
#define DescribeOrganizationOverviewCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DescribeOrganizationOverview, REQUEST)

#define DescribeOrganizationResourceCollectionHealthAsync(...)  SubmitAsync(&DevOpsGuruClient::DescribeOrganizationResourceCollectionHealth, __VA_ARGS__)
#define DescribeOrganizationResourceCollectionHealthCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DescribeOrganizationResourceCollectionHealth, REQUEST)

#define DescribeResourceCollectionHealthAsync(...)  SubmitAsync(&DevOpsGuruClient::DescribeResourceCollectionHealth, __VA_ARGS__)
#define DescribeResourceCollectionHealthCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DescribeResourceCollectionHealth, REQUEST)

#define DescribeServiceIntegrationAsync(...)  SubmitAsync(&DevOpsGuruClient::DescribeServiceIntegration, __VA_ARGS__)
#define DescribeServiceIntegrationCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::DescribeServiceIntegration, REQUEST)

#define GetCostEstimationAsync(...)  SubmitAsync(&DevOpsGuruClient::GetCostEstimation, __VA_ARGS__)
#define GetCostEstimationCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::GetCostEstimation, REQUEST)

#define GetResourceCollectionAsync(...)  SubmitAsync(&DevOpsGuruClient::GetResourceCollection, __VA_ARGS__)
#define GetResourceCollectionCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::GetResourceCollection, REQUEST)

#define ListAnomaliesForInsightAsync(...)  SubmitAsync(&DevOpsGuruClient::ListAnomaliesForInsight, __VA_ARGS__)
#define ListAnomaliesForInsightCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::ListAnomaliesForInsight, REQUEST)

#define ListAnomalousLogGroupsAsync(...)  SubmitAsync(&DevOpsGuruClient::ListAnomalousLogGroups, __VA_ARGS__)
#define ListAnomalousLogGroupsCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::ListAnomalousLogGroups, REQUEST)

#define ListEventsAsync(...)  SubmitAsync(&DevOpsGuruClient::ListEvents, __VA_ARGS__)
#define ListEventsCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::ListEvents, REQUEST)

#define ListInsightsAsync(...)  SubmitAsync(&DevOpsGuruClient::ListInsights, __VA_ARGS__)
#define ListInsightsCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::ListInsights, REQUEST)

#define ListMonitoredResourcesAsync(...)  SubmitAsync(&DevOpsGuruClient::ListMonitoredResources, __VA_ARGS__)
#define ListMonitoredResourcesCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::ListMonitoredResources, REQUEST)

#define ListNotificationChannelsAsync(...)  SubmitAsync(&DevOpsGuruClient::ListNotificationChannels, __VA_ARGS__)
#define ListNotificationChannelsCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::ListNotificationChannels, REQUEST)

#define ListOrganizationInsightsAsync(...)  SubmitAsync(&DevOpsGuruClient::ListOrganizationInsights, __VA_ARGS__)
#define ListOrganizationInsightsCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::ListOrganizationInsights, REQUEST)

#define ListRecommendationsAsync(...)  SubmitAsync(&DevOpsGuruClient::ListRecommendations, __VA_ARGS__)
#define ListRecommendationsCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::ListRecommendations, REQUEST)

#define PutFeedbackAsync(...)  SubmitAsync(&DevOpsGuruClient::PutFeedback, __VA_ARGS__)
#define PutFeedbackCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::PutFeedback, REQUEST)

#define RemoveNotificationChannelAsync(...)  SubmitAsync(&DevOpsGuruClient::RemoveNotificationChannel, __VA_ARGS__)
#define RemoveNotificationChannelCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::RemoveNotificationChannel, REQUEST)

#define SearchInsightsAsync(...)  SubmitAsync(&DevOpsGuruClient::SearchInsights, __VA_ARGS__)
#define SearchInsightsCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::SearchInsights, REQUEST)

#define SearchOrganizationInsightsAsync(...)  SubmitAsync(&DevOpsGuruClient::SearchOrganizationInsights, __VA_ARGS__)
#define SearchOrganizationInsightsCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::SearchOrganizationInsights, REQUEST)

#define StartCostEstimationAsync(...)  SubmitAsync(&DevOpsGuruClient::StartCostEstimation, __VA_ARGS__)
#define StartCostEstimationCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::StartCostEstimation, REQUEST)

#define UpdateEventSourcesConfigAsync(...)  SubmitAsync(&DevOpsGuruClient::UpdateEventSourcesConfig, __VA_ARGS__)
#define UpdateEventSourcesConfigCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::UpdateEventSourcesConfig, REQUEST)

#define UpdateResourceCollectionAsync(...)  SubmitAsync(&DevOpsGuruClient::UpdateResourceCollection, __VA_ARGS__)
#define UpdateResourceCollectionCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::UpdateResourceCollection, REQUEST)

#define UpdateServiceIntegrationAsync(...)  SubmitAsync(&DevOpsGuruClient::UpdateServiceIntegration, __VA_ARGS__)
#define UpdateServiceIntegrationCallable(REQUEST)  SubmitCallable(&DevOpsGuruClient::UpdateServiceIntegration, REQUEST)

