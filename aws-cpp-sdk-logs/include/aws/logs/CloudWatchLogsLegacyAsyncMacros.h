/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateKmsKeyAsync(...)  SubmitAsync(&CloudWatchLogsClient::AssociateKmsKey, __VA_ARGS__)
#define AssociateKmsKeyCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::AssociateKmsKey, REQUEST)

#define CancelExportTaskAsync(...)  SubmitAsync(&CloudWatchLogsClient::CancelExportTask, __VA_ARGS__)
#define CancelExportTaskCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::CancelExportTask, REQUEST)

#define CreateExportTaskAsync(...)  SubmitAsync(&CloudWatchLogsClient::CreateExportTask, __VA_ARGS__)
#define CreateExportTaskCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::CreateExportTask, REQUEST)

#define CreateLogGroupAsync(...)  SubmitAsync(&CloudWatchLogsClient::CreateLogGroup, __VA_ARGS__)
#define CreateLogGroupCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::CreateLogGroup, REQUEST)

#define CreateLogStreamAsync(...)  SubmitAsync(&CloudWatchLogsClient::CreateLogStream, __VA_ARGS__)
#define CreateLogStreamCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::CreateLogStream, REQUEST)

#define DeleteDestinationAsync(...)  SubmitAsync(&CloudWatchLogsClient::DeleteDestination, __VA_ARGS__)
#define DeleteDestinationCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DeleteDestination, REQUEST)

#define DeleteLogGroupAsync(...)  SubmitAsync(&CloudWatchLogsClient::DeleteLogGroup, __VA_ARGS__)
#define DeleteLogGroupCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DeleteLogGroup, REQUEST)

#define DeleteLogStreamAsync(...)  SubmitAsync(&CloudWatchLogsClient::DeleteLogStream, __VA_ARGS__)
#define DeleteLogStreamCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DeleteLogStream, REQUEST)

#define DeleteMetricFilterAsync(...)  SubmitAsync(&CloudWatchLogsClient::DeleteMetricFilter, __VA_ARGS__)
#define DeleteMetricFilterCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DeleteMetricFilter, REQUEST)

#define DeleteQueryDefinitionAsync(...)  SubmitAsync(&CloudWatchLogsClient::DeleteQueryDefinition, __VA_ARGS__)
#define DeleteQueryDefinitionCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DeleteQueryDefinition, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&CloudWatchLogsClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DeleteResourcePolicy, REQUEST)

#define DeleteRetentionPolicyAsync(...)  SubmitAsync(&CloudWatchLogsClient::DeleteRetentionPolicy, __VA_ARGS__)
#define DeleteRetentionPolicyCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DeleteRetentionPolicy, REQUEST)

#define DeleteSubscriptionFilterAsync(...)  SubmitAsync(&CloudWatchLogsClient::DeleteSubscriptionFilter, __VA_ARGS__)
#define DeleteSubscriptionFilterCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DeleteSubscriptionFilter, REQUEST)

#define DescribeDestinationsAsync(...)  SubmitAsync(&CloudWatchLogsClient::DescribeDestinations, __VA_ARGS__)
#define DescribeDestinationsCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DescribeDestinations, REQUEST)

#define DescribeExportTasksAsync(...)  SubmitAsync(&CloudWatchLogsClient::DescribeExportTasks, __VA_ARGS__)
#define DescribeExportTasksCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DescribeExportTasks, REQUEST)

#define DescribeLogGroupsAsync(...)  SubmitAsync(&CloudWatchLogsClient::DescribeLogGroups, __VA_ARGS__)
#define DescribeLogGroupsCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DescribeLogGroups, REQUEST)

#define DescribeLogStreamsAsync(...)  SubmitAsync(&CloudWatchLogsClient::DescribeLogStreams, __VA_ARGS__)
#define DescribeLogStreamsCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DescribeLogStreams, REQUEST)

#define DescribeMetricFiltersAsync(...)  SubmitAsync(&CloudWatchLogsClient::DescribeMetricFilters, __VA_ARGS__)
#define DescribeMetricFiltersCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DescribeMetricFilters, REQUEST)

#define DescribeQueriesAsync(...)  SubmitAsync(&CloudWatchLogsClient::DescribeQueries, __VA_ARGS__)
#define DescribeQueriesCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DescribeQueries, REQUEST)

