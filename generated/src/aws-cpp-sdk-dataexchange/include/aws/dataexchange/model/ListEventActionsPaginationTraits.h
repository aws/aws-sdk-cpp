/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchangeServiceClientModel.h>
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/ListEventActionsRequest.h>
#include <aws/dataexchange/model/ListEventActionsResult.h>

namespace Aws {
namespace DataExchange {
namespace Pagination {

template <typename Client = DataExchangeClient>
struct ListEventActionsPaginationTraits {
  using RequestType = Model::ListEventActionsRequest;
  using ResultType = Model::ListEventActionsResult;
  using OutcomeType = Model::ListEventActionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEventActions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DataExchange
}  // namespace Aws
