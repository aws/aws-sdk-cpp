/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddNotificationChannelsAsync(...)  SubmitAsync(&CodeGuruProfilerClient::AddNotificationChannels, __VA_ARGS__)
#define AddNotificationChannelsCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::AddNotificationChannels, REQUEST)

#define BatchGetFrameMetricDataAsync(...)  SubmitAsync(&CodeGuruProfilerClient::BatchGetFrameMetricData, __VA_ARGS__)
#define BatchGetFrameMetricDataCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::BatchGetFrameMetricData, REQUEST)

#define ConfigureAgentAsync(...)  SubmitAsync(&CodeGuruProfilerClient::ConfigureAgent, __VA_ARGS__)
#define ConfigureAgentCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::ConfigureAgent, REQUEST)

#define CreateProfilingGroupAsync(...)  SubmitAsync(&CodeGuruProfilerClient::CreateProfilingGroup, __VA_ARGS__)
#define CreateProfilingGroupCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::CreateProfilingGroup, REQUEST)

#define DeleteProfilingGroupAsync(...)  SubmitAsync(&CodeGuruProfilerClient::DeleteProfilingGroup, __VA_ARGS__)
#define DeleteProfilingGroupCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::DeleteProfilingGroup, REQUEST)

#define DescribeProfilingGroupAsync(...)  SubmitAsync(&CodeGuruProfilerClient::DescribeProfilingGroup, __VA_ARGS__)
#define DescribeProfilingGroupCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::DescribeProfilingGroup, REQUEST)

#define GetFindingsReportAccountSummaryAsync(...)  SubmitAsync(&CodeGuruProfilerClient::GetFindingsReportAccountSummary, __VA_ARGS__)
#define GetFindingsReportAccountSummaryCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::GetFindingsReportAccountSummary, REQUEST)

#define GetNotificationConfigurationAsync(...)  SubmitAsync(&CodeGuruProfilerClient::GetNotificationConfiguration, __VA_ARGS__)
#define GetNotificationConfigurationCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::GetNotificationConfiguration, REQUEST)

#define GetPolicyAsync(...)  SubmitAsync(&CodeGuruProfilerClient::GetPolicy, __VA_ARGS__)
#define GetPolicyCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::GetPolicy, REQUEST)

#define GetProfileAsync(...)  SubmitAsync(&CodeGuruProfilerClient::GetProfile, __VA_ARGS__)
#define GetProfileCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::GetProfile, REQUEST)

#define GetRecommendationsAsync(...)  SubmitAsync(&CodeGuruProfilerClient::GetRecommendations, __VA_ARGS__)
#define GetRecommendationsCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::GetRecommendations, REQUEST)

#define ListFindingsReportsAsync(...)  SubmitAsync(&CodeGuruProfilerClient::ListFindingsReports, __VA_ARGS__)
#define ListFindingsReportsCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::ListFindingsReports, REQUEST)

#define ListProfileTimesAsync(...)  SubmitAsync(&CodeGuruProfilerClient::ListProfileTimes, __VA_ARGS__)
#define ListProfileTimesCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::ListProfileTimes, REQUEST)

#define ListProfilingGroupsAsync(...)  SubmitAsync(&CodeGuruProfilerClient::ListProfilingGroups, __VA_ARGS__)
#define ListProfilingGroupsCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::ListProfilingGroups, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CodeGuruProfilerClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::ListTagsForResource, REQUEST)

#define PostAgentProfileAsync(...)  SubmitAsync(&CodeGuruProfilerClient::PostAgentProfile, __VA_ARGS__)
#define PostAgentProfileCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::PostAgentProfile, REQUEST)

#define PutPermissionAsync(...)  SubmitAsync(&CodeGuruProfilerClient::PutPermission, __VA_ARGS__)
#define PutPermissionCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::PutPermission, REQUEST)

#define RemoveNotificationChannelAsync(...)  SubmitAsync(&CodeGuruProfilerClient::RemoveNotificationChannel, __VA_ARGS__)
#define RemoveNotificationChannelCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::RemoveNotificationChannel, REQUEST)

#define RemovePermissionAsync(...)  SubmitAsync(&CodeGuruProfilerClient::RemovePermission, __VA_ARGS__)
#define RemovePermissionCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::RemovePermission, REQUEST)

#define SubmitFeedbackAsync(...)  SubmitAsync(&CodeGuruProfilerClient::SubmitFeedback, __VA_ARGS__)
#define SubmitFeedbackCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::SubmitFeedback, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CodeGuruProfilerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CodeGuruProfilerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::UntagResource, REQUEST)

#define UpdateProfilingGroupAsync(...)  SubmitAsync(&CodeGuruProfilerClient::UpdateProfilingGroup, __VA_ARGS__)
#define UpdateProfilingGroupCallable(REQUEST)  SubmitCallable(&CodeGuruProfilerClient::UpdateProfilingGroup, REQUEST)

