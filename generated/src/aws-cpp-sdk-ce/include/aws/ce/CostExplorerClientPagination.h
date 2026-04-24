/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorerClient.h>
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

namespace Aws {
namespace CostExplorer {

using GetAnomaliesPaginator = Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::GetAnomaliesRequest,
                                                                Pagination::GetAnomaliesPaginationTraits<CostExplorerClient>>;
using GetAnomalyMonitorsPaginator = Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::GetAnomalyMonitorsRequest,
                                                                      Pagination::GetAnomalyMonitorsPaginationTraits<CostExplorerClient>>;
using GetAnomalySubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::GetAnomalySubscriptionsRequest,
                                      Pagination::GetAnomalySubscriptionsPaginationTraits<CostExplorerClient>>;
using GetCostAndUsageComparisonsPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::GetCostAndUsageComparisonsRequest,
                                      Pagination::GetCostAndUsageComparisonsPaginationTraits<CostExplorerClient>>;
using GetCostComparisonDriversPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::GetCostComparisonDriversRequest,
                                      Pagination::GetCostComparisonDriversPaginationTraits<CostExplorerClient>>;
using GetReservationPurchaseRecommendationPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::GetReservationPurchaseRecommendationRequest,
                                      Pagination::GetReservationPurchaseRecommendationPaginationTraits<CostExplorerClient>>;
using GetRightsizingRecommendationPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::GetRightsizingRecommendationRequest,
                                      Pagination::GetRightsizingRecommendationPaginationTraits<CostExplorerClient>>;
using GetSavingsPlansCoveragePaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::GetSavingsPlansCoverageRequest,
                                      Pagination::GetSavingsPlansCoveragePaginationTraits<CostExplorerClient>>;
using GetSavingsPlansUtilizationDetailsPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::GetSavingsPlansUtilizationDetailsRequest,
                                      Pagination::GetSavingsPlansUtilizationDetailsPaginationTraits<CostExplorerClient>>;
using ListCommitmentPurchaseAnalysesPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::ListCommitmentPurchaseAnalysesRequest,
                                      Pagination::ListCommitmentPurchaseAnalysesPaginationTraits<CostExplorerClient>>;
using ListCostAllocationTagBackfillHistoryPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::ListCostAllocationTagBackfillHistoryRequest,
                                      Pagination::ListCostAllocationTagBackfillHistoryPaginationTraits<CostExplorerClient>>;
using ListCostAllocationTagsPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::ListCostAllocationTagsRequest,
                                      Pagination::ListCostAllocationTagsPaginationTraits<CostExplorerClient>>;
using ListCostCategoryDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::ListCostCategoryDefinitionsRequest,
                                      Pagination::ListCostCategoryDefinitionsPaginationTraits<CostExplorerClient>>;
using ListCostCategoryResourceAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::ListCostCategoryResourceAssociationsRequest,
                                      Pagination::ListCostCategoryResourceAssociationsPaginationTraits<CostExplorerClient>>;
using ListSavingsPlansPurchaseRecommendationGenerationPaginator =
    Aws::Utils::Pagination::Paginator<CostExplorerClient, Model::ListSavingsPlansPurchaseRecommendationGenerationRequest,
                                      Pagination::ListSavingsPlansPurchaseRecommendationGenerationPaginationTraits<CostExplorerClient>>;

}  // namespace CostExplorer
}  // namespace Aws
