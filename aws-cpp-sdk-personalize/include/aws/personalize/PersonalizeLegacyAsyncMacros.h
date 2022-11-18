/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateBatchInferenceJobAsync(...)  SubmitAsync(&PersonalizeClient::CreateBatchInferenceJob, __VA_ARGS__)
#define CreateBatchInferenceJobCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateBatchInferenceJob, REQUEST)

#define CreateBatchSegmentJobAsync(...)  SubmitAsync(&PersonalizeClient::CreateBatchSegmentJob, __VA_ARGS__)
#define CreateBatchSegmentJobCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateBatchSegmentJob, REQUEST)

#define CreateCampaignAsync(...)  SubmitAsync(&PersonalizeClient::CreateCampaign, __VA_ARGS__)
#define CreateCampaignCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateCampaign, REQUEST)

#define CreateDatasetAsync(...)  SubmitAsync(&PersonalizeClient::CreateDataset, __VA_ARGS__)
#define CreateDatasetCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateDataset, REQUEST)

#define CreateDatasetExportJobAsync(...)  SubmitAsync(&PersonalizeClient::CreateDatasetExportJob, __VA_ARGS__)
#define CreateDatasetExportJobCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateDatasetExportJob, REQUEST)

#define CreateDatasetGroupAsync(...)  SubmitAsync(&PersonalizeClient::CreateDatasetGroup, __VA_ARGS__)
#define CreateDatasetGroupCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateDatasetGroup, REQUEST)

#define CreateDatasetImportJobAsync(...)  SubmitAsync(&PersonalizeClient::CreateDatasetImportJob, __VA_ARGS__)
#define CreateDatasetImportJobCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateDatasetImportJob, REQUEST)

#define CreateEventTrackerAsync(...)  SubmitAsync(&PersonalizeClient::CreateEventTracker, __VA_ARGS__)
#define CreateEventTrackerCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateEventTracker, REQUEST)

#define CreateFilterAsync(...)  SubmitAsync(&PersonalizeClient::CreateFilter, __VA_ARGS__)
#define CreateFilterCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateFilter, REQUEST)

#define CreateMetricAttributionAsync(...)  SubmitAsync(&PersonalizeClient::CreateMetricAttribution, __VA_ARGS__)
#define CreateMetricAttributionCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateMetricAttribution, REQUEST)

#define CreateRecommenderAsync(...)  SubmitAsync(&PersonalizeClient::CreateRecommender, __VA_ARGS__)
#define CreateRecommenderCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateRecommender, REQUEST)

#define CreateSchemaAsync(...)  SubmitAsync(&PersonalizeClient::CreateSchema, __VA_ARGS__)
#define CreateSchemaCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateSchema, REQUEST)

#define CreateSolutionAsync(...)  SubmitAsync(&PersonalizeClient::CreateSolution, __VA_ARGS__)
#define CreateSolutionCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateSolution, REQUEST)

#define CreateSolutionVersionAsync(...)  SubmitAsync(&PersonalizeClient::CreateSolutionVersion, __VA_ARGS__)
#define CreateSolutionVersionCallable(REQUEST)  SubmitCallable(&PersonalizeClient::CreateSolutionVersion, REQUEST)

#define DeleteCampaignAsync(...)  SubmitAsync(&PersonalizeClient::DeleteCampaign, __VA_ARGS__)
#define DeleteCampaignCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DeleteCampaign, REQUEST)

#define DeleteDatasetAsync(...)  SubmitAsync(&PersonalizeClient::DeleteDataset, __VA_ARGS__)
#define DeleteDatasetCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DeleteDataset, REQUEST)

#define DeleteDatasetGroupAsync(...)  SubmitAsync(&PersonalizeClient::DeleteDatasetGroup, __VA_ARGS__)
#define DeleteDatasetGroupCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DeleteDatasetGroup, REQUEST)

#define DeleteEventTrackerAsync(...)  SubmitAsync(&PersonalizeClient::DeleteEventTracker, __VA_ARGS__)
#define DeleteEventTrackerCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DeleteEventTracker, REQUEST)

#define DeleteFilterAsync(...)  SubmitAsync(&PersonalizeClient::DeleteFilter, __VA_ARGS__)
#define DeleteFilterCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DeleteFilter, REQUEST)

#define DeleteMetricAttributionAsync(...)  SubmitAsync(&PersonalizeClient::DeleteMetricAttribution, __VA_ARGS__)
#define DeleteMetricAttributionCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DeleteMetricAttribution, REQUEST)

#define DeleteRecommenderAsync(...)  SubmitAsync(&PersonalizeClient::DeleteRecommender, __VA_ARGS__)
#define DeleteRecommenderCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DeleteRecommender, REQUEST)

