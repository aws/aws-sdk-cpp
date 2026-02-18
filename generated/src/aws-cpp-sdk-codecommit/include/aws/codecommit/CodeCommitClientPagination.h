/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommitClient.h>
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
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CodeCommit {

using DescribeMergeConflictsPaginator =
    Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::DescribeMergeConflictsRequest,
                                      Pagination::DescribeMergeConflictsPaginationTraits<CodeCommitClient>>;
using DescribePullRequestEventsPaginator =
    Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::DescribePullRequestEventsRequest,
                                      Pagination::DescribePullRequestEventsPaginationTraits<CodeCommitClient>>;
using GetCommentReactionsPaginator = Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::GetCommentReactionsRequest,
                                                                       Pagination::GetCommentReactionsPaginationTraits<CodeCommitClient>>;
using GetCommentsForComparedCommitPaginator =
    Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::GetCommentsForComparedCommitRequest,
                                      Pagination::GetCommentsForComparedCommitPaginationTraits<CodeCommitClient>>;
using GetCommentsForPullRequestPaginator =
    Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::GetCommentsForPullRequestRequest,
                                      Pagination::GetCommentsForPullRequestPaginationTraits<CodeCommitClient>>;
using GetDifferencesPaginator = Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::GetDifferencesRequest,
                                                                  Pagination::GetDifferencesPaginationTraits<CodeCommitClient>>;
using GetMergeConflictsPaginator = Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::GetMergeConflictsRequest,
                                                                     Pagination::GetMergeConflictsPaginationTraits<CodeCommitClient>>;
using ListApprovalRuleTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::ListApprovalRuleTemplatesRequest,
                                      Pagination::ListApprovalRuleTemplatesPaginationTraits<CodeCommitClient>>;
using ListAssociatedApprovalRuleTemplatesForRepositoryPaginator =
    Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest,
                                      Pagination::ListAssociatedApprovalRuleTemplatesForRepositoryPaginationTraits<CodeCommitClient>>;
using ListBranchesPaginator = Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::ListBranchesRequest,
                                                                Pagination::ListBranchesPaginationTraits<CodeCommitClient>>;
using ListFileCommitHistoryPaginator =
    Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::ListFileCommitHistoryRequest,
                                      Pagination::ListFileCommitHistoryPaginationTraits<CodeCommitClient>>;
using ListPullRequestsPaginator = Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::ListPullRequestsRequest,
                                                                    Pagination::ListPullRequestsPaginationTraits<CodeCommitClient>>;
using ListRepositoriesPaginator = Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::ListRepositoriesRequest,
                                                                    Pagination::ListRepositoriesPaginationTraits<CodeCommitClient>>;
using ListRepositoriesForApprovalRuleTemplatePaginator =
    Aws::Utils::Pagination::Paginator<CodeCommitClient, Model::ListRepositoriesForApprovalRuleTemplateRequest,
                                      Pagination::ListRepositoriesForApprovalRuleTemplatePaginationTraits<CodeCommitClient>>;

}  // namespace CodeCommit
}  // namespace Aws
