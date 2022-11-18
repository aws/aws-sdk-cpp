/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAutoPredictorAsync(...)  SubmitAsync(&ForecastServiceClient::CreateAutoPredictor, __VA_ARGS__)
#define CreateAutoPredictorCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateAutoPredictor, REQUEST)

#define CreateDatasetAsync(...)  SubmitAsync(&ForecastServiceClient::CreateDataset, __VA_ARGS__)
#define CreateDatasetCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateDataset, REQUEST)

#define CreateDatasetGroupAsync(...)  SubmitAsync(&ForecastServiceClient::CreateDatasetGroup, __VA_ARGS__)
#define CreateDatasetGroupCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateDatasetGroup, REQUEST)

#define CreateDatasetImportJobAsync(...)  SubmitAsync(&ForecastServiceClient::CreateDatasetImportJob, __VA_ARGS__)
#define CreateDatasetImportJobCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateDatasetImportJob, REQUEST)

#define CreateExplainabilityAsync(...)  SubmitAsync(&ForecastServiceClient::CreateExplainability, __VA_ARGS__)
#define CreateExplainabilityCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateExplainability, REQUEST)

#define CreateExplainabilityExportAsync(...)  SubmitAsync(&ForecastServiceClient::CreateExplainabilityExport, __VA_ARGS__)
#define CreateExplainabilityExportCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateExplainabilityExport, REQUEST)

#define CreateForecastAsync(...)  SubmitAsync(&ForecastServiceClient::CreateForecast, __VA_ARGS__)
#define CreateForecastCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateForecast, REQUEST)

#define CreateForecastExportJobAsync(...)  SubmitAsync(&ForecastServiceClient::CreateForecastExportJob, __VA_ARGS__)
#define CreateForecastExportJobCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateForecastExportJob, REQUEST)

#define CreateMonitorAsync(...)  SubmitAsync(&ForecastServiceClient::CreateMonitor, __VA_ARGS__)
#define CreateMonitorCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateMonitor, REQUEST)

#define CreatePredictorAsync(...)  SubmitAsync(&ForecastServiceClient::CreatePredictor, __VA_ARGS__)
#define CreatePredictorCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreatePredictor, REQUEST)

#define CreatePredictorBacktestExportJobAsync(...)  SubmitAsync(&ForecastServiceClient::CreatePredictorBacktestExportJob, __VA_ARGS__)
#define CreatePredictorBacktestExportJobCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreatePredictorBacktestExportJob, REQUEST)

#define CreateWhatIfAnalysisAsync(...)  SubmitAsync(&ForecastServiceClient::CreateWhatIfAnalysis, __VA_ARGS__)
#define CreateWhatIfAnalysisCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateWhatIfAnalysis, REQUEST)

#define CreateWhatIfForecastAsync(...)  SubmitAsync(&ForecastServiceClient::CreateWhatIfForecast, __VA_ARGS__)
#define CreateWhatIfForecastCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateWhatIfForecast, REQUEST)

#define CreateWhatIfForecastExportAsync(...)  SubmitAsync(&ForecastServiceClient::CreateWhatIfForecastExport, __VA_ARGS__)
#define CreateWhatIfForecastExportCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::CreateWhatIfForecastExport, REQUEST)

#define DeleteDatasetAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteDataset, __VA_ARGS__)
#define DeleteDatasetCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteDataset, REQUEST)

#define DeleteDatasetGroupAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteDatasetGroup, __VA_ARGS__)
#define DeleteDatasetGroupCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteDatasetGroup, REQUEST)

#define DeleteDatasetImportJobAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteDatasetImportJob, __VA_ARGS__)
#define DeleteDatasetImportJobCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteDatasetImportJob, REQUEST)

#define DeleteExplainabilityAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteExplainability, __VA_ARGS__)
#define DeleteExplainabilityCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteExplainability, REQUEST)

#define DeleteExplainabilityExportAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteExplainabilityExport, __VA_ARGS__)
#define DeleteExplainabilityExportCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteExplainabilityExport, REQUEST)

#define DeleteForecastAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteForecast, __VA_ARGS__)
#define DeleteForecastCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteForecast, REQUEST)

