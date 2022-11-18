/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddAttributesToFindingsAsync(...)  SubmitAsync(&InspectorClient::AddAttributesToFindings, __VA_ARGS__)
#define AddAttributesToFindingsCallable(REQUEST)  SubmitCallable(&InspectorClient::AddAttributesToFindings, REQUEST)

#define CreateAssessmentTargetAsync(...)  SubmitAsync(&InspectorClient::CreateAssessmentTarget, __VA_ARGS__)
#define CreateAssessmentTargetCallable(REQUEST)  SubmitCallable(&InspectorClient::CreateAssessmentTarget, REQUEST)

#define CreateAssessmentTemplateAsync(...)  SubmitAsync(&InspectorClient::CreateAssessmentTemplate, __VA_ARGS__)
#define CreateAssessmentTemplateCallable(REQUEST)  SubmitCallable(&InspectorClient::CreateAssessmentTemplate, REQUEST)

#define CreateExclusionsPreviewAsync(...)  SubmitAsync(&InspectorClient::CreateExclusionsPreview, __VA_ARGS__)
#define CreateExclusionsPreviewCallable(REQUEST)  SubmitCallable(&InspectorClient::CreateExclusionsPreview, REQUEST)

#define CreateResourceGroupAsync(...)  SubmitAsync(&InspectorClient::CreateResourceGroup, __VA_ARGS__)
#define CreateResourceGroupCallable(REQUEST)  SubmitCallable(&InspectorClient::CreateResourceGroup, REQUEST)

#define DeleteAssessmentRunAsync(...)  SubmitAsync(&InspectorClient::DeleteAssessmentRun, __VA_ARGS__)
#define DeleteAssessmentRunCallable(REQUEST)  SubmitCallable(&InspectorClient::DeleteAssessmentRun, REQUEST)

#define DeleteAssessmentTargetAsync(...)  SubmitAsync(&InspectorClient::DeleteAssessmentTarget, __VA_ARGS__)
#define DeleteAssessmentTargetCallable(REQUEST)  SubmitCallable(&InspectorClient::DeleteAssessmentTarget, REQUEST)

#define DeleteAssessmentTemplateAsync(...)  SubmitAsync(&InspectorClient::DeleteAssessmentTemplate, __VA_ARGS__)
#define DeleteAssessmentTemplateCallable(REQUEST)  SubmitCallable(&InspectorClient::DeleteAssessmentTemplate, REQUEST)

#define DescribeAssessmentRunsAsync(...)  SubmitAsync(&InspectorClient::DescribeAssessmentRuns, __VA_ARGS__)
#define DescribeAssessmentRunsCallable(REQUEST)  SubmitCallable(&InspectorClient::DescribeAssessmentRuns, REQUEST)

#define DescribeAssessmentTargetsAsync(...)  SubmitAsync(&InspectorClient::DescribeAssessmentTargets, __VA_ARGS__)
#define DescribeAssessmentTargetsCallable(REQUEST)  SubmitCallable(&InspectorClient::DescribeAssessmentTargets, REQUEST)

#define DescribeAssessmentTemplatesAsync(...)  SubmitAsync(&InspectorClient::DescribeAssessmentTemplates, __VA_ARGS__)
#define DescribeAssessmentTemplatesCallable(REQUEST)  SubmitCallable(&InspectorClient::DescribeAssessmentTemplates, REQUEST)


#define DescribeExclusionsAsync(...)  SubmitAsync(&InspectorClient::DescribeExclusions, __VA_ARGS__)
#define DescribeExclusionsCallable(REQUEST)  SubmitCallable(&InspectorClient::DescribeExclusions, REQUEST)

#define DescribeFindingsAsync(...)  SubmitAsync(&InspectorClient::DescribeFindings, __VA_ARGS__)
#define DescribeFindingsCallable(REQUEST)  SubmitCallable(&InspectorClient::DescribeFindings, REQUEST)

#define DescribeResourceGroupsAsync(...)  SubmitAsync(&InspectorClient::DescribeResourceGroups, __VA_ARGS__)
#define DescribeResourceGroupsCallable(REQUEST)  SubmitCallable(&InspectorClient::DescribeResourceGroups, REQUEST)

#define DescribeRulesPackagesAsync(...)  SubmitAsync(&InspectorClient::DescribeRulesPackages, __VA_ARGS__)
#define DescribeRulesPackagesCallable(REQUEST)  SubmitCallable(&InspectorClient::DescribeRulesPackages, REQUEST)

#define GetAssessmentReportAsync(...)  SubmitAsync(&InspectorClient::GetAssessmentReport, __VA_ARGS__)
#define GetAssessmentReportCallable(REQUEST)  SubmitCallable(&InspectorClient::GetAssessmentReport, REQUEST)

#define GetExclusionsPreviewAsync(...)  SubmitAsync(&InspectorClient::GetExclusionsPreview, __VA_ARGS__)
#define GetExclusionsPreviewCallable(REQUEST)  SubmitCallable(&InspectorClient::GetExclusionsPreview, REQUEST)

