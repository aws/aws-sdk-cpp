/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateLensesAsync(...)  SubmitAsync(&WellArchitectedClient::AssociateLenses, __VA_ARGS__)
#define AssociateLensesCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::AssociateLenses, REQUEST)

#define CreateLensShareAsync(...)  SubmitAsync(&WellArchitectedClient::CreateLensShare, __VA_ARGS__)
#define CreateLensShareCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::CreateLensShare, REQUEST)

#define CreateLensVersionAsync(...)  SubmitAsync(&WellArchitectedClient::CreateLensVersion, __VA_ARGS__)
#define CreateLensVersionCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::CreateLensVersion, REQUEST)

#define CreateMilestoneAsync(...)  SubmitAsync(&WellArchitectedClient::CreateMilestone, __VA_ARGS__)
#define CreateMilestoneCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::CreateMilestone, REQUEST)

#define CreateWorkloadAsync(...)  SubmitAsync(&WellArchitectedClient::CreateWorkload, __VA_ARGS__)
#define CreateWorkloadCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::CreateWorkload, REQUEST)

#define CreateWorkloadShareAsync(...)  SubmitAsync(&WellArchitectedClient::CreateWorkloadShare, __VA_ARGS__)
#define CreateWorkloadShareCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::CreateWorkloadShare, REQUEST)

#define DeleteLensAsync(...)  SubmitAsync(&WellArchitectedClient::DeleteLens, __VA_ARGS__)
#define DeleteLensCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::DeleteLens, REQUEST)

#define DeleteLensShareAsync(...)  SubmitAsync(&WellArchitectedClient::DeleteLensShare, __VA_ARGS__)
#define DeleteLensShareCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::DeleteLensShare, REQUEST)

#define DeleteWorkloadAsync(...)  SubmitAsync(&WellArchitectedClient::DeleteWorkload, __VA_ARGS__)
#define DeleteWorkloadCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::DeleteWorkload, REQUEST)

#define DeleteWorkloadShareAsync(...)  SubmitAsync(&WellArchitectedClient::DeleteWorkloadShare, __VA_ARGS__)
#define DeleteWorkloadShareCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::DeleteWorkloadShare, REQUEST)

#define DisassociateLensesAsync(...)  SubmitAsync(&WellArchitectedClient::DisassociateLenses, __VA_ARGS__)
#define DisassociateLensesCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::DisassociateLenses, REQUEST)

#define ExportLensAsync(...)  SubmitAsync(&WellArchitectedClient::ExportLens, __VA_ARGS__)
#define ExportLensCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ExportLens, REQUEST)

#define GetAnswerAsync(...)  SubmitAsync(&WellArchitectedClient::GetAnswer, __VA_ARGS__)
#define GetAnswerCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::GetAnswer, REQUEST)

#define GetLensAsync(...)  SubmitAsync(&WellArchitectedClient::GetLens, __VA_ARGS__)
#define GetLensCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::GetLens, REQUEST)

#define GetLensReviewAsync(...)  SubmitAsync(&WellArchitectedClient::GetLensReview, __VA_ARGS__)
#define GetLensReviewCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::GetLensReview, REQUEST)

#define GetLensReviewReportAsync(...)  SubmitAsync(&WellArchitectedClient::GetLensReviewReport, __VA_ARGS__)
#define GetLensReviewReportCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::GetLensReviewReport, REQUEST)

#define GetLensVersionDifferenceAsync(...)  SubmitAsync(&WellArchitectedClient::GetLensVersionDifference, __VA_ARGS__)
#define GetLensVersionDifferenceCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::GetLensVersionDifference, REQUEST)

#define GetMilestoneAsync(...)  SubmitAsync(&WellArchitectedClient::GetMilestone, __VA_ARGS__)
#define GetMilestoneCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::GetMilestone, REQUEST)

#define GetWorkloadAsync(...)  SubmitAsync(&WellArchitectedClient::GetWorkload, __VA_ARGS__)
#define GetWorkloadCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::GetWorkload, REQUEST)

#define ImportLensAsync(...)  SubmitAsync(&WellArchitectedClient::ImportLens, __VA_ARGS__)
#define ImportLensCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ImportLens, REQUEST)

