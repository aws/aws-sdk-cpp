/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchGetTracesAsync(...)  SubmitAsync(&XRayClient::BatchGetTraces, __VA_ARGS__)
#define BatchGetTracesCallable(REQUEST)  SubmitCallable(&XRayClient::BatchGetTraces, REQUEST)

#define CreateGroupAsync(...)  SubmitAsync(&XRayClient::CreateGroup, __VA_ARGS__)
#define CreateGroupCallable(REQUEST)  SubmitCallable(&XRayClient::CreateGroup, REQUEST)

#define CreateSamplingRuleAsync(...)  SubmitAsync(&XRayClient::CreateSamplingRule, __VA_ARGS__)
#define CreateSamplingRuleCallable(REQUEST)  SubmitCallable(&XRayClient::CreateSamplingRule, REQUEST)

#define DeleteGroupAsync(...)  SubmitAsync(&XRayClient::DeleteGroup, __VA_ARGS__)
#define DeleteGroupCallable(REQUEST)  SubmitCallable(&XRayClient::DeleteGroup, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&XRayClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&XRayClient::DeleteResourcePolicy, REQUEST)

#define DeleteSamplingRuleAsync(...)  SubmitAsync(&XRayClient::DeleteSamplingRule, __VA_ARGS__)
#define DeleteSamplingRuleCallable(REQUEST)  SubmitCallable(&XRayClient::DeleteSamplingRule, REQUEST)

#define GetEncryptionConfigAsync(...)  SubmitAsync(&XRayClient::GetEncryptionConfig, __VA_ARGS__)
#define GetEncryptionConfigCallable(REQUEST)  SubmitCallable(&XRayClient::GetEncryptionConfig, REQUEST)

#define GetGroupAsync(...)  SubmitAsync(&XRayClient::GetGroup, __VA_ARGS__)
#define GetGroupCallable(REQUEST)  SubmitCallable(&XRayClient::GetGroup, REQUEST)

#define GetGroupsAsync(...)  SubmitAsync(&XRayClient::GetGroups, __VA_ARGS__)
#define GetGroupsCallable(REQUEST)  SubmitCallable(&XRayClient::GetGroups, REQUEST)

#define GetInsightAsync(...)  SubmitAsync(&XRayClient::GetInsight, __VA_ARGS__)
#define GetInsightCallable(REQUEST)  SubmitCallable(&XRayClient::GetInsight, REQUEST)

#define GetInsightEventsAsync(...)  SubmitAsync(&XRayClient::GetInsightEvents, __VA_ARGS__)
#define GetInsightEventsCallable(REQUEST)  SubmitCallable(&XRayClient::GetInsightEvents, REQUEST)

#define GetInsightImpactGraphAsync(...)  SubmitAsync(&XRayClient::GetInsightImpactGraph, __VA_ARGS__)
#define GetInsightImpactGraphCallable(REQUEST)  SubmitCallable(&XRayClient::GetInsightImpactGraph, REQUEST)

#define GetInsightSummariesAsync(...)  SubmitAsync(&XRayClient::GetInsightSummaries, __VA_ARGS__)
#define GetInsightSummariesCallable(REQUEST)  SubmitCallable(&XRayClient::GetInsightSummaries, REQUEST)

#define GetSamplingRulesAsync(...)  SubmitAsync(&XRayClient::GetSamplingRules, __VA_ARGS__)
#define GetSamplingRulesCallable(REQUEST)  SubmitCallable(&XRayClient::GetSamplingRules, REQUEST)

#define GetSamplingStatisticSummariesAsync(...)  SubmitAsync(&XRayClient::GetSamplingStatisticSummaries, __VA_ARGS__)
#define GetSamplingStatisticSummariesCallable(REQUEST)  SubmitCallable(&XRayClient::GetSamplingStatisticSummaries, REQUEST)

#define GetSamplingTargetsAsync(...)  SubmitAsync(&XRayClient::GetSamplingTargets, __VA_ARGS__)
#define GetSamplingTargetsCallable(REQUEST)  SubmitCallable(&XRayClient::GetSamplingTargets, REQUEST)

#define GetServiceGraphAsync(...)  SubmitAsync(&XRayClient::GetServiceGraph, __VA_ARGS__)
#define GetServiceGraphCallable(REQUEST)  SubmitCallable(&XRayClient::GetServiceGraph, REQUEST)

#define GetTimeSeriesServiceStatisticsAsync(...)  SubmitAsync(&XRayClient::GetTimeSeriesServiceStatistics, __VA_ARGS__)
#define GetTimeSeriesServiceStatisticsCallable(REQUEST)  SubmitCallable(&XRayClient::GetTimeSeriesServiceStatistics, REQUEST)

#define GetTraceGraphAsync(...)  SubmitAsync(&XRayClient::GetTraceGraph, __VA_ARGS__)
#define GetTraceGraphCallable(REQUEST)  SubmitCallable(&XRayClient::GetTraceGraph, REQUEST)

#define GetTraceSummariesAsync(...)  SubmitAsync(&XRayClient::GetTraceSummaries, __VA_ARGS__)
#define GetTraceSummariesCallable(REQUEST)  SubmitCallable(&XRayClient::GetTraceSummaries, REQUEST)

#define ListResourcePoliciesAsync(...)  SubmitAsync(&XRayClient::ListResourcePolicies, __VA_ARGS__)
#define ListResourcePoliciesCallable(REQUEST)  SubmitCallable(&XRayClient::ListResourcePolicies, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&XRayClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&XRayClient::ListTagsForResource, REQUEST)

#define PutEncryptionConfigAsync(...)  SubmitAsync(&XRayClient::PutEncryptionConfig, __VA_ARGS__)
#define PutEncryptionConfigCallable(REQUEST)  SubmitCallable(&XRayClient::PutEncryptionConfig, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&XRayClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&XRayClient::PutResourcePolicy, REQUEST)

#define PutTelemetryRecordsAsync(...)  SubmitAsync(&XRayClient::PutTelemetryRecords, __VA_ARGS__)
#define PutTelemetryRecordsCallable(REQUEST)  SubmitCallable(&XRayClient::PutTelemetryRecords, REQUEST)

#define PutTraceSegmentsAsync(...)  SubmitAsync(&XRayClient::PutTraceSegments, __VA_ARGS__)
#define PutTraceSegmentsCallable(REQUEST)  SubmitCallable(&XRayClient::PutTraceSegments, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&XRayClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&XRayClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&XRayClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&XRayClient::UntagResource, REQUEST)

#define UpdateGroupAsync(...)  SubmitAsync(&XRayClient::UpdateGroup, __VA_ARGS__)
#define UpdateGroupCallable(REQUEST)  SubmitCallable(&XRayClient::UpdateGroup, REQUEST)

#define UpdateSamplingRuleAsync(...)  SubmitAsync(&XRayClient::UpdateSamplingRule, __VA_ARGS__)
#define UpdateSamplingRuleCallable(REQUEST)  SubmitCallable(&XRayClient::UpdateSamplingRule, REQUEST)

