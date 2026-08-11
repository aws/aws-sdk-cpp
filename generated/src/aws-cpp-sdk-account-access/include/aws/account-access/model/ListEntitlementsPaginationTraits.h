/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccessServiceClientModel.h>
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/ListEntitlementsRequest.h>
#include <aws/account-access/model/ListEntitlementsResult.h>

namespace Aws {
namespace AccountAccess {
namespace Pagination {

template <typename Client = AccountAccessClient>
struct ListEntitlementsPaginationTraits {
  using RequestType = Model::ListEntitlementsRequest;
  using ResultType = Model::ListEntitlementsResult;
  using OutcomeType = Model::ListEntitlementsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEntitlements(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AccountAccess
}  // namespace Aws
