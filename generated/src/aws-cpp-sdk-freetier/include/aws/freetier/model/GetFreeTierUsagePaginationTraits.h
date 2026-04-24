/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTierServiceClientModel.h>
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/freetier/model/GetFreeTierUsageRequest.h>
#include <aws/freetier/model/GetFreeTierUsageResult.h>

namespace Aws {
namespace FreeTier {
namespace Pagination {

template <typename Client = FreeTierClient>
struct GetFreeTierUsagePaginationTraits {
  using RequestType = Model::GetFreeTierUsageRequest;
  using ResultType = Model::GetFreeTierUsageResult;
  using OutcomeType = Model::GetFreeTierUsageOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetFreeTierUsage(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FreeTier
}  // namespace Aws
