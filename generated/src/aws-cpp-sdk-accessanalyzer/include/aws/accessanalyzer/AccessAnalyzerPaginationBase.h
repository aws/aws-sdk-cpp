/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace AccessAnalyzer {

class AccessAnalyzerClient;

template <typename DerivedClient>
class AccessAnalyzerPaginationBase {
 public:
  /**
   * Create a paginator for GetFindingRecommendation operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingRecommendationRequest,
                                    Pagination::GetFindingRecommendationPaginationTraits<DerivedClient>>
  GetFindingRecommendationPaginator(const Model::GetFindingRecommendationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingRecommendationRequest,
                                             Pagination::GetFindingRecommendationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetFindingV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingV2Request, Pagination::GetFindingV2PaginationTraits<DerivedClient>>
  GetFindingV2Paginator(const Model::GetFindingV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingV2Request,
                                             Pagination::GetFindingV2PaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListAccessPreviewFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPreviewFindingsRequest,
                                    Pagination::ListAccessPreviewFindingsPaginationTraits<DerivedClient>>
  ListAccessPreviewFindingsPaginator(const Model::ListAccessPreviewFindingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPreviewFindingsRequest,
                                             Pagination::ListAccessPreviewFindingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccessPreviews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPreviewsRequest,
                                    Pagination::ListAccessPreviewsPaginationTraits<DerivedClient>>
  ListAccessPreviewsPaginator(const Model::ListAccessPreviewsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPreviewsRequest,
                                             Pagination::ListAccessPreviewsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAnalyzedResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalyzedResourcesRequest,
                                    Pagination::ListAnalyzedResourcesPaginationTraits<DerivedClient>>
  ListAnalyzedResourcesPaginator(const Model::ListAnalyzedResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalyzedResourcesRequest,
                                             Pagination::ListAnalyzedResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAnalyzers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalyzersRequest, Pagination::ListAnalyzersPaginationTraits<DerivedClient>>
  ListAnalyzersPaginator(const Model::ListAnalyzersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalyzersRequest,
                                             Pagination::ListAnalyzersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListArchiveRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArchiveRulesRequest,
                                    Pagination::ListArchiveRulesPaginationTraits<DerivedClient>>
  ListArchiveRulesPaginator(const Model::ListArchiveRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArchiveRulesRequest,
                                             Pagination::ListArchiveRulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsRequest, Pagination::ListFindingsPaginationTraits<DerivedClient>>
  ListFindingsPaginator(const Model::ListFindingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsRequest,
                                             Pagination::ListFindingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListFindingsV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsV2Request, Pagination::ListFindingsV2PaginationTraits<DerivedClient>>
  ListFindingsV2Paginator(const Model::ListFindingsV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsV2Request,
                                             Pagination::ListFindingsV2PaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListPolicyGenerations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyGenerationsRequest,
                                    Pagination::ListPolicyGenerationsPaginationTraits<DerivedClient>>
  ListPolicyGenerationsPaginator(const Model::ListPolicyGenerationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyGenerationsRequest,
                                             Pagination::ListPolicyGenerationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ValidatePolicy operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ValidatePolicyRequest, Pagination::ValidatePolicyPaginationTraits<DerivedClient>>
  ValidatePolicyPaginator(const Model::ValidatePolicyRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ValidatePolicyRequest,
                                             Pagination::ValidatePolicyPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace AccessAnalyzer
}  // namespace Aws
