/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzerServiceClientModel.h>
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/ListAnalyzersRequest.h>
#include <aws/accessanalyzer/model/ListAnalyzersResult.h>

namespace Aws {
namespace AccessAnalyzer {
namespace Pagination {

template <typename Client = AccessAnalyzerClient>
struct ListAnalyzersPaginationTraits {
  using RequestType = Model::ListAnalyzersRequest;
  using ResultType = Model::ListAnalyzersResult;
  using OutcomeType = Model::ListAnalyzersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAnalyzers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AccessAnalyzer
}  // namespace Aws
