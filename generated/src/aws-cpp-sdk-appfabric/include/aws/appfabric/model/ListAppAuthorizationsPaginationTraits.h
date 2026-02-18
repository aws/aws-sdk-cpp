/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabricServiceClientModel.h>
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/ListAppAuthorizationsRequest.h>
#include <aws/appfabric/model/ListAppAuthorizationsResult.h>

namespace Aws {
namespace AppFabric {
namespace Pagination {

template <typename Client = AppFabricClient>
struct ListAppAuthorizationsPaginationTraits {
  using RequestType = Model::ListAppAuthorizationsRequest;
  using ResultType = Model::ListAppAuthorizationsResult;
  using OutcomeType = Model::ListAppAuthorizationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAppAuthorizations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppFabric
}  // namespace Aws
