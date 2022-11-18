/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddTagsAsync(...)  SubmitAsync(&MachineLearningClient::AddTags, __VA_ARGS__)
#define AddTagsCallable(REQUEST)  SubmitCallable(&MachineLearningClient::AddTags, REQUEST)

#define CreateBatchPredictionAsync(...)  SubmitAsync(&MachineLearningClient::CreateBatchPrediction, __VA_ARGS__)
#define CreateBatchPredictionCallable(REQUEST)  SubmitCallable(&MachineLearningClient::CreateBatchPrediction, REQUEST)

#define CreateDataSourceFromRDSAsync(...)  SubmitAsync(&MachineLearningClient::CreateDataSourceFromRDS, __VA_ARGS__)
#define CreateDataSourceFromRDSCallable(REQUEST)  SubmitCallable(&MachineLearningClient::CreateDataSourceFromRDS, REQUEST)

#define CreateDataSourceFromRedshiftAsync(...)  SubmitAsync(&MachineLearningClient::CreateDataSourceFromRedshift, __VA_ARGS__)
#define CreateDataSourceFromRedshiftCallable(REQUEST)  SubmitCallable(&MachineLearningClient::CreateDataSourceFromRedshift, REQUEST)

#define CreateDataSourceFromS3Async(...)  SubmitAsync(&MachineLearningClient::CreateDataSourceFromS3, __VA_ARGS__)
#define CreateDataSourceFromS3Callable(REQUEST)  SubmitCallable(&MachineLearningClient::CreateDataSourceFromS3, REQUEST)

#define CreateEvaluationAsync(...)  SubmitAsync(&MachineLearningClient::CreateEvaluation, __VA_ARGS__)
#define CreateEvaluationCallable(REQUEST)  SubmitCallable(&MachineLearningClient::CreateEvaluation, REQUEST)

#define CreateMLModelAsync(...)  SubmitAsync(&MachineLearningClient::CreateMLModel, __VA_ARGS__)
#define CreateMLModelCallable(REQUEST)  SubmitCallable(&MachineLearningClient::CreateMLModel, REQUEST)

#define CreateRealtimeEndpointAsync(...)  SubmitAsync(&MachineLearningClient::CreateRealtimeEndpoint, __VA_ARGS__)
#define CreateRealtimeEndpointCallable(REQUEST)  SubmitCallable(&MachineLearningClient::CreateRealtimeEndpoint, REQUEST)

#define DeleteBatchPredictionAsync(...)  SubmitAsync(&MachineLearningClient::DeleteBatchPrediction, __VA_ARGS__)
#define DeleteBatchPredictionCallable(REQUEST)  SubmitCallable(&MachineLearningClient::DeleteBatchPrediction, REQUEST)

#define DeleteDataSourceAsync(...)  SubmitAsync(&MachineLearningClient::DeleteDataSource, __VA_ARGS__)
#define DeleteDataSourceCallable(REQUEST)  SubmitCallable(&MachineLearningClient::DeleteDataSource, REQUEST)

#define DeleteEvaluationAsync(...)  SubmitAsync(&MachineLearningClient::DeleteEvaluation, __VA_ARGS__)
#define DeleteEvaluationCallable(REQUEST)  SubmitCallable(&MachineLearningClient::DeleteEvaluation, REQUEST)

#define DeleteMLModelAsync(...)  SubmitAsync(&MachineLearningClient::DeleteMLModel, __VA_ARGS__)
#define DeleteMLModelCallable(REQUEST)  SubmitCallable(&MachineLearningClient::DeleteMLModel, REQUEST)

#define DeleteRealtimeEndpointAsync(...)  SubmitAsync(&MachineLearningClient::DeleteRealtimeEndpoint, __VA_ARGS__)
#define DeleteRealtimeEndpointCallable(REQUEST)  SubmitCallable(&MachineLearningClient::DeleteRealtimeEndpoint, REQUEST)

