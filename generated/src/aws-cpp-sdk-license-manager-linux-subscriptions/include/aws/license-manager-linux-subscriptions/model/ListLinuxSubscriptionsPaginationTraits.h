/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsServiceClientModel.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionsRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionsResult.h>

namespace Aws {
namespace LicenseManagerLinuxSubscriptions {
namespace Pagination {

template <typename Client = LicenseManagerLinuxSubscriptionsClient>
struct ListLinuxSubscriptionsPaginationTraits {
  using RequestType = Model::ListLinuxSubscriptionsRequest;
  using ResultType = Model::ListLinuxSubscriptionsResult;
  using OutcomeType = Model::ListLinuxSubscriptionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLinuxSubscriptions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws
