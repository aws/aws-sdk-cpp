/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzerServiceClientModel.h>
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/ListArchiveRulesRequest.h>
#include <aws/accessanalyzer/model/ListArchiveRulesResult.h>

namespace Aws {
namespace AccessAnalyzer {
namespace Pagination {

template <typename Client = AccessAnalyzerClient>
struct ListArchiveRulesPaginationTraits {
  using RequestType = Model::ListArchiveRulesRequest;
  using ResultType = Model::ListArchiveRulesResult;
  using OutcomeType = Model::ListArchiveRulesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListArchiveRules(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AccessAnalyzer
}  // namespace Aws
