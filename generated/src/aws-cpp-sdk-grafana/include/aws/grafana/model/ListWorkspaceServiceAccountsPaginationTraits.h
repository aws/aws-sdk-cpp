/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafanaServiceClientModel.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountsRequest.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountsResult.h>

namespace Aws {
namespace ManagedGrafana {
namespace Pagination {

template <typename Client = ManagedGrafanaClient>
struct ListWorkspaceServiceAccountsPaginationTraits {
  using RequestType = Model::ListWorkspaceServiceAccountsRequest;
  using ResultType = Model::ListWorkspaceServiceAccountsResult;
  using OutcomeType = Model::ListWorkspaceServiceAccountsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkspaceServiceAccounts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ManagedGrafana
}  // namespace Aws
