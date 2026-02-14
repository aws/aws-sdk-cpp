/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizerClient.h>
#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsPaginationTraits.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusesForOrganizationPaginationTraits.h>
#include <aws/compute-optimizer/model/GetLambdaFunctionRecommendationsPaginationTraits.h>
#include <aws/compute-optimizer/model/GetRecommendationPreferencesPaginationTraits.h>
#include <aws/compute-optimizer/model/GetRecommendationSummariesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ComputeOptimizer {

using DescribeRecommendationExportJobsPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerClient, Model::DescribeRecommendationExportJobsRequest,
                                      Pagination::DescribeRecommendationExportJobsPaginationTraits<ComputeOptimizerClient>>;
using GetEnrollmentStatusesForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerClient, Model::GetEnrollmentStatusesForOrganizationRequest,
                                      Pagination::GetEnrollmentStatusesForOrganizationPaginationTraits<ComputeOptimizerClient>>;
using GetLambdaFunctionRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerClient, Model::GetLambdaFunctionRecommendationsRequest,
                                      Pagination::GetLambdaFunctionRecommendationsPaginationTraits<ComputeOptimizerClient>>;
using GetRecommendationPreferencesPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerClient, Model::GetRecommendationPreferencesRequest,
                                      Pagination::GetRecommendationPreferencesPaginationTraits<ComputeOptimizerClient>>;
using GetRecommendationSummariesPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerClient, Model::GetRecommendationSummariesRequest,
                                      Pagination::GetRecommendationSummariesPaginationTraits<ComputeOptimizerClient>>;

}  // namespace ComputeOptimizer
}  // namespace Aws
