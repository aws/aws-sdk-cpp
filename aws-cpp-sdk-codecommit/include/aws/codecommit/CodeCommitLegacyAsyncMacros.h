/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateApprovalRuleTemplateWithRepositoryAsync(...)  SubmitAsync(&CodeCommitClient::AssociateApprovalRuleTemplateWithRepository, __VA_ARGS__)
#define AssociateApprovalRuleTemplateWithRepositoryCallable(REQUEST)  SubmitCallable(&CodeCommitClient::AssociateApprovalRuleTemplateWithRepository, REQUEST)

#define BatchAssociateApprovalRuleTemplateWithRepositoriesAsync(...)  SubmitAsync(&CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositories, __VA_ARGS__)
#define BatchAssociateApprovalRuleTemplateWithRepositoriesCallable(REQUEST)  SubmitCallable(&CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositories, REQUEST)

#define BatchDescribeMergeConflictsAsync(...)  SubmitAsync(&CodeCommitClient::BatchDescribeMergeConflicts, __VA_ARGS__)
#define BatchDescribeMergeConflictsCallable(REQUEST)  SubmitCallable(&CodeCommitClient::BatchDescribeMergeConflicts, REQUEST)

#define BatchDisassociateApprovalRuleTemplateFromRepositoriesAsync(...)  SubmitAsync(&CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositories, __VA_ARGS__)
#define BatchDisassociateApprovalRuleTemplateFromRepositoriesCallable(REQUEST)  SubmitCallable(&CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositories, REQUEST)

#define BatchGetCommitsAsync(...)  SubmitAsync(&CodeCommitClient::BatchGetCommits, __VA_ARGS__)
#define BatchGetCommitsCallable(REQUEST)  SubmitCallable(&CodeCommitClient::BatchGetCommits, REQUEST)

#define BatchGetRepositoriesAsync(...)  SubmitAsync(&CodeCommitClient::BatchGetRepositories, __VA_ARGS__)
#define BatchGetRepositoriesCallable(REQUEST)  SubmitCallable(&CodeCommitClient::BatchGetRepositories, REQUEST)

#define CreateApprovalRuleTemplateAsync(...)  SubmitAsync(&CodeCommitClient::CreateApprovalRuleTemplate, __VA_ARGS__)
#define CreateApprovalRuleTemplateCallable(REQUEST)  SubmitCallable(&CodeCommitClient::CreateApprovalRuleTemplate, REQUEST)

#define CreateBranchAsync(...)  SubmitAsync(&CodeCommitClient::CreateBranch, __VA_ARGS__)
#define CreateBranchCallable(REQUEST)  SubmitCallable(&CodeCommitClient::CreateBranch, REQUEST)

#define CreateCommitAsync(...)  SubmitAsync(&CodeCommitClient::CreateCommit, __VA_ARGS__)
#define CreateCommitCallable(REQUEST)  SubmitCallable(&CodeCommitClient::CreateCommit, REQUEST)

#define CreatePullRequestAsync(...)  SubmitAsync(&CodeCommitClient::CreatePullRequest, __VA_ARGS__)
#define CreatePullRequestCallable(REQUEST)  SubmitCallable(&CodeCommitClient::CreatePullRequest, REQUEST)

#define CreatePullRequestApprovalRuleAsync(...)  SubmitAsync(&CodeCommitClient::CreatePullRequestApprovalRule, __VA_ARGS__)
#define CreatePullRequestApprovalRuleCallable(REQUEST)  SubmitCallable(&CodeCommitClient::CreatePullRequestApprovalRule, REQUEST)

#define CreateRepositoryAsync(...)  SubmitAsync(&CodeCommitClient::CreateRepository, __VA_ARGS__)
#define CreateRepositoryCallable(REQUEST)  SubmitCallable(&CodeCommitClient::CreateRepository, REQUEST)

#define CreateUnreferencedMergeCommitAsync(...)  SubmitAsync(&CodeCommitClient::CreateUnreferencedMergeCommit, __VA_ARGS__)
#define CreateUnreferencedMergeCommitCallable(REQUEST)  SubmitCallable(&CodeCommitClient::CreateUnreferencedMergeCommit, REQUEST)

