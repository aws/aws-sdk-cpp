/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsServiceClientModel.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsResult.h>

namespace Aws {
namespace LicenseManagerUserSubscriptions {
namespace Pagination {

template <typename Client = LicenseManagerUserSubscriptionsClient>
struct ListUserAssociationsPaginationTraits {
  using RequestType = Model::ListUserAssociationsRequest;
  using ResultType = Model::ListUserAssociationsResult;
  using OutcomeType = Model::ListUserAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListUserAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws
