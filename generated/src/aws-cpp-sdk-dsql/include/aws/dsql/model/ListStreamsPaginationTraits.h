/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQLServiceClientModel.h>
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/model/ListStreamsRequest.h>
#include <aws/dsql/model/ListStreamsResult.h>

namespace Aws {
namespace DSQL {
namespace Pagination {

template <typename Client = DSQLClient>
struct ListStreamsPaginationTraits {
  using RequestType = Model::ListStreamsRequest;
  using ResultType = Model::ListStreamsResult;
  using OutcomeType = Model::ListStreamsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStreams(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DSQL
}  // namespace Aws
