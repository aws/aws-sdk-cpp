/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsPaginationTraits.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusesForOrganizationPaginationTraits.h>
#include <aws/compute-optimizer/model/GetLambdaFunctionRecommendationsPaginationTraits.h>
#include <aws/compute-optimizer/model/GetRecommendationPreferencesPaginationTraits.h>
#include <aws/compute-optimizer/model/GetRecommendationSummariesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ComputeOptimizer {

class ComputeOptimizerClient;

template <typename DerivedClient>
class ComputeOptimizerPaginationBase {
 public:
  /**
   * Create a paginator for DescribeRecommendationExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRecommendationExportJobsRequest,
                                    Pagination::DescribeRecommendationExportJobsPaginationTraits<DerivedClient>>
  DescribeRecommendationExportJobsPaginator(const Model::DescribeRecommendationExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRecommendationExportJobsRequest,
                                             Pagination::DescribeRecommendationExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetEnrollmentStatusesForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEnrollmentStatusesForOrganizationRequest,
                                    Pagination::GetEnrollmentStatusesForOrganizationPaginationTraits<DerivedClient>>
  GetEnrollmentStatusesForOrganizationPaginator(const Model::GetEnrollmentStatusesForOrganizationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEnrollmentStatusesForOrganizationRequest,
                                             Pagination::GetEnrollmentStatusesForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetLambdaFunctionRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLambdaFunctionRecommendationsRequest,
                                    Pagination::GetLambdaFunctionRecommendationsPaginationTraits<DerivedClient>>
  GetLambdaFunctionRecommendationsPaginator(const Model::GetLambdaFunctionRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLambdaFunctionRecommendationsRequest,
                                             Pagination::GetLambdaFunctionRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetRecommendationPreferences operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRecommendationPreferencesRequest,
                                    Pagination::GetRecommendationPreferencesPaginationTraits<DerivedClient>>
  GetRecommendationPreferencesPaginator(const Model::GetRecommendationPreferencesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRecommendationPreferencesRequest,
                                             Pagination::GetRecommendationPreferencesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetRecommendationSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRecommendationSummariesRequest,
                                    Pagination::GetRecommendationSummariesPaginationTraits<DerivedClient>>
  GetRecommendationSummariesPaginator(const Model::GetRecommendationSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRecommendationSummariesRequest,
                                             Pagination::GetRecommendationSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ComputeOptimizer
}  // namespace Aws
