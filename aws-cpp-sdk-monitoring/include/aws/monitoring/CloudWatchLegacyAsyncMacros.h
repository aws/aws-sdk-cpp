/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteAlarmsAsync(...)  SubmitAsync(&CloudWatchClient::DeleteAlarms, __VA_ARGS__)
#define DeleteAlarmsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DeleteAlarms, REQUEST)

#define DeleteAnomalyDetectorAsync(...)  SubmitAsync(&CloudWatchClient::DeleteAnomalyDetector, __VA_ARGS__)
#define DeleteAnomalyDetectorCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DeleteAnomalyDetector, REQUEST)

#define DeleteDashboardsAsync(...)  SubmitAsync(&CloudWatchClient::DeleteDashboards, __VA_ARGS__)
#define DeleteDashboardsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DeleteDashboards, REQUEST)

#define DeleteInsightRulesAsync(...)  SubmitAsync(&CloudWatchClient::DeleteInsightRules, __VA_ARGS__)
#define DeleteInsightRulesCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DeleteInsightRules, REQUEST)

#define DeleteMetricStreamAsync(...)  SubmitAsync(&CloudWatchClient::DeleteMetricStream, __VA_ARGS__)
#define DeleteMetricStreamCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DeleteMetricStream, REQUEST)

#define DescribeAlarmHistoryAsync(...)  SubmitAsync(&CloudWatchClient::DescribeAlarmHistory, __VA_ARGS__)
#define DescribeAlarmHistoryCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DescribeAlarmHistory, REQUEST)

#define DescribeAlarmsAsync(...)  SubmitAsync(&CloudWatchClient::DescribeAlarms, __VA_ARGS__)
#define DescribeAlarmsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DescribeAlarms, REQUEST)

#define DescribeAlarmsForMetricAsync(...)  SubmitAsync(&CloudWatchClient::DescribeAlarmsForMetric, __VA_ARGS__)
#define DescribeAlarmsForMetricCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DescribeAlarmsForMetric, REQUEST)

#define DescribeAnomalyDetectorsAsync(...)  SubmitAsync(&CloudWatchClient::DescribeAnomalyDetectors, __VA_ARGS__)
#define DescribeAnomalyDetectorsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DescribeAnomalyDetectors, REQUEST)

#define DescribeInsightRulesAsync(...)  SubmitAsync(&CloudWatchClient::DescribeInsightRules, __VA_ARGS__)
#define DescribeInsightRulesCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DescribeInsightRules, REQUEST)

#define DisableAlarmActionsAsync(...)  SubmitAsync(&CloudWatchClient::DisableAlarmActions, __VA_ARGS__)
#define DisableAlarmActionsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DisableAlarmActions, REQUEST)

#define DisableInsightRulesAsync(...)  SubmitAsync(&CloudWatchClient::DisableInsightRules, __VA_ARGS__)
#define DisableInsightRulesCallable(REQUEST)  SubmitCallable(&CloudWatchClient::DisableInsightRules, REQUEST)

#define EnableAlarmActionsAsync(...)  SubmitAsync(&CloudWatchClient::EnableAlarmActions, __VA_ARGS__)
#define EnableAlarmActionsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::EnableAlarmActions, REQUEST)

#define EnableInsightRulesAsync(...)  SubmitAsync(&CloudWatchClient::EnableInsightRules, __VA_ARGS__)
#define EnableInsightRulesCallable(REQUEST)  SubmitCallable(&CloudWatchClient::EnableInsightRules, REQUEST)

#define GetDashboardAsync(...)  SubmitAsync(&CloudWatchClient::GetDashboard, __VA_ARGS__)
#define GetDashboardCallable(REQUEST)  SubmitCallable(&CloudWatchClient::GetDashboard, REQUEST)

#define GetInsightRuleReportAsync(...)  SubmitAsync(&CloudWatchClient::GetInsightRuleReport, __VA_ARGS__)
#define GetInsightRuleReportCallable(REQUEST)  SubmitCallable(&CloudWatchClient::GetInsightRuleReport, REQUEST)

#define GetMetricDataAsync(...)  SubmitAsync(&CloudWatchClient::GetMetricData, __VA_ARGS__)
#define GetMetricDataCallable(REQUEST)  SubmitCallable(&CloudWatchClient::GetMetricData, REQUEST)

#define GetMetricStatisticsAsync(...)  SubmitAsync(&CloudWatchClient::GetMetricStatistics, __VA_ARGS__)
#define GetMetricStatisticsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::GetMetricStatistics, REQUEST)

