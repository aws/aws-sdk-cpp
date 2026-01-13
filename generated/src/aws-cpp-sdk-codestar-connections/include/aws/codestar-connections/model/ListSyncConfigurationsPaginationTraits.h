/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnectionsServiceClientModel.h>
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/model/ListSyncConfigurationsRequest.h>
#include <aws/codestar-connections/model/ListSyncConfigurationsResult.h>

namespace Aws {
namespace CodeStarconnections {
namespace Pagination {

template <typename Client = CodeStarconnectionsClient>
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
}  // namespace CodeStarconnections
}  // namespace Aws
