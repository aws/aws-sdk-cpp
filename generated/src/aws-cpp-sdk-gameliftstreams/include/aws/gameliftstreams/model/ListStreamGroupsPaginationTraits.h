/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreamsServiceClientModel.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/ListStreamGroupsRequest.h>
#include <aws/gameliftstreams/model/ListStreamGroupsResult.h>

namespace Aws {
namespace GameLiftStreams {
namespace Pagination {

template <typename Client = GameLiftStreamsClient>
struct ListStreamGroupsPaginationTraits {
  using RequestType = Model::ListStreamGroupsRequest;
  using ResultType = Model::ListStreamGroupsResult;
  using OutcomeType = Model::ListStreamGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStreamGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GameLiftStreams
}  // namespace Aws
