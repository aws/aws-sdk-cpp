/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManagerServiceClientModel.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ListRelaysRequest.h>
#include <aws/mailmanager/model/ListRelaysResult.h>

namespace Aws {
namespace MailManager {
namespace Pagination {

template <typename Client = MailManagerClient>
struct ListRelaysPaginationTraits {
  using RequestType = Model::ListRelaysRequest;
  using ResultType = Model::ListRelaysResult;
  using OutcomeType = Model::ListRelaysOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRelays(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MailManager
}  // namespace Aws
