/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreamsServiceClientModel.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/ListStreamUrlsRequest.h>
#include <aws/gameliftstreams/model/ListStreamUrlsResult.h>

namespace Aws {
namespace GameLiftStreams {
namespace Pagination {

template <typename Client = GameLiftStreamsClient>
struct ListStreamUrlsPaginationTraits {
  using RequestType = Model::ListStreamUrlsRequest;
  using ResultType = Model::ListStreamUrlsResult;
  using OutcomeType = Model::ListStreamUrlsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStreamUrls(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GameLiftStreams
}  // namespace Aws