#define DeleteForecastExportJobAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteForecastExportJob, __VA_ARGS__)
#define DeleteForecastExportJobCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteForecastExportJob, REQUEST)

#define DeleteMonitorAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteMonitor, __VA_ARGS__)
#define DeleteMonitorCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteMonitor, REQUEST)

#define DeletePredictorAsync(...)  SubmitAsync(&ForecastServiceClient::DeletePredictor, __VA_ARGS__)
#define DeletePredictorCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeletePredictor, REQUEST)

#define DeletePredictorBacktestExportJobAsync(...)  SubmitAsync(&ForecastServiceClient::DeletePredictorBacktestExportJob, __VA_ARGS__)
#define DeletePredictorBacktestExportJobCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeletePredictorBacktestExportJob, REQUEST)

#define DeleteResourceTreeAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteResourceTree, __VA_ARGS__)
#define DeleteResourceTreeCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteResourceTree, REQUEST)

#define DeleteWhatIfAnalysisAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteWhatIfAnalysis, __VA_ARGS__)
#define DeleteWhatIfAnalysisCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteWhatIfAnalysis, REQUEST)

#define DeleteWhatIfForecastAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteWhatIfForecast, __VA_ARGS__)
#define DeleteWhatIfForecastCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteWhatIfForecast, REQUEST)

#define DeleteWhatIfForecastExportAsync(...)  SubmitAsync(&ForecastServiceClient::DeleteWhatIfForecastExport, __VA_ARGS__)
#define DeleteWhatIfForecastExportCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DeleteWhatIfForecastExport, REQUEST)

#define DescribeAutoPredictorAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeAutoPredictor, __VA_ARGS__)
#define DescribeAutoPredictorCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeAutoPredictor, REQUEST)

#define DescribeDatasetAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeDataset, __VA_ARGS__)
#define DescribeDatasetCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeDataset, REQUEST)

#define DescribeDatasetGroupAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeDatasetGroup, __VA_ARGS__)
#define DescribeDatasetGroupCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeDatasetGroup, REQUEST)

#define DescribeDatasetImportJobAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeDatasetImportJob, __VA_ARGS__)
#define DescribeDatasetImportJobCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeDatasetImportJob, REQUEST)

#define DescribeExplainabilityAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeExplainability, __VA_ARGS__)
#define DescribeExplainabilityCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeExplainability, REQUEST)

#define DescribeExplainabilityExportAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeExplainabilityExport, __VA_ARGS__)
#define DescribeExplainabilityExportCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeExplainabilityExport, REQUEST)

#define DescribeForecastAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeForecast, __VA_ARGS__)
#define DescribeForecastCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeForecast, REQUEST)

#define DescribeForecastExportJobAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeForecastExportJob, __VA_ARGS__)
#define DescribeForecastExportJobCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeForecastExportJob, REQUEST)

#define DescribeMonitorAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeMonitor, __VA_ARGS__)
#define DescribeMonitorCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeMonitor, REQUEST)

#define DescribePredictorAsync(...)  SubmitAsync(&ForecastServiceClient::DescribePredictor, __VA_ARGS__)
#define DescribePredictorCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribePredictor, REQUEST)

#define DescribePredictorBacktestExportJobAsync(...)  SubmitAsync(&ForecastServiceClient::DescribePredictorBacktestExportJob, __VA_ARGS__)
#define DescribePredictorBacktestExportJobCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribePredictorBacktestExportJob, REQUEST)

#define DescribeWhatIfAnalysisAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeWhatIfAnalysis, __VA_ARGS__)
#define DescribeWhatIfAnalysisCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeWhatIfAnalysis, REQUEST)

#define DescribeWhatIfForecastAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeWhatIfForecast, __VA_ARGS__)
#define DescribeWhatIfForecastCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeWhatIfForecast, REQUEST)

#define DescribeWhatIfForecastExportAsync(...)  SubmitAsync(&ForecastServiceClient::DescribeWhatIfForecastExport, __VA_ARGS__)
#define DescribeWhatIfForecastExportCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::DescribeWhatIfForecastExport, REQUEST)

