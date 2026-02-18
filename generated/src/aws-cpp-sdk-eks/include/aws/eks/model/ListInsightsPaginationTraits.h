/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKSServiceClientModel.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ListInsightsRequest.h>
#include <aws/eks/model/ListInsightsResult.h>

namespace Aws {
namespace EKS {
namespace Pagination {

template <typename Client = EKSClient>
struct ListInsightsPaginationTraits {
  using RequestType = Model::ListInsightsRequest;
  using ResultType = Model::ListInsightsResult;
  using OutcomeType = Model::ListInsightsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListInsights(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EKS
}  // namespace Aws
