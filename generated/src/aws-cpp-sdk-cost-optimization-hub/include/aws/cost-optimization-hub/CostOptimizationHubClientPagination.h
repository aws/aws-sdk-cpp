/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/cost-optimization-hub/CostOptimizationHubClient.h>
#include <aws/cost-optimization-hub/model/ListEfficiencyMetricsPaginationTraits.h>
#include <aws/cost-optimization-hub/model/ListEnrollmentStatusesPaginationTraits.h>
#include <aws/cost-optimization-hub/model/ListRecommendationSummariesPaginationTraits.h>
#include <aws/cost-optimization-hub/model/ListRecommendationsPaginationTraits.h>

namespace Aws {
namespace CostOptimizationHub {

using ListEfficiencyMetricsPaginator =
    Aws::Utils::Pagination::Paginator<CostOptimizationHubClient, Model::ListEfficiencyMetricsRequest,
                                      Pagination::ListEfficiencyMetricsPaginationTraits<CostOptimizationHubClient>>;
using ListEnrollmentStatusesPaginator =
    Aws::Utils::Pagination::Paginator<CostOptimizationHubClient, Model::ListEnrollmentStatusesRequest,
                                      Pagination::ListEnrollmentStatusesPaginationTraits<CostOptimizationHubClient>>;
using ListRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<CostOptimizationHubClient, Model::ListRecommendationsRequest,
                                      Pagination::ListRecommendationsPaginationTraits<CostOptimizationHubClient>>;
using ListRecommendationSummariesPaginator =
    Aws::Utils::Pagination::Paginator<CostOptimizationHubClient, Model::ListRecommendationSummariesRequest,
                                      Pagination::ListRecommendationSummariesPaginationTraits<CostOptimizationHubClient>>;

}  // namespace CostOptimizationHub
}  // namespace Aws
