/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2ServiceClientModel.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ListCisScanResultsAggregatedByChecksRequest.h>
#include <aws/inspector2/model/ListCisScanResultsAggregatedByChecksResult.h>

namespace Aws {
namespace Inspector2 {
namespace Pagination {

template <typename Client = Inspector2Client>
struct ListCisScanResultsAggregatedByChecksPaginationTraits {
  using RequestType = Model::ListCisScanResultsAggregatedByChecksRequest;
  using ResultType = Model::ListCisScanResultsAggregatedByChecksResult;
  using OutcomeType = Model::ListCisScanResultsAggregatedByChecksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCisScanResultsAggregatedByChecks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Inspector2
}  // namespace Aws
