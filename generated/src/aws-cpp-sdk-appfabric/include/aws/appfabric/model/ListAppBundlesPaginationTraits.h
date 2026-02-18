/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabricServiceClientModel.h>
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/ListAppBundlesRequest.h>
#include <aws/appfabric/model/ListAppBundlesResult.h>

namespace Aws {
namespace AppFabric {
namespace Pagination {

template <typename Client = AppFabricClient>
struct ListAppBundlesPaginationTraits {
  using RequestType = Model::ListAppBundlesRequest;
  using ResultType = Model::ListAppBundlesResult;
  using OutcomeType = Model::ListAppBundlesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAppBundles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppFabric
}  // namespace Aws
