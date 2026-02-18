/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurityServiceClientModel.h>
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/model/ListFindingsMetricsRequest.h>
#include <aws/codeguru-security/model/ListFindingsMetricsResult.h>

namespace Aws {
namespace CodeGuruSecurity {
namespace Pagination {

template <typename Client = CodeGuruSecurityClient>
struct ListFindingsMetricsPaginationTraits {
  using RequestType = Model::ListFindingsMetricsRequest;
  using ResultType = Model::ListFindingsMetricsResult;
  using OutcomeType = Model::ListFindingsMetricsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFindingsMetrics(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeGuruSecurity
}  // namespace Aws