#define DeleteSchemaAsync(...)  SubmitAsync(&PersonalizeClient::DeleteSchema, __VA_ARGS__)
#define DeleteSchemaCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DeleteSchema, REQUEST)

#define DeleteSolutionAsync(...)  SubmitAsync(&PersonalizeClient::DeleteSolution, __VA_ARGS__)
#define DeleteSolutionCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DeleteSolution, REQUEST)

#define DescribeAlgorithmAsync(...)  SubmitAsync(&PersonalizeClient::DescribeAlgorithm, __VA_ARGS__)
#define DescribeAlgorithmCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeAlgorithm, REQUEST)

#define DescribeBatchInferenceJobAsync(...)  SubmitAsync(&PersonalizeClient::DescribeBatchInferenceJob, __VA_ARGS__)
#define DescribeBatchInferenceJobCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeBatchInferenceJob, REQUEST)

#define DescribeBatchSegmentJobAsync(...)  SubmitAsync(&PersonalizeClient::DescribeBatchSegmentJob, __VA_ARGS__)
#define DescribeBatchSegmentJobCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeBatchSegmentJob, REQUEST)

#define DescribeCampaignAsync(...)  SubmitAsync(&PersonalizeClient::DescribeCampaign, __VA_ARGS__)
#define DescribeCampaignCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeCampaign, REQUEST)

#define DescribeDatasetAsync(...)  SubmitAsync(&PersonalizeClient::DescribeDataset, __VA_ARGS__)
#define DescribeDatasetCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeDataset, REQUEST)

#define DescribeDatasetExportJobAsync(...)  SubmitAsync(&PersonalizeClient::DescribeDatasetExportJob, __VA_ARGS__)
#define DescribeDatasetExportJobCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeDatasetExportJob, REQUEST)

#define DescribeDatasetGroupAsync(...)  SubmitAsync(&PersonalizeClient::DescribeDatasetGroup, __VA_ARGS__)
#define DescribeDatasetGroupCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeDatasetGroup, REQUEST)

#define DescribeDatasetImportJobAsync(...)  SubmitAsync(&PersonalizeClient::DescribeDatasetImportJob, __VA_ARGS__)
#define DescribeDatasetImportJobCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeDatasetImportJob, REQUEST)

#define DescribeEventTrackerAsync(...)  SubmitAsync(&PersonalizeClient::DescribeEventTracker, __VA_ARGS__)
#define DescribeEventTrackerCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeEventTracker, REQUEST)

#define DescribeFeatureTransformationAsync(...)  SubmitAsync(&PersonalizeClient::DescribeFeatureTransformation, __VA_ARGS__)
#define DescribeFeatureTransformationCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeFeatureTransformation, REQUEST)

#define DescribeFilterAsync(...)  SubmitAsync(&PersonalizeClient::DescribeFilter, __VA_ARGS__)
#define DescribeFilterCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeFilter, REQUEST)

#define DescribeMetricAttributionAsync(...)  SubmitAsync(&PersonalizeClient::DescribeMetricAttribution, __VA_ARGS__)
#define DescribeMetricAttributionCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeMetricAttribution, REQUEST)

#define DescribeRecipeAsync(...)  SubmitAsync(&PersonalizeClient::DescribeRecipe, __VA_ARGS__)
#define DescribeRecipeCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeRecipe, REQUEST)

#define DescribeRecommenderAsync(...)  SubmitAsync(&PersonalizeClient::DescribeRecommender, __VA_ARGS__)
#define DescribeRecommenderCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeRecommender, REQUEST)

#define DescribeSchemaAsync(...)  SubmitAsync(&PersonalizeClient::DescribeSchema, __VA_ARGS__)
#define DescribeSchemaCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeSchema, REQUEST)

#define DescribeSolutionAsync(...)  SubmitAsync(&PersonalizeClient::DescribeSolution, __VA_ARGS__)
#define DescribeSolutionCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeSolution, REQUEST)

#define DescribeSolutionVersionAsync(...)  SubmitAsync(&PersonalizeClient::DescribeSolutionVersion, __VA_ARGS__)
#define DescribeSolutionVersionCallable(REQUEST)  SubmitCallable(&PersonalizeClient::DescribeSolutionVersion, REQUEST)

#define GetSolutionMetricsAsync(...)  SubmitAsync(&PersonalizeClient::GetSolutionMetrics, __VA_ARGS__)
#define GetSolutionMetricsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::GetSolutionMetrics, REQUEST)

#define ListBatchInferenceJobsAsync(...)  SubmitAsync(&PersonalizeClient::ListBatchInferenceJobs, __VA_ARGS__)
#define ListBatchInferenceJobsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListBatchInferenceJobs, REQUEST)

#define ListBatchSegmentJobsAsync(...)  SubmitAsync(&PersonalizeClient::ListBatchSegmentJobs, __VA_ARGS__)
#define ListBatchSegmentJobsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListBatchSegmentJobs, REQUEST)