#define ListAnswersAsync(...)  SubmitAsync(&WellArchitectedClient::ListAnswers, __VA_ARGS__)
#define ListAnswersCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListAnswers, REQUEST)

#define ListCheckDetailsAsync(...)  SubmitAsync(&WellArchitectedClient::ListCheckDetails, __VA_ARGS__)
#define ListCheckDetailsCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListCheckDetails, REQUEST)

#define ListCheckSummariesAsync(...)  SubmitAsync(&WellArchitectedClient::ListCheckSummaries, __VA_ARGS__)
#define ListCheckSummariesCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListCheckSummaries, REQUEST)

#define ListLensReviewImprovementsAsync(...)  SubmitAsync(&WellArchitectedClient::ListLensReviewImprovements, __VA_ARGS__)
#define ListLensReviewImprovementsCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListLensReviewImprovements, REQUEST)

#define ListLensReviewsAsync(...)  SubmitAsync(&WellArchitectedClient::ListLensReviews, __VA_ARGS__)
#define ListLensReviewsCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListLensReviews, REQUEST)

#define ListLensSharesAsync(...)  SubmitAsync(&WellArchitectedClient::ListLensShares, __VA_ARGS__)
#define ListLensSharesCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListLensShares, REQUEST)

#define ListLensesAsync(...)  SubmitAsync(&WellArchitectedClient::ListLenses, __VA_ARGS__)
#define ListLensesCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListLenses, REQUEST)

#define ListMilestonesAsync(...)  SubmitAsync(&WellArchitectedClient::ListMilestones, __VA_ARGS__)
#define ListMilestonesCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListMilestones, REQUEST)

#define ListNotificationsAsync(...)  SubmitAsync(&WellArchitectedClient::ListNotifications, __VA_ARGS__)
#define ListNotificationsCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListNotifications, REQUEST)

#define ListShareInvitationsAsync(...)  SubmitAsync(&WellArchitectedClient::ListShareInvitations, __VA_ARGS__)
#define ListShareInvitationsCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListShareInvitations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&WellArchitectedClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListTagsForResource, REQUEST)

#define ListWorkloadSharesAsync(...)  SubmitAsync(&WellArchitectedClient::ListWorkloadShares, __VA_ARGS__)
#define ListWorkloadSharesCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListWorkloadShares, REQUEST)

#define ListWorkloadsAsync(...)  SubmitAsync(&WellArchitectedClient::ListWorkloads, __VA_ARGS__)
#define ListWorkloadsCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::ListWorkloads, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&WellArchitectedClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&WellArchitectedClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::UntagResource, REQUEST)

#define UpdateAnswerAsync(...)  SubmitAsync(&WellArchitectedClient::UpdateAnswer, __VA_ARGS__)
#define UpdateAnswerCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::UpdateAnswer, REQUEST)

#define UpdateGlobalSettingsAsync(...)  SubmitAsync(&WellArchitectedClient::UpdateGlobalSettings, __VA_ARGS__)
#define UpdateGlobalSettingsCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::UpdateGlobalSettings, REQUEST)

#define UpdateLensReviewAsync(...)  SubmitAsync(&WellArchitectedClient::UpdateLensReview, __VA_ARGS__)
#define UpdateLensReviewCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::UpdateLensReview, REQUEST)

#define UpdateShareInvitationAsync(...)  SubmitAsync(&WellArchitectedClient::UpdateShareInvitation, __VA_ARGS__)
#define UpdateShareInvitationCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::UpdateShareInvitation, REQUEST)

#define UpdateWorkloadAsync(...)  SubmitAsync(&WellArchitectedClient::UpdateWorkload, __VA_ARGS__)
#define UpdateWorkloadCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::UpdateWorkload, REQUEST)

#define UpdateWorkloadShareAsync(...)  SubmitAsync(&WellArchitectedClient::UpdateWorkloadShare, __VA_ARGS__)
#define UpdateWorkloadShareCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::UpdateWorkloadShare, REQUEST)

#define UpgradeLensReviewAsync(...)  SubmitAsync(&WellArchitectedClient::UpgradeLensReview, __VA_ARGS__)
#define UpgradeLensReviewCallable(REQUEST)  SubmitCallable(&WellArchitectedClient::UpgradeLensReview, REQUEST)

