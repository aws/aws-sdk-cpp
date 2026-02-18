/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafanaServiceClientModel.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/ListPermissionsRequest.h>
#include <aws/grafana/model/ListPermissionsResult.h>

namespace Aws {
namespace ManagedGrafana {
namespace Pagination {

template <typename Client = ManagedGrafanaClient>
struct ListPermissionsPaginationTraits {
  using RequestType = Model::ListPermissionsRequest;
  using ResultType = Model::ListPermissionsResult;
  using OutcomeType = Model::ListPermissionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPermissions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ManagedGrafana
}  // namespace Aws
