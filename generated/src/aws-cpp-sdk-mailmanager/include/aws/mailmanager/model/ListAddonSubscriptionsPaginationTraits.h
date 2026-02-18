/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManagerServiceClientModel.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ListAddonSubscriptionsRequest.h>
#include <aws/mailmanager/model/ListAddonSubscriptionsResult.h>

namespace Aws {
namespace MailManager {
namespace Pagination {

template <typename Client = MailManagerClient>
struct ListAddonSubscriptionsPaginationTraits {
  using RequestType = Model::ListAddonSubscriptionsRequest;
  using ResultType = Model::ListAddonSubscriptionsResult;
  using OutcomeType = Model::ListAddonSubscriptionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAddonSubscriptions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MailManager
}  // namespace Aws
