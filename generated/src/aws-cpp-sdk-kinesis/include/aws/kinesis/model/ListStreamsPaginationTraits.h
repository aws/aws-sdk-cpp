/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/KinesisServiceClientModel.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ListStreamsRequest.h>
#include <aws/kinesis/model/ListStreamsResult.h>

namespace Aws {
namespace Kinesis {
namespace Pagination {

template <typename Client = KinesisClient>
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
}  // namespace Kinesis
}  // namespace Aws
