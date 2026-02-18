/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchangeServiceClientModel.h>
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/ListDataSetRevisionsRequest.h>
#include <aws/dataexchange/model/ListDataSetRevisionsResult.h>

namespace Aws {
namespace DataExchange {
namespace Pagination {

template <typename Client = DataExchangeClient>
struct ListDataSetRevisionsPaginationTraits {
  using RequestType = Model::ListDataSetRevisionsRequest;
  using ResultType = Model::ListDataSetRevisionsResult;
  using OutcomeType = Model::ListDataSetRevisionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataSetRevisions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DataExchange
}  // namespace Aws
