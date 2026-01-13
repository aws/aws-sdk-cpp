/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDutyServiceClientModel.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ListCoverageRequest.h>
#include <aws/guardduty/model/ListCoverageResult.h>

namespace Aws {
namespace GuardDuty {
namespace Pagination {

template <typename Client = GuardDutyClient>
struct ListCoveragePaginationTraits {
  using RequestType = Model::ListCoverageRequest;
  using ResultType = Model::ListCoverageResult;
  using OutcomeType = Model::ListCoverageOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCoverage(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GuardDuty
}  // namespace Aws