#define DeleteApprovalRuleTemplateAsync(...)  SubmitAsync(&CodeCommitClient::DeleteApprovalRuleTemplate, __VA_ARGS__)
#define DeleteApprovalRuleTemplateCallable(REQUEST)  SubmitCallable(&CodeCommitClient::DeleteApprovalRuleTemplate, REQUEST)

#define DeleteBranchAsync(...)  SubmitAsync(&CodeCommitClient::DeleteBranch, __VA_ARGS__)
#define DeleteBranchCallable(REQUEST)  SubmitCallable(&CodeCommitClient::DeleteBranch, REQUEST)

#define DeleteCommentContentAsync(...)  SubmitAsync(&CodeCommitClient::DeleteCommentContent, __VA_ARGS__)
#define DeleteCommentContentCallable(REQUEST)  SubmitCallable(&CodeCommitClient::DeleteCommentContent, REQUEST)

#define DeleteFileAsync(...)  SubmitAsync(&CodeCommitClient::DeleteFile, __VA_ARGS__)
#define DeleteFileCallable(REQUEST)  SubmitCallable(&CodeCommitClient::DeleteFile, REQUEST)

#define DeletePullRequestApprovalRuleAsync(...)  SubmitAsync(&CodeCommitClient::DeletePullRequestApprovalRule, __VA_ARGS__)
#define DeletePullRequestApprovalRuleCallable(REQUEST)  SubmitCallable(&CodeCommitClient::DeletePullRequestApprovalRule, REQUEST)

#define DeleteRepositoryAsync(...)  SubmitAsync(&CodeCommitClient::DeleteRepository, __VA_ARGS__)
#define DeleteRepositoryCallable(REQUEST)  SubmitCallable(&CodeCommitClient::DeleteRepository, REQUEST)

#define DescribeMergeConflictsAsync(...)  SubmitAsync(&CodeCommitClient::DescribeMergeConflicts, __VA_ARGS__)
#define DescribeMergeConflictsCallable(REQUEST)  SubmitCallable(&CodeCommitClient::DescribeMergeConflicts, REQUEST)

#define DescribePullRequestEventsAsync(...)  SubmitAsync(&CodeCommitClient::DescribePullRequestEvents, __VA_ARGS__)
#define DescribePullRequestEventsCallable(REQUEST)  SubmitCallable(&CodeCommitClient::DescribePullRequestEvents, REQUEST)

#define DisassociateApprovalRuleTemplateFromRepositoryAsync(...)  SubmitAsync(&CodeCommitClient::DisassociateApprovalRuleTemplateFromRepository, __VA_ARGS__)
#define DisassociateApprovalRuleTemplateFromRepositoryCallable(REQUEST)  SubmitCallable(&CodeCommitClient::DisassociateApprovalRuleTemplateFromRepository, REQUEST)

#define EvaluatePullRequestApprovalRulesAsync(...)  SubmitAsync(&CodeCommitClient::EvaluatePullRequestApprovalRules, __VA_ARGS__)
#define EvaluatePullRequestApprovalRulesCallable(REQUEST)  SubmitCallable(&CodeCommitClient::EvaluatePullRequestApprovalRules, REQUEST)

#define GetApprovalRuleTemplateAsync(...)  SubmitAsync(&CodeCommitClient::GetApprovalRuleTemplate, __VA_ARGS__)
#define GetApprovalRuleTemplateCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetApprovalRuleTemplate, REQUEST)

#define GetBlobAsync(...)  SubmitAsync(&CodeCommitClient::GetBlob, __VA_ARGS__)
#define GetBlobCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetBlob, REQUEST)

#define GetBranchAsync(...)  SubmitAsync(&CodeCommitClient::GetBranch, __VA_ARGS__)
#define GetBranchCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetBranch, REQUEST)

#define GetCommentAsync(...)  SubmitAsync(&CodeCommitClient::GetComment, __VA_ARGS__)
#define GetCommentCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetComment, REQUEST)

#define GetCommentReactionsAsync(...)  SubmitAsync(&CodeCommitClient::GetCommentReactions, __VA_ARGS__)
#define GetCommentReactionsCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetCommentReactions, REQUEST)

