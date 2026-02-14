/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzerClient.h>
#include <aws/accessanalyzer/model/GetFindingRecommendationPaginationTraits.h>
#include <aws/accessanalyzer/model/GetFindingV2PaginationTraits.h>
#include <aws/accessanalyzer/model/ListAccessPreviewFindingsPaginationTraits.h>
#include <aws/accessanalyzer/model/ListAccessPreviewsPaginationTraits.h>
#include <aws/accessanalyzer/model/ListAnalyzedResourcesPaginationTraits.h>
#include <aws/accessanalyzer/model/ListAnalyzersPaginationTraits.h>
#include <aws/accessanalyzer/model/ListArchiveRulesPaginationTraits.h>
#include <aws/accessanalyzer/model/ListFindingsPaginationTraits.h>
#include <aws/accessanalyzer/model/ListFindingsV2PaginationTraits.h>
#include <aws/accessanalyzer/model/ListPolicyGenerationsPaginationTraits.h>
#include <aws/accessanalyzer/model/ValidatePolicyPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AccessAnalyzer {

using GetFindingRecommendationPaginator =
    Aws::Utils::Pagination::Paginator<AccessAnalyzerClient, Model::GetFindingRecommendationRequest,
                                      Pagination::GetFindingRecommendationPaginationTraits<AccessAnalyzerClient>>;
using GetFindingV2Paginator = Aws::Utils::Pagination::Paginator<AccessAnalyzerClient, Model::GetFindingV2Request,
                                                                Pagination::GetFindingV2PaginationTraits<AccessAnalyzerClient>>;
using ListAccessPreviewFindingsPaginator =
    Aws::Utils::Pagination::Paginator<AccessAnalyzerClient, Model::ListAccessPreviewFindingsRequest,
                                      Pagination::ListAccessPreviewFindingsPaginationTraits<AccessAnalyzerClient>>;
using ListAccessPreviewsPaginator = Aws::Utils::Pagination::Paginator<AccessAnalyzerClient, Model::ListAccessPreviewsRequest,
                                                                      Pagination::ListAccessPreviewsPaginationTraits<AccessAnalyzerClient>>;
using ListAnalyzedResourcesPaginator =
    Aws::Utils::Pagination::Paginator<AccessAnalyzerClient, Model::ListAnalyzedResourcesRequest,
                                      Pagination::ListAnalyzedResourcesPaginationTraits<AccessAnalyzerClient>>;
using ListAnalyzersPaginator = Aws::Utils::Pagination::Paginator<AccessAnalyzerClient, Model::ListAnalyzersRequest,
                                                                 Pagination::ListAnalyzersPaginationTraits<AccessAnalyzerClient>>;
using ListArchiveRulesPaginator = Aws::Utils::Pagination::Paginator<AccessAnalyzerClient, Model::ListArchiveRulesRequest,
                                                                    Pagination::ListArchiveRulesPaginationTraits<AccessAnalyzerClient>>;
using ListFindingsPaginator = Aws::Utils::Pagination::Paginator<AccessAnalyzerClient, Model::ListFindingsRequest,
                                                                Pagination::ListFindingsPaginationTraits<AccessAnalyzerClient>>;
using ListFindingsV2Paginator = Aws::Utils::Pagination::Paginator<AccessAnalyzerClient, Model::ListFindingsV2Request,
                                                                  Pagination::ListFindingsV2PaginationTraits<AccessAnalyzerClient>>;
using ListPolicyGenerationsPaginator =
    Aws::Utils::Pagination::Paginator<AccessAnalyzerClient, Model::ListPolicyGenerationsRequest,
                                      Pagination::ListPolicyGenerationsPaginationTraits<AccessAnalyzerClient>>;
using ValidatePolicyPaginator = Aws::Utils::Pagination::Paginator<AccessAnalyzerClient, Model::ValidatePolicyRequest,
                                                                  Pagination::ValidatePolicyPaginationTraits<AccessAnalyzerClient>>;

}  // namespace AccessAnalyzer
}  // namespace Aws