#define GetAccuracyMetricsAsync(...)  SubmitAsync(&ForecastServiceClient::GetAccuracyMetrics, __VA_ARGS__)
#define GetAccuracyMetricsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::GetAccuracyMetrics, REQUEST)

#define ListDatasetGroupsAsync(...)  SubmitAsync(&ForecastServiceClient::ListDatasetGroups, __VA_ARGS__)
#define ListDatasetGroupsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListDatasetGroups, REQUEST)

#define ListDatasetImportJobsAsync(...)  SubmitAsync(&ForecastServiceClient::ListDatasetImportJobs, __VA_ARGS__)
#define ListDatasetImportJobsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListDatasetImportJobs, REQUEST)

#define ListDatasetsAsync(...)  SubmitAsync(&ForecastServiceClient::ListDatasets, __VA_ARGS__)
#define ListDatasetsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListDatasets, REQUEST)

#define ListExplainabilitiesAsync(...)  SubmitAsync(&ForecastServiceClient::ListExplainabilities, __VA_ARGS__)
#define ListExplainabilitiesCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListExplainabilities, REQUEST)

#define ListExplainabilityExportsAsync(...)  SubmitAsync(&ForecastServiceClient::ListExplainabilityExports, __VA_ARGS__)
#define ListExplainabilityExportsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListExplainabilityExports, REQUEST)

#define ListForecastExportJobsAsync(...)  SubmitAsync(&ForecastServiceClient::ListForecastExportJobs, __VA_ARGS__)
#define ListForecastExportJobsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListForecastExportJobs, REQUEST)

#define ListForecastsAsync(...)  SubmitAsync(&ForecastServiceClient::ListForecasts, __VA_ARGS__)
#define ListForecastsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListForecasts, REQUEST)

#define ListMonitorEvaluationsAsync(...)  SubmitAsync(&ForecastServiceClient::ListMonitorEvaluations, __VA_ARGS__)
#define ListMonitorEvaluationsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListMonitorEvaluations, REQUEST)

#define ListMonitorsAsync(...)  SubmitAsync(&ForecastServiceClient::ListMonitors, __VA_ARGS__)
#define ListMonitorsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListMonitors, REQUEST)

#define ListPredictorBacktestExportJobsAsync(...)  SubmitAsync(&ForecastServiceClient::ListPredictorBacktestExportJobs, __VA_ARGS__)
#define ListPredictorBacktestExportJobsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListPredictorBacktestExportJobs, REQUEST)

#define ListPredictorsAsync(...)  SubmitAsync(&ForecastServiceClient::ListPredictors, __VA_ARGS__)
#define ListPredictorsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListPredictors, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ForecastServiceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListTagsForResource, REQUEST)

#define ListWhatIfAnalysesAsync(...)  SubmitAsync(&ForecastServiceClient::ListWhatIfAnalyses, __VA_ARGS__)
#define ListWhatIfAnalysesCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListWhatIfAnalyses, REQUEST)

#define ListWhatIfForecastExportsAsync(...)  SubmitAsync(&ForecastServiceClient::ListWhatIfForecastExports, __VA_ARGS__)
#define ListWhatIfForecastExportsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListWhatIfForecastExports, REQUEST)

#define ListWhatIfForecastsAsync(...)  SubmitAsync(&ForecastServiceClient::ListWhatIfForecasts, __VA_ARGS__)
#define ListWhatIfForecastsCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ListWhatIfForecasts, REQUEST)

#define ResumeResourceAsync(...)  SubmitAsync(&ForecastServiceClient::ResumeResource, __VA_ARGS__)
#define ResumeResourceCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::ResumeResource, REQUEST)

#define StopResourceAsync(...)  SubmitAsync(&ForecastServiceClient::StopResource, __VA_ARGS__)
#define StopResourceCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::StopResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ForecastServiceClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ForecastServiceClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::UntagResource, REQUEST)

#define UpdateDatasetGroupAsync(...)  SubmitAsync(&ForecastServiceClient::UpdateDatasetGroup, __VA_ARGS__)
#define UpdateDatasetGroupCallable(REQUEST)  SubmitCallable(&ForecastServiceClient::UpdateDatasetGroup, REQUEST)