#define GetCommentsForComparedCommitAsync(...)  SubmitAsync(&CodeCommitClient::GetCommentsForComparedCommit, __VA_ARGS__)
#define GetCommentsForComparedCommitCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetCommentsForComparedCommit, REQUEST)

#define GetCommentsForPullRequestAsync(...)  SubmitAsync(&CodeCommitClient::GetCommentsForPullRequest, __VA_ARGS__)
#define GetCommentsForPullRequestCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetCommentsForPullRequest, REQUEST)

#define GetCommitAsync(...)  SubmitAsync(&CodeCommitClient::GetCommit, __VA_ARGS__)
#define GetCommitCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetCommit, REQUEST)

#define GetDifferencesAsync(...)  SubmitAsync(&CodeCommitClient::GetDifferences, __VA_ARGS__)
#define GetDifferencesCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetDifferences, REQUEST)

#define GetFileAsync(...)  SubmitAsync(&CodeCommitClient::GetFile, __VA_ARGS__)
#define GetFileCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetFile, REQUEST)

#define GetFolderAsync(...)  SubmitAsync(&CodeCommitClient::GetFolder, __VA_ARGS__)
#define GetFolderCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetFolder, REQUEST)

#define GetMergeCommitAsync(...)  SubmitAsync(&CodeCommitClient::GetMergeCommit, __VA_ARGS__)
#define GetMergeCommitCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetMergeCommit, REQUEST)

#define GetMergeConflictsAsync(...)  SubmitAsync(&CodeCommitClient::GetMergeConflicts, __VA_ARGS__)
#define GetMergeConflictsCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetMergeConflicts, REQUEST)

#define GetMergeOptionsAsync(...)  SubmitAsync(&CodeCommitClient::GetMergeOptions, __VA_ARGS__)
#define GetMergeOptionsCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetMergeOptions, REQUEST)

#define GetPullRequestAsync(...)  SubmitAsync(&CodeCommitClient::GetPullRequest, __VA_ARGS__)
#define GetPullRequestCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetPullRequest, REQUEST)

#define GetPullRequestApprovalStatesAsync(...)  SubmitAsync(&CodeCommitClient::GetPullRequestApprovalStates, __VA_ARGS__)
#define GetPullRequestApprovalStatesCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetPullRequestApprovalStates, REQUEST)

#define GetPullRequestOverrideStateAsync(...)  SubmitAsync(&CodeCommitClient::GetPullRequestOverrideState, __VA_ARGS__)
#define GetPullRequestOverrideStateCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetPullRequestOverrideState, REQUEST)

#define GetRepositoryAsync(...)  SubmitAsync(&CodeCommitClient::GetRepository, __VA_ARGS__)
#define GetRepositoryCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetRepository, REQUEST)

#define GetRepositoryTriggersAsync(...)  SubmitAsync(&CodeCommitClient::GetRepositoryTriggers, __VA_ARGS__)
#define GetRepositoryTriggersCallable(REQUEST)  SubmitCallable(&CodeCommitClient::GetRepositoryTriggers, REQUEST)

#define ListApprovalRuleTemplatesAsync(...)  SubmitAsync(&CodeCommitClient::ListApprovalRuleTemplates, __VA_ARGS__)
#define ListApprovalRuleTemplatesCallable(REQUEST)  SubmitCallable(&CodeCommitClient::ListApprovalRuleTemplates, REQUEST)

#define ListAssociatedApprovalRuleTemplatesForRepositoryAsync(...)  SubmitAsync(&CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepository, __VA_ARGS__)
#define ListAssociatedApprovalRuleTemplatesForRepositoryCallable(REQUEST)  SubmitCallable(&CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepository, REQUEST)

#define ListBranchesAsync(...)  SubmitAsync(&CodeCommitClient::ListBranches, __VA_ARGS__)
#define ListBranchesCallable(REQUEST)  SubmitCallable(&CodeCommitClient::ListBranches, REQUEST)

#define ListPullRequestsAsync(...)  SubmitAsync(&CodeCommitClient::ListPullRequests, __VA_ARGS__)
#define ListPullRequestsCallable(REQUEST)  SubmitCallable(&CodeCommitClient::ListPullRequests, REQUEST)

