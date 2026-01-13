/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizerServiceClientModel.h>
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsRequest.h>
#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsResult.h>

namespace Aws {
namespace ComputeOptimizer {
namespace Pagination {

template <typename Client = ComputeOptimizerClient>
struct DescribeRecommendationExportJobsPaginationTraits {
  using RequestType = Model::DescribeRecommendationExportJobsRequest;
  using ResultType = Model::DescribeRecommendationExportJobsResult;
  using OutcomeType = Model::DescribeRecommendationExportJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeRecommendationExportJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ComputeOptimizer
}  // namespace Aws