#define DeleteTagsAsync(...)  SubmitAsync(&MachineLearningClient::DeleteTags, __VA_ARGS__)
#define DeleteTagsCallable(REQUEST)  SubmitCallable(&MachineLearningClient::DeleteTags, REQUEST)

#define DescribeBatchPredictionsAsync(...)  SubmitAsync(&MachineLearningClient::DescribeBatchPredictions, __VA_ARGS__)
#define DescribeBatchPredictionsCallable(REQUEST)  SubmitCallable(&MachineLearningClient::DescribeBatchPredictions, REQUEST)

#define DescribeDataSourcesAsync(...)  SubmitAsync(&MachineLearningClient::DescribeDataSources, __VA_ARGS__)
#define DescribeDataSourcesCallable(REQUEST)  SubmitCallable(&MachineLearningClient::DescribeDataSources, REQUEST)

#define DescribeEvaluationsAsync(...)  SubmitAsync(&MachineLearningClient::DescribeEvaluations, __VA_ARGS__)
#define DescribeEvaluationsCallable(REQUEST)  SubmitCallable(&MachineLearningClient::DescribeEvaluations, REQUEST)

#define DescribeMLModelsAsync(...)  SubmitAsync(&MachineLearningClient::DescribeMLModels, __VA_ARGS__)
#define DescribeMLModelsCallable(REQUEST)  SubmitCallable(&MachineLearningClient::DescribeMLModels, REQUEST)

#define DescribeTagsAsync(...)  SubmitAsync(&MachineLearningClient::DescribeTags, __VA_ARGS__)
#define DescribeTagsCallable(REQUEST)  SubmitCallable(&MachineLearningClient::DescribeTags, REQUEST)

#define GetBatchPredictionAsync(...)  SubmitAsync(&MachineLearningClient::GetBatchPrediction, __VA_ARGS__)
#define GetBatchPredictionCallable(REQUEST)  SubmitCallable(&MachineLearningClient::GetBatchPrediction, REQUEST)

#define GetDataSourceAsync(...)  SubmitAsync(&MachineLearningClient::GetDataSource, __VA_ARGS__)
#define GetDataSourceCallable(REQUEST)  SubmitCallable(&MachineLearningClient::GetDataSource, REQUEST)

#define GetEvaluationAsync(...)  SubmitAsync(&MachineLearningClient::GetEvaluation, __VA_ARGS__)
#define GetEvaluationCallable(REQUEST)  SubmitCallable(&MachineLearningClient::GetEvaluation, REQUEST)

#define GetMLModelAsync(...)  SubmitAsync(&MachineLearningClient::GetMLModel, __VA_ARGS__)
#define GetMLModelCallable(REQUEST)  SubmitCallable(&MachineLearningClient::GetMLModel, REQUEST)

#define PredictAsync(...)  SubmitAsync(&MachineLearningClient::Predict, __VA_ARGS__)
#define PredictCallable(REQUEST)  SubmitCallable(&MachineLearningClient::Predict, REQUEST)

#define UpdateBatchPredictionAsync(...)  SubmitAsync(&MachineLearningClient::UpdateBatchPrediction, __VA_ARGS__)
#define UpdateBatchPredictionCallable(REQUEST)  SubmitCallable(&MachineLearningClient::UpdateBatchPrediction, REQUEST)

#define UpdateDataSourceAsync(...)  SubmitAsync(&MachineLearningClient::UpdateDataSource, __VA_ARGS__)
#define UpdateDataSourceCallable(REQUEST)  SubmitCallable(&MachineLearningClient::UpdateDataSource, REQUEST)

#define UpdateEvaluationAsync(...)  SubmitAsync(&MachineLearningClient::UpdateEvaluation, __VA_ARGS__)
#define UpdateEvaluationCallable(REQUEST)  SubmitCallable(&MachineLearningClient::UpdateEvaluation, REQUEST)

#define UpdateMLModelAsync(...)  SubmitAsync(&MachineLearningClient::UpdateMLModel, __VA_ARGS__)
#define UpdateMLModelCallable(REQUEST)  SubmitCallable(&MachineLearningClient::UpdateMLModel, REQUEST)

