/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuruServiceClientModel.h>
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/GetCostEstimationRequest.h>
#include <aws/devops-guru/model/GetCostEstimationResult.h>

namespace Aws {
namespace DevOpsGuru {
namespace Pagination {

template <typename Client = DevOpsGuruClient>
struct GetCostEstimationPaginationTraits {
  using RequestType = Model::GetCostEstimationRequest;
  using ResultType = Model::GetCostEstimationResult;
  using OutcomeType = Model::GetCostEstimationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetCostEstimation(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DevOpsGuru
}  // namespace Aws