#define ListRepositoriesAsync(...)  SubmitAsync(&CodeCommitClient::ListRepositories, __VA_ARGS__)
#define ListRepositoriesCallable(REQUEST)  SubmitCallable(&CodeCommitClient::ListRepositories, REQUEST)

#define ListRepositoriesForApprovalRuleTemplateAsync(...)  SubmitAsync(&CodeCommitClient::ListRepositoriesForApprovalRuleTemplate, __VA_ARGS__)
#define ListRepositoriesForApprovalRuleTemplateCallable(REQUEST)  SubmitCallable(&CodeCommitClient::ListRepositoriesForApprovalRuleTemplate, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CodeCommitClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CodeCommitClient::ListTagsForResource, REQUEST)

#define MergeBranchesByFastForwardAsync(...)  SubmitAsync(&CodeCommitClient::MergeBranchesByFastForward, __VA_ARGS__)
#define MergeBranchesByFastForwardCallable(REQUEST)  SubmitCallable(&CodeCommitClient::MergeBranchesByFastForward, REQUEST)

#define MergeBranchesBySquashAsync(...)  SubmitAsync(&CodeCommitClient::MergeBranchesBySquash, __VA_ARGS__)
#define MergeBranchesBySquashCallable(REQUEST)  SubmitCallable(&CodeCommitClient::MergeBranchesBySquash, REQUEST)

#define MergeBranchesByThreeWayAsync(...)  SubmitAsync(&CodeCommitClient::MergeBranchesByThreeWay, __VA_ARGS__)
#define MergeBranchesByThreeWayCallable(REQUEST)  SubmitCallable(&CodeCommitClient::MergeBranchesByThreeWay, REQUEST)

#define MergePullRequestByFastForwardAsync(...)  SubmitAsync(&CodeCommitClient::MergePullRequestByFastForward, __VA_ARGS__)
#define MergePullRequestByFastForwardCallable(REQUEST)  SubmitCallable(&CodeCommitClient::MergePullRequestByFastForward, REQUEST)

#define MergePullRequestBySquashAsync(...)  SubmitAsync(&CodeCommitClient::MergePullRequestBySquash, __VA_ARGS__)
#define MergePullRequestBySquashCallable(REQUEST)  SubmitCallable(&CodeCommitClient::MergePullRequestBySquash, REQUEST)

#define MergePullRequestByThreeWayAsync(...)  SubmitAsync(&CodeCommitClient::MergePullRequestByThreeWay, __VA_ARGS__)
#define MergePullRequestByThreeWayCallable(REQUEST)  SubmitCallable(&CodeCommitClient::MergePullRequestByThreeWay, REQUEST)

#define OverridePullRequestApprovalRulesAsync(...)  SubmitAsync(&CodeCommitClient::OverridePullRequestApprovalRules, __VA_ARGS__)
#define OverridePullRequestApprovalRulesCallable(REQUEST)  SubmitCallable(&CodeCommitClient::OverridePullRequestApprovalRules, REQUEST)

#define PostCommentForComparedCommitAsync(...)  SubmitAsync(&CodeCommitClient::PostCommentForComparedCommit, __VA_ARGS__)
#define PostCommentForComparedCommitCallable(REQUEST)  SubmitCallable(&CodeCommitClient::PostCommentForComparedCommit, REQUEST)

#define PostCommentForPullRequestAsync(...)  SubmitAsync(&CodeCommitClient::PostCommentForPullRequest, __VA_ARGS__)
#define PostCommentForPullRequestCallable(REQUEST)  SubmitCallable(&CodeCommitClient::PostCommentForPullRequest, REQUEST)

#define PostCommentReplyAsync(...)  SubmitAsync(&CodeCommitClient::PostCommentReply, __VA_ARGS__)
#define PostCommentReplyCallable(REQUEST)  SubmitCallable(&CodeCommitClient::PostCommentReply, REQUEST)

#define PutCommentReactionAsync(...)  SubmitAsync(&CodeCommitClient::PutCommentReaction, __VA_ARGS__)
#define PutCommentReactionCallable(REQUEST)  SubmitCallable(&CodeCommitClient::PutCommentReaction, REQUEST)

