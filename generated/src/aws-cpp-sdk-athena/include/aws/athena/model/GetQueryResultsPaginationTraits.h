/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/AthenaServiceClientModel.h>
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/GetQueryResultsRequest.h>
#include <aws/athena/model/GetQueryResultsResult.h>

namespace Aws {
namespace Athena {
namespace Pagination {

template <typename Client = AthenaClient>
struct GetQueryResultsPaginationTraits {
  using RequestType = Model::GetQueryResultsRequest;
  using ResultType = Model::GetQueryResultsResult;
  using OutcomeType = Model::GetQueryResultsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetQueryResults(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Athena
}  // namespace Aws
