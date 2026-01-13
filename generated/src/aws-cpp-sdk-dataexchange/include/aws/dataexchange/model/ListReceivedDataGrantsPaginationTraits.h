/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchangeServiceClientModel.h>
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/ListReceivedDataGrantsRequest.h>
#include <aws/dataexchange/model/ListReceivedDataGrantsResult.h>

namespace Aws {
namespace DataExchange {
namespace Pagination {

template <typename Client = DataExchangeClient>
struct ListReceivedDataGrantsPaginationTraits {
  using RequestType = Model::ListReceivedDataGrantsRequest;
  using ResultType = Model::ListReceivedDataGrantsResult;
  using OutcomeType = Model::ListReceivedDataGrantsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListReceivedDataGrants(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DataExchange
}  // namespace Aws
