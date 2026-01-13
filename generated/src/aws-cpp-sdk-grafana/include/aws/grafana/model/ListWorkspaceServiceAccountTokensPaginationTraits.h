/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafanaServiceClientModel.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountTokensRequest.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountTokensResult.h>

namespace Aws {
namespace ManagedGrafana {
namespace Pagination {

template <typename Client = ManagedGrafanaClient>
struct ListWorkspaceServiceAccountTokensPaginationTraits {
  using RequestType = Model::ListWorkspaceServiceAccountTokensRequest;
  using ResultType = Model::ListWorkspaceServiceAccountTokensResult;
  using OutcomeType = Model::ListWorkspaceServiceAccountTokensOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkspaceServiceAccountTokens(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ManagedGrafana
}  // namespace Aws
