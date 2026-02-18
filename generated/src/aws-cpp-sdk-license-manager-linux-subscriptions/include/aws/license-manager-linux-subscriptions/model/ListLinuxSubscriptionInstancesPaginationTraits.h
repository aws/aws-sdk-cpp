/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsServiceClientModel.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionInstancesRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionInstancesResult.h>

namespace Aws {
namespace LicenseManagerLinuxSubscriptions {
namespace Pagination {

template <typename Client = LicenseManagerLinuxSubscriptionsClient>
struct ListLinuxSubscriptionInstancesPaginationTraits {
  using RequestType = Model::ListLinuxSubscriptionInstancesRequest;
  using ResultType = Model::ListLinuxSubscriptionInstancesResult;
  using OutcomeType = Model::ListLinuxSubscriptionInstancesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLinuxSubscriptionInstances(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws
