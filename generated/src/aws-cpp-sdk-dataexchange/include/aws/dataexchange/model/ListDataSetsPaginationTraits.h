/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchangeServiceClientModel.h>
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/ListDataSetsRequest.h>
#include <aws/dataexchange/model/ListDataSetsResult.h>

namespace Aws {
namespace DataExchange {
namespace Pagination {

template <typename Client = DataExchangeClient>
struct ListDataSetsPaginationTraits {
  using RequestType = Model::ListDataSetsRequest;
  using ResultType = Model::ListDataSetsResult;
  using OutcomeType = Model::ListDataSetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataSets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DataExchange
}  // namespace Aws
