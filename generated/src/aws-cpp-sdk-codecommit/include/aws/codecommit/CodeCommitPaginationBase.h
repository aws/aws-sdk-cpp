/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/codecommit/model/DescribeMergeConflictsPaginationTraits.h>
#include <aws/codecommit/model/DescribePullRequestEventsPaginationTraits.h>
#include <aws/codecommit/model/GetCommentReactionsPaginationTraits.h>
#include <aws/codecommit/model/GetCommentsForComparedCommitPaginationTraits.h>
#include <aws/codecommit/model/GetCommentsForPullRequestPaginationTraits.h>
#include <aws/codecommit/model/GetDifferencesPaginationTraits.h>
#include <aws/codecommit/model/GetMergeConflictsPaginationTraits.h>
#include <aws/codecommit/model/ListApprovalRuleTemplatesPaginationTraits.h>
#include <aws/codecommit/model/ListAssociatedApprovalRuleTemplatesForRepositoryPaginationTraits.h>
#include <aws/codecommit/model/ListBranchesPaginationTraits.h>
#include <aws/codecommit/model/ListFileCommitHistoryPaginationTraits.h>
#include <aws/codecommit/model/ListPullRequestsPaginationTraits.h>
#include <aws/codecommit/model/ListRepositoriesForApprovalRuleTemplatePaginationTraits.h>
#include <aws/codecommit/model/ListRepositoriesPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CodeCommit {

template <typename DerivedClient>
class CodeCommitPaginationBase {
 public:
  /**
   * Create a paginator for DescribeMergeConflicts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMergeConflictsRequest,
                                    Pagination::DescribeMergeConflictsPaginationTraits<DerivedClient>>
  DescribeMergeConflictsPaginator(const Model::DescribeMergeConflictsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMergeConflictsRequest,
                                             Pagination::DescribeMergeConflictsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePullRequestEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePullRequestEventsRequest,
                                    Pagination::DescribePullRequestEventsPaginationTraits<DerivedClient>>
  DescribePullRequestEventsPaginator(const Model::DescribePullRequestEventsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePullRequestEventsRequest,
                                             Pagination::DescribePullRequestEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCommentReactions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCommentReactionsRequest,
                                    Pagination::GetCommentReactionsPaginationTraits<DerivedClient>>
  GetCommentReactionsPaginator(const Model::GetCommentReactionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCommentReactionsRequest,
                                             Pagination::GetCommentReactionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCommentsForComparedCommit operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCommentsForComparedCommitRequest,
                                    Pagination::GetCommentsForComparedCommitPaginationTraits<DerivedClient>>
  GetCommentsForComparedCommitPaginator(const Model::GetCommentsForComparedCommitRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCommentsForComparedCommitRequest,
                                             Pagination::GetCommentsForComparedCommitPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCommentsForPullRequest operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCommentsForPullRequestRequest,
                                    Pagination::GetCommentsForPullRequestPaginationTraits<DerivedClient>>
  GetCommentsForPullRequestPaginator(const Model::GetCommentsForPullRequestRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCommentsForPullRequestRequest,
                                             Pagination::GetCommentsForPullRequestPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetDifferences operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDifferencesRequest, Pagination::GetDifferencesPaginationTraits<DerivedClient>>
  GetDifferencesPaginator(const Model::GetDifferencesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDifferencesRequest,
                                             Pagination::GetDifferencesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for GetMergeConflicts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMergeConflictsRequest,
                                    Pagination::GetMergeConflictsPaginationTraits<DerivedClient>>
  GetMergeConflictsPaginator(const Model::GetMergeConflictsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMergeConflictsRequest,
                                             Pagination::GetMergeConflictsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApprovalRuleTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApprovalRuleTemplatesRequest,
                                    Pagination::ListApprovalRuleTemplatesPaginationTraits<DerivedClient>>
  ListApprovalRuleTemplatesPaginator(const Model::ListApprovalRuleTemplatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApprovalRuleTemplatesRequest,
                                             Pagination::ListApprovalRuleTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssociatedApprovalRuleTemplatesForRepository operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest,
                                    Pagination::ListAssociatedApprovalRuleTemplatesForRepositoryPaginationTraits<DerivedClient>>
  ListAssociatedApprovalRuleTemplatesForRepositoryPaginator(const Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest,
                                             Pagination::ListAssociatedApprovalRuleTemplatesForRepositoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBranches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBranchesRequest, Pagination::ListBranchesPaginationTraits<DerivedClient>>
  ListBranchesPaginator(const Model::ListBranchesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBranchesRequest,
                                             Pagination::ListBranchesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListFileCommitHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFileCommitHistoryRequest,
                                    Pagination::ListFileCommitHistoryPaginationTraits<DerivedClient>>
  ListFileCommitHistoryPaginator(const Model::ListFileCommitHistoryRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFileCommitHistoryRequest,
                                             Pagination::ListFileCommitHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPullRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPullRequestsRequest,
                                    Pagination::ListPullRequestsPaginationTraits<DerivedClient>>
  ListPullRequestsPaginator(const Model::ListPullRequestsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPullRequestsRequest,
                                             Pagination::ListPullRequestsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRepositories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoriesRequest,
                                    Pagination::ListRepositoriesPaginationTraits<DerivedClient>>
  ListRepositoriesPaginator(const Model::ListRepositoriesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoriesRequest,
                                             Pagination::ListRepositoriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRepositoriesForApprovalRuleTemplate operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoriesForApprovalRuleTemplateRequest,
                                    Pagination::ListRepositoriesForApprovalRuleTemplatePaginationTraits<DerivedClient>>
  ListRepositoriesForApprovalRuleTemplatePaginator(const Model::ListRepositoriesForApprovalRuleTemplateRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoriesForApprovalRuleTemplateRequest,
                                             Pagination::ListRepositoriesForApprovalRuleTemplatePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CodeCommit
}  // namespace Aws
