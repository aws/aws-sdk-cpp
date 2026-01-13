/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManagerServiceClientModel.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ListTrafficPoliciesRequest.h>
#include <aws/mailmanager/model/ListTrafficPoliciesResult.h>

namespace Aws {
namespace MailManager {
namespace Pagination {

template <typename Client = MailManagerClient>
struct ListTrafficPoliciesPaginationTraits {
  using RequestType = Model::ListTrafficPoliciesRequest;
  using ResultType = Model::ListTrafficPoliciesResult;
  using OutcomeType = Model::ListTrafficPoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTrafficPolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MailManager
}  // namespace Aws
