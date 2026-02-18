/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafanaServiceClientModel.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/ListWorkspacesRequest.h>
#include <aws/grafana/model/ListWorkspacesResult.h>

namespace Aws {
namespace ManagedGrafana {
namespace Pagination {

template <typename Client = ManagedGrafanaClient>
struct ListWorkspacesPaginationTraits {
  using RequestType = Model::ListWorkspacesRequest;
  using ResultType = Model::ListWorkspacesResult;
  using OutcomeType = Model::ListWorkspacesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkspaces(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ManagedGrafana
}  // namespace Aws