#define GetMetricStreamAsync(...)  SubmitAsync(&CloudWatchClient::GetMetricStream, __VA_ARGS__)
#define GetMetricStreamCallable(REQUEST)  SubmitCallable(&CloudWatchClient::GetMetricStream, REQUEST)

#define GetMetricWidgetImageAsync(...)  SubmitAsync(&CloudWatchClient::GetMetricWidgetImage, __VA_ARGS__)
#define GetMetricWidgetImageCallable(REQUEST)  SubmitCallable(&CloudWatchClient::GetMetricWidgetImage, REQUEST)

#define ListDashboardsAsync(...)  SubmitAsync(&CloudWatchClient::ListDashboards, __VA_ARGS__)
#define ListDashboardsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::ListDashboards, REQUEST)

#define ListManagedInsightRulesAsync(...)  SubmitAsync(&CloudWatchClient::ListManagedInsightRules, __VA_ARGS__)
#define ListManagedInsightRulesCallable(REQUEST)  SubmitCallable(&CloudWatchClient::ListManagedInsightRules, REQUEST)

#define ListMetricStreamsAsync(...)  SubmitAsync(&CloudWatchClient::ListMetricStreams, __VA_ARGS__)
#define ListMetricStreamsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::ListMetricStreams, REQUEST)

#define ListMetricsAsync(...)  SubmitAsync(&CloudWatchClient::ListMetrics, __VA_ARGS__)
#define ListMetricsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::ListMetrics, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CloudWatchClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CloudWatchClient::ListTagsForResource, REQUEST)

#define PutAnomalyDetectorAsync(...)  SubmitAsync(&CloudWatchClient::PutAnomalyDetector, __VA_ARGS__)
#define PutAnomalyDetectorCallable(REQUEST)  SubmitCallable(&CloudWatchClient::PutAnomalyDetector, REQUEST)

#define PutCompositeAlarmAsync(...)  SubmitAsync(&CloudWatchClient::PutCompositeAlarm, __VA_ARGS__)
#define PutCompositeAlarmCallable(REQUEST)  SubmitCallable(&CloudWatchClient::PutCompositeAlarm, REQUEST)

#define PutDashboardAsync(...)  SubmitAsync(&CloudWatchClient::PutDashboard, __VA_ARGS__)
#define PutDashboardCallable(REQUEST)  SubmitCallable(&CloudWatchClient::PutDashboard, REQUEST)

#define PutInsightRuleAsync(...)  SubmitAsync(&CloudWatchClient::PutInsightRule, __VA_ARGS__)
#define PutInsightRuleCallable(REQUEST)  SubmitCallable(&CloudWatchClient::PutInsightRule, REQUEST)

#define PutManagedInsightRulesAsync(...)  SubmitAsync(&CloudWatchClient::PutManagedInsightRules, __VA_ARGS__)
#define PutManagedInsightRulesCallable(REQUEST)  SubmitCallable(&CloudWatchClient::PutManagedInsightRules, REQUEST)

#define PutMetricAlarmAsync(...)  SubmitAsync(&CloudWatchClient::PutMetricAlarm, __VA_ARGS__)
#define PutMetricAlarmCallable(REQUEST)  SubmitCallable(&CloudWatchClient::PutMetricAlarm, REQUEST)

#define PutMetricDataAsync(...)  SubmitAsync(&CloudWatchClient::PutMetricData, __VA_ARGS__)
#define PutMetricDataCallable(REQUEST)  SubmitCallable(&CloudWatchClient::PutMetricData, REQUEST)

#define PutMetricStreamAsync(...)  SubmitAsync(&CloudWatchClient::PutMetricStream, __VA_ARGS__)
#define PutMetricStreamCallable(REQUEST)  SubmitCallable(&CloudWatchClient::PutMetricStream, REQUEST)

#define SetAlarmStateAsync(...)  SubmitAsync(&CloudWatchClient::SetAlarmState, __VA_ARGS__)
#define SetAlarmStateCallable(REQUEST)  SubmitCallable(&CloudWatchClient::SetAlarmState, REQUEST)

#define StartMetricStreamsAsync(...)  SubmitAsync(&CloudWatchClient::StartMetricStreams, __VA_ARGS__)
#define StartMetricStreamsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::StartMetricStreams, REQUEST)

#define StopMetricStreamsAsync(...)  SubmitAsync(&CloudWatchClient::StopMetricStreams, __VA_ARGS__)
#define StopMetricStreamsCallable(REQUEST)  SubmitCallable(&CloudWatchClient::StopMetricStreams, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CloudWatchClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CloudWatchClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CloudWatchClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CloudWatchClient::UntagResource, REQUEST)

