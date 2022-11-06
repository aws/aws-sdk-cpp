/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codecommit/CodeCommitErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codecommit/CodeCommitEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeCommitClient header */
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
/* End of service model headers required in CodeCommitClient header */

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
    using CodeCommitClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodeCommitEndpointProviderBase = Aws::CodeCommit::Endpoint::CodeCommitEndpointProviderBase;
    using CodeCommitEndpointProvider = Aws::CodeCommit::Endpoint::CodeCommitEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeCommitClient header */
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
      /* End of service model forward declarations required in CodeCommitClient header */

      /* Service model Outcome class definitions */
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeCommitClient;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace CodeCommit
} // namespace Aws
