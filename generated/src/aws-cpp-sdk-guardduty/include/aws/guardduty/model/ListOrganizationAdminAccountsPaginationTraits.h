/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDutyServiceClientModel.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ListOrganizationAdminAccountsRequest.h>
#include <aws/guardduty/model/ListOrganizationAdminAccountsResult.h>

namespace Aws {
namespace GuardDuty {
namespace Pagination {

template <typename Client = GuardDutyClient>
struct ListOrganizationAdminAccountsPaginationTraits {
  using RequestType = Model::ListOrganizationAdminAccountsRequest;
  using ResultType = Model::ListOrganizationAdminAccountsResult;
  using OutcomeType = Model::ListOrganizationAdminAccountsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOrganizationAdminAccounts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GuardDuty
}  // namespace Aws
