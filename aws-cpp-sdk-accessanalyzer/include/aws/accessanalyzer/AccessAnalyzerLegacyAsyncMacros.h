/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ApplyArchiveRuleAsync(...)  SubmitAsync(&AccessAnalyzerClient::ApplyArchiveRule, __VA_ARGS__)
#define ApplyArchiveRuleCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::ApplyArchiveRule, REQUEST)

#define CancelPolicyGenerationAsync(...)  SubmitAsync(&AccessAnalyzerClient::CancelPolicyGeneration, __VA_ARGS__)
#define CancelPolicyGenerationCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::CancelPolicyGeneration, REQUEST)

#define CreateAccessPreviewAsync(...)  SubmitAsync(&AccessAnalyzerClient::CreateAccessPreview, __VA_ARGS__)
#define CreateAccessPreviewCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::CreateAccessPreview, REQUEST)

#define CreateAnalyzerAsync(...)  SubmitAsync(&AccessAnalyzerClient::CreateAnalyzer, __VA_ARGS__)
#define CreateAnalyzerCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::CreateAnalyzer, REQUEST)

#define CreateArchiveRuleAsync(...)  SubmitAsync(&AccessAnalyzerClient::CreateArchiveRule, __VA_ARGS__)
#define CreateArchiveRuleCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::CreateArchiveRule, REQUEST)

#define DeleteAnalyzerAsync(...)  SubmitAsync(&AccessAnalyzerClient::DeleteAnalyzer, __VA_ARGS__)
#define DeleteAnalyzerCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::DeleteAnalyzer, REQUEST)

#define DeleteArchiveRuleAsync(...)  SubmitAsync(&AccessAnalyzerClient::DeleteArchiveRule, __VA_ARGS__)
#define DeleteArchiveRuleCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::DeleteArchiveRule, REQUEST)

#define GetAccessPreviewAsync(...)  SubmitAsync(&AccessAnalyzerClient::GetAccessPreview, __VA_ARGS__)
#define GetAccessPreviewCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::GetAccessPreview, REQUEST)

#define GetAnalyzedResourceAsync(...)  SubmitAsync(&AccessAnalyzerClient::GetAnalyzedResource, __VA_ARGS__)
#define GetAnalyzedResourceCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::GetAnalyzedResource, REQUEST)

#define GetAnalyzerAsync(...)  SubmitAsync(&AccessAnalyzerClient::GetAnalyzer, __VA_ARGS__)
#define GetAnalyzerCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::GetAnalyzer, REQUEST)

#define GetArchiveRuleAsync(...)  SubmitAsync(&AccessAnalyzerClient::GetArchiveRule, __VA_ARGS__)
#define GetArchiveRuleCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::GetArchiveRule, REQUEST)

#define GetFindingAsync(...)  SubmitAsync(&AccessAnalyzerClient::GetFinding, __VA_ARGS__)
#define GetFindingCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::GetFinding, REQUEST)

#define GetGeneratedPolicyAsync(...)  SubmitAsync(&AccessAnalyzerClient::GetGeneratedPolicy, __VA_ARGS__)
#define GetGeneratedPolicyCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::GetGeneratedPolicy, REQUEST)

#define ListAccessPreviewFindingsAsync(...)  SubmitAsync(&AccessAnalyzerClient::ListAccessPreviewFindings, __VA_ARGS__)
#define ListAccessPreviewFindingsCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::ListAccessPreviewFindings, REQUEST)

#define ListAccessPreviewsAsync(...)  SubmitAsync(&AccessAnalyzerClient::ListAccessPreviews, __VA_ARGS__)
#define ListAccessPreviewsCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::ListAccessPreviews, REQUEST)

#define ListAnalyzedResourcesAsync(...)  SubmitAsync(&AccessAnalyzerClient::ListAnalyzedResources, __VA_ARGS__)
#define ListAnalyzedResourcesCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::ListAnalyzedResources, REQUEST)

#define ListAnalyzersAsync(...)  SubmitAsync(&AccessAnalyzerClient::ListAnalyzers, __VA_ARGS__)
#define ListAnalyzersCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::ListAnalyzers, REQUEST)

#define ListArchiveRulesAsync(...)  SubmitAsync(&AccessAnalyzerClient::ListArchiveRules, __VA_ARGS__)
#define ListArchiveRulesCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::ListArchiveRules, REQUEST)

#define ListFindingsAsync(...)  SubmitAsync(&AccessAnalyzerClient::ListFindings, __VA_ARGS__)
#define ListFindingsCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::ListFindings, REQUEST)

#define ListPolicyGenerationsAsync(...)  SubmitAsync(&AccessAnalyzerClient::ListPolicyGenerations, __VA_ARGS__)
#define ListPolicyGenerationsCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::ListPolicyGenerations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AccessAnalyzerClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::ListTagsForResource, REQUEST)

#define StartPolicyGenerationAsync(...)  SubmitAsync(&AccessAnalyzerClient::StartPolicyGeneration, __VA_ARGS__)
#define StartPolicyGenerationCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::StartPolicyGeneration, REQUEST)

#define StartResourceScanAsync(...)  SubmitAsync(&AccessAnalyzerClient::StartResourceScan, __VA_ARGS__)
#define StartResourceScanCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::StartResourceScan, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AccessAnalyzerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AccessAnalyzerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::UntagResource, REQUEST)

#define UpdateArchiveRuleAsync(...)  SubmitAsync(&AccessAnalyzerClient::UpdateArchiveRule, __VA_ARGS__)
#define UpdateArchiveRuleCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::UpdateArchiveRule, REQUEST)

#define UpdateFindingsAsync(...)  SubmitAsync(&AccessAnalyzerClient::UpdateFindings, __VA_ARGS__)
#define UpdateFindingsCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::UpdateFindings, REQUEST)

#define ValidatePolicyAsync(...)  SubmitAsync(&AccessAnalyzerClient::ValidatePolicy, __VA_ARGS__)
#define ValidatePolicyCallable(REQUEST)  SubmitCallable(&AccessAnalyzerClient::ValidatePolicy, REQUEST)

