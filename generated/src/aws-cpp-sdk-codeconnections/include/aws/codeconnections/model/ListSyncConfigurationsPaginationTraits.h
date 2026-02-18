/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnectionsServiceClientModel.h>
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/model/ListSyncConfigurationsRequest.h>
#include <aws/codeconnections/model/ListSyncConfigurationsResult.h>

namespace Aws {
namespace CodeConnections {
namespace Pagination {

template <typename Client = CodeConnectionsClient>
struct ListSyncConfigurationsPaginationTraits {
  using RequestType = Model::ListSyncConfigurationsRequest;
  using ResultType = Model::ListSyncConfigurationsResult;
  using OutcomeType = Model::ListSyncConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSyncConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeConnections
}  // namespace Aws
