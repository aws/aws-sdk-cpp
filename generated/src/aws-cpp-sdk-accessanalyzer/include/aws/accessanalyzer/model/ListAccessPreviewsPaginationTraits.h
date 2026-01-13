/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzerServiceClientModel.h>
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/ListAccessPreviewsRequest.h>
#include <aws/accessanalyzer/model/ListAccessPreviewsResult.h>

namespace Aws {
namespace AccessAnalyzer {
namespace Pagination {

template <typename Client = AccessAnalyzerClient>
struct ListAccessPreviewsPaginationTraits {
  using RequestType = Model::ListAccessPreviewsRequest;
  using ResultType = Model::ListAccessPreviewsResult;
  using OutcomeType = Model::ListAccessPreviewsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAccessPreviews(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AccessAnalyzer
}  // namespace Aws
