/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsServiceClientModel.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/ListInstancesRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListInstancesResult.h>

namespace Aws {
namespace LicenseManagerUserSubscriptions {
namespace Pagination {

template <typename Client = LicenseManagerUserSubscriptionsClient>
struct ListInstancesPaginationTraits {
  using RequestType = Model::ListInstancesRequest;
  using ResultType = Model::ListInstancesResult;
  using OutcomeType = Model::ListInstancesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListInstances(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws
