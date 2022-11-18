/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAnomalyMonitorAsync(...)  SubmitAsync(&CostExplorerClient::CreateAnomalyMonitor, __VA_ARGS__)
#define CreateAnomalyMonitorCallable(REQUEST)  SubmitCallable(&CostExplorerClient::CreateAnomalyMonitor, REQUEST)

#define CreateAnomalySubscriptionAsync(...)  SubmitAsync(&CostExplorerClient::CreateAnomalySubscription, __VA_ARGS__)
#define CreateAnomalySubscriptionCallable(REQUEST)  SubmitCallable(&CostExplorerClient::CreateAnomalySubscription, REQUEST)

#define CreateCostCategoryDefinitionAsync(...)  SubmitAsync(&CostExplorerClient::CreateCostCategoryDefinition, __VA_ARGS__)
#define CreateCostCategoryDefinitionCallable(REQUEST)  SubmitCallable(&CostExplorerClient::CreateCostCategoryDefinition, REQUEST)

#define DeleteAnomalyMonitorAsync(...)  SubmitAsync(&CostExplorerClient::DeleteAnomalyMonitor, __VA_ARGS__)
#define DeleteAnomalyMonitorCallable(REQUEST)  SubmitCallable(&CostExplorerClient::DeleteAnomalyMonitor, REQUEST)

#define DeleteAnomalySubscriptionAsync(...)  SubmitAsync(&CostExplorerClient::DeleteAnomalySubscription, __VA_ARGS__)
#define DeleteAnomalySubscriptionCallable(REQUEST)  SubmitCallable(&CostExplorerClient::DeleteAnomalySubscription, REQUEST)

#define DeleteCostCategoryDefinitionAsync(...)  SubmitAsync(&CostExplorerClient::DeleteCostCategoryDefinition, __VA_ARGS__)
#define DeleteCostCategoryDefinitionCallable(REQUEST)  SubmitCallable(&CostExplorerClient::DeleteCostCategoryDefinition, REQUEST)

#define DescribeCostCategoryDefinitionAsync(...)  SubmitAsync(&CostExplorerClient::DescribeCostCategoryDefinition, __VA_ARGS__)
#define DescribeCostCategoryDefinitionCallable(REQUEST)  SubmitCallable(&CostExplorerClient::DescribeCostCategoryDefinition, REQUEST)

#define GetAnomaliesAsync(...)  SubmitAsync(&CostExplorerClient::GetAnomalies, __VA_ARGS__)
#define GetAnomaliesCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetAnomalies, REQUEST)

#define GetAnomalyMonitorsAsync(...)  SubmitAsync(&CostExplorerClient::GetAnomalyMonitors, __VA_ARGS__)
#define GetAnomalyMonitorsCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetAnomalyMonitors, REQUEST)

#define GetAnomalySubscriptionsAsync(...)  SubmitAsync(&CostExplorerClient::GetAnomalySubscriptions, __VA_ARGS__)
#define GetAnomalySubscriptionsCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetAnomalySubscriptions, REQUEST)

#define GetCostAndUsageAsync(...)  SubmitAsync(&CostExplorerClient::GetCostAndUsage, __VA_ARGS__)
#define GetCostAndUsageCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetCostAndUsage, REQUEST)

#define GetCostAndUsageWithResourcesAsync(...)  SubmitAsync(&CostExplorerClient::GetCostAndUsageWithResources, __VA_ARGS__)
#define GetCostAndUsageWithResourcesCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetCostAndUsageWithResources, REQUEST)

#define GetCostCategoriesAsync(...)  SubmitAsync(&CostExplorerClient::GetCostCategories, __VA_ARGS__)
#define GetCostCategoriesCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetCostCategories, REQUEST)

#define GetCostForecastAsync(...)  SubmitAsync(&CostExplorerClient::GetCostForecast, __VA_ARGS__)
#define GetCostForecastCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetCostForecast, REQUEST)

#define GetDimensionValuesAsync(...)  SubmitAsync(&CostExplorerClient::GetDimensionValues, __VA_ARGS__)
#define GetDimensionValuesCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetDimensionValues, REQUEST)

#define GetReservationCoverageAsync(...)  SubmitAsync(&CostExplorerClient::GetReservationCoverage, __VA_ARGS__)
#define GetReservationCoverageCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetReservationCoverage, REQUEST)

#define GetReservationPurchaseRecommendationAsync(...)  SubmitAsync(&CostExplorerClient::GetReservationPurchaseRecommendation, __VA_ARGS__)
#define GetReservationPurchaseRecommendationCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetReservationPurchaseRecommendation, REQUEST)

