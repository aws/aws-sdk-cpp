/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/AccountServiceClientModel.h>
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/model/ListRegionsRequest.h>
#include <aws/account/model/ListRegionsResult.h>

namespace Aws {
namespace Account {
namespace Pagination {

template <typename Client = AccountClient>
struct ListRegionsPaginationTraits {
  using RequestType = Model::ListRegionsRequest;
  using ResultType = Model::ListRegionsResult;
  using OutcomeType = Model::ListRegionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRegions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Account
}  // namespace Aws
