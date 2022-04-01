﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codecommit/model/BatchAssociateApprovalRuleTemplateWithRepositoriesResult.h>
#include <aws/codecommit/model/BatchDescribeMergeConflictsResult.h>
#include <aws/codecommit/model/BatchDisassociateApprovalRuleTemplateFromRepositoriesResult.h>
#include <aws/codecommit/model/BatchGetCommitsResult.h>
#include <aws/codecommit/model/BatchGetRepositoriesResult.h>
#include <aws/codecommit/model/CreateApprovalRuleTemplateResult.h>
#include <aws/codecommit/model/CreateCommitResult.h>
#include <aws/codecommit/model/CreatePullRequestResult.h>
#include <aws/codecommit/model/CreatePullRequestApprovalRuleResult.h>
#include <aws/codecommit/model/CreateRepositoryResult.h>
#include <aws/codecommit/model/CreateUnreferencedMergeCommitResult.h>
#include <aws/codecommit/model/DeleteApprovalRuleTemplateResult.h>
#include <aws/codecommit/model/DeleteBranchResult.h>
#include <aws/codecommit/model/DeleteCommentContentResult.h>
#include <aws/codecommit/model/DeleteFileResult.h>
#include <aws/codecommit/model/DeletePullRequestApprovalRuleResult.h>
#include <aws/codecommit/model/DeleteRepositoryResult.h>
#include <aws/codecommit/model/DescribeMergeConflictsResult.h>
#include <aws/codecommit/model/DescribePullRequestEventsResult.h>
#include <aws/codecommit/model/EvaluatePullRequestApprovalRulesResult.h>
#include <aws/codecommit/model/GetApprovalRuleTemplateResult.h>
#include <aws/codecommit/model/GetBlobResult.h>
#include <aws/codecommit/model/GetBranchResult.h>
#include <aws/codecommit/model/GetCommentResult.h>
#include <aws/codecommit/model/GetCommentReactionsResult.h>
#include <aws/codecommit/model/GetCommentsForComparedCommitResult.h>
#include <aws/codecommit/model/GetCommentsForPullRequestResult.h>
#include <aws/codecommit/model/GetCommitResult.h>
#include <aws/codecommit/model/GetDifferencesResult.h>
#include <aws/codecommit/model/GetFileResult.h>
#include <aws/codecommit/model/GetFolderResult.h>
#include <aws/codecommit/model/GetMergeCommitResult.h>
#include <aws/codecommit/model/GetMergeConflictsResult.h>
#include <aws/codecommit/model/GetMergeOptionsResult.h>
#include <aws/codecommit/model/GetPullRequestResult.h>
#include <aws/codecommit/model/GetPullRequestApprovalStatesResult.h>
#include <aws/codecommit/model/GetPullRequestOverrideStateResult.h>
#include <aws/codecommit/model/GetRepositoryResult.h>
#include <aws/codecommit/model/GetRepositoryTriggersResult.h>
#include <aws/codecommit/model/ListApprovalRuleTemplatesResult.h>
#include <aws/codecommit/model/ListAssociatedApprovalRuleTemplatesForRepositoryResult.h>
#include <aws/codecommit/model/ListBranchesResult.h>
#include <aws/codecommit/model/ListPullRequestsResult.h>
#include <aws/codecommit/model/ListRepositoriesResult.h>
#include <aws/codecommit/model/ListRepositoriesForApprovalRuleTemplateResult.h>
#include <aws/codecommit/model/ListTagsForResourceResult.h>
#include <aws/codecommit/model/MergeBranchesByFastForwardResult.h>
#include <aws/codecommit/model/MergeBranchesBySquashResult.h>
#include <aws/codecommit/model/MergeBranchesByThreeWayResult.h>
#include <aws/codecommit/model/MergePullRequestByFastForwardResult.h>
#include <aws/codecommit/model/MergePullRequestBySquashResult.h>
#include <aws/codecommit/model/MergePullRequestByThreeWayResult.h>
#include <aws/codecommit/model/PostCommentForComparedCommitResult.h>
#include <aws/codecommit/model/PostCommentForPullRequestResult.h>
#include <aws/codecommit/model/PostCommentReplyResult.h>
#include <aws/codecommit/model/PutFileResult.h>
#include <aws/codecommit/model/PutRepositoryTriggersResult.h>
#include <aws/codecommit/model/TestRepositoryTriggersResult.h>
#include <aws/codecommit/model/UpdateApprovalRuleTemplateContentResult.h>
#include <aws/codecommit/model/UpdateApprovalRuleTemplateDescriptionResult.h>
#include <aws/codecommit/model/UpdateApprovalRuleTemplateNameResult.h>
#include <aws/codecommit/model/UpdateCommentResult.h>
#include <aws/codecommit/model/UpdatePullRequestApprovalRuleContentResult.h>
#include <aws/codecommit/model/UpdatePullRequestDescriptionResult.h>
#include <aws/codecommit/model/UpdatePullRequestStatusResult.h>
#include <aws/codecommit/model/UpdatePullRequestTitleResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CodeCommit
{

namespace Model
{
        class AssociateApprovalRuleTemplateWithRepositoryRequest;
        class BatchAssociateApprovalRuleTemplateWithRepositoriesRequest;
        class BatchDescribeMergeConflictsRequest;
        class BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest;
        class BatchGetCommitsRequest;
        class BatchGetRepositoriesRequest;
        class CreateApprovalRuleTemplateRequest;
        class CreateBranchRequest;
        class CreateCommitRequest;
        class CreatePullRequestRequest;
        class CreatePullRequestApprovalRuleRequest;
        class CreateRepositoryRequest;
        class CreateUnreferencedMergeCommitRequest;
        class DeleteApprovalRuleTemplateRequest;
        class DeleteBranchRequest;
        class DeleteCommentContentRequest;
        class DeleteFileRequest;
        class DeletePullRequestApprovalRuleRequest;
        class DeleteRepositoryRequest;
        class DescribeMergeConflictsRequest;
        class DescribePullRequestEventsRequest;
        class DisassociateApprovalRuleTemplateFromRepositoryRequest;
        class EvaluatePullRequestApprovalRulesRequest;
        class GetApprovalRuleTemplateRequest;
        class GetBlobRequest;
        class GetBranchRequest;
        class GetCommentRequest;
        class GetCommentReactionsRequest;
        class GetCommentsForComparedCommitRequest;
        class GetCommentsForPullRequestRequest;
        class GetCommitRequest;
        class GetDifferencesRequest;
        class GetFileRequest;
        class GetFolderRequest;
        class GetMergeCommitRequest;
        class GetMergeConflictsRequest;
        class GetMergeOptionsRequest;
        class GetPullRequestRequest;
        class GetPullRequestApprovalStatesRequest;
        class GetPullRequestOverrideStateRequest;
        class GetRepositoryRequest;
        class GetRepositoryTriggersRequest;
        class ListApprovalRuleTemplatesRequest;
        class ListAssociatedApprovalRuleTemplatesForRepositoryRequest;
        class ListBranchesRequest;
        class ListPullRequestsRequest;
        class ListRepositoriesRequest;
        class ListRepositoriesForApprovalRuleTemplateRequest;
        class ListTagsForResourceRequest;
        class MergeBranchesByFastForwardRequest;
        class MergeBranchesBySquashRequest;
        class MergeBranchesByThreeWayRequest;
        class MergePullRequestByFastForwardRequest;
        class MergePullRequestBySquashRequest;
        class MergePullRequestByThreeWayRequest;
        class OverridePullRequestApprovalRulesRequest;
        class PostCommentForComparedCommitRequest;
        class PostCommentForPullRequestRequest;
        class PostCommentReplyRequest;
        class PutCommentReactionRequest;
        class PutFileRequest;
        class PutRepositoryTriggersRequest;
        class TagResourceRequest;
        class TestRepositoryTriggersRequest;
        class UntagResourceRequest;
        class UpdateApprovalRuleTemplateContentRequest;
        class UpdateApprovalRuleTemplateDescriptionRequest;
        class UpdateApprovalRuleTemplateNameRequest;
        class UpdateCommentRequest;
        class UpdateDefaultBranchRequest;
        class UpdatePullRequestApprovalRuleContentRequest;
        class UpdatePullRequestApprovalStateRequest;
        class UpdatePullRequestDescriptionRequest;
        class UpdatePullRequestStatusRequest;
        class UpdatePullRequestTitleRequest;
        class UpdateRepositoryDescriptionRequest;
        class UpdateRepositoryNameRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, CodeCommitError> AssociateApprovalRuleTemplateWithRepositoryOutcome;
        typedef Aws::Utils::Outcome<BatchAssociateApprovalRuleTemplateWithRepositoriesResult, CodeCommitError> BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome;
        typedef Aws::Utils::Outcome<BatchDescribeMergeConflictsResult, CodeCommitError> BatchDescribeMergeConflictsOutcome;
        typedef Aws::Utils::Outcome<BatchDisassociateApprovalRuleTemplateFromRepositoriesResult, CodeCommitError> BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome;
        typedef Aws::Utils::Outcome<BatchGetCommitsResult, CodeCommitError> BatchGetCommitsOutcome;
        typedef Aws::Utils::Outcome<BatchGetRepositoriesResult, CodeCommitError> BatchGetRepositoriesOutcome;
        typedef Aws::Utils::Outcome<CreateApprovalRuleTemplateResult, CodeCommitError> CreateApprovalRuleTemplateOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodeCommitError> CreateBranchOutcome;
        typedef Aws::Utils::Outcome<CreateCommitResult, CodeCommitError> CreateCommitOutcome;
        typedef Aws::Utils::Outcome<CreatePullRequestResult, CodeCommitError> CreatePullRequestOutcome;
        typedef Aws::Utils::Outcome<CreatePullRequestApprovalRuleResult, CodeCommitError> CreatePullRequestApprovalRuleOutcome;
        typedef Aws::Utils::Outcome<CreateRepositoryResult, CodeCommitError> CreateRepositoryOutcome;
        typedef Aws::Utils::Outcome<CreateUnreferencedMergeCommitResult, CodeCommitError> CreateUnreferencedMergeCommitOutcome;
        typedef Aws::Utils::Outcome<DeleteApprovalRuleTemplateResult, CodeCommitError> DeleteApprovalRuleTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteBranchResult, CodeCommitError> DeleteBranchOutcome;
        typedef Aws::Utils::Outcome<DeleteCommentContentResult, CodeCommitError> DeleteCommentContentOutcome;
        typedef Aws::Utils::Outcome<DeleteFileResult, CodeCommitError> DeleteFileOutcome;
        typedef Aws::Utils::Outcome<DeletePullRequestApprovalRuleResult, CodeCommitError> DeletePullRequestApprovalRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteRepositoryResult, CodeCommitError> DeleteRepositoryOutcome;
        typedef Aws::Utils::Outcome<DescribeMergeConflictsResult, CodeCommitError> DescribeMergeConflictsOutcome;
        typedef Aws::Utils::Outcome<DescribePullRequestEventsResult, CodeCommitError> DescribePullRequestEventsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodeCommitError> DisassociateApprovalRuleTemplateFromRepositoryOutcome;
        typedef Aws::Utils::Outcome<EvaluatePullRequestApprovalRulesResult, CodeCommitError> EvaluatePullRequestApprovalRulesOutcome;
        typedef Aws::Utils::Outcome<GetApprovalRuleTemplateResult, CodeCommitError> GetApprovalRuleTemplateOutcome;
        typedef Aws::Utils::Outcome<GetBlobResult, CodeCommitError> GetBlobOutcome;
        typedef Aws::Utils::Outcome<GetBranchResult, CodeCommitError> GetBranchOutcome;
        typedef Aws::Utils::Outcome<GetCommentResult, CodeCommitError> GetCommentOutcome;
        typedef Aws::Utils::Outcome<GetCommentReactionsResult, CodeCommitError> GetCommentReactionsOutcome;
        typedef Aws::Utils::Outcome<GetCommentsForComparedCommitResult, CodeCommitError> GetCommentsForComparedCommitOutcome;
        typedef Aws::Utils::Outcome<GetCommentsForPullRequestResult, CodeCommitError> GetCommentsForPullRequestOutcome;
        typedef Aws::Utils::Outcome<GetCommitResult, CodeCommitError> GetCommitOutcome;
        typedef Aws::Utils::Outcome<GetDifferencesResult, CodeCommitError> GetDifferencesOutcome;
        typedef Aws::Utils::Outcome<GetFileResult, CodeCommitError> GetFileOutcome;
        typedef Aws::Utils::Outcome<GetFolderResult, CodeCommitError> GetFolderOutcome;
        typedef Aws::Utils::Outcome<GetMergeCommitResult, CodeCommitError> GetMergeCommitOutcome;
        typedef Aws::Utils::Outcome<GetMergeConflictsResult, CodeCommitError> GetMergeConflictsOutcome;
        typedef Aws::Utils::Outcome<GetMergeOptionsResult, CodeCommitError> GetMergeOptionsOutcome;
        typedef Aws::Utils::Outcome<GetPullRequestResult, CodeCommitError> GetPullRequestOutcome;
        typedef Aws::Utils::Outcome<GetPullRequestApprovalStatesResult, CodeCommitError> GetPullRequestApprovalStatesOutcome;
        typedef Aws::Utils::Outcome<GetPullRequestOverrideStateResult, CodeCommitError> GetPullRequestOverrideStateOutcome;
        typedef Aws::Utils::Outcome<GetRepositoryResult, CodeCommitError> GetRepositoryOutcome;
        typedef Aws::Utils::Outcome<GetRepositoryTriggersResult, CodeCommitError> GetRepositoryTriggersOutcome;
        typedef Aws::Utils::Outcome<ListApprovalRuleTemplatesResult, CodeCommitError> ListApprovalRuleTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListAssociatedApprovalRuleTemplatesForRepositoryResult, CodeCommitError> ListAssociatedApprovalRuleTemplatesForRepositoryOutcome;
        typedef Aws::Utils::Outcome<ListBranchesResult, CodeCommitError> ListBranchesOutcome;
        typedef Aws::Utils::Outcome<ListPullRequestsResult, CodeCommitError> ListPullRequestsOutcome;
        typedef Aws::Utils::Outcome<ListRepositoriesResult, CodeCommitError> ListRepositoriesOutcome;
        typedef Aws::Utils::Outcome<ListRepositoriesForApprovalRuleTemplateResult, CodeCommitError> ListRepositoriesForApprovalRuleTemplateOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeCommitError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<MergeBranchesByFastForwardResult, CodeCommitError> MergeBranchesByFastForwardOutcome;
        typedef Aws::Utils::Outcome<MergeBranchesBySquashResult, CodeCommitError> MergeBranchesBySquashOutcome;
        typedef Aws::Utils::Outcome<MergeBranchesByThreeWayResult, CodeCommitError> MergeBranchesByThreeWayOutcome;
        typedef Aws::Utils::Outcome<MergePullRequestByFastForwardResult, CodeCommitError> MergePullRequestByFastForwardOutcome;
        typedef Aws::Utils::Outcome<MergePullRequestBySquashResult, CodeCommitError> MergePullRequestBySquashOutcome;
        typedef Aws::Utils::Outcome<MergePullRequestByThreeWayResult, CodeCommitError> MergePullRequestByThreeWayOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodeCommitError> OverridePullRequestApprovalRulesOutcome;
        typedef Aws::Utils::Outcome<PostCommentForComparedCommitResult, CodeCommitError> PostCommentForComparedCommitOutcome;
        typedef Aws::Utils::Outcome<PostCommentForPullRequestResult, CodeCommitError> PostCommentForPullRequestOutcome;
        typedef Aws::Utils::Outcome<PostCommentReplyResult, CodeCommitError> PostCommentReplyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodeCommitError> PutCommentReactionOutcome;
        typedef Aws::Utils::Outcome<PutFileResult, CodeCommitError> PutFileOutcome;
        typedef Aws::Utils::Outcome<PutRepositoryTriggersResult, CodeCommitError> PutRepositoryTriggersOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodeCommitError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TestRepositoryTriggersResult, CodeCommitError> TestRepositoryTriggersOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodeCommitError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApprovalRuleTemplateContentResult, CodeCommitError> UpdateApprovalRuleTemplateContentOutcome;
        typedef Aws::Utils::Outcome<UpdateApprovalRuleTemplateDescriptionResult, CodeCommitError> UpdateApprovalRuleTemplateDescriptionOutcome;
        typedef Aws::Utils::Outcome<UpdateApprovalRuleTemplateNameResult, CodeCommitError> UpdateApprovalRuleTemplateNameOutcome;
        typedef Aws::Utils::Outcome<UpdateCommentResult, CodeCommitError> UpdateCommentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodeCommitError> UpdateDefaultBranchOutcome;
        typedef Aws::Utils::Outcome<UpdatePullRequestApprovalRuleContentResult, CodeCommitError> UpdatePullRequestApprovalRuleContentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodeCommitError> UpdatePullRequestApprovalStateOutcome;
        typedef Aws::Utils::Outcome<UpdatePullRequestDescriptionResult, CodeCommitError> UpdatePullRequestDescriptionOutcome;
        typedef Aws::Utils::Outcome<UpdatePullRequestStatusResult, CodeCommitError> UpdatePullRequestStatusOutcome;
        typedef Aws::Utils::Outcome<UpdatePullRequestTitleResult, CodeCommitError> UpdatePullRequestTitleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodeCommitError> UpdateRepositoryDescriptionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodeCommitError> UpdateRepositoryNameOutcome;

        typedef std::future<AssociateApprovalRuleTemplateWithRepositoryOutcome> AssociateApprovalRuleTemplateWithRepositoryOutcomeCallable;
        typedef std::future<BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome> BatchAssociateApprovalRuleTemplateWithRepositoriesOutcomeCallable;
        typedef std::future<BatchDescribeMergeConflictsOutcome> BatchDescribeMergeConflictsOutcomeCallable;
        typedef std::future<BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome> BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcomeCallable;
        typedef std::future<BatchGetCommitsOutcome> BatchGetCommitsOutcomeCallable;
        typedef std::future<BatchGetRepositoriesOutcome> BatchGetRepositoriesOutcomeCallable;
        typedef std::future<CreateApprovalRuleTemplateOutcome> CreateApprovalRuleTemplateOutcomeCallable;
        typedef std::future<CreateBranchOutcome> CreateBranchOutcomeCallable;
        typedef std::future<CreateCommitOutcome> CreateCommitOutcomeCallable;
        typedef std::future<CreatePullRequestOutcome> CreatePullRequestOutcomeCallable;
        typedef std::future<CreatePullRequestApprovalRuleOutcome> CreatePullRequestApprovalRuleOutcomeCallable;
        typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
        typedef std::future<CreateUnreferencedMergeCommitOutcome> CreateUnreferencedMergeCommitOutcomeCallable;
        typedef std::future<DeleteApprovalRuleTemplateOutcome> DeleteApprovalRuleTemplateOutcomeCallable;
        typedef std::future<DeleteBranchOutcome> DeleteBranchOutcomeCallable;
        typedef std::future<DeleteCommentContentOutcome> DeleteCommentContentOutcomeCallable;
        typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
        typedef std::future<DeletePullRequestApprovalRuleOutcome> DeletePullRequestApprovalRuleOutcomeCallable;
        typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
        typedef std::future<DescribeMergeConflictsOutcome> DescribeMergeConflictsOutcomeCallable;
        typedef std::future<DescribePullRequestEventsOutcome> DescribePullRequestEventsOutcomeCallable;
        typedef std::future<DisassociateApprovalRuleTemplateFromRepositoryOutcome> DisassociateApprovalRuleTemplateFromRepositoryOutcomeCallable;
        typedef std::future<EvaluatePullRequestApprovalRulesOutcome> EvaluatePullRequestApprovalRulesOutcomeCallable;
        typedef std::future<GetApprovalRuleTemplateOutcome> GetApprovalRuleTemplateOutcomeCallable;
        typedef std::future<GetBlobOutcome> GetBlobOutcomeCallable;
        typedef std::future<GetBranchOutcome> GetBranchOutcomeCallable;
        typedef std::future<GetCommentOutcome> GetCommentOutcomeCallable;
        typedef std::future<GetCommentReactionsOutcome> GetCommentReactionsOutcomeCallable;
        typedef std::future<GetCommentsForComparedCommitOutcome> GetCommentsForComparedCommitOutcomeCallable;
        typedef std::future<GetCommentsForPullRequestOutcome> GetCommentsForPullRequestOutcomeCallable;
        typedef std::future<GetCommitOutcome> GetCommitOutcomeCallable;
        typedef std::future<GetDifferencesOutcome> GetDifferencesOutcomeCallable;
        typedef std::future<GetFileOutcome> GetFileOutcomeCallable;
        typedef std::future<GetFolderOutcome> GetFolderOutcomeCallable;
        typedef std::future<GetMergeCommitOutcome> GetMergeCommitOutcomeCallable;
        typedef std::future<GetMergeConflictsOutcome> GetMergeConflictsOutcomeCallable;
        typedef std::future<GetMergeOptionsOutcome> GetMergeOptionsOutcomeCallable;
        typedef std::future<GetPullRequestOutcome> GetPullRequestOutcomeCallable;
        typedef std::future<GetPullRequestApprovalStatesOutcome> GetPullRequestApprovalStatesOutcomeCallable;
        typedef std::future<GetPullRequestOverrideStateOutcome> GetPullRequestOverrideStateOutcomeCallable;
        typedef std::future<GetRepositoryOutcome> GetRepositoryOutcomeCallable;
        typedef std::future<GetRepositoryTriggersOutcome> GetRepositoryTriggersOutcomeCallable;
        typedef std::future<ListApprovalRuleTemplatesOutcome> ListApprovalRuleTemplatesOutcomeCallable;
        typedef std::future<ListAssociatedApprovalRuleTemplatesForRepositoryOutcome> ListAssociatedApprovalRuleTemplatesForRepositoryOutcomeCallable;
        typedef std::future<ListBranchesOutcome> ListBranchesOutcomeCallable;
        typedef std::future<ListPullRequestsOutcome> ListPullRequestsOutcomeCallable;
        typedef std::future<ListRepositoriesOutcome> ListRepositoriesOutcomeCallable;
        typedef std::future<ListRepositoriesForApprovalRuleTemplateOutcome> ListRepositoriesForApprovalRuleTemplateOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<MergeBranchesByFastForwardOutcome> MergeBranchesByFastForwardOutcomeCallable;
        typedef std::future<MergeBranchesBySquashOutcome> MergeBranchesBySquashOutcomeCallable;
        typedef std::future<MergeBranchesByThreeWayOutcome> MergeBranchesByThreeWayOutcomeCallable;
        typedef std::future<MergePullRequestByFastForwardOutcome> MergePullRequestByFastForwardOutcomeCallable;
        typedef std::future<MergePullRequestBySquashOutcome> MergePullRequestBySquashOutcomeCallable;
        typedef std::future<MergePullRequestByThreeWayOutcome> MergePullRequestByThreeWayOutcomeCallable;
        typedef std::future<OverridePullRequestApprovalRulesOutcome> OverridePullRequestApprovalRulesOutcomeCallable;
        typedef std::future<PostCommentForComparedCommitOutcome> PostCommentForComparedCommitOutcomeCallable;
        typedef std::future<PostCommentForPullRequestOutcome> PostCommentForPullRequestOutcomeCallable;
        typedef std::future<PostCommentReplyOutcome> PostCommentReplyOutcomeCallable;
        typedef std::future<PutCommentReactionOutcome> PutCommentReactionOutcomeCallable;
        typedef std::future<PutFileOutcome> PutFileOutcomeCallable;
        typedef std::future<PutRepositoryTriggersOutcome> PutRepositoryTriggersOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TestRepositoryTriggersOutcome> TestRepositoryTriggersOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApprovalRuleTemplateContentOutcome> UpdateApprovalRuleTemplateContentOutcomeCallable;
        typedef std::future<UpdateApprovalRuleTemplateDescriptionOutcome> UpdateApprovalRuleTemplateDescriptionOutcomeCallable;
        typedef std::future<UpdateApprovalRuleTemplateNameOutcome> UpdateApprovalRuleTemplateNameOutcomeCallable;
        typedef std::future<UpdateCommentOutcome> UpdateCommentOutcomeCallable;
        typedef std::future<UpdateDefaultBranchOutcome> UpdateDefaultBranchOutcomeCallable;
        typedef std::future<UpdatePullRequestApprovalRuleContentOutcome> UpdatePullRequestApprovalRuleContentOutcomeCallable;
        typedef std::future<UpdatePullRequestApprovalStateOutcome> UpdatePullRequestApprovalStateOutcomeCallable;
        typedef std::future<UpdatePullRequestDescriptionOutcome> UpdatePullRequestDescriptionOutcomeCallable;
        typedef std::future<UpdatePullRequestStatusOutcome> UpdatePullRequestStatusOutcomeCallable;
        typedef std::future<UpdatePullRequestTitleOutcome> UpdatePullRequestTitleOutcomeCallable;
        typedef std::future<UpdateRepositoryDescriptionOutcome> UpdateRepositoryDescriptionOutcomeCallable;
        typedef std::future<UpdateRepositoryNameOutcome> UpdateRepositoryNameOutcomeCallable;
} // namespace Model

  class CodeCommitClient;

    typedef std::function<void(const CodeCommitClient*, const Model::AssociateApprovalRuleTemplateWithRepositoryRequest&, const Model::AssociateApprovalRuleTemplateWithRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateApprovalRuleTemplateWithRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::BatchAssociateApprovalRuleTemplateWithRepositoriesRequest&, const Model::BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateApprovalRuleTemplateWithRepositoriesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::BatchDescribeMergeConflictsRequest&, const Model::BatchDescribeMergeConflictsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDescribeMergeConflictsResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest&, const Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateApprovalRuleTemplateFromRepositoriesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::BatchGetCommitsRequest&, const Model::BatchGetCommitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetCommitsResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::BatchGetRepositoriesRequest&, const Model::BatchGetRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetRepositoriesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::CreateApprovalRuleTemplateRequest&, const Model::CreateApprovalRuleTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApprovalRuleTemplateResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::CreateBranchRequest&, const Model::CreateBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBranchResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::CreateCommitRequest&, const Model::CreateCommitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCommitResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::CreatePullRequestRequest&, const Model::CreatePullRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePullRequestResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::CreatePullRequestApprovalRuleRequest&, const Model::CreatePullRequestApprovalRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePullRequestApprovalRuleResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::CreateRepositoryRequest&, const Model::CreateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::CreateUnreferencedMergeCommitRequest&, const Model::CreateUnreferencedMergeCommitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUnreferencedMergeCommitResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::DeleteApprovalRuleTemplateRequest&, const Model::DeleteApprovalRuleTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApprovalRuleTemplateResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::DeleteBranchRequest&, const Model::DeleteBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBranchResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::DeleteCommentContentRequest&, const Model::DeleteCommentContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCommentContentResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::DeleteFileRequest&, const Model::DeleteFileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFileResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::DeletePullRequestApprovalRuleRequest&, const Model::DeletePullRequestApprovalRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePullRequestApprovalRuleResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::DeleteRepositoryRequest&, const Model::DeleteRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::DescribeMergeConflictsRequest&, const Model::DescribeMergeConflictsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMergeConflictsResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::DescribePullRequestEventsRequest&, const Model::DescribePullRequestEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePullRequestEventsResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::DisassociateApprovalRuleTemplateFromRepositoryRequest&, const Model::DisassociateApprovalRuleTemplateFromRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateApprovalRuleTemplateFromRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::EvaluatePullRequestApprovalRulesRequest&, const Model::EvaluatePullRequestApprovalRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EvaluatePullRequestApprovalRulesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetApprovalRuleTemplateRequest&, const Model::GetApprovalRuleTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApprovalRuleTemplateResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetBlobRequest&, const Model::GetBlobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlobResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetBranchRequest&, const Model::GetBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBranchResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetCommentRequest&, const Model::GetCommentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCommentResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetCommentReactionsRequest&, const Model::GetCommentReactionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCommentReactionsResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetCommentsForComparedCommitRequest&, const Model::GetCommentsForComparedCommitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCommentsForComparedCommitResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetCommentsForPullRequestRequest&, const Model::GetCommentsForPullRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCommentsForPullRequestResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetCommitRequest&, const Model::GetCommitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCommitResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetDifferencesRequest&, const Model::GetDifferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDifferencesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetFileRequest&, const Model::GetFileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFileResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetFolderRequest&, const Model::GetFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFolderResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetMergeCommitRequest&, const Model::GetMergeCommitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMergeCommitResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetMergeConflictsRequest&, const Model::GetMergeConflictsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMergeConflictsResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetMergeOptionsRequest&, const Model::GetMergeOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMergeOptionsResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetPullRequestRequest&, const Model::GetPullRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPullRequestResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetPullRequestApprovalStatesRequest&, const Model::GetPullRequestApprovalStatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPullRequestApprovalStatesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetPullRequestOverrideStateRequest&, const Model::GetPullRequestOverrideStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPullRequestOverrideStateResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetRepositoryRequest&, const Model::GetRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetRepositoryTriggersRequest&, const Model::GetRepositoryTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryTriggersResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::ListApprovalRuleTemplatesRequest&, const Model::ListApprovalRuleTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApprovalRuleTemplatesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest&, const Model::ListAssociatedApprovalRuleTemplatesForRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedApprovalRuleTemplatesForRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::ListBranchesRequest&, const Model::ListBranchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBranchesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::ListPullRequestsRequest&, const Model::ListPullRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPullRequestsResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::ListRepositoriesRequest&, const Model::ListRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoriesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::ListRepositoriesForApprovalRuleTemplateRequest&, const Model::ListRepositoriesForApprovalRuleTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoriesForApprovalRuleTemplateResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::MergeBranchesByFastForwardRequest&, const Model::MergeBranchesByFastForwardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MergeBranchesByFastForwardResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::MergeBranchesBySquashRequest&, const Model::MergeBranchesBySquashOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MergeBranchesBySquashResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::MergeBranchesByThreeWayRequest&, const Model::MergeBranchesByThreeWayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MergeBranchesByThreeWayResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::MergePullRequestByFastForwardRequest&, const Model::MergePullRequestByFastForwardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MergePullRequestByFastForwardResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::MergePullRequestBySquashRequest&, const Model::MergePullRequestBySquashOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MergePullRequestBySquashResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::MergePullRequestByThreeWayRequest&, const Model::MergePullRequestByThreeWayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MergePullRequestByThreeWayResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::OverridePullRequestApprovalRulesRequest&, const Model::OverridePullRequestApprovalRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > OverridePullRequestApprovalRulesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::PostCommentForComparedCommitRequest&, const Model::PostCommentForComparedCommitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostCommentForComparedCommitResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::PostCommentForPullRequestRequest&, const Model::PostCommentForPullRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostCommentForPullRequestResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::PostCommentReplyRequest&, const Model::PostCommentReplyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostCommentReplyResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::PutCommentReactionRequest&, const Model::PutCommentReactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutCommentReactionResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::PutFileRequest&, const Model::PutFileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFileResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::PutRepositoryTriggersRequest&, const Model::PutRepositoryTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRepositoryTriggersResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::TestRepositoryTriggersRequest&, const Model::TestRepositoryTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestRepositoryTriggersResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdateApprovalRuleTemplateContentRequest&, const Model::UpdateApprovalRuleTemplateContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApprovalRuleTemplateContentResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdateApprovalRuleTemplateDescriptionRequest&, const Model::UpdateApprovalRuleTemplateDescriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApprovalRuleTemplateDescriptionResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdateApprovalRuleTemplateNameRequest&, const Model::UpdateApprovalRuleTemplateNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApprovalRuleTemplateNameResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdateCommentRequest&, const Model::UpdateCommentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCommentResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdateDefaultBranchRequest&, const Model::UpdateDefaultBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDefaultBranchResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdatePullRequestApprovalRuleContentRequest&, const Model::UpdatePullRequestApprovalRuleContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePullRequestApprovalRuleContentResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdatePullRequestApprovalStateRequest&, const Model::UpdatePullRequestApprovalStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePullRequestApprovalStateResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdatePullRequestDescriptionRequest&, const Model::UpdatePullRequestDescriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePullRequestDescriptionResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdatePullRequestStatusRequest&, const Model::UpdatePullRequestStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePullRequestStatusResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdatePullRequestTitleRequest&, const Model::UpdatePullRequestTitleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePullRequestTitleResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdateRepositoryDescriptionRequest&, const Model::UpdateRepositoryDescriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRepositoryDescriptionResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdateRepositoryNameRequest&, const Model::UpdateRepositoryNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRepositoryNameResponseReceivedHandler;

  /**
   * <fullname>AWS CodeCommit</fullname> <p>This is the <i>AWS CodeCommit API
   * Reference</i>. This reference provides descriptions of the operations and data
   * types for AWS CodeCommit API along with usage examples.</p> <p>You can use the
   * AWS CodeCommit API to work with the following objects:</p> <p>Repositories, by
   * calling the following:</p> <ul> <li> <p> <a>BatchGetRepositories</a>, which
   * returns information about one or more repositories associated with your AWS
   * account.</p> </li> <li> <p> <a>CreateRepository</a>, which creates an AWS
   * CodeCommit repository.</p> </li> <li> <p> <a>DeleteRepository</a>, which deletes
   * an AWS CodeCommit repository.</p> </li> <li> <p> <a>GetRepository</a>, which
   * returns information about a specified repository.</p> </li> <li> <p>
   * <a>ListRepositories</a>, which lists all AWS CodeCommit repositories associated
   * with your AWS account.</p> </li> <li> <p> <a>UpdateRepositoryDescription</a>,
   * which sets or updates the description of the repository.</p> </li> <li> <p>
   * <a>UpdateRepositoryName</a>, which changes the name of the repository. If you
   * change the name of a repository, no other users of that repository can access it
   * until you send them the new HTTPS or SSH URL to use.</p> </li> </ul>
   * <p>Branches, by calling the following:</p> <ul> <li> <p> <a>CreateBranch</a>,
   * which creates a branch in a specified repository.</p> </li> <li> <p>
   * <a>DeleteBranch</a>, which deletes the specified branch in a repository unless
   * it is the default branch.</p> </li> <li> <p> <a>GetBranch</a>, which returns
   * information about a specified branch.</p> </li> <li> <p> <a>ListBranches</a>,
   * which lists all branches for a specified repository.</p> </li> <li> <p>
   * <a>UpdateDefaultBranch</a>, which changes the default branch for a
   * repository.</p> </li> </ul> <p>Files, by calling the following:</p> <ul> <li>
   * <p> <a>DeleteFile</a>, which deletes the content of a specified file from a
   * specified branch.</p> </li> <li> <p> <a>GetBlob</a>, which returns the base-64
   * encoded content of an individual Git blob object in a repository.</p> </li> <li>
   * <p> <a>GetFile</a>, which returns the base-64 encoded content of a specified
   * file.</p> </li> <li> <p> <a>GetFolder</a>, which returns the contents of a
   * specified folder or directory.</p> </li> <li> <p> <a>PutFile</a>, which adds or
   * modifies a single file in a specified repository and branch.</p> </li> </ul>
   * <p>Commits, by calling the following:</p> <ul> <li> <p> <a>BatchGetCommits</a>,
   * which returns information about one or more commits in a repository.</p> </li>
   * <li> <p> <a>CreateCommit</a>, which creates a commit for changes to a
   * repository.</p> </li> <li> <p> <a>GetCommit</a>, which returns information about
   * a commit, including commit messages and author and committer information.</p>
   * </li> <li> <p> <a>GetDifferences</a>, which returns information about the
   * differences in a valid commit specifier (such as a branch, tag, HEAD, commit ID,
   * or other fully qualified reference).</p> </li> </ul> <p>Merges, by calling the
   * following:</p> <ul> <li> <p> <a>BatchDescribeMergeConflicts</a>, which returns
   * information about conflicts in a merge between commits in a repository.</p>
   * </li> <li> <p> <a>CreateUnreferencedMergeCommit</a>, which creates an
   * unreferenced commit between two branches or commits for the purpose of comparing
   * them and identifying any potential conflicts.</p> </li> <li> <p>
   * <a>DescribeMergeConflicts</a>, which returns information about merge conflicts
   * between the base, source, and destination versions of a file in a potential
   * merge.</p> </li> <li> <p> <a>GetMergeCommit</a>, which returns information about
   * the merge between a source and destination commit. </p> </li> <li> <p>
   * <a>GetMergeConflicts</a>, which returns information about merge conflicts
   * between the source and destination branch in a pull request.</p> </li> <li> <p>
   * <a>GetMergeOptions</a>, which returns information about the available merge
   * options between two branches or commit specifiers.</p> </li> <li> <p>
   * <a>MergeBranchesByFastForward</a>, which merges two branches using the
   * fast-forward merge option.</p> </li> <li> <p> <a>MergeBranchesBySquash</a>,
   * which merges two branches using the squash merge option.</p> </li> <li> <p>
   * <a>MergeBranchesByThreeWay</a>, which merges two branches using the three-way
   * merge option.</p> </li> </ul> <p>Pull requests, by calling the following:</p>
   * <ul> <li> <p> <a>CreatePullRequest</a>, which creates a pull request in a
   * specified repository.</p> </li> <li> <p> <a>CreatePullRequestApprovalRule</a>,
   * which creates an approval rule for a specified pull request.</p> </li> <li> <p>
   * <a>DeletePullRequestApprovalRule</a>, which deletes an approval rule for a
   * specified pull request.</p> </li> <li> <p> <a>DescribePullRequestEvents</a>,
   * which returns information about one or more pull request events.</p> </li> <li>
   * <p> <a>EvaluatePullRequestApprovalRules</a>, which evaluates whether a pull
   * request has met all the conditions specified in its associated approval
   * rules.</p> </li> <li> <p> <a>GetCommentsForPullRequest</a>, which returns
   * information about comments on a specified pull request.</p> </li> <li> <p>
   * <a>GetPullRequest</a>, which returns information about a specified pull
   * request.</p> </li> <li> <p> <a>GetPullRequestApprovalStates</a>, which returns
   * information about the approval states for a specified pull request.</p> </li>
   * <li> <p> <a>GetPullRequestOverrideState</a>, which returns information about
   * whether approval rules have been set aside (overriden) for a pull request, and
   * if so, the Amazon Resource Name (ARN) of the user or identity that overrode the
   * rules and their requirements for the pull request.</p> </li> <li> <p>
   * <a>ListPullRequests</a>, which lists all pull requests for a repository.</p>
   * </li> <li> <p> <a>MergePullRequestByFastForward</a>, which merges the source
   * destination branch of a pull request into the specified destination branch for
   * that pull request using the fast-forward merge option.</p> </li> <li> <p>
   * <a>MergePullRequestBySquash</a>, which merges the source destination branch of a
   * pull request into the specified destination branch for that pull request using
   * the squash merge option.</p> </li> <li> <p> <a>MergePullRequestByThreeWay</a>.
   * which merges the source destination branch of a pull request into the specified
   * destination branch for that pull request using the three-way merge option.</p>
   * </li> <li> <p> <a>OverridePullRequestApprovalRules</a>, which sets aside all
   * approval rule requirements for a pull request.</p> </li> <li> <p>
   * <a>PostCommentForPullRequest</a>, which posts a comment to a pull request at the
   * specified line, file, or request.</p> </li> <li> <p>
   * <a>UpdatePullRequestApprovalRuleContent</a>, which updates the structure of an
   * approval rule for a pull request.</p> </li> <li> <p>
   * <a>UpdatePullRequestApprovalState</a>, which updates the state of an approval on
   * a pull request.</p> </li> <li> <p> <a>UpdatePullRequestDescription</a>, which
   * updates the description of a pull request.</p> </li> <li> <p>
   * <a>UpdatePullRequestStatus</a>, which updates the status of a pull request.</p>
   * </li> <li> <p> <a>UpdatePullRequestTitle</a>, which updates the title of a pull
   * request.</p> </li> </ul> <p>Approval rule templates, by calling the
   * following:</p> <ul> <li> <p> <a>AssociateApprovalRuleTemplateWithRepository</a>,
   * which associates a template with a specified repository. After the template is
   * associated with a repository, AWS CodeCommit creates approval rules that match
   * the template conditions on every pull request created in the specified
   * repository.</p> </li> <li> <p>
   * <a>BatchAssociateApprovalRuleTemplateWithRepositories</a>, which associates a
   * template with one or more specified repositories. After the template is
   * associated with a repository, AWS CodeCommit creates approval rules that match
   * the template conditions on every pull request created in the specified
   * repositories.</p> </li> <li> <p>
   * <a>BatchDisassociateApprovalRuleTemplateFromRepositories</a>, which removes the
   * association between a template and specified repositories so that approval rules
   * based on the template are not automatically created when pull requests are
   * created in those repositories.</p> </li> <li> <p>
   * <a>CreateApprovalRuleTemplate</a>, which creates a template for approval rules
   * that can then be associated with one or more repositories in your AWS
   * account.</p> </li> <li> <p> <a>DeleteApprovalRuleTemplate</a>, which deletes the
   * specified template. It does not remove approval rules on pull requests already
   * created with the template.</p> </li> <li> <p>
   * <a>DisassociateApprovalRuleTemplateFromRepository</a>, which removes the
   * association between a template and a repository so that approval rules based on
   * the template are not automatically created when pull requests are created in the
   * specified repository.</p> </li> <li> <p> <a>GetApprovalRuleTemplate</a>, which
   * returns information about an approval rule template.</p> </li> <li> <p>
   * <a>ListApprovalRuleTemplates</a>, which lists all approval rule templates in the
   * AWS Region in your AWS account.</p> </li> <li> <p>
   * <a>ListAssociatedApprovalRuleTemplatesForRepository</a>, which lists all
   * approval rule templates that are associated with a specified repository.</p>
   * </li> <li> <p> <a>ListRepositoriesForApprovalRuleTemplate</a>, which lists all
   * repositories associated with the specified approval rule template.</p> </li>
   * <li> <p> <a>UpdateApprovalRuleTemplateDescription</a>, which updates the
   * description of an approval rule template.</p> </li> <li> <p>
   * <a>UpdateApprovalRuleTemplateName</a>, which updates the name of an approval
   * rule template.</p> </li> <li> <p> <a>UpdateApprovalRuleTemplateContent</a>,
   * which updates the content of an approval rule template.</p> </li> </ul>
   * <p>Comments in a repository, by calling the following:</p> <ul> <li> <p>
   * <a>DeleteCommentContent</a>, which deletes the content of a comment on a commit
   * in a repository.</p> </li> <li> <p> <a>GetComment</a>, which returns information
   * about a comment on a commit.</p> </li> <li> <p> <a>GetCommentReactions</a>,
   * which returns information about emoji reactions to comments.</p> </li> <li> <p>
   * <a>GetCommentsForComparedCommit</a>, which returns information about comments on
   * the comparison between two commit specifiers in a repository.</p> </li> <li> <p>
   * <a>PostCommentForComparedCommit</a>, which creates a comment on the comparison
   * between two commit specifiers in a repository.</p> </li> <li> <p>
   * <a>PostCommentReply</a>, which creates a reply to a comment.</p> </li> <li> <p>
   * <a>PutCommentReaction</a>, which creates or updates an emoji reaction to a
   * comment.</p> </li> <li> <p> <a>UpdateComment</a>, which updates the content of a
   * comment on a commit in a repository.</p> </li> </ul> <p>Tags used to tag
   * resources in AWS CodeCommit (not Git tags), by calling the following:</p> <ul>
   * <li> <p> <a>ListTagsForResource</a>, which gets information about AWS tags for a
   * specified Amazon Resource Name (ARN) in AWS CodeCommit.</p> </li> <li> <p>
   * <a>TagResource</a>, which adds or updates tags for a resource in AWS
   * CodeCommit.</p> </li> <li> <p> <a>UntagResource</a>, which removes tags for a
   * resource in AWS CodeCommit.</p> </li> </ul> <p>Triggers, by calling the
   * following:</p> <ul> <li> <p> <a>GetRepositoryTriggers</a>, which returns
   * information about triggers configured for a repository.</p> </li> <li> <p>
   * <a>PutRepositoryTriggers</a>, which replaces all triggers for a repository and
   * can be used to create or delete triggers.</p> </li> <li> <p>
   * <a>TestRepositoryTriggers</a>, which tests the functionality of a repository
   * trigger by sending data to the trigger target.</p> </li> </ul> <p>For
   * information about how to use AWS CodeCommit, see the <a
   * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
   * CodeCommit User Guide</a>.</p>
   */
  class AWS_CODECOMMIT_API CodeCommitClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeCommitClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeCommitClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeCommitClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodeCommitClient();


        /**
         * <p>Creates an association between an approval rule template and a specified
         * repository. Then, the next time a pull request is created in the repository
         * where the destination reference (if specified) matches the destination reference
         * (branch) for the pull request, an approval rule that matches the template
         * conditions is automatically created for that pull request. If no destination
         * references are specified in the template, an approval rule that matches the
         * template contents is created for all pull requests in that
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/AssociateApprovalRuleTemplateWithRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApprovalRuleTemplateWithRepositoryOutcome AssociateApprovalRuleTemplateWithRepository(const Model::AssociateApprovalRuleTemplateWithRepositoryRequest& request) const;

        /**
         * <p>Creates an association between an approval rule template and a specified
         * repository. Then, the next time a pull request is created in the repository
         * where the destination reference (if specified) matches the destination reference
         * (branch) for the pull request, an approval rule that matches the template
         * conditions is automatically created for that pull request. If no destination
         * references are specified in the template, an approval rule that matches the
         * template contents is created for all pull requests in that
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/AssociateApprovalRuleTemplateWithRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateApprovalRuleTemplateWithRepositoryOutcomeCallable AssociateApprovalRuleTemplateWithRepositoryCallable(const Model::AssociateApprovalRuleTemplateWithRepositoryRequest& request) const;

        /**
         * <p>Creates an association between an approval rule template and a specified
         * repository. Then, the next time a pull request is created in the repository
         * where the destination reference (if specified) matches the destination reference
         * (branch) for the pull request, an approval rule that matches the template
         * conditions is automatically created for that pull request. If no destination
         * references are specified in the template, an approval rule that matches the
         * template contents is created for all pull requests in that
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/AssociateApprovalRuleTemplateWithRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateApprovalRuleTemplateWithRepositoryAsync(const Model::AssociateApprovalRuleTemplateWithRepositoryRequest& request, const AssociateApprovalRuleTemplateWithRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an association between an approval rule template and one or more
         * specified repositories. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchAssociateApprovalRuleTemplateWithRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome BatchAssociateApprovalRuleTemplateWithRepositories(const Model::BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request) const;

        /**
         * <p>Creates an association between an approval rule template and one or more
         * specified repositories. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchAssociateApprovalRuleTemplateWithRepositories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchAssociateApprovalRuleTemplateWithRepositoriesOutcomeCallable BatchAssociateApprovalRuleTemplateWithRepositoriesCallable(const Model::BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request) const;

        /**
         * <p>Creates an association between an approval rule template and one or more
         * specified repositories. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchAssociateApprovalRuleTemplateWithRepositories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchAssociateApprovalRuleTemplateWithRepositoriesAsync(const Model::BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request, const BatchAssociateApprovalRuleTemplateWithRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about one or more merge conflicts in the attempted merge
         * of two commit specifiers using the squash or three-way merge
         * strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDescribeMergeConflicts">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDescribeMergeConflictsOutcome BatchDescribeMergeConflicts(const Model::BatchDescribeMergeConflictsRequest& request) const;

        /**
         * <p>Returns information about one or more merge conflicts in the attempted merge
         * of two commit specifiers using the squash or three-way merge
         * strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDescribeMergeConflicts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDescribeMergeConflictsOutcomeCallable BatchDescribeMergeConflictsCallable(const Model::BatchDescribeMergeConflictsRequest& request) const;

        /**
         * <p>Returns information about one or more merge conflicts in the attempted merge
         * of two commit specifiers using the squash or three-way merge
         * strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDescribeMergeConflicts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDescribeMergeConflictsAsync(const Model::BatchDescribeMergeConflictsRequest& request, const BatchDescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association between an approval rule template and one or more
         * specified repositories. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDisassociateApprovalRuleTemplateFromRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome BatchDisassociateApprovalRuleTemplateFromRepositories(const Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request) const;

        /**
         * <p>Removes the association between an approval rule template and one or more
         * specified repositories. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDisassociateApprovalRuleTemplateFromRepositories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcomeCallable BatchDisassociateApprovalRuleTemplateFromRepositoriesCallable(const Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request) const;

        /**
         * <p>Removes the association between an approval rule template and one or more
         * specified repositories. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDisassociateApprovalRuleTemplateFromRepositories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisassociateApprovalRuleTemplateFromRepositoriesAsync(const Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request, const BatchDisassociateApprovalRuleTemplateFromRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the contents of one or more commits in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetCommits">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCommitsOutcome BatchGetCommits(const Model::BatchGetCommitsRequest& request) const;

        /**
         * <p>Returns information about the contents of one or more commits in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetCommits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetCommitsOutcomeCallable BatchGetCommitsCallable(const Model::BatchGetCommitsRequest& request) const;

        /**
         * <p>Returns information about the contents of one or more commits in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetCommits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetCommitsAsync(const Model::BatchGetCommitsRequest& request, const BatchGetCommitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about one or more repositories.</p>  <p>The
         * description field for a repository accepts all HTML characters and all valid
         * Unicode characters. Applications that do not HTML-encode the description and
         * display it in a webpage can expose users to potentially malicious code. Make
         * sure that you HTML-encode the description field in any application that uses
         * this API to display the repository description on a webpage.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetRepositoriesOutcome BatchGetRepositories(const Model::BatchGetRepositoriesRequest& request) const;

        /**
         * <p>Returns information about one or more repositories.</p>  <p>The
         * description field for a repository accepts all HTML characters and all valid
         * Unicode characters. Applications that do not HTML-encode the description and
         * display it in a webpage can expose users to potentially malicious code. Make
         * sure that you HTML-encode the description field in any application that uses
         * this API to display the repository description on a webpage.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetRepositories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetRepositoriesOutcomeCallable BatchGetRepositoriesCallable(const Model::BatchGetRepositoriesRequest& request) const;

        /**
         * <p>Returns information about one or more repositories.</p>  <p>The
         * description field for a repository accepts all HTML characters and all valid
         * Unicode characters. Applications that do not HTML-encode the description and
         * display it in a webpage can expose users to potentially malicious code. Make
         * sure that you HTML-encode the description field in any application that uses
         * this API to display the repository description on a webpage.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetRepositories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetRepositoriesAsync(const Model::BatchGetRepositoriesRequest& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a template for approval rules that can then be associated with one or
         * more repositories in your AWS account. When you associate a template with a
         * repository, AWS CodeCommit creates an approval rule that matches the conditions
         * of the template for all pull requests that meet the conditions of the template.
         * For more information, see
         * <a>AssociateApprovalRuleTemplateWithRepository</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApprovalRuleTemplateOutcome CreateApprovalRuleTemplate(const Model::CreateApprovalRuleTemplateRequest& request) const;

        /**
         * <p>Creates a template for approval rules that can then be associated with one or
         * more repositories in your AWS account. When you associate a template with a
         * repository, AWS CodeCommit creates an approval rule that matches the conditions
         * of the template for all pull requests that meet the conditions of the template.
         * For more information, see
         * <a>AssociateApprovalRuleTemplateWithRepository</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateApprovalRuleTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApprovalRuleTemplateOutcomeCallable CreateApprovalRuleTemplateCallable(const Model::CreateApprovalRuleTemplateRequest& request) const;

        /**
         * <p>Creates a template for approval rules that can then be associated with one or
         * more repositories in your AWS account. When you associate a template with a
         * repository, AWS CodeCommit creates an approval rule that matches the conditions
         * of the template for all pull requests that meet the conditions of the template.
         * For more information, see
         * <a>AssociateApprovalRuleTemplateWithRepository</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateApprovalRuleTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApprovalRuleTemplateAsync(const Model::CreateApprovalRuleTemplateRequest& request, const CreateApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a branch in a repository and points the branch to a commit.</p>
         *  <p>Calling the create branch operation does not set a repository's
         * default branch. To do this, call the update default branch operation.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBranchOutcome CreateBranch(const Model::CreateBranchRequest& request) const;

        /**
         * <p>Creates a branch in a repository and points the branch to a commit.</p>
         *  <p>Calling the create branch operation does not set a repository's
         * default branch. To do this, call the update default branch operation.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateBranch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBranchOutcomeCallable CreateBranchCallable(const Model::CreateBranchRequest& request) const;

        /**
         * <p>Creates a branch in a repository and points the branch to a commit.</p>
         *  <p>Calling the create branch operation does not set a repository's
         * default branch. To do this, call the update default branch operation.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateBranch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBranchAsync(const Model::CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a commit for a repository on the tip of a specified
         * branch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCommitOutcome CreateCommit(const Model::CreateCommitRequest& request) const;

        /**
         * <p>Creates a commit for a repository on the tip of a specified
         * branch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateCommit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCommitOutcomeCallable CreateCommitCallable(const Model::CreateCommitRequest& request) const;

        /**
         * <p>Creates a commit for a repository on the tip of a specified
         * branch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateCommit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCommitAsync(const Model::CreateCommitRequest& request, const CreateCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a pull request in the specified repository.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreatePullRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePullRequestOutcome CreatePullRequest(const Model::CreatePullRequestRequest& request) const;

        /**
         * <p>Creates a pull request in the specified repository.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreatePullRequest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePullRequestOutcomeCallable CreatePullRequestCallable(const Model::CreatePullRequestRequest& request) const;

        /**
         * <p>Creates a pull request in the specified repository.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreatePullRequest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePullRequestAsync(const Model::CreatePullRequestRequest& request, const CreatePullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an approval rule for a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreatePullRequestApprovalRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePullRequestApprovalRuleOutcome CreatePullRequestApprovalRule(const Model::CreatePullRequestApprovalRuleRequest& request) const;

        /**
         * <p>Creates an approval rule for a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreatePullRequestApprovalRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePullRequestApprovalRuleOutcomeCallable CreatePullRequestApprovalRuleCallable(const Model::CreatePullRequestApprovalRuleRequest& request) const;

        /**
         * <p>Creates an approval rule for a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreatePullRequestApprovalRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePullRequestApprovalRuleAsync(const Model::CreatePullRequestApprovalRuleRequest& request, const CreatePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new, empty repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest& request) const;

        /**
         * <p>Creates a new, empty repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request) const;

        /**
         * <p>Creates a new, empty repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an unreferenced commit that represents the result of merging two
         * branches using a specified merge strategy. This can help you determine the
         * outcome of a potential merge. This API cannot be used with the fast-forward
         * merge strategy because that strategy does not create a merge commit.</p> 
         * <p>This unreferenced merge commit can only be accessed using the GetCommit API
         * or through git commands such as git fetch. To retrieve this commit, you must
         * specify its commit ID or otherwise reference it.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateUnreferencedMergeCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUnreferencedMergeCommitOutcome CreateUnreferencedMergeCommit(const Model::CreateUnreferencedMergeCommitRequest& request) const;

        /**
         * <p>Creates an unreferenced commit that represents the result of merging two
         * branches using a specified merge strategy. This can help you determine the
         * outcome of a potential merge. This API cannot be used with the fast-forward
         * merge strategy because that strategy does not create a merge commit.</p> 
         * <p>This unreferenced merge commit can only be accessed using the GetCommit API
         * or through git commands such as git fetch. To retrieve this commit, you must
         * specify its commit ID or otherwise reference it.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateUnreferencedMergeCommit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUnreferencedMergeCommitOutcomeCallable CreateUnreferencedMergeCommitCallable(const Model::CreateUnreferencedMergeCommitRequest& request) const;

        /**
         * <p>Creates an unreferenced commit that represents the result of merging two
         * branches using a specified merge strategy. This can help you determine the
         * outcome of a potential merge. This API cannot be used with the fast-forward
         * merge strategy because that strategy does not create a merge commit.</p> 
         * <p>This unreferenced merge commit can only be accessed using the GetCommit API
         * or through git commands such as git fetch. To retrieve this commit, you must
         * specify its commit ID or otherwise reference it.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateUnreferencedMergeCommit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUnreferencedMergeCommitAsync(const Model::CreateUnreferencedMergeCommitRequest& request, const CreateUnreferencedMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified approval rule template. Deleting a template does not
         * remove approval rules on pull requests already created with the
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApprovalRuleTemplateOutcome DeleteApprovalRuleTemplate(const Model::DeleteApprovalRuleTemplateRequest& request) const;

        /**
         * <p>Deletes a specified approval rule template. Deleting a template does not
         * remove approval rules on pull requests already created with the
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteApprovalRuleTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApprovalRuleTemplateOutcomeCallable DeleteApprovalRuleTemplateCallable(const Model::DeleteApprovalRuleTemplateRequest& request) const;

        /**
         * <p>Deletes a specified approval rule template. Deleting a template does not
         * remove approval rules on pull requests already created with the
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteApprovalRuleTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApprovalRuleTemplateAsync(const Model::DeleteApprovalRuleTemplateRequest& request, const DeleteApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a branch from a repository, unless that branch is the default branch
         * for the repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBranchOutcome DeleteBranch(const Model::DeleteBranchRequest& request) const;

        /**
         * <p>Deletes a branch from a repository, unless that branch is the default branch
         * for the repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteBranch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBranchOutcomeCallable DeleteBranchCallable(const Model::DeleteBranchRequest& request) const;

        /**
         * <p>Deletes a branch from a repository, unless that branch is the default branch
         * for the repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteBranch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBranchAsync(const Model::DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the content of a comment made on a change, file, or commit in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteCommentContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCommentContentOutcome DeleteCommentContent(const Model::DeleteCommentContentRequest& request) const;

        /**
         * <p>Deletes the content of a comment made on a change, file, or commit in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteCommentContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCommentContentOutcomeCallable DeleteCommentContentCallable(const Model::DeleteCommentContentRequest& request) const;

        /**
         * <p>Deletes the content of a comment made on a change, file, or commit in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteCommentContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCommentContentAsync(const Model::DeleteCommentContentRequest& request, const DeleteCommentContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified file from a specified branch. A commit is created on the
         * branch that contains the revision. The file still exists in the commits earlier
         * to the commit that contains the deletion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteFile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFileOutcome DeleteFile(const Model::DeleteFileRequest& request) const;

        /**
         * <p>Deletes a specified file from a specified branch. A commit is created on the
         * branch that contains the revision. The file still exists in the commits earlier
         * to the commit that contains the deletion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteFile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFileOutcomeCallable DeleteFileCallable(const Model::DeleteFileRequest& request) const;

        /**
         * <p>Deletes a specified file from a specified branch. A commit is created on the
         * branch that contains the revision. The file still exists in the commits earlier
         * to the commit that contains the deletion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteFile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFileAsync(const Model::DeleteFileRequest& request, const DeleteFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an approval rule from a specified pull request. Approval rules can be
         * deleted from a pull request only if the pull request is open, and if the
         * approval rule was created specifically for a pull request and not generated from
         * an approval rule template associated with the repository where the pull request
         * was created. You cannot delete an approval rule from a merged or closed pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeletePullRequestApprovalRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePullRequestApprovalRuleOutcome DeletePullRequestApprovalRule(const Model::DeletePullRequestApprovalRuleRequest& request) const;

        /**
         * <p>Deletes an approval rule from a specified pull request. Approval rules can be
         * deleted from a pull request only if the pull request is open, and if the
         * approval rule was created specifically for a pull request and not generated from
         * an approval rule template associated with the repository where the pull request
         * was created. You cannot delete an approval rule from a merged or closed pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeletePullRequestApprovalRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePullRequestApprovalRuleOutcomeCallable DeletePullRequestApprovalRuleCallable(const Model::DeletePullRequestApprovalRuleRequest& request) const;

        /**
         * <p>Deletes an approval rule from a specified pull request. Approval rules can be
         * deleted from a pull request only if the pull request is open, and if the
         * approval rule was created specifically for a pull request and not generated from
         * an approval rule template associated with the repository where the pull request
         * was created. You cannot delete an approval rule from a merged or closed pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeletePullRequestApprovalRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePullRequestApprovalRuleAsync(const Model::DeletePullRequestApprovalRuleRequest& request, const DeletePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a repository. If a specified repository was already deleted, a null
         * repository ID is returned.</p>  <p>Deleting a repository also deletes
         * all associated objects and metadata. After a repository is deleted, all future
         * push calls to the deleted repository fail.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;

        /**
         * <p>Deletes a repository. If a specified repository was already deleted, a null
         * repository ID is returned.</p>  <p>Deleting a repository also deletes
         * all associated objects and metadata. After a repository is deleted, all future
         * push calls to the deleted repository fail.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request) const;

        /**
         * <p>Deletes a repository. If a specified repository was already deleted, a null
         * repository ID is returned.</p>  <p>Deleting a repository also deletes
         * all associated objects and metadata. After a repository is deleted, all future
         * push calls to the deleted repository fail.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about one or more merge conflicts in the attempted merge
         * of two commit specifiers using the squash or three-way merge strategy. If the
         * merge option for the attempted merge is specified as FAST_FORWARD_MERGE, an
         * exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DescribeMergeConflicts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMergeConflictsOutcome DescribeMergeConflicts(const Model::DescribeMergeConflictsRequest& request) const;

        /**
         * <p>Returns information about one or more merge conflicts in the attempted merge
         * of two commit specifiers using the squash or three-way merge strategy. If the
         * merge option for the attempted merge is specified as FAST_FORWARD_MERGE, an
         * exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DescribeMergeConflicts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMergeConflictsOutcomeCallable DescribeMergeConflictsCallable(const Model::DescribeMergeConflictsRequest& request) const;

        /**
         * <p>Returns information about one or more merge conflicts in the attempted merge
         * of two commit specifiers using the squash or three-way merge strategy. If the
         * merge option for the attempted merge is specified as FAST_FORWARD_MERGE, an
         * exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DescribeMergeConflicts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMergeConflictsAsync(const Model::DescribeMergeConflictsRequest& request, const DescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about one or more pull request events.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DescribePullRequestEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePullRequestEventsOutcome DescribePullRequestEvents(const Model::DescribePullRequestEventsRequest& request) const;

        /**
         * <p>Returns information about one or more pull request events.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DescribePullRequestEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePullRequestEventsOutcomeCallable DescribePullRequestEventsCallable(const Model::DescribePullRequestEventsRequest& request) const;

        /**
         * <p>Returns information about one or more pull request events.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DescribePullRequestEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePullRequestEventsAsync(const Model::DescribePullRequestEventsRequest& request, const DescribePullRequestEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association between a template and a repository so that approval
         * rules based on the template are not automatically created when pull requests are
         * created in the specified repository. This does not delete any approval rules
         * previously created for pull requests through the template
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DisassociateApprovalRuleTemplateFromRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApprovalRuleTemplateFromRepositoryOutcome DisassociateApprovalRuleTemplateFromRepository(const Model::DisassociateApprovalRuleTemplateFromRepositoryRequest& request) const;

        /**
         * <p>Removes the association between a template and a repository so that approval
         * rules based on the template are not automatically created when pull requests are
         * created in the specified repository. This does not delete any approval rules
         * previously created for pull requests through the template
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DisassociateApprovalRuleTemplateFromRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateApprovalRuleTemplateFromRepositoryOutcomeCallable DisassociateApprovalRuleTemplateFromRepositoryCallable(const Model::DisassociateApprovalRuleTemplateFromRepositoryRequest& request) const;

        /**
         * <p>Removes the association between a template and a repository so that approval
         * rules based on the template are not automatically created when pull requests are
         * created in the specified repository. This does not delete any approval rules
         * previously created for pull requests through the template
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DisassociateApprovalRuleTemplateFromRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateApprovalRuleTemplateFromRepositoryAsync(const Model::DisassociateApprovalRuleTemplateFromRepositoryRequest& request, const DisassociateApprovalRuleTemplateFromRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Evaluates whether a pull request has met all the conditions specified in its
         * associated approval rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/EvaluatePullRequestApprovalRules">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluatePullRequestApprovalRulesOutcome EvaluatePullRequestApprovalRules(const Model::EvaluatePullRequestApprovalRulesRequest& request) const;

        /**
         * <p>Evaluates whether a pull request has met all the conditions specified in its
         * associated approval rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/EvaluatePullRequestApprovalRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EvaluatePullRequestApprovalRulesOutcomeCallable EvaluatePullRequestApprovalRulesCallable(const Model::EvaluatePullRequestApprovalRulesRequest& request) const;

        /**
         * <p>Evaluates whether a pull request has met all the conditions specified in its
         * associated approval rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/EvaluatePullRequestApprovalRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EvaluatePullRequestApprovalRulesAsync(const Model::EvaluatePullRequestApprovalRulesRequest& request, const EvaluatePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApprovalRuleTemplateOutcome GetApprovalRuleTemplate(const Model::GetApprovalRuleTemplateRequest& request) const;

        /**
         * <p>Returns information about a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetApprovalRuleTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApprovalRuleTemplateOutcomeCallable GetApprovalRuleTemplateCallable(const Model::GetApprovalRuleTemplateRequest& request) const;

        /**
         * <p>Returns information about a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetApprovalRuleTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApprovalRuleTemplateAsync(const Model::GetApprovalRuleTemplateRequest& request, const GetApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the base-64 encoded content of an individual blob in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBlob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlobOutcome GetBlob(const Model::GetBlobRequest& request) const;

        /**
         * <p>Returns the base-64 encoded content of an individual blob in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBlob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlobOutcomeCallable GetBlobCallable(const Model::GetBlobRequest& request) const;

        /**
         * <p>Returns the base-64 encoded content of an individual blob in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBlob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBlobAsync(const Model::GetBlobRequest& request, const GetBlobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a repository branch, including its name and the
         * last commit ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBranchOutcome GetBranch(const Model::GetBranchRequest& request) const;

        /**
         * <p>Returns information about a repository branch, including its name and the
         * last commit ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBranch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBranchOutcomeCallable GetBranchCallable(const Model::GetBranchRequest& request) const;

        /**
         * <p>Returns information about a repository branch, including its name and the
         * last commit ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBranch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBranchAsync(const Model::GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the content of a comment made on a change, file, or commit in a
         * repository. </p>  <p>Reaction counts might include numbers from user
         * identities who were deleted after the reaction was made. For a count of
         * reactions from active identities, use GetCommentReactions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetComment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommentOutcome GetComment(const Model::GetCommentRequest& request) const;

        /**
         * <p>Returns the content of a comment made on a change, file, or commit in a
         * repository. </p>  <p>Reaction counts might include numbers from user
         * identities who were deleted after the reaction was made. For a count of
         * reactions from active identities, use GetCommentReactions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetComment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCommentOutcomeCallable GetCommentCallable(const Model::GetCommentRequest& request) const;

        /**
         * <p>Returns the content of a comment made on a change, file, or commit in a
         * repository. </p>  <p>Reaction counts might include numbers from user
         * identities who were deleted after the reaction was made. For a count of
         * reactions from active identities, use GetCommentReactions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetComment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCommentAsync(const Model::GetCommentRequest& request, const GetCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about reactions to a specified comment ID. Reactions from
         * users who have been deleted will not be included in the count.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentReactions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommentReactionsOutcome GetCommentReactions(const Model::GetCommentReactionsRequest& request) const;

        /**
         * <p>Returns information about reactions to a specified comment ID. Reactions from
         * users who have been deleted will not be included in the count.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentReactions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCommentReactionsOutcomeCallable GetCommentReactionsCallable(const Model::GetCommentReactionsRequest& request) const;

        /**
         * <p>Returns information about reactions to a specified comment ID. Reactions from
         * users who have been deleted will not be included in the count.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentReactions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCommentReactionsAsync(const Model::GetCommentReactionsRequest& request, const GetCommentReactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about comments made on the comparison between two
         * commits.</p>  <p>Reaction counts might include numbers from user
         * identities who were deleted after the reaction was made. For a count of
         * reactions from active identities, use GetCommentReactions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentsForComparedCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommentsForComparedCommitOutcome GetCommentsForComparedCommit(const Model::GetCommentsForComparedCommitRequest& request) const;

        /**
         * <p>Returns information about comments made on the comparison between two
         * commits.</p>  <p>Reaction counts might include numbers from user
         * identities who were deleted after the reaction was made. For a count of
         * reactions from active identities, use GetCommentReactions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentsForComparedCommit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCommentsForComparedCommitOutcomeCallable GetCommentsForComparedCommitCallable(const Model::GetCommentsForComparedCommitRequest& request) const;

        /**
         * <p>Returns information about comments made on the comparison between two
         * commits.</p>  <p>Reaction counts might include numbers from user
         * identities who were deleted after the reaction was made. For a count of
         * reactions from active identities, use GetCommentReactions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentsForComparedCommit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCommentsForComparedCommitAsync(const Model::GetCommentsForComparedCommitRequest& request, const GetCommentsForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns comments made on a pull request.</p>  <p>Reaction counts might
         * include numbers from user identities who were deleted after the reaction was
         * made. For a count of reactions from active identities, use
         * GetCommentReactions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentsForPullRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommentsForPullRequestOutcome GetCommentsForPullRequest(const Model::GetCommentsForPullRequestRequest& request) const;

        /**
         * <p>Returns comments made on a pull request.</p>  <p>Reaction counts might
         * include numbers from user identities who were deleted after the reaction was
         * made. For a count of reactions from active identities, use
         * GetCommentReactions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentsForPullRequest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCommentsForPullRequestOutcomeCallable GetCommentsForPullRequestCallable(const Model::GetCommentsForPullRequestRequest& request) const;

        /**
         * <p>Returns comments made on a pull request.</p>  <p>Reaction counts might
         * include numbers from user identities who were deleted after the reaction was
         * made. For a count of reactions from active identities, use
         * GetCommentReactions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentsForPullRequest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCommentsForPullRequestAsync(const Model::GetCommentsForPullRequestRequest& request, const GetCommentsForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a commit, including commit message and committer
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommitOutcome GetCommit(const Model::GetCommitRequest& request) const;

        /**
         * <p>Returns information about a commit, including commit message and committer
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCommitOutcomeCallable GetCommitCallable(const Model::GetCommitRequest& request) const;

        /**
         * <p>Returns information about a commit, including commit message and committer
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCommitAsync(const Model::GetCommitRequest& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the differences in a valid commit specifier (such
         * as a branch, tag, HEAD, commit ID, or other fully qualified reference). Results
         * can be limited to a specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetDifferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDifferencesOutcome GetDifferences(const Model::GetDifferencesRequest& request) const;

        /**
         * <p>Returns information about the differences in a valid commit specifier (such
         * as a branch, tag, HEAD, commit ID, or other fully qualified reference). Results
         * can be limited to a specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetDifferences">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDifferencesOutcomeCallable GetDifferencesCallable(const Model::GetDifferencesRequest& request) const;

        /**
         * <p>Returns information about the differences in a valid commit specifier (such
         * as a branch, tag, HEAD, commit ID, or other fully qualified reference). Results
         * can be limited to a specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetDifferences">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDifferencesAsync(const Model::GetDifferencesRequest& request, const GetDifferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the base-64 encoded contents of a specified file and its
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetFile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFileOutcome GetFile(const Model::GetFileRequest& request) const;

        /**
         * <p>Returns the base-64 encoded contents of a specified file and its
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetFile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFileOutcomeCallable GetFileCallable(const Model::GetFileRequest& request) const;

        /**
         * <p>Returns the base-64 encoded contents of a specified file and its
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetFile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFileAsync(const Model::GetFileRequest& request, const GetFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the contents of a specified folder in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFolderOutcome GetFolder(const Model::GetFolderRequest& request) const;

        /**
         * <p>Returns the contents of a specified folder in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetFolder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFolderOutcomeCallable GetFolderCallable(const Model::GetFolderRequest& request) const;

        /**
         * <p>Returns the contents of a specified folder in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetFolder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFolderAsync(const Model::GetFolderRequest& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specified merge commit.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMergeCommitOutcome GetMergeCommit(const Model::GetMergeCommitRequest& request) const;

        /**
         * <p>Returns information about a specified merge commit.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeCommit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMergeCommitOutcomeCallable GetMergeCommitCallable(const Model::GetMergeCommitRequest& request) const;

        /**
         * <p>Returns information about a specified merge commit.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeCommit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMergeCommitAsync(const Model::GetMergeCommitRequest& request, const GetMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about merge conflicts between the before and after commit
         * IDs for a pull request in a repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeConflicts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMergeConflictsOutcome GetMergeConflicts(const Model::GetMergeConflictsRequest& request) const;

        /**
         * <p>Returns information about merge conflicts between the before and after commit
         * IDs for a pull request in a repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeConflicts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMergeConflictsOutcomeCallable GetMergeConflictsCallable(const Model::GetMergeConflictsRequest& request) const;

        /**
         * <p>Returns information about merge conflicts between the before and after commit
         * IDs for a pull request in a repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeConflicts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMergeConflictsAsync(const Model::GetMergeConflictsRequest& request, const GetMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the merge options available for merging two
         * specified branches. For details about why a merge option is not available, use
         * GetMergeConflicts or DescribeMergeConflicts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMergeOptionsOutcome GetMergeOptions(const Model::GetMergeOptionsRequest& request) const;

        /**
         * <p>Returns information about the merge options available for merging two
         * specified branches. For details about why a merge option is not available, use
         * GetMergeConflicts or DescribeMergeConflicts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMergeOptionsOutcomeCallable GetMergeOptionsCallable(const Model::GetMergeOptionsRequest& request) const;

        /**
         * <p>Returns information about the merge options available for merging two
         * specified branches. For details about why a merge option is not available, use
         * GetMergeConflicts or DescribeMergeConflicts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMergeOptionsAsync(const Model::GetMergeOptionsRequest& request, const GetMergeOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a pull request in a specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPullRequestOutcome GetPullRequest(const Model::GetPullRequestRequest& request) const;

        /**
         * <p>Gets information about a pull request in a specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPullRequestOutcomeCallable GetPullRequestCallable(const Model::GetPullRequestRequest& request) const;

        /**
         * <p>Gets information about a pull request in a specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPullRequestAsync(const Model::GetPullRequestRequest& request, const GetPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the approval states for a specified pull request.
         * Approval states only apply to pull requests that have one or more approval rules
         * applied to them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequestApprovalStates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPullRequestApprovalStatesOutcome GetPullRequestApprovalStates(const Model::GetPullRequestApprovalStatesRequest& request) const;

        /**
         * <p>Gets information about the approval states for a specified pull request.
         * Approval states only apply to pull requests that have one or more approval rules
         * applied to them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequestApprovalStates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPullRequestApprovalStatesOutcomeCallable GetPullRequestApprovalStatesCallable(const Model::GetPullRequestApprovalStatesRequest& request) const;

        /**
         * <p>Gets information about the approval states for a specified pull request.
         * Approval states only apply to pull requests that have one or more approval rules
         * applied to them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequestApprovalStates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPullRequestApprovalStatesAsync(const Model::GetPullRequestApprovalStatesRequest& request, const GetPullRequestApprovalStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about whether approval rules have been set aside
         * (overridden) for a pull request, and if so, the Amazon Resource Name (ARN) of
         * the user or identity that overrode the rules and their requirements for the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequestOverrideState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPullRequestOverrideStateOutcome GetPullRequestOverrideState(const Model::GetPullRequestOverrideStateRequest& request) const;

        /**
         * <p>Returns information about whether approval rules have been set aside
         * (overridden) for a pull request, and if so, the Amazon Resource Name (ARN) of
         * the user or identity that overrode the rules and their requirements for the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequestOverrideState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPullRequestOverrideStateOutcomeCallable GetPullRequestOverrideStateCallable(const Model::GetPullRequestOverrideStateRequest& request) const;

        /**
         * <p>Returns information about whether approval rules have been set aside
         * (overridden) for a pull request, and if so, the Amazon Resource Name (ARN) of
         * the user or identity that overrode the rules and their requirements for the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequestOverrideState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPullRequestOverrideStateAsync(const Model::GetPullRequestOverrideStateRequest& request, const GetPullRequestOverrideStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a repository.</p>  <p>The description field
         * for a repository accepts all HTML characters and all valid Unicode characters.
         * Applications that do not HTML-encode the description and display it in a webpage
         * can expose users to potentially malicious code. Make sure that you HTML-encode
         * the description field in any application that uses this API to display the
         * repository description on a webpage.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryOutcome GetRepository(const Model::GetRepositoryRequest& request) const;

        /**
         * <p>Returns information about a repository.</p>  <p>The description field
         * for a repository accepts all HTML characters and all valid Unicode characters.
         * Applications that do not HTML-encode the description and display it in a webpage
         * can expose users to potentially malicious code. Make sure that you HTML-encode
         * the description field in any application that uses this API to display the
         * repository description on a webpage.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryOutcomeCallable GetRepositoryCallable(const Model::GetRepositoryRequest& request) const;

        /**
         * <p>Returns information about a repository.</p>  <p>The description field
         * for a repository accepts all HTML characters and all valid Unicode characters.
         * Applications that do not HTML-encode the description and display it in a webpage
         * can expose users to potentially malicious code. Make sure that you HTML-encode
         * the description field in any application that uses this API to display the
         * repository description on a webpage.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositoryAsync(const Model::GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about triggers configured for a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepositoryTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryTriggersOutcome GetRepositoryTriggers(const Model::GetRepositoryTriggersRequest& request) const;

        /**
         * <p>Gets information about triggers configured for a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryTriggersOutcomeCallable GetRepositoryTriggersCallable(const Model::GetRepositoryTriggersRequest& request) const;

        /**
         * <p>Gets information about triggers configured for a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositoryTriggersAsync(const Model::GetRepositoryTriggersRequest& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all approval rule templates in the specified AWS Region in your AWS
         * account. If an AWS Region is not specified, the AWS Region where you are signed
         * in is used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListApprovalRuleTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApprovalRuleTemplatesOutcome ListApprovalRuleTemplates(const Model::ListApprovalRuleTemplatesRequest& request) const;

        /**
         * <p>Lists all approval rule templates in the specified AWS Region in your AWS
         * account. If an AWS Region is not specified, the AWS Region where you are signed
         * in is used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListApprovalRuleTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApprovalRuleTemplatesOutcomeCallable ListApprovalRuleTemplatesCallable(const Model::ListApprovalRuleTemplatesRequest& request) const;

        /**
         * <p>Lists all approval rule templates in the specified AWS Region in your AWS
         * account. If an AWS Region is not specified, the AWS Region where you are signed
         * in is used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListApprovalRuleTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApprovalRuleTemplatesAsync(const Model::ListApprovalRuleTemplatesRequest& request, const ListApprovalRuleTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all approval rule templates that are associated with a specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListAssociatedApprovalRuleTemplatesForRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedApprovalRuleTemplatesForRepositoryOutcome ListAssociatedApprovalRuleTemplatesForRepository(const Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request) const;

        /**
         * <p>Lists all approval rule templates that are associated with a specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListAssociatedApprovalRuleTemplatesForRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociatedApprovalRuleTemplatesForRepositoryOutcomeCallable ListAssociatedApprovalRuleTemplatesForRepositoryCallable(const Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request) const;

        /**
         * <p>Lists all approval rule templates that are associated with a specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListAssociatedApprovalRuleTemplatesForRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedApprovalRuleTemplatesForRepositoryAsync(const Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request, const ListAssociatedApprovalRuleTemplatesForRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more branches in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListBranches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBranchesOutcome ListBranches(const Model::ListBranchesRequest& request) const;

        /**
         * <p>Gets information about one or more branches in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListBranches">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBranchesOutcomeCallable ListBranchesCallable(const Model::ListBranchesRequest& request) const;

        /**
         * <p>Gets information about one or more branches in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListBranches">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBranchesAsync(const Model::ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of pull requests for a specified repository. The return list
         * can be refined by pull request status or pull request author ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListPullRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPullRequestsOutcome ListPullRequests(const Model::ListPullRequestsRequest& request) const;

        /**
         * <p>Returns a list of pull requests for a specified repository. The return list
         * can be refined by pull request status or pull request author ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListPullRequests">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPullRequestsOutcomeCallable ListPullRequestsCallable(const Model::ListPullRequestsRequest& request) const;

        /**
         * <p>Returns a list of pull requests for a specified repository. The return list
         * can be refined by pull request status or pull request author ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListPullRequests">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPullRequestsAsync(const Model::ListPullRequestsRequest& request, const ListPullRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more repositories.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesOutcome ListRepositories(const Model::ListRepositoriesRequest& request) const;

        /**
         * <p>Gets information about one or more repositories.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRepositoriesOutcomeCallable ListRepositoriesCallable(const Model::ListRepositoriesRequest& request) const;

        /**
         * <p>Gets information about one or more repositories.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRepositoriesAsync(const Model::ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all repositories associated with the specified approval rule
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositoriesForApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesForApprovalRuleTemplateOutcome ListRepositoriesForApprovalRuleTemplate(const Model::ListRepositoriesForApprovalRuleTemplateRequest& request) const;

        /**
         * <p>Lists all repositories associated with the specified approval rule
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositoriesForApprovalRuleTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRepositoriesForApprovalRuleTemplateOutcomeCallable ListRepositoriesForApprovalRuleTemplateCallable(const Model::ListRepositoriesForApprovalRuleTemplateRequest& request) const;

        /**
         * <p>Lists all repositories associated with the specified approval rule
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositoriesForApprovalRuleTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRepositoriesForApprovalRuleTemplateAsync(const Model::ListRepositoriesForApprovalRuleTemplateRequest& request, const ListRepositoriesForApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about AWS tags for a specified Amazon Resource Name (ARN) in
         * AWS CodeCommit. For a list of valid resources in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the<i> AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets information about AWS tags for a specified Amazon Resource Name (ARN) in
         * AWS CodeCommit. For a list of valid resources in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the<i> AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets information about AWS tags for a specified Amazon Resource Name (ARN) in
         * AWS CodeCommit. For a list of valid resources in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the<i> AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Merges two branches using the fast-forward merge strategy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesByFastForward">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeBranchesByFastForwardOutcome MergeBranchesByFastForward(const Model::MergeBranchesByFastForwardRequest& request) const;

        /**
         * <p>Merges two branches using the fast-forward merge strategy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesByFastForward">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MergeBranchesByFastForwardOutcomeCallable MergeBranchesByFastForwardCallable(const Model::MergeBranchesByFastForwardRequest& request) const;

        /**
         * <p>Merges two branches using the fast-forward merge strategy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesByFastForward">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MergeBranchesByFastForwardAsync(const Model::MergeBranchesByFastForwardRequest& request, const MergeBranchesByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Merges two branches using the squash merge strategy.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesBySquash">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeBranchesBySquashOutcome MergeBranchesBySquash(const Model::MergeBranchesBySquashRequest& request) const;

        /**
         * <p>Merges two branches using the squash merge strategy.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesBySquash">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MergeBranchesBySquashOutcomeCallable MergeBranchesBySquashCallable(const Model::MergeBranchesBySquashRequest& request) const;

        /**
         * <p>Merges two branches using the squash merge strategy.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesBySquash">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MergeBranchesBySquashAsync(const Model::MergeBranchesBySquashRequest& request, const MergeBranchesBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Merges two specified branches using the three-way merge
         * strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesByThreeWay">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeBranchesByThreeWayOutcome MergeBranchesByThreeWay(const Model::MergeBranchesByThreeWayRequest& request) const;

        /**
         * <p>Merges two specified branches using the three-way merge
         * strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesByThreeWay">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MergeBranchesByThreeWayOutcomeCallable MergeBranchesByThreeWayCallable(const Model::MergeBranchesByThreeWayRequest& request) const;

        /**
         * <p>Merges two specified branches using the three-way merge
         * strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesByThreeWay">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MergeBranchesByThreeWayAsync(const Model::MergeBranchesByThreeWayRequest& request, const MergeBranchesByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * fast-forward merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestByFastForward">AWS
         * API Reference</a></p>
         */
        virtual Model::MergePullRequestByFastForwardOutcome MergePullRequestByFastForward(const Model::MergePullRequestByFastForwardRequest& request) const;

        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * fast-forward merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestByFastForward">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MergePullRequestByFastForwardOutcomeCallable MergePullRequestByFastForwardCallable(const Model::MergePullRequestByFastForwardRequest& request) const;

        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * fast-forward merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestByFastForward">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MergePullRequestByFastForwardAsync(const Model::MergePullRequestByFastForwardRequest& request, const MergePullRequestByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * squash merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestBySquash">AWS
         * API Reference</a></p>
         */
        virtual Model::MergePullRequestBySquashOutcome MergePullRequestBySquash(const Model::MergePullRequestBySquashRequest& request) const;

        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * squash merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestBySquash">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MergePullRequestBySquashOutcomeCallable MergePullRequestBySquashCallable(const Model::MergePullRequestBySquashRequest& request) const;

        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * squash merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestBySquash">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MergePullRequestBySquashAsync(const Model::MergePullRequestBySquashRequest& request, const MergePullRequestBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * three-way merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestByThreeWay">AWS
         * API Reference</a></p>
         */
        virtual Model::MergePullRequestByThreeWayOutcome MergePullRequestByThreeWay(const Model::MergePullRequestByThreeWayRequest& request) const;

        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * three-way merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestByThreeWay">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MergePullRequestByThreeWayOutcomeCallable MergePullRequestByThreeWayCallable(const Model::MergePullRequestByThreeWayRequest& request) const;

        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * three-way merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestByThreeWay">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MergePullRequestByThreeWayAsync(const Model::MergePullRequestByThreeWayRequest& request, const MergePullRequestByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets aside (overrides) all approval rule requirements for a specified pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/OverridePullRequestApprovalRules">AWS
         * API Reference</a></p>
         */
        virtual Model::OverridePullRequestApprovalRulesOutcome OverridePullRequestApprovalRules(const Model::OverridePullRequestApprovalRulesRequest& request) const;

        /**
         * <p>Sets aside (overrides) all approval rule requirements for a specified pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/OverridePullRequestApprovalRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::OverridePullRequestApprovalRulesOutcomeCallable OverridePullRequestApprovalRulesCallable(const Model::OverridePullRequestApprovalRulesRequest& request) const;

        /**
         * <p>Sets aside (overrides) all approval rule requirements for a specified pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/OverridePullRequestApprovalRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void OverridePullRequestApprovalRulesAsync(const Model::OverridePullRequestApprovalRulesRequest& request, const OverridePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Posts a comment on the comparison between two commits.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentForComparedCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::PostCommentForComparedCommitOutcome PostCommentForComparedCommit(const Model::PostCommentForComparedCommitRequest& request) const;

        /**
         * <p>Posts a comment on the comparison between two commits.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentForComparedCommit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PostCommentForComparedCommitOutcomeCallable PostCommentForComparedCommitCallable(const Model::PostCommentForComparedCommitRequest& request) const;

        /**
         * <p>Posts a comment on the comparison between two commits.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentForComparedCommit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PostCommentForComparedCommitAsync(const Model::PostCommentForComparedCommitRequest& request, const PostCommentForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Posts a comment on a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentForPullRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::PostCommentForPullRequestOutcome PostCommentForPullRequest(const Model::PostCommentForPullRequestRequest& request) const;

        /**
         * <p>Posts a comment on a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentForPullRequest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PostCommentForPullRequestOutcomeCallable PostCommentForPullRequestCallable(const Model::PostCommentForPullRequestRequest& request) const;

        /**
         * <p>Posts a comment on a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentForPullRequest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PostCommentForPullRequestAsync(const Model::PostCommentForPullRequestRequest& request, const PostCommentForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Posts a comment in reply to an existing comment on a comparison between
         * commits or a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentReply">AWS
         * API Reference</a></p>
         */
        virtual Model::PostCommentReplyOutcome PostCommentReply(const Model::PostCommentReplyRequest& request) const;

        /**
         * <p>Posts a comment in reply to an existing comment on a comparison between
         * commits or a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentReply">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PostCommentReplyOutcomeCallable PostCommentReplyCallable(const Model::PostCommentReplyRequest& request) const;

        /**
         * <p>Posts a comment in reply to an existing comment on a comparison between
         * commits or a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentReply">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PostCommentReplyAsync(const Model::PostCommentReplyRequest& request, const PostCommentReplyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates a reaction to a specified comment for the user whose identity
         * is used to make the request. You can only add or update a reaction for yourself.
         * You cannot add, modify, or delete a reaction for another user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutCommentReaction">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCommentReactionOutcome PutCommentReaction(const Model::PutCommentReactionRequest& request) const;

        /**
         * <p>Adds or updates a reaction to a specified comment for the user whose identity
         * is used to make the request. You can only add or update a reaction for yourself.
         * You cannot add, modify, or delete a reaction for another user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutCommentReaction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutCommentReactionOutcomeCallable PutCommentReactionCallable(const Model::PutCommentReactionRequest& request) const;

        /**
         * <p>Adds or updates a reaction to a specified comment for the user whose identity
         * is used to make the request. You can only add or update a reaction for yourself.
         * You cannot add, modify, or delete a reaction for another user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutCommentReaction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutCommentReactionAsync(const Model::PutCommentReactionRequest& request, const PutCommentReactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates a file in a branch in an AWS CodeCommit repository, and
         * generates a commit for the addition in the specified branch.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutFile">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFileOutcome PutFile(const Model::PutFileRequest& request) const;

        /**
         * <p>Adds or updates a file in a branch in an AWS CodeCommit repository, and
         * generates a commit for the addition in the specified branch.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutFile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFileOutcomeCallable PutFileCallable(const Model::PutFileRequest& request) const;

        /**
         * <p>Adds or updates a file in a branch in an AWS CodeCommit repository, and
         * generates a commit for the addition in the specified branch.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutFile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFileAsync(const Model::PutFileRequest& request, const PutFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces all triggers for a repository. Used to create or delete
         * triggers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutRepositoryTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRepositoryTriggersOutcome PutRepositoryTriggers(const Model::PutRepositoryTriggersRequest& request) const;

        /**
         * <p>Replaces all triggers for a repository. Used to create or delete
         * triggers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRepositoryTriggersOutcomeCallable PutRepositoryTriggersCallable(const Model::PutRepositoryTriggersRequest& request) const;

        /**
         * <p>Replaces all triggers for a repository. Used to create or delete
         * triggers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRepositoryTriggersAsync(const Model::PutRepositoryTriggersRequest& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates tags for a resource in AWS CodeCommit. For a list of valid
         * resources in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or updates tags for a resource in AWS CodeCommit. For a list of valid
         * resources in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or updates tags for a resource in AWS CodeCommit. For a list of valid
         * resources in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests the functionality of repository triggers by sending information to the
         * trigger target. If real data is available in the repository, the test sends data
         * from the last commit. If no data is available, sample data is
         * generated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TestRepositoryTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::TestRepositoryTriggersOutcome TestRepositoryTriggers(const Model::TestRepositoryTriggersRequest& request) const;

        /**
         * <p>Tests the functionality of repository triggers by sending information to the
         * trigger target. If real data is available in the repository, the test sends data
         * from the last commit. If no data is available, sample data is
         * generated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TestRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestRepositoryTriggersOutcomeCallable TestRepositoryTriggersCallable(const Model::TestRepositoryTriggersRequest& request) const;

        /**
         * <p>Tests the functionality of repository triggers by sending information to the
         * trigger target. If real data is available in the repository, the test sends data
         * from the last commit. If no data is available, sample data is
         * generated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TestRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestRepositoryTriggersAsync(const Model::TestRepositoryTriggersRequest& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags for a resource in AWS CodeCommit. For a list of valid resources
         * in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags for a resource in AWS CodeCommit. For a list of valid resources
         * in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags for a resource in AWS CodeCommit. For a list of valid resources
         * in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the content of an approval rule template. You can change the number
         * of required approvals, the membership of the approval rule, and whether an
         * approval pool is defined.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApprovalRuleTemplateContentOutcome UpdateApprovalRuleTemplateContent(const Model::UpdateApprovalRuleTemplateContentRequest& request) const;

        /**
         * <p>Updates the content of an approval rule template. You can change the number
         * of required approvals, the membership of the approval rule, and whether an
         * approval pool is defined.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApprovalRuleTemplateContentOutcomeCallable UpdateApprovalRuleTemplateContentCallable(const Model::UpdateApprovalRuleTemplateContentRequest& request) const;

        /**
         * <p>Updates the content of an approval rule template. You can change the number
         * of required approvals, the membership of the approval rule, and whether an
         * approval pool is defined.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApprovalRuleTemplateContentAsync(const Model::UpdateApprovalRuleTemplateContentRequest& request, const UpdateApprovalRuleTemplateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description for a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApprovalRuleTemplateDescriptionOutcome UpdateApprovalRuleTemplateDescription(const Model::UpdateApprovalRuleTemplateDescriptionRequest& request) const;

        /**
         * <p>Updates the description for a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateDescription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApprovalRuleTemplateDescriptionOutcomeCallable UpdateApprovalRuleTemplateDescriptionCallable(const Model::UpdateApprovalRuleTemplateDescriptionRequest& request) const;

        /**
         * <p>Updates the description for a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateDescription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApprovalRuleTemplateDescriptionAsync(const Model::UpdateApprovalRuleTemplateDescriptionRequest& request, const UpdateApprovalRuleTemplateDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name of a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApprovalRuleTemplateNameOutcome UpdateApprovalRuleTemplateName(const Model::UpdateApprovalRuleTemplateNameRequest& request) const;

        /**
         * <p>Updates the name of a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateName">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApprovalRuleTemplateNameOutcomeCallable UpdateApprovalRuleTemplateNameCallable(const Model::UpdateApprovalRuleTemplateNameRequest& request) const;

        /**
         * <p>Updates the name of a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateName">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApprovalRuleTemplateNameAsync(const Model::UpdateApprovalRuleTemplateNameRequest& request, const UpdateApprovalRuleTemplateNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the contents of a comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateComment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCommentOutcome UpdateComment(const Model::UpdateCommentRequest& request) const;

        /**
         * <p>Replaces the contents of a comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateComment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCommentOutcomeCallable UpdateCommentCallable(const Model::UpdateCommentRequest& request) const;

        /**
         * <p>Replaces the contents of a comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateComment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCommentAsync(const Model::UpdateCommentRequest& request, const UpdateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets or changes the default branch name for the specified repository.</p>
         *  <p>If you use this operation to change the default branch name to the
         * current default branch name, a success message is returned even though the
         * default branch did not change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateDefaultBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDefaultBranchOutcome UpdateDefaultBranch(const Model::UpdateDefaultBranchRequest& request) const;

        /**
         * <p>Sets or changes the default branch name for the specified repository.</p>
         *  <p>If you use this operation to change the default branch name to the
         * current default branch name, a success message is returned even though the
         * default branch did not change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateDefaultBranch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDefaultBranchOutcomeCallable UpdateDefaultBranchCallable(const Model::UpdateDefaultBranchRequest& request) const;

        /**
         * <p>Sets or changes the default branch name for the specified repository.</p>
         *  <p>If you use this operation to change the default branch name to the
         * current default branch name, a success message is returned even though the
         * default branch did not change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateDefaultBranch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDefaultBranchAsync(const Model::UpdateDefaultBranchRequest& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the structure of an approval rule created specifically for a pull
         * request. For example, you can change the number of required approvers and the
         * approval pool for approvers. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestApprovalRuleContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestApprovalRuleContentOutcome UpdatePullRequestApprovalRuleContent(const Model::UpdatePullRequestApprovalRuleContentRequest& request) const;

        /**
         * <p>Updates the structure of an approval rule created specifically for a pull
         * request. For example, you can change the number of required approvers and the
         * approval pool for approvers. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestApprovalRuleContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePullRequestApprovalRuleContentOutcomeCallable UpdatePullRequestApprovalRuleContentCallable(const Model::UpdatePullRequestApprovalRuleContentRequest& request) const;

        /**
         * <p>Updates the structure of an approval rule created specifically for a pull
         * request. For example, you can change the number of required approvers and the
         * approval pool for approvers. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestApprovalRuleContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePullRequestApprovalRuleContentAsync(const Model::UpdatePullRequestApprovalRuleContentRequest& request, const UpdatePullRequestApprovalRuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the state of a user's approval on a pull request. The user is derived
         * from the signed-in account when the request is made.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestApprovalState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestApprovalStateOutcome UpdatePullRequestApprovalState(const Model::UpdatePullRequestApprovalStateRequest& request) const;

        /**
         * <p>Updates the state of a user's approval on a pull request. The user is derived
         * from the signed-in account when the request is made.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestApprovalState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePullRequestApprovalStateOutcomeCallable UpdatePullRequestApprovalStateCallable(const Model::UpdatePullRequestApprovalStateRequest& request) const;

        /**
         * <p>Updates the state of a user's approval on a pull request. The user is derived
         * from the signed-in account when the request is made.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestApprovalState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePullRequestApprovalStateAsync(const Model::UpdatePullRequestApprovalStateRequest& request, const UpdatePullRequestApprovalStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the contents of the description of a pull request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestDescriptionOutcome UpdatePullRequestDescription(const Model::UpdatePullRequestDescriptionRequest& request) const;

        /**
         * <p>Replaces the contents of the description of a pull request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestDescription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePullRequestDescriptionOutcomeCallable UpdatePullRequestDescriptionCallable(const Model::UpdatePullRequestDescriptionRequest& request) const;

        /**
         * <p>Replaces the contents of the description of a pull request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestDescription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePullRequestDescriptionAsync(const Model::UpdatePullRequestDescriptionRequest& request, const UpdatePullRequestDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of a pull request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestStatusOutcome UpdatePullRequestStatus(const Model::UpdatePullRequestStatusRequest& request) const;

        /**
         * <p>Updates the status of a pull request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePullRequestStatusOutcomeCallable UpdatePullRequestStatusCallable(const Model::UpdatePullRequestStatusRequest& request) const;

        /**
         * <p>Updates the status of a pull request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePullRequestStatusAsync(const Model::UpdatePullRequestStatusRequest& request, const UpdatePullRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the title of a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestTitle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestTitleOutcome UpdatePullRequestTitle(const Model::UpdatePullRequestTitleRequest& request) const;

        /**
         * <p>Replaces the title of a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestTitle">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePullRequestTitleOutcomeCallable UpdatePullRequestTitleCallable(const Model::UpdatePullRequestTitleRequest& request) const;

        /**
         * <p>Replaces the title of a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestTitle">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePullRequestTitleAsync(const Model::UpdatePullRequestTitleRequest& request, const UpdatePullRequestTitleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets or changes the comment or description for a repository.</p> 
         * <p>The description field for a repository accepts all HTML characters and all
         * valid Unicode characters. Applications that do not HTML-encode the description
         * and display it in a webpage can expose users to potentially malicious code. Make
         * sure that you HTML-encode the description field in any application that uses
         * this API to display the repository description on a webpage.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryDescriptionOutcome UpdateRepositoryDescription(const Model::UpdateRepositoryDescriptionRequest& request) const;

        /**
         * <p>Sets or changes the comment or description for a repository.</p> 
         * <p>The description field for a repository accepts all HTML characters and all
         * valid Unicode characters. Applications that do not HTML-encode the description
         * and display it in a webpage can expose users to potentially malicious code. Make
         * sure that you HTML-encode the description field in any application that uses
         * this API to display the repository description on a webpage.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryDescription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRepositoryDescriptionOutcomeCallable UpdateRepositoryDescriptionCallable(const Model::UpdateRepositoryDescriptionRequest& request) const;

        /**
         * <p>Sets or changes the comment or description for a repository.</p> 
         * <p>The description field for a repository accepts all HTML characters and all
         * valid Unicode characters. Applications that do not HTML-encode the description
         * and display it in a webpage can expose users to potentially malicious code. Make
         * sure that you HTML-encode the description field in any application that uses
         * this API to display the repository description on a webpage.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryDescription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRepositoryDescriptionAsync(const Model::UpdateRepositoryDescriptionRequest& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Renames a repository. The repository name must be unique across the calling
         * AWS account. Repository names are limited to 100 alphanumeric, dash, and
         * underscore characters, and cannot include certain characters. The suffix .git is
         * prohibited. For more information about the limits on repository names, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
         * in the AWS CodeCommit User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryNameOutcome UpdateRepositoryName(const Model::UpdateRepositoryNameRequest& request) const;

        /**
         * <p>Renames a repository. The repository name must be unique across the calling
         * AWS account. Repository names are limited to 100 alphanumeric, dash, and
         * underscore characters, and cannot include certain characters. The suffix .git is
         * prohibited. For more information about the limits on repository names, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
         * in the AWS CodeCommit User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryName">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRepositoryNameOutcomeCallable UpdateRepositoryNameCallable(const Model::UpdateRepositoryNameRequest& request) const;

        /**
         * <p>Renames a repository. The repository name must be unique across the calling
         * AWS account. Repository names are limited to 100 alphanumeric, dash, and
         * underscore characters, and cannot include certain characters. The suffix .git is
         * prohibited. For more information about the limits on repository names, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
         * in the AWS CodeCommit User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryName">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRepositoryNameAsync(const Model::UpdateRepositoryNameRequest& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateApprovalRuleTemplateWithRepositoryAsyncHelper(const Model::AssociateApprovalRuleTemplateWithRepositoryRequest& request, const AssociateApprovalRuleTemplateWithRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchAssociateApprovalRuleTemplateWithRepositoriesAsyncHelper(const Model::BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request, const BatchAssociateApprovalRuleTemplateWithRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDescribeMergeConflictsAsyncHelper(const Model::BatchDescribeMergeConflictsRequest& request, const BatchDescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDisassociateApprovalRuleTemplateFromRepositoriesAsyncHelper(const Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request, const BatchDisassociateApprovalRuleTemplateFromRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetCommitsAsyncHelper(const Model::BatchGetCommitsRequest& request, const BatchGetCommitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetRepositoriesAsyncHelper(const Model::BatchGetRepositoriesRequest& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApprovalRuleTemplateAsyncHelper(const Model::CreateApprovalRuleTemplateRequest& request, const CreateApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBranchAsyncHelper(const Model::CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCommitAsyncHelper(const Model::CreateCommitRequest& request, const CreateCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePullRequestAsyncHelper(const Model::CreatePullRequestRequest& request, const CreatePullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePullRequestApprovalRuleAsyncHelper(const Model::CreatePullRequestApprovalRuleRequest& request, const CreatePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRepositoryAsyncHelper(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUnreferencedMergeCommitAsyncHelper(const Model::CreateUnreferencedMergeCommitRequest& request, const CreateUnreferencedMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApprovalRuleTemplateAsyncHelper(const Model::DeleteApprovalRuleTemplateRequest& request, const DeleteApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBranchAsyncHelper(const Model::DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCommentContentAsyncHelper(const Model::DeleteCommentContentRequest& request, const DeleteCommentContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFileAsyncHelper(const Model::DeleteFileRequest& request, const DeleteFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePullRequestApprovalRuleAsyncHelper(const Model::DeletePullRequestApprovalRuleRequest& request, const DeletePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRepositoryAsyncHelper(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMergeConflictsAsyncHelper(const Model::DescribeMergeConflictsRequest& request, const DescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePullRequestEventsAsyncHelper(const Model::DescribePullRequestEventsRequest& request, const DescribePullRequestEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateApprovalRuleTemplateFromRepositoryAsyncHelper(const Model::DisassociateApprovalRuleTemplateFromRepositoryRequest& request, const DisassociateApprovalRuleTemplateFromRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EvaluatePullRequestApprovalRulesAsyncHelper(const Model::EvaluatePullRequestApprovalRulesRequest& request, const EvaluatePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApprovalRuleTemplateAsyncHelper(const Model::GetApprovalRuleTemplateRequest& request, const GetApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBlobAsyncHelper(const Model::GetBlobRequest& request, const GetBlobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBranchAsyncHelper(const Model::GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCommentAsyncHelper(const Model::GetCommentRequest& request, const GetCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCommentReactionsAsyncHelper(const Model::GetCommentReactionsRequest& request, const GetCommentReactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCommentsForComparedCommitAsyncHelper(const Model::GetCommentsForComparedCommitRequest& request, const GetCommentsForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCommentsForPullRequestAsyncHelper(const Model::GetCommentsForPullRequestRequest& request, const GetCommentsForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCommitAsyncHelper(const Model::GetCommitRequest& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDifferencesAsyncHelper(const Model::GetDifferencesRequest& request, const GetDifferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFileAsyncHelper(const Model::GetFileRequest& request, const GetFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFolderAsyncHelper(const Model::GetFolderRequest& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMergeCommitAsyncHelper(const Model::GetMergeCommitRequest& request, const GetMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMergeConflictsAsyncHelper(const Model::GetMergeConflictsRequest& request, const GetMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMergeOptionsAsyncHelper(const Model::GetMergeOptionsRequest& request, const GetMergeOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPullRequestAsyncHelper(const Model::GetPullRequestRequest& request, const GetPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPullRequestApprovalStatesAsyncHelper(const Model::GetPullRequestApprovalStatesRequest& request, const GetPullRequestApprovalStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPullRequestOverrideStateAsyncHelper(const Model::GetPullRequestOverrideStateRequest& request, const GetPullRequestOverrideStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRepositoryAsyncHelper(const Model::GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRepositoryTriggersAsyncHelper(const Model::GetRepositoryTriggersRequest& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApprovalRuleTemplatesAsyncHelper(const Model::ListApprovalRuleTemplatesRequest& request, const ListApprovalRuleTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociatedApprovalRuleTemplatesForRepositoryAsyncHelper(const Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request, const ListAssociatedApprovalRuleTemplatesForRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBranchesAsyncHelper(const Model::ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPullRequestsAsyncHelper(const Model::ListPullRequestsRequest& request, const ListPullRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRepositoriesAsyncHelper(const Model::ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRepositoriesForApprovalRuleTemplateAsyncHelper(const Model::ListRepositoriesForApprovalRuleTemplateRequest& request, const ListRepositoriesForApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MergeBranchesByFastForwardAsyncHelper(const Model::MergeBranchesByFastForwardRequest& request, const MergeBranchesByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MergeBranchesBySquashAsyncHelper(const Model::MergeBranchesBySquashRequest& request, const MergeBranchesBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MergeBranchesByThreeWayAsyncHelper(const Model::MergeBranchesByThreeWayRequest& request, const MergeBranchesByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MergePullRequestByFastForwardAsyncHelper(const Model::MergePullRequestByFastForwardRequest& request, const MergePullRequestByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MergePullRequestBySquashAsyncHelper(const Model::MergePullRequestBySquashRequest& request, const MergePullRequestBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MergePullRequestByThreeWayAsyncHelper(const Model::MergePullRequestByThreeWayRequest& request, const MergePullRequestByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void OverridePullRequestApprovalRulesAsyncHelper(const Model::OverridePullRequestApprovalRulesRequest& request, const OverridePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PostCommentForComparedCommitAsyncHelper(const Model::PostCommentForComparedCommitRequest& request, const PostCommentForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PostCommentForPullRequestAsyncHelper(const Model::PostCommentForPullRequestRequest& request, const PostCommentForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PostCommentReplyAsyncHelper(const Model::PostCommentReplyRequest& request, const PostCommentReplyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutCommentReactionAsyncHelper(const Model::PutCommentReactionRequest& request, const PutCommentReactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutFileAsyncHelper(const Model::PutFileRequest& request, const PutFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRepositoryTriggersAsyncHelper(const Model::PutRepositoryTriggersRequest& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestRepositoryTriggersAsyncHelper(const Model::TestRepositoryTriggersRequest& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApprovalRuleTemplateContentAsyncHelper(const Model::UpdateApprovalRuleTemplateContentRequest& request, const UpdateApprovalRuleTemplateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApprovalRuleTemplateDescriptionAsyncHelper(const Model::UpdateApprovalRuleTemplateDescriptionRequest& request, const UpdateApprovalRuleTemplateDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApprovalRuleTemplateNameAsyncHelper(const Model::UpdateApprovalRuleTemplateNameRequest& request, const UpdateApprovalRuleTemplateNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCommentAsyncHelper(const Model::UpdateCommentRequest& request, const UpdateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDefaultBranchAsyncHelper(const Model::UpdateDefaultBranchRequest& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePullRequestApprovalRuleContentAsyncHelper(const Model::UpdatePullRequestApprovalRuleContentRequest& request, const UpdatePullRequestApprovalRuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePullRequestApprovalStateAsyncHelper(const Model::UpdatePullRequestApprovalStateRequest& request, const UpdatePullRequestApprovalStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePullRequestDescriptionAsyncHelper(const Model::UpdatePullRequestDescriptionRequest& request, const UpdatePullRequestDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePullRequestStatusAsyncHelper(const Model::UpdatePullRequestStatusRequest& request, const UpdatePullRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePullRequestTitleAsyncHelper(const Model::UpdatePullRequestTitleRequest& request, const UpdatePullRequestTitleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRepositoryDescriptionAsyncHelper(const Model::UpdateRepositoryDescriptionRequest& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRepositoryNameAsyncHelper(const Model::UpdateRepositoryNameRequest& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeCommit
} // namespace Aws
