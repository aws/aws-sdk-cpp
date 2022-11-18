/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchCreateRumMetricDefinitionsAsync(...)  SubmitAsync(&CloudWatchRUMClient::BatchCreateRumMetricDefinitions, __VA_ARGS__)
#define BatchCreateRumMetricDefinitionsCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::BatchCreateRumMetricDefinitions, REQUEST)

#define BatchDeleteRumMetricDefinitionsAsync(...)  SubmitAsync(&CloudWatchRUMClient::BatchDeleteRumMetricDefinitions, __VA_ARGS__)
#define BatchDeleteRumMetricDefinitionsCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::BatchDeleteRumMetricDefinitions, REQUEST)

#define BatchGetRumMetricDefinitionsAsync(...)  SubmitAsync(&CloudWatchRUMClient::BatchGetRumMetricDefinitions, __VA_ARGS__)
#define BatchGetRumMetricDefinitionsCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::BatchGetRumMetricDefinitions, REQUEST)

#define CreateAppMonitorAsync(...)  SubmitAsync(&CloudWatchRUMClient::CreateAppMonitor, __VA_ARGS__)
#define CreateAppMonitorCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::CreateAppMonitor, REQUEST)

#define DeleteAppMonitorAsync(...)  SubmitAsync(&CloudWatchRUMClient::DeleteAppMonitor, __VA_ARGS__)
#define DeleteAppMonitorCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::DeleteAppMonitor, REQUEST)

#define DeleteRumMetricsDestinationAsync(...)  SubmitAsync(&CloudWatchRUMClient::DeleteRumMetricsDestination, __VA_ARGS__)
#define DeleteRumMetricsDestinationCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::DeleteRumMetricsDestination, REQUEST)

#define GetAppMonitorAsync(...)  SubmitAsync(&CloudWatchRUMClient::GetAppMonitor, __VA_ARGS__)
#define GetAppMonitorCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::GetAppMonitor, REQUEST)

#define GetAppMonitorDataAsync(...)  SubmitAsync(&CloudWatchRUMClient::GetAppMonitorData, __VA_ARGS__)
#define GetAppMonitorDataCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::GetAppMonitorData, REQUEST)

#define ListAppMonitorsAsync(...)  SubmitAsync(&CloudWatchRUMClient::ListAppMonitors, __VA_ARGS__)
#define ListAppMonitorsCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::ListAppMonitors, REQUEST)

#define ListRumMetricsDestinationsAsync(...)  SubmitAsync(&CloudWatchRUMClient::ListRumMetricsDestinations, __VA_ARGS__)
#define ListRumMetricsDestinationsCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::ListRumMetricsDestinations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CloudWatchRUMClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::ListTagsForResource, REQUEST)

#define PutRumEventsAsync(...)  SubmitAsync(&CloudWatchRUMClient::PutRumEvents, __VA_ARGS__)
#define PutRumEventsCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::PutRumEvents, REQUEST)

#define PutRumMetricsDestinationAsync(...)  SubmitAsync(&CloudWatchRUMClient::PutRumMetricsDestination, __VA_ARGS__)
#define PutRumMetricsDestinationCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::PutRumMetricsDestination, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CloudWatchRUMClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CloudWatchRUMClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::UntagResource, REQUEST)

#define UpdateAppMonitorAsync(...)  SubmitAsync(&CloudWatchRUMClient::UpdateAppMonitor, __VA_ARGS__)
#define UpdateAppMonitorCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::UpdateAppMonitor, REQUEST)

#define UpdateRumMetricDefinitionAsync(...)  SubmitAsync(&CloudWatchRUMClient::UpdateRumMetricDefinition, __VA_ARGS__)
#define UpdateRumMetricDefinitionCallable(REQUEST)  SubmitCallable(&CloudWatchRUMClient::UpdateRumMetricDefinition, REQUEST)

