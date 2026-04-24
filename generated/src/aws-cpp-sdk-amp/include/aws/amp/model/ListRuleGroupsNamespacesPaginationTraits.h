/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusServiceServiceClientModel.h>
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/ListRuleGroupsNamespacesRequest.h>
#include <aws/amp/model/ListRuleGroupsNamespacesResult.h>

namespace Aws {
namespace PrometheusService {
namespace Pagination {

template <typename Client = PrometheusServiceClient>
struct ListRuleGroupsNamespacesPaginationTraits {
  using RequestType = Model::ListRuleGroupsNamespacesRequest;
  using ResultType = Model::ListRuleGroupsNamespacesResult;
  using OutcomeType = Model::ListRuleGroupsNamespacesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRuleGroupsNamespaces(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PrometheusService
}  // namespace Aws
