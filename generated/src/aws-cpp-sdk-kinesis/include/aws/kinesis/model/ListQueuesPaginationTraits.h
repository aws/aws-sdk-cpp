/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/KinesisServiceClientModel.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ListQueuesRequest.h>
#include <aws/kinesis/model/ListQueuesResult.h>

namespace Aws {
namespace Kinesis {
namespace Pagination {

template <typename Client = KinesisClient>
struct ListQueuesPaginationTraits {
  using RequestType = Model::ListQueuesRequest;
  using ResultType = Model::ListQueuesResult;
  using OutcomeType = Model::ListQueuesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListQueues(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Kinesis
}  // namespace Aws
