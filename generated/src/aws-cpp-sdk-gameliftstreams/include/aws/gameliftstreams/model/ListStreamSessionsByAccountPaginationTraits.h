/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreamsServiceClientModel.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountRequest.h>
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountResult.h>

namespace Aws {
namespace GameLiftStreams {
namespace Pagination {

template <typename Client = GameLiftStreamsClient>
struct ListStreamSessionsByAccountPaginationTraits {
  using RequestType = Model::ListStreamSessionsByAccountRequest;
  using ResultType = Model::ListStreamSessionsByAccountResult;
  using OutcomeType = Model::ListStreamSessionsByAccountOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStreamSessionsByAccount(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GameLiftStreams
}  // namespace Aws
