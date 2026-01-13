/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsServiceClientModel.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/license-manager-linux-subscriptions/model/ListRegisteredSubscriptionProvidersRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListRegisteredSubscriptionProvidersResult.h>

namespace Aws {
namespace LicenseManagerLinuxSubscriptions {
namespace Pagination {

template <typename Client = LicenseManagerLinuxSubscriptionsClient>
struct ListRegisteredSubscriptionProvidersPaginationTraits {
  using RequestType = Model::ListRegisteredSubscriptionProvidersRequest;
  using ResultType = Model::ListRegisteredSubscriptionProvidersResult;
  using OutcomeType = Model::ListRegisteredSubscriptionProvidersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRegisteredSubscriptionProviders(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws
