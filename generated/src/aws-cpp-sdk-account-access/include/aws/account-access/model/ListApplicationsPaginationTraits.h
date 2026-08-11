/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccessServiceClientModel.h>
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/ListApplicationsRequest.h>
#include <aws/account-access/model/ListApplicationsResult.h>

namespace Aws {
namespace AccountAccess {
namespace Pagination {

template <typename Client = AccountAccessClient>
struct ListApplicationsPaginationTraits {
  using RequestType = Model::ListApplicationsRequest;
  using ResultType = Model::ListApplicationsResult;
  using OutcomeType = Model::ListApplicationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApplications(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AccountAccess
}  // namespace Aws
