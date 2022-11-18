/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ActivateAnomalyDetectorAsync(...)  SubmitAsync(&LookoutMetricsClient::ActivateAnomalyDetector, __VA_ARGS__)
#define ActivateAnomalyDetectorCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::ActivateAnomalyDetector, REQUEST)

#define BackTestAnomalyDetectorAsync(...)  SubmitAsync(&LookoutMetricsClient::BackTestAnomalyDetector, __VA_ARGS__)
#define BackTestAnomalyDetectorCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::BackTestAnomalyDetector, REQUEST)

#define CreateAlertAsync(...)  SubmitAsync(&LookoutMetricsClient::CreateAlert, __VA_ARGS__)
#define CreateAlertCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::CreateAlert, REQUEST)

#define CreateAnomalyDetectorAsync(...)  SubmitAsync(&LookoutMetricsClient::CreateAnomalyDetector, __VA_ARGS__)
#define CreateAnomalyDetectorCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::CreateAnomalyDetector, REQUEST)

#define CreateMetricSetAsync(...)  SubmitAsync(&LookoutMetricsClient::CreateMetricSet, __VA_ARGS__)
#define CreateMetricSetCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::CreateMetricSet, REQUEST)

#define DeactivateAnomalyDetectorAsync(...)  SubmitAsync(&LookoutMetricsClient::DeactivateAnomalyDetector, __VA_ARGS__)
#define DeactivateAnomalyDetectorCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::DeactivateAnomalyDetector, REQUEST)

#define DeleteAlertAsync(...)  SubmitAsync(&LookoutMetricsClient::DeleteAlert, __VA_ARGS__)
#define DeleteAlertCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::DeleteAlert, REQUEST)

#define DeleteAnomalyDetectorAsync(...)  SubmitAsync(&LookoutMetricsClient::DeleteAnomalyDetector, __VA_ARGS__)
#define DeleteAnomalyDetectorCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::DeleteAnomalyDetector, REQUEST)

#define DescribeAlertAsync(...)  SubmitAsync(&LookoutMetricsClient::DescribeAlert, __VA_ARGS__)
#define DescribeAlertCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::DescribeAlert, REQUEST)

#define DescribeAnomalyDetectionExecutionsAsync(...)  SubmitAsync(&LookoutMetricsClient::DescribeAnomalyDetectionExecutions, __VA_ARGS__)
#define DescribeAnomalyDetectionExecutionsCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::DescribeAnomalyDetectionExecutions, REQUEST)

#define DescribeAnomalyDetectorAsync(...)  SubmitAsync(&LookoutMetricsClient::DescribeAnomalyDetector, __VA_ARGS__)
#define DescribeAnomalyDetectorCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::DescribeAnomalyDetector, REQUEST)

#define DescribeMetricSetAsync(...)  SubmitAsync(&LookoutMetricsClient::DescribeMetricSet, __VA_ARGS__)
#define DescribeMetricSetCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::DescribeMetricSet, REQUEST)

#define DetectMetricSetConfigAsync(...)  SubmitAsync(&LookoutMetricsClient::DetectMetricSetConfig, __VA_ARGS__)
#define DetectMetricSetConfigCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::DetectMetricSetConfig, REQUEST)

#define GetAnomalyGroupAsync(...)  SubmitAsync(&LookoutMetricsClient::GetAnomalyGroup, __VA_ARGS__)
#define GetAnomalyGroupCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::GetAnomalyGroup, REQUEST)

#define GetDataQualityMetricsAsync(...)  SubmitAsync(&LookoutMetricsClient::GetDataQualityMetrics, __VA_ARGS__)
#define GetDataQualityMetricsCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::GetDataQualityMetrics, REQUEST)

#define GetFeedbackAsync(...)  SubmitAsync(&LookoutMetricsClient::GetFeedback, __VA_ARGS__)
#define GetFeedbackCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::GetFeedback, REQUEST)

#define GetSampleDataAsync(...)  SubmitAsync(&LookoutMetricsClient::GetSampleData, __VA_ARGS__)
#define GetSampleDataCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::GetSampleData, REQUEST)

#define ListAlertsAsync(...)  SubmitAsync(&LookoutMetricsClient::ListAlerts, __VA_ARGS__)
#define ListAlertsCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::ListAlerts, REQUEST)

#define ListAnomalyDetectorsAsync(...)  SubmitAsync(&LookoutMetricsClient::ListAnomalyDetectors, __VA_ARGS__)
#define ListAnomalyDetectorsCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::ListAnomalyDetectors, REQUEST)

#define ListAnomalyGroupRelatedMetricsAsync(...)  SubmitAsync(&LookoutMetricsClient::ListAnomalyGroupRelatedMetrics, __VA_ARGS__)
#define ListAnomalyGroupRelatedMetricsCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::ListAnomalyGroupRelatedMetrics, REQUEST)

#define ListAnomalyGroupSummariesAsync(...)  SubmitAsync(&LookoutMetricsClient::ListAnomalyGroupSummaries, __VA_ARGS__)
#define ListAnomalyGroupSummariesCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::ListAnomalyGroupSummaries, REQUEST)

#define ListAnomalyGroupTimeSeriesAsync(...)  SubmitAsync(&LookoutMetricsClient::ListAnomalyGroupTimeSeries, __VA_ARGS__)
#define ListAnomalyGroupTimeSeriesCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::ListAnomalyGroupTimeSeries, REQUEST)

#define ListMetricSetsAsync(...)  SubmitAsync(&LookoutMetricsClient::ListMetricSets, __VA_ARGS__)
#define ListMetricSetsCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::ListMetricSets, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&LookoutMetricsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::ListTagsForResource, REQUEST)

#define PutFeedbackAsync(...)  SubmitAsync(&LookoutMetricsClient::PutFeedback, __VA_ARGS__)
#define PutFeedbackCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::PutFeedback, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&LookoutMetricsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&LookoutMetricsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::UntagResource, REQUEST)

#define UpdateAlertAsync(...)  SubmitAsync(&LookoutMetricsClient::UpdateAlert, __VA_ARGS__)
#define UpdateAlertCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::UpdateAlert, REQUEST)

#define UpdateAnomalyDetectorAsync(...)  SubmitAsync(&LookoutMetricsClient::UpdateAnomalyDetector, __VA_ARGS__)
#define UpdateAnomalyDetectorCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::UpdateAnomalyDetector, REQUEST)

#define UpdateMetricSetAsync(...)  SubmitAsync(&LookoutMetricsClient::UpdateMetricSet, __VA_ARGS__)
#define UpdateMetricSetCallable(REQUEST)  SubmitCallable(&LookoutMetricsClient::UpdateMetricSet, REQUEST)