#define DescribeQueryDefinitionsAsync(...)  SubmitAsync(&CloudWatchLogsClient::DescribeQueryDefinitions, __VA_ARGS__)
#define DescribeQueryDefinitionsCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DescribeQueryDefinitions, REQUEST)

#define DescribeResourcePoliciesAsync(...)  SubmitAsync(&CloudWatchLogsClient::DescribeResourcePolicies, __VA_ARGS__)
#define DescribeResourcePoliciesCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DescribeResourcePolicies, REQUEST)

#define DescribeSubscriptionFiltersAsync(...)  SubmitAsync(&CloudWatchLogsClient::DescribeSubscriptionFilters, __VA_ARGS__)
#define DescribeSubscriptionFiltersCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DescribeSubscriptionFilters, REQUEST)

#define DisassociateKmsKeyAsync(...)  SubmitAsync(&CloudWatchLogsClient::DisassociateKmsKey, __VA_ARGS__)
#define DisassociateKmsKeyCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::DisassociateKmsKey, REQUEST)

#define FilterLogEventsAsync(...)  SubmitAsync(&CloudWatchLogsClient::FilterLogEvents, __VA_ARGS__)
#define FilterLogEventsCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::FilterLogEvents, REQUEST)

#define GetLogEventsAsync(...)  SubmitAsync(&CloudWatchLogsClient::GetLogEvents, __VA_ARGS__)
#define GetLogEventsCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::GetLogEvents, REQUEST)

#define GetLogGroupFieldsAsync(...)  SubmitAsync(&CloudWatchLogsClient::GetLogGroupFields, __VA_ARGS__)
#define GetLogGroupFieldsCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::GetLogGroupFields, REQUEST)

#define GetLogRecordAsync(...)  SubmitAsync(&CloudWatchLogsClient::GetLogRecord, __VA_ARGS__)
#define GetLogRecordCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::GetLogRecord, REQUEST)

#define GetQueryResultsAsync(...)  SubmitAsync(&CloudWatchLogsClient::GetQueryResults, __VA_ARGS__)
#define GetQueryResultsCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::GetQueryResults, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CloudWatchLogsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::ListTagsForResource, REQUEST)

#define PutDestinationAsync(...)  SubmitAsync(&CloudWatchLogsClient::PutDestination, __VA_ARGS__)
#define PutDestinationCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::PutDestination, REQUEST)

#define PutDestinationPolicyAsync(...)  SubmitAsync(&CloudWatchLogsClient::PutDestinationPolicy, __VA_ARGS__)
#define PutDestinationPolicyCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::PutDestinationPolicy, REQUEST)

#define PutLogEventsAsync(...)  SubmitAsync(&CloudWatchLogsClient::PutLogEvents, __VA_ARGS__)
#define PutLogEventsCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::PutLogEvents, REQUEST)

#define PutMetricFilterAsync(...)  SubmitAsync(&CloudWatchLogsClient::PutMetricFilter, __VA_ARGS__)
#define PutMetricFilterCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::PutMetricFilter, REQUEST)

#define PutQueryDefinitionAsync(...)  SubmitAsync(&CloudWatchLogsClient::PutQueryDefinition, __VA_ARGS__)
#define PutQueryDefinitionCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::PutQueryDefinition, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&CloudWatchLogsClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::PutResourcePolicy, REQUEST)

#define PutRetentionPolicyAsync(...)  SubmitAsync(&CloudWatchLogsClient::PutRetentionPolicy, __VA_ARGS__)
#define PutRetentionPolicyCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::PutRetentionPolicy, REQUEST)

#define PutSubscriptionFilterAsync(...)  SubmitAsync(&CloudWatchLogsClient::PutSubscriptionFilter, __VA_ARGS__)
#define PutSubscriptionFilterCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::PutSubscriptionFilter, REQUEST)

#define StartQueryAsync(...)  SubmitAsync(&CloudWatchLogsClient::StartQuery, __VA_ARGS__)
#define StartQueryCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::StartQuery, REQUEST)

#define StopQueryAsync(...)  SubmitAsync(&CloudWatchLogsClient::StopQuery, __VA_ARGS__)
#define StopQueryCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::StopQuery, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CloudWatchLogsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::TagResource, REQUEST)

#define TestMetricFilterAsync(...)  SubmitAsync(&CloudWatchLogsClient::TestMetricFilter, __VA_ARGS__)
#define TestMetricFilterCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::TestMetricFilter, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CloudWatchLogsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CloudWatchLogsClient::UntagResource, REQUEST)