#define GetReservationUtilizationAsync(...)  SubmitAsync(&CostExplorerClient::GetReservationUtilization, __VA_ARGS__)
#define GetReservationUtilizationCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetReservationUtilization, REQUEST)

#define GetRightsizingRecommendationAsync(...)  SubmitAsync(&CostExplorerClient::GetRightsizingRecommendation, __VA_ARGS__)
#define GetRightsizingRecommendationCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetRightsizingRecommendation, REQUEST)

#define GetSavingsPlansCoverageAsync(...)  SubmitAsync(&CostExplorerClient::GetSavingsPlansCoverage, __VA_ARGS__)
#define GetSavingsPlansCoverageCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetSavingsPlansCoverage, REQUEST)

#define GetSavingsPlansPurchaseRecommendationAsync(...)  SubmitAsync(&CostExplorerClient::GetSavingsPlansPurchaseRecommendation, __VA_ARGS__)
#define GetSavingsPlansPurchaseRecommendationCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetSavingsPlansPurchaseRecommendation, REQUEST)

#define GetSavingsPlansUtilizationAsync(...)  SubmitAsync(&CostExplorerClient::GetSavingsPlansUtilization, __VA_ARGS__)
#define GetSavingsPlansUtilizationCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetSavingsPlansUtilization, REQUEST)

#define GetSavingsPlansUtilizationDetailsAsync(...)  SubmitAsync(&CostExplorerClient::GetSavingsPlansUtilizationDetails, __VA_ARGS__)
#define GetSavingsPlansUtilizationDetailsCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetSavingsPlansUtilizationDetails, REQUEST)

#define GetTagsAsync(...)  SubmitAsync(&CostExplorerClient::GetTags, __VA_ARGS__)
#define GetTagsCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetTags, REQUEST)

#define GetUsageForecastAsync(...)  SubmitAsync(&CostExplorerClient::GetUsageForecast, __VA_ARGS__)
#define GetUsageForecastCallable(REQUEST)  SubmitCallable(&CostExplorerClient::GetUsageForecast, REQUEST)

#define ListCostAllocationTagsAsync(...)  SubmitAsync(&CostExplorerClient::ListCostAllocationTags, __VA_ARGS__)
#define ListCostAllocationTagsCallable(REQUEST)  SubmitCallable(&CostExplorerClient::ListCostAllocationTags, REQUEST)

#define ListCostCategoryDefinitionsAsync(...)  SubmitAsync(&CostExplorerClient::ListCostCategoryDefinitions, __VA_ARGS__)
#define ListCostCategoryDefinitionsCallable(REQUEST)  SubmitCallable(&CostExplorerClient::ListCostCategoryDefinitions, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CostExplorerClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CostExplorerClient::ListTagsForResource, REQUEST)

#define ProvideAnomalyFeedbackAsync(...)  SubmitAsync(&CostExplorerClient::ProvideAnomalyFeedback, __VA_ARGS__)
#define ProvideAnomalyFeedbackCallable(REQUEST)  SubmitCallable(&CostExplorerClient::ProvideAnomalyFeedback, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CostExplorerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CostExplorerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CostExplorerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CostExplorerClient::UntagResource, REQUEST)

#define UpdateAnomalyMonitorAsync(...)  SubmitAsync(&CostExplorerClient::UpdateAnomalyMonitor, __VA_ARGS__)
#define UpdateAnomalyMonitorCallable(REQUEST)  SubmitCallable(&CostExplorerClient::UpdateAnomalyMonitor, REQUEST)

#define UpdateAnomalySubscriptionAsync(...)  SubmitAsync(&CostExplorerClient::UpdateAnomalySubscription, __VA_ARGS__)
#define UpdateAnomalySubscriptionCallable(REQUEST)  SubmitCallable(&CostExplorerClient::UpdateAnomalySubscription, REQUEST)

#define UpdateCostAllocationTagsStatusAsync(...)  SubmitAsync(&CostExplorerClient::UpdateCostAllocationTagsStatus, __VA_ARGS__)
#define UpdateCostAllocationTagsStatusCallable(REQUEST)  SubmitCallable(&CostExplorerClient::UpdateCostAllocationTagsStatus, REQUEST)

#define UpdateCostCategoryDefinitionAsync(...)  SubmitAsync(&CostExplorerClient::UpdateCostCategoryDefinition, __VA_ARGS__)
#define UpdateCostCategoryDefinitionCallable(REQUEST)  SubmitCallable(&CostExplorerClient::UpdateCostCategoryDefinition, REQUEST)

