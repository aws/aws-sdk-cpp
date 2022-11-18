/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateCellAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::CreateCell, __VA_ARGS__)
#define CreateCellCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::CreateCell, REQUEST)

#define CreateCrossAccountAuthorizationAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::CreateCrossAccountAuthorization, __VA_ARGS__)
#define CreateCrossAccountAuthorizationCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::CreateCrossAccountAuthorization, REQUEST)

#define CreateReadinessCheckAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::CreateReadinessCheck, __VA_ARGS__)
#define CreateReadinessCheckCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::CreateReadinessCheck, REQUEST)

#define CreateRecoveryGroupAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::CreateRecoveryGroup, __VA_ARGS__)
#define CreateRecoveryGroupCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::CreateRecoveryGroup, REQUEST)

#define CreateResourceSetAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::CreateResourceSet, __VA_ARGS__)
#define CreateResourceSetCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::CreateResourceSet, REQUEST)

#define DeleteCellAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::DeleteCell, __VA_ARGS__)
#define DeleteCellCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::DeleteCell, REQUEST)

#define DeleteCrossAccountAuthorizationAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::DeleteCrossAccountAuthorization, __VA_ARGS__)
#define DeleteCrossAccountAuthorizationCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::DeleteCrossAccountAuthorization, REQUEST)

#define DeleteReadinessCheckAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::DeleteReadinessCheck, __VA_ARGS__)
#define DeleteReadinessCheckCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::DeleteReadinessCheck, REQUEST)

#define DeleteRecoveryGroupAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::DeleteRecoveryGroup, __VA_ARGS__)
#define DeleteRecoveryGroupCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::DeleteRecoveryGroup, REQUEST)

#define DeleteResourceSetAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::DeleteResourceSet, __VA_ARGS__)
#define DeleteResourceSetCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::DeleteResourceSet, REQUEST)

#define GetArchitectureRecommendationsAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::GetArchitectureRecommendations, __VA_ARGS__)
#define GetArchitectureRecommendationsCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::GetArchitectureRecommendations, REQUEST)

#define GetCellAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::GetCell, __VA_ARGS__)
#define GetCellCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::GetCell, REQUEST)

#define GetCellReadinessSummaryAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::GetCellReadinessSummary, __VA_ARGS__)
#define GetCellReadinessSummaryCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::GetCellReadinessSummary, REQUEST)

#define GetReadinessCheckAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::GetReadinessCheck, __VA_ARGS__)
#define GetReadinessCheckCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::GetReadinessCheck, REQUEST)

#define GetReadinessCheckResourceStatusAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::GetReadinessCheckResourceStatus, __VA_ARGS__)
#define GetReadinessCheckResourceStatusCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::GetReadinessCheckResourceStatus, REQUEST)

#define GetReadinessCheckStatusAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::GetReadinessCheckStatus, __VA_ARGS__)
#define GetReadinessCheckStatusCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::GetReadinessCheckStatus, REQUEST)

#define GetRecoveryGroupAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::GetRecoveryGroup, __VA_ARGS__)
#define GetRecoveryGroupCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::GetRecoveryGroup, REQUEST)

#define GetRecoveryGroupReadinessSummaryAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::GetRecoveryGroupReadinessSummary, __VA_ARGS__)
#define GetRecoveryGroupReadinessSummaryCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::GetRecoveryGroupReadinessSummary, REQUEST)

#define GetResourceSetAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::GetResourceSet, __VA_ARGS__)
#define GetResourceSetCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::GetResourceSet, REQUEST)

#define ListCellsAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::ListCells, __VA_ARGS__)
#define ListCellsCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::ListCells, REQUEST)

#define ListCrossAccountAuthorizationsAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::ListCrossAccountAuthorizations, __VA_ARGS__)
#define ListCrossAccountAuthorizationsCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::ListCrossAccountAuthorizations, REQUEST)

#define ListReadinessChecksAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::ListReadinessChecks, __VA_ARGS__)
#define ListReadinessChecksCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::ListReadinessChecks, REQUEST)

#define ListRecoveryGroupsAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::ListRecoveryGroups, __VA_ARGS__)
#define ListRecoveryGroupsCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::ListRecoveryGroups, REQUEST)

#define ListResourceSetsAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::ListResourceSets, __VA_ARGS__)
#define ListResourceSetsCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::ListResourceSets, REQUEST)

#define ListRulesAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::ListRules, __VA_ARGS__)
#define ListRulesCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::ListRules, REQUEST)

#define ListTagsForResourcesAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::ListTagsForResources, __VA_ARGS__)
#define ListTagsForResourcesCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::ListTagsForResources, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::UntagResource, REQUEST)

#define UpdateCellAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::UpdateCell, __VA_ARGS__)
#define UpdateCellCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::UpdateCell, REQUEST)

#define UpdateReadinessCheckAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::UpdateReadinessCheck, __VA_ARGS__)
#define UpdateReadinessCheckCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::UpdateReadinessCheck, REQUEST)

#define UpdateRecoveryGroupAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::UpdateRecoveryGroup, __VA_ARGS__)
#define UpdateRecoveryGroupCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::UpdateRecoveryGroup, REQUEST)

#define UpdateResourceSetAsync(...)  SubmitAsync(&Route53RecoveryReadinessClient::UpdateResourceSet, __VA_ARGS__)
#define UpdateResourceSetCallable(REQUEST)  SubmitCallable(&Route53RecoveryReadinessClient::UpdateResourceSet, REQUEST)

