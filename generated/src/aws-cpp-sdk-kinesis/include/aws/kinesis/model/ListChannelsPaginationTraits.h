/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/KinesisServiceClientModel.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ListChannelsRequest.h>
#include <aws/kinesis/model/ListChannelsResult.h>

namespace Aws {
namespace Kinesis {
namespace Pagination {

template <typename Client = KinesisClient>
struct ListChannelsPaginationTraits {
  using RequestType = Model::ListChannelsRequest;
  using ResultType = Model::ListChannelsResult;
  using OutcomeType = Model::ListChannelsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListChannels(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Kinesis
}  // namespace Aws
