/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/inspector/model/GetExclusionsPreviewPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentRunAgentsPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentRunsPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentTargetsPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentTemplatesPaginationTraits.h>
#include <aws/inspector/model/ListEventSubscriptionsPaginationTraits.h>
#include <aws/inspector/model/ListExclusionsPaginationTraits.h>
#include <aws/inspector/model/ListFindingsPaginationTraits.h>
#include <aws/inspector/model/ListRulesPackagesPaginationTraits.h>
#include <aws/inspector/model/PreviewAgentsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Inspector {

class InspectorClient;

template <typename DerivedClient>
class InspectorPaginationBase {
 public:
  /**
   * Create a paginator for GetExclusionsPreview operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetExclusionsPreviewRequest,
                                    Pagination::GetExclusionsPreviewPaginationTraits<DerivedClient>>
  GetExclusionsPreviewPaginator(const Model::GetExclusionsPreviewRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetExclusionsPreviewRequest,
                                             Pagination::GetExclusionsPreviewPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssessmentRunAgents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentRunAgentsRequest,
                                    Pagination::ListAssessmentRunAgentsPaginationTraits<DerivedClient>>
  ListAssessmentRunAgentsPaginator(const Model::ListAssessmentRunAgentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentRunAgentsRequest,
                                             Pagination::ListAssessmentRunAgentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssessmentRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentRunsRequest,
                                    Pagination::ListAssessmentRunsPaginationTraits<DerivedClient>>
  ListAssessmentRunsPaginator(const Model::ListAssessmentRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentRunsRequest,
                                             Pagination::ListAssessmentRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssessmentTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentTargetsRequest,
                                    Pagination::ListAssessmentTargetsPaginationTraits<DerivedClient>>
  ListAssessmentTargetsPaginator(const Model::ListAssessmentTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentTargetsRequest,
                                             Pagination::ListAssessmentTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssessmentTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentTemplatesRequest,
                                    Pagination::ListAssessmentTemplatesPaginationTraits<DerivedClient>>
  ListAssessmentTemplatesPaginator(const Model::ListAssessmentTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentTemplatesRequest,
                                             Pagination::ListAssessmentTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEventSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventSubscriptionsRequest,
                                    Pagination::ListEventSubscriptionsPaginationTraits<DerivedClient>>
  ListEventSubscriptionsPaginator(const Model::ListEventSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventSubscriptionsRequest,
                                             Pagination::ListEventSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListExclusions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExclusionsRequest, Pagination::ListExclusionsPaginationTraits<DerivedClient>>
  ListExclusionsPaginator(const Model::ListExclusionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExclusionsRequest,
                                             Pagination::ListExclusionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
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
   * Create a paginator for ListRulesPackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesPackagesRequest,
                                    Pagination::ListRulesPackagesPaginationTraits<DerivedClient>>
  ListRulesPackagesPaginator(const Model::ListRulesPackagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesPackagesRequest,
                                             Pagination::ListRulesPackagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for PreviewAgents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::PreviewAgentsRequest, Pagination::PreviewAgentsPaginationTraits<DerivedClient>>
  PreviewAgentsPaginator(const Model::PreviewAgentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::PreviewAgentsRequest,
                                             Pagination::PreviewAgentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace Inspector
}  // namespace Aws
