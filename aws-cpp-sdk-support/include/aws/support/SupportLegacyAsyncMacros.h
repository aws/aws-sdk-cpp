/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddAttachmentsToSetAsync(...)  SubmitAsync(&SupportClient::AddAttachmentsToSet, __VA_ARGS__)
#define AddAttachmentsToSetCallable(REQUEST)  SubmitCallable(&SupportClient::AddAttachmentsToSet, REQUEST)

#define AddCommunicationToCaseAsync(...)  SubmitAsync(&SupportClient::AddCommunicationToCase, __VA_ARGS__)
#define AddCommunicationToCaseCallable(REQUEST)  SubmitCallable(&SupportClient::AddCommunicationToCase, REQUEST)

#define CreateCaseAsync(...)  SubmitAsync(&SupportClient::CreateCase, __VA_ARGS__)
#define CreateCaseCallable(REQUEST)  SubmitCallable(&SupportClient::CreateCase, REQUEST)

#define DescribeAttachmentAsync(...)  SubmitAsync(&SupportClient::DescribeAttachment, __VA_ARGS__)
#define DescribeAttachmentCallable(REQUEST)  SubmitCallable(&SupportClient::DescribeAttachment, REQUEST)

#define DescribeCasesAsync(...)  SubmitAsync(&SupportClient::DescribeCases, __VA_ARGS__)
#define DescribeCasesCallable(REQUEST)  SubmitCallable(&SupportClient::DescribeCases, REQUEST)

#define DescribeCommunicationsAsync(...)  SubmitAsync(&SupportClient::DescribeCommunications, __VA_ARGS__)
#define DescribeCommunicationsCallable(REQUEST)  SubmitCallable(&SupportClient::DescribeCommunications, REQUEST)

#define DescribeServicesAsync(...)  SubmitAsync(&SupportClient::DescribeServices, __VA_ARGS__)
#define DescribeServicesCallable(REQUEST)  SubmitCallable(&SupportClient::DescribeServices, REQUEST)

#define DescribeSeverityLevelsAsync(...)  SubmitAsync(&SupportClient::DescribeSeverityLevels, __VA_ARGS__)
#define DescribeSeverityLevelsCallable(REQUEST)  SubmitCallable(&SupportClient::DescribeSeverityLevels, REQUEST)

#define DescribeTrustedAdvisorCheckRefreshStatusesAsync(...)  SubmitAsync(&SupportClient::DescribeTrustedAdvisorCheckRefreshStatuses, __VA_ARGS__)
#define DescribeTrustedAdvisorCheckRefreshStatusesCallable(REQUEST)  SubmitCallable(&SupportClient::DescribeTrustedAdvisorCheckRefreshStatuses, REQUEST)

#define DescribeTrustedAdvisorCheckResultAsync(...)  SubmitAsync(&SupportClient::DescribeTrustedAdvisorCheckResult, __VA_ARGS__)
#define DescribeTrustedAdvisorCheckResultCallable(REQUEST)  SubmitCallable(&SupportClient::DescribeTrustedAdvisorCheckResult, REQUEST)

#define DescribeTrustedAdvisorCheckSummariesAsync(...)  SubmitAsync(&SupportClient::DescribeTrustedAdvisorCheckSummaries, __VA_ARGS__)
#define DescribeTrustedAdvisorCheckSummariesCallable(REQUEST)  SubmitCallable(&SupportClient::DescribeTrustedAdvisorCheckSummaries, REQUEST)

#define DescribeTrustedAdvisorChecksAsync(...)  SubmitAsync(&SupportClient::DescribeTrustedAdvisorChecks, __VA_ARGS__)
#define DescribeTrustedAdvisorChecksCallable(REQUEST)  SubmitCallable(&SupportClient::DescribeTrustedAdvisorChecks, REQUEST)

#define RefreshTrustedAdvisorCheckAsync(...)  SubmitAsync(&SupportClient::RefreshTrustedAdvisorCheck, __VA_ARGS__)
#define RefreshTrustedAdvisorCheckCallable(REQUEST)  SubmitCallable(&SupportClient::RefreshTrustedAdvisorCheck, REQUEST)

#define ResolveCaseAsync(...)  SubmitAsync(&SupportClient::ResolveCase, __VA_ARGS__)
#define ResolveCaseCallable(REQUEST)  SubmitCallable(&SupportClient::ResolveCase, REQUEST)

