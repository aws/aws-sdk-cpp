/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsServiceClientModel.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/ListLicenseServerEndpointsRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListLicenseServerEndpointsResult.h>

namespace Aws {
namespace LicenseManagerUserSubscriptions {
namespace Pagination {

template <typename Client = LicenseManagerUserSubscriptionsClient>
struct ListLicenseServerEndpointsPaginationTraits {
  using RequestType = Model::ListLicenseServerEndpointsRequest;
  using ResultType = Model::ListLicenseServerEndpointsResult;
  using OutcomeType = Model::ListLicenseServerEndpointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLicenseServerEndpoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws
