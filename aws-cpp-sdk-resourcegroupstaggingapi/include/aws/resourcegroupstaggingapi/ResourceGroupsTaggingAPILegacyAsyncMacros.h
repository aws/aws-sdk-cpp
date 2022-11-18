/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DescribeReportCreationAsync(...)  SubmitAsync(&ResourceGroupsTaggingAPIClient::DescribeReportCreation, __VA_ARGS__)
#define DescribeReportCreationCallable(REQUEST)  SubmitCallable(&ResourceGroupsTaggingAPIClient::DescribeReportCreation, REQUEST)

#define GetComplianceSummaryAsync(...)  SubmitAsync(&ResourceGroupsTaggingAPIClient::GetComplianceSummary, __VA_ARGS__)
#define GetComplianceSummaryCallable(REQUEST)  SubmitCallable(&ResourceGroupsTaggingAPIClient::GetComplianceSummary, REQUEST)

#define GetResourcesAsync(...)  SubmitAsync(&ResourceGroupsTaggingAPIClient::GetResources, __VA_ARGS__)
#define GetResourcesCallable(REQUEST)  SubmitCallable(&ResourceGroupsTaggingAPIClient::GetResources, REQUEST)

#define GetTagKeysAsync(...)  SubmitAsync(&ResourceGroupsTaggingAPIClient::GetTagKeys, __VA_ARGS__)
#define GetTagKeysCallable(REQUEST)  SubmitCallable(&ResourceGroupsTaggingAPIClient::GetTagKeys, REQUEST)

#define GetTagValuesAsync(...)  SubmitAsync(&ResourceGroupsTaggingAPIClient::GetTagValues, __VA_ARGS__)
#define GetTagValuesCallable(REQUEST)  SubmitCallable(&ResourceGroupsTaggingAPIClient::GetTagValues, REQUEST)

#define StartReportCreationAsync(...)  SubmitAsync(&ResourceGroupsTaggingAPIClient::StartReportCreation, __VA_ARGS__)
#define StartReportCreationCallable(REQUEST)  SubmitCallable(&ResourceGroupsTaggingAPIClient::StartReportCreation, REQUEST)

#define TagResourcesAsync(...)  SubmitAsync(&ResourceGroupsTaggingAPIClient::TagResources, __VA_ARGS__)
#define TagResourcesCallable(REQUEST)  SubmitCallable(&ResourceGroupsTaggingAPIClient::TagResources, REQUEST)

#define UntagResourcesAsync(...)  SubmitAsync(&ResourceGroupsTaggingAPIClient::UntagResources, __VA_ARGS__)
#define UntagResourcesCallable(REQUEST)  SubmitCallable(&ResourceGroupsTaggingAPIClient::UntagResources, REQUEST)