#define GetTelemetryMetadataAsync(...)  SubmitAsync(&InspectorClient::GetTelemetryMetadata, __VA_ARGS__)
#define GetTelemetryMetadataCallable(REQUEST)  SubmitCallable(&InspectorClient::GetTelemetryMetadata, REQUEST)

#define ListAssessmentRunAgentsAsync(...)  SubmitAsync(&InspectorClient::ListAssessmentRunAgents, __VA_ARGS__)
#define ListAssessmentRunAgentsCallable(REQUEST)  SubmitCallable(&InspectorClient::ListAssessmentRunAgents, REQUEST)

#define ListAssessmentRunsAsync(...)  SubmitAsync(&InspectorClient::ListAssessmentRuns, __VA_ARGS__)
#define ListAssessmentRunsCallable(REQUEST)  SubmitCallable(&InspectorClient::ListAssessmentRuns, REQUEST)

#define ListAssessmentTargetsAsync(...)  SubmitAsync(&InspectorClient::ListAssessmentTargets, __VA_ARGS__)
#define ListAssessmentTargetsCallable(REQUEST)  SubmitCallable(&InspectorClient::ListAssessmentTargets, REQUEST)

#define ListAssessmentTemplatesAsync(...)  SubmitAsync(&InspectorClient::ListAssessmentTemplates, __VA_ARGS__)
#define ListAssessmentTemplatesCallable(REQUEST)  SubmitCallable(&InspectorClient::ListAssessmentTemplates, REQUEST)

#define ListEventSubscriptionsAsync(...)  SubmitAsync(&InspectorClient::ListEventSubscriptions, __VA_ARGS__)
#define ListEventSubscriptionsCallable(REQUEST)  SubmitCallable(&InspectorClient::ListEventSubscriptions, REQUEST)

#define ListExclusionsAsync(...)  SubmitAsync(&InspectorClient::ListExclusions, __VA_ARGS__)
#define ListExclusionsCallable(REQUEST)  SubmitCallable(&InspectorClient::ListExclusions, REQUEST)

#define ListFindingsAsync(...)  SubmitAsync(&InspectorClient::ListFindings, __VA_ARGS__)
#define ListFindingsCallable(REQUEST)  SubmitCallable(&InspectorClient::ListFindings, REQUEST)

#define ListRulesPackagesAsync(...)  SubmitAsync(&InspectorClient::ListRulesPackages, __VA_ARGS__)
#define ListRulesPackagesCallable(REQUEST)  SubmitCallable(&InspectorClient::ListRulesPackages, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&InspectorClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&InspectorClient::ListTagsForResource, REQUEST)

#define PreviewAgentsAsync(...)  SubmitAsync(&InspectorClient::PreviewAgents, __VA_ARGS__)
#define PreviewAgentsCallable(REQUEST)  SubmitCallable(&InspectorClient::PreviewAgents, REQUEST)

#define RegisterCrossAccountAccessRoleAsync(...)  SubmitAsync(&InspectorClient::RegisterCrossAccountAccessRole, __VA_ARGS__)
#define RegisterCrossAccountAccessRoleCallable(REQUEST)  SubmitCallable(&InspectorClient::RegisterCrossAccountAccessRole, REQUEST)

#define RemoveAttributesFromFindingsAsync(...)  SubmitAsync(&InspectorClient::RemoveAttributesFromFindings, __VA_ARGS__)
#define RemoveAttributesFromFindingsCallable(REQUEST)  SubmitCallable(&InspectorClient::RemoveAttributesFromFindings, REQUEST)

#define SetTagsForResourceAsync(...)  SubmitAsync(&InspectorClient::SetTagsForResource, __VA_ARGS__)
#define SetTagsForResourceCallable(REQUEST)  SubmitCallable(&InspectorClient::SetTagsForResource, REQUEST)

#define StartAssessmentRunAsync(...)  SubmitAsync(&InspectorClient::StartAssessmentRun, __VA_ARGS__)
#define StartAssessmentRunCallable(REQUEST)  SubmitCallable(&InspectorClient::StartAssessmentRun, REQUEST)

#define StopAssessmentRunAsync(...)  SubmitAsync(&InspectorClient::StopAssessmentRun, __VA_ARGS__)
#define StopAssessmentRunCallable(REQUEST)  SubmitCallable(&InspectorClient::StopAssessmentRun, REQUEST)

#define SubscribeToEventAsync(...)  SubmitAsync(&InspectorClient::SubscribeToEvent, __VA_ARGS__)
#define SubscribeToEventCallable(REQUEST)  SubmitCallable(&InspectorClient::SubscribeToEvent, REQUEST)

#define UnsubscribeFromEventAsync(...)  SubmitAsync(&InspectorClient::UnsubscribeFromEvent, __VA_ARGS__)
#define UnsubscribeFromEventCallable(REQUEST)  SubmitCallable(&InspectorClient::UnsubscribeFromEvent, REQUEST)

#define UpdateAssessmentTargetAsync(...)  SubmitAsync(&InspectorClient::UpdateAssessmentTarget, __VA_ARGS__)
#define UpdateAssessmentTargetCallable(REQUEST)  SubmitCallable(&InspectorClient::UpdateAssessmentTarget, REQUEST)