#define ListCampaignsAsync(...)  SubmitAsync(&PersonalizeClient::ListCampaigns, __VA_ARGS__)
#define ListCampaignsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListCampaigns, REQUEST)

#define ListDatasetExportJobsAsync(...)  SubmitAsync(&PersonalizeClient::ListDatasetExportJobs, __VA_ARGS__)
#define ListDatasetExportJobsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListDatasetExportJobs, REQUEST)

#define ListDatasetGroupsAsync(...)  SubmitAsync(&PersonalizeClient::ListDatasetGroups, __VA_ARGS__)
#define ListDatasetGroupsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListDatasetGroups, REQUEST)

#define ListDatasetImportJobsAsync(...)  SubmitAsync(&PersonalizeClient::ListDatasetImportJobs, __VA_ARGS__)
#define ListDatasetImportJobsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListDatasetImportJobs, REQUEST)

#define ListDatasetsAsync(...)  SubmitAsync(&PersonalizeClient::ListDatasets, __VA_ARGS__)
#define ListDatasetsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListDatasets, REQUEST)

#define ListEventTrackersAsync(...)  SubmitAsync(&PersonalizeClient::ListEventTrackers, __VA_ARGS__)
#define ListEventTrackersCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListEventTrackers, REQUEST)

#define ListFiltersAsync(...)  SubmitAsync(&PersonalizeClient::ListFilters, __VA_ARGS__)
#define ListFiltersCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListFilters, REQUEST)

#define ListMetricAttributionMetricsAsync(...)  SubmitAsync(&PersonalizeClient::ListMetricAttributionMetrics, __VA_ARGS__)
#define ListMetricAttributionMetricsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListMetricAttributionMetrics, REQUEST)

#define ListMetricAttributionsAsync(...)  SubmitAsync(&PersonalizeClient::ListMetricAttributions, __VA_ARGS__)
#define ListMetricAttributionsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListMetricAttributions, REQUEST)

#define ListRecipesAsync(...)  SubmitAsync(&PersonalizeClient::ListRecipes, __VA_ARGS__)
#define ListRecipesCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListRecipes, REQUEST)

#define ListRecommendersAsync(...)  SubmitAsync(&PersonalizeClient::ListRecommenders, __VA_ARGS__)
#define ListRecommendersCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListRecommenders, REQUEST)

#define ListSchemasAsync(...)  SubmitAsync(&PersonalizeClient::ListSchemas, __VA_ARGS__)
#define ListSchemasCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListSchemas, REQUEST)

#define ListSolutionVersionsAsync(...)  SubmitAsync(&PersonalizeClient::ListSolutionVersions, __VA_ARGS__)
#define ListSolutionVersionsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListSolutionVersions, REQUEST)

#define ListSolutionsAsync(...)  SubmitAsync(&PersonalizeClient::ListSolutions, __VA_ARGS__)
#define ListSolutionsCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListSolutions, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&PersonalizeClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&PersonalizeClient::ListTagsForResource, REQUEST)

#define StartRecommenderAsync(...)  SubmitAsync(&PersonalizeClient::StartRecommender, __VA_ARGS__)
#define StartRecommenderCallable(REQUEST)  SubmitCallable(&PersonalizeClient::StartRecommender, REQUEST)

#define StopRecommenderAsync(...)  SubmitAsync(&PersonalizeClient::StopRecommender, __VA_ARGS__)
#define StopRecommenderCallable(REQUEST)  SubmitCallable(&PersonalizeClient::StopRecommender, REQUEST)

#define StopSolutionVersionCreationAsync(...)  SubmitAsync(&PersonalizeClient::StopSolutionVersionCreation, __VA_ARGS__)
#define StopSolutionVersionCreationCallable(REQUEST)  SubmitCallable(&PersonalizeClient::StopSolutionVersionCreation, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&PersonalizeClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&PersonalizeClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&PersonalizeClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&PersonalizeClient::UntagResource, REQUEST)

#define UpdateCampaignAsync(...)  SubmitAsync(&PersonalizeClient::UpdateCampaign, __VA_ARGS__)
#define UpdateCampaignCallable(REQUEST)  SubmitCallable(&PersonalizeClient::UpdateCampaign, REQUEST)

#define UpdateMetricAttributionAsync(...)  SubmitAsync(&PersonalizeClient::UpdateMetricAttribution, __VA_ARGS__)
#define UpdateMetricAttributionCallable(REQUEST)  SubmitCallable(&PersonalizeClient::UpdateMetricAttribution, REQUEST)

#define UpdateRecommenderAsync(...)  SubmitAsync(&PersonalizeClient::UpdateRecommender, __VA_ARGS__)
#define UpdateRecommenderCallable(REQUEST)  SubmitCallable(&PersonalizeClient::UpdateRecommender, REQUEST)