#define PutFileAsync(...)  SubmitAsync(&CodeCommitClient::PutFile, __VA_ARGS__)
#define PutFileCallable(REQUEST)  SubmitCallable(&CodeCommitClient::PutFile, REQUEST)

#define PutRepositoryTriggersAsync(...)  SubmitAsync(&CodeCommitClient::PutRepositoryTriggers, __VA_ARGS__)
#define PutRepositoryTriggersCallable(REQUEST)  SubmitCallable(&CodeCommitClient::PutRepositoryTriggers, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CodeCommitClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CodeCommitClient::TagResource, REQUEST)

#define TestRepositoryTriggersAsync(...)  SubmitAsync(&CodeCommitClient::TestRepositoryTriggers, __VA_ARGS__)
#define TestRepositoryTriggersCallable(REQUEST)  SubmitCallable(&CodeCommitClient::TestRepositoryTriggers, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CodeCommitClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UntagResource, REQUEST)

#define UpdateApprovalRuleTemplateContentAsync(...)  SubmitAsync(&CodeCommitClient::UpdateApprovalRuleTemplateContent, __VA_ARGS__)
#define UpdateApprovalRuleTemplateContentCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdateApprovalRuleTemplateContent, REQUEST)

#define UpdateApprovalRuleTemplateDescriptionAsync(...)  SubmitAsync(&CodeCommitClient::UpdateApprovalRuleTemplateDescription, __VA_ARGS__)
#define UpdateApprovalRuleTemplateDescriptionCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdateApprovalRuleTemplateDescription, REQUEST)

#define UpdateApprovalRuleTemplateNameAsync(...)  SubmitAsync(&CodeCommitClient::UpdateApprovalRuleTemplateName, __VA_ARGS__)
#define UpdateApprovalRuleTemplateNameCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdateApprovalRuleTemplateName, REQUEST)

#define UpdateCommentAsync(...)  SubmitAsync(&CodeCommitClient::UpdateComment, __VA_ARGS__)
#define UpdateCommentCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdateComment, REQUEST)

#define UpdateDefaultBranchAsync(...)  SubmitAsync(&CodeCommitClient::UpdateDefaultBranch, __VA_ARGS__)
#define UpdateDefaultBranchCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdateDefaultBranch, REQUEST)

#define UpdatePullRequestApprovalRuleContentAsync(...)  SubmitAsync(&CodeCommitClient::UpdatePullRequestApprovalRuleContent, __VA_ARGS__)
#define UpdatePullRequestApprovalRuleContentCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdatePullRequestApprovalRuleContent, REQUEST)

#define UpdatePullRequestApprovalStateAsync(...)  SubmitAsync(&CodeCommitClient::UpdatePullRequestApprovalState, __VA_ARGS__)
#define UpdatePullRequestApprovalStateCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdatePullRequestApprovalState, REQUEST)

#define UpdatePullRequestDescriptionAsync(...)  SubmitAsync(&CodeCommitClient::UpdatePullRequestDescription, __VA_ARGS__)
#define UpdatePullRequestDescriptionCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdatePullRequestDescription, REQUEST)

#define UpdatePullRequestStatusAsync(...)  SubmitAsync(&CodeCommitClient::UpdatePullRequestStatus, __VA_ARGS__)
#define UpdatePullRequestStatusCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdatePullRequestStatus, REQUEST)

#define UpdatePullRequestTitleAsync(...)  SubmitAsync(&CodeCommitClient::UpdatePullRequestTitle, __VA_ARGS__)
#define UpdatePullRequestTitleCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdatePullRequestTitle, REQUEST)

#define UpdateRepositoryDescriptionAsync(...)  SubmitAsync(&CodeCommitClient::UpdateRepositoryDescription, __VA_ARGS__)
#define UpdateRepositoryDescriptionCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdateRepositoryDescription, REQUEST)

#define UpdateRepositoryNameAsync(...)  SubmitAsync(&CodeCommitClient::UpdateRepositoryName, __VA_ARGS__)
#define UpdateRepositoryNameCallable(REQUEST)  SubmitCallable(&CodeCommitClient::UpdateRepositoryName, REQUEST)

