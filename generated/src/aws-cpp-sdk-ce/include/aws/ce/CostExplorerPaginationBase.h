/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/ce/model/GetAnomaliesPaginationTraits.h>
#include <aws/ce/model/GetAnomalyMonitorsPaginationTraits.h>
#include <aws/ce/model/GetAnomalySubscriptionsPaginationTraits.h>
#include <aws/ce/model/GetCostAndUsageComparisonsPaginationTraits.h>
#include <aws/ce/model/GetCostComparisonDriversPaginationTraits.h>
#include <aws/ce/model/GetReservationPurchaseRecommendationPaginationTraits.h>
#include <aws/ce/model/GetRightsizingRecommendationPaginationTraits.h>
#include <aws/ce/model/GetSavingsPlansCoveragePaginationTraits.h>
#include <aws/ce/model/GetSavingsPlansUtilizationDetailsPaginationTraits.h>
#include <aws/ce/model/ListCommitmentPurchaseAnalysesPaginationTraits.h>
#include <aws/ce/model/ListCostAllocationTagBackfillHistoryPaginationTraits.h>
#include <aws/ce/model/ListCostAllocationTagsPaginationTraits.h>
#include <aws/ce/model/ListCostCategoryDefinitionsPaginationTraits.h>
#include <aws/ce/model/ListCostCategoryResourceAssociationsPaginationTraits.h>
#include <aws/ce/model/ListSavingsPlansPurchaseRecommendationGenerationPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CostExplorer {

class CostExplorerClient;

template <typename DerivedClient>
class CostExplorerPaginationBase {
 public:
  /**
   * Create a paginator for GetAnomalies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAnomaliesRequest, Pagination::GetAnomaliesPaginationTraits<DerivedClient>>
  GetAnomaliesPaginator(const Model::GetAnomaliesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAnomaliesRequest,
                                             Pagination::GetAnomaliesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for GetAnomalyMonitors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAnomalyMonitorsRequest,
                                    Pagination::GetAnomalyMonitorsPaginationTraits<DerivedClient>>
  GetAnomalyMonitorsPaginator(const Model::GetAnomalyMonitorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAnomalyMonitorsRequest,
                                             Pagination::GetAnomalyMonitorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetAnomalySubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAnomalySubscriptionsRequest,
                                    Pagination::GetAnomalySubscriptionsPaginationTraits<DerivedClient>>
  GetAnomalySubscriptionsPaginator(const Model::GetAnomalySubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAnomalySubscriptionsRequest,
                                             Pagination::GetAnomalySubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCostAndUsageComparisons operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCostAndUsageComparisonsRequest,
                                    Pagination::GetCostAndUsageComparisonsPaginationTraits<DerivedClient>>
  GetCostAndUsageComparisonsPaginator(const Model::GetCostAndUsageComparisonsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCostAndUsageComparisonsRequest,
                                             Pagination::GetCostAndUsageComparisonsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCostComparisonDrivers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCostComparisonDriversRequest,
                                    Pagination::GetCostComparisonDriversPaginationTraits<DerivedClient>>
  GetCostComparisonDriversPaginator(const Model::GetCostComparisonDriversRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCostComparisonDriversRequest,
                                             Pagination::GetCostComparisonDriversPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetReservationPurchaseRecommendation operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetReservationPurchaseRecommendationRequest,
                                    Pagination::GetReservationPurchaseRecommendationPaginationTraits<DerivedClient>>
  GetReservationPurchaseRecommendationPaginator(const Model::GetReservationPurchaseRecommendationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetReservationPurchaseRecommendationRequest,
                                             Pagination::GetReservationPurchaseRecommendationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetRightsizingRecommendation operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRightsizingRecommendationRequest,
                                    Pagination::GetRightsizingRecommendationPaginationTraits<DerivedClient>>
  GetRightsizingRecommendationPaginator(const Model::GetRightsizingRecommendationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRightsizingRecommendationRequest,
                                             Pagination::GetRightsizingRecommendationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetSavingsPlansCoverage operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSavingsPlansCoverageRequest,
                                    Pagination::GetSavingsPlansCoveragePaginationTraits<DerivedClient>>
  GetSavingsPlansCoveragePaginator(const Model::GetSavingsPlansCoverageRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSavingsPlansCoverageRequest,
                                             Pagination::GetSavingsPlansCoveragePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetSavingsPlansUtilizationDetails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSavingsPlansUtilizationDetailsRequest,
                                    Pagination::GetSavingsPlansUtilizationDetailsPaginationTraits<DerivedClient>>
  GetSavingsPlansUtilizationDetailsPaginator(const Model::GetSavingsPlansUtilizationDetailsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSavingsPlansUtilizationDetailsRequest,
                                             Pagination::GetSavingsPlansUtilizationDetailsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCommitmentPurchaseAnalyses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommitmentPurchaseAnalysesRequest,
                                    Pagination::ListCommitmentPurchaseAnalysesPaginationTraits<DerivedClient>>
  ListCommitmentPurchaseAnalysesPaginator(const Model::ListCommitmentPurchaseAnalysesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommitmentPurchaseAnalysesRequest,
                                             Pagination::ListCommitmentPurchaseAnalysesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCostAllocationTagBackfillHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCostAllocationTagBackfillHistoryRequest,
                                    Pagination::ListCostAllocationTagBackfillHistoryPaginationTraits<DerivedClient>>
  ListCostAllocationTagBackfillHistoryPaginator(const Model::ListCostAllocationTagBackfillHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCostAllocationTagBackfillHistoryRequest,
                                             Pagination::ListCostAllocationTagBackfillHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCostAllocationTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCostAllocationTagsRequest,
                                    Pagination::ListCostAllocationTagsPaginationTraits<DerivedClient>>
  ListCostAllocationTagsPaginator(const Model::ListCostAllocationTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCostAllocationTagsRequest,
                                             Pagination::ListCostAllocationTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCostCategoryDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCostCategoryDefinitionsRequest,
                                    Pagination::ListCostCategoryDefinitionsPaginationTraits<DerivedClient>>
  ListCostCategoryDefinitionsPaginator(const Model::ListCostCategoryDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCostCategoryDefinitionsRequest,
                                             Pagination::ListCostCategoryDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCostCategoryResourceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCostCategoryResourceAssociationsRequest,
                                    Pagination::ListCostCategoryResourceAssociationsPaginationTraits<DerivedClient>>
  ListCostCategoryResourceAssociationsPaginator(const Model::ListCostCategoryResourceAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCostCategoryResourceAssociationsRequest,
                                             Pagination::ListCostCategoryResourceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSavingsPlansPurchaseRecommendationGeneration operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSavingsPlansPurchaseRecommendationGenerationRequest,
                                    Pagination::ListSavingsPlansPurchaseRecommendationGenerationPaginationTraits<DerivedClient>>
  ListSavingsPlansPurchaseRecommendationGenerationPaginator(const Model::ListSavingsPlansPurchaseRecommendationGenerationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSavingsPlansPurchaseRecommendationGenerationRequest,
                                             Pagination::ListSavingsPlansPurchaseRecommendationGenerationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CostExplorer
}  // namespace Aws
