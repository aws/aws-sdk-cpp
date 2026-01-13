/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/cost-optimization-hub/model/ListEfficiencyMetricsPaginationTraits.h>
#include <aws/cost-optimization-hub/model/ListEnrollmentStatusesPaginationTraits.h>
#include <aws/cost-optimization-hub/model/ListRecommendationSummariesPaginationTraits.h>
#include <aws/cost-optimization-hub/model/ListRecommendationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace CostOptimizationHub {

class CostOptimizationHubClient;

template <typename DerivedClient>
class CostOptimizationHubPaginationBase {
 public:
  /**
   * Create a paginator for ListEfficiencyMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEfficiencyMetricsRequest,
                                    Pagination::ListEfficiencyMetricsPaginationTraits<DerivedClient>>
  ListEfficiencyMetricsPaginator(const Model::ListEfficiencyMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEfficiencyMetricsRequest,
                                             Pagination::ListEfficiencyMetricsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEnrollmentStatuses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnrollmentStatusesRequest,
                                    Pagination::ListEnrollmentStatusesPaginationTraits<DerivedClient>>
  ListEnrollmentStatusesPaginator(const Model::ListEnrollmentStatusesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnrollmentStatusesRequest,
                                             Pagination::ListEnrollmentStatusesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                    Pagination::ListRecommendationsPaginationTraits<DerivedClient>>
  ListRecommendationsPaginator(const Model::ListRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                             Pagination::ListRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendationSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationSummariesRequest,
                                    Pagination::ListRecommendationSummariesPaginationTraits<DerivedClient>>
  ListRecommendationSummariesPaginator(const Model::ListRecommendationSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationSummariesRequest,
                                             Pagination::ListRecommendationSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CostOptimizationHub
}  // namespace Aws
