/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzerServiceClientModel.h>
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/GetFindingV2Request.h>
#include <aws/accessanalyzer/model/GetFindingV2Result.h>

namespace Aws {
namespace AccessAnalyzer {
namespace Pagination {

template <typename Client = AccessAnalyzerClient>
struct GetFindingV2PaginationTraits {
  using RequestType = Model::GetFindingV2Request;
  using ResultType = Model::GetFindingV2Result;
  using OutcomeType = Model::GetFindingV2Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetFindingV2(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AccessAnalyzer
}  // namespace Aws
