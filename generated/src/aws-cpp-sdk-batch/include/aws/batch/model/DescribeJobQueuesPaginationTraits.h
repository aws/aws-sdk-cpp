/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/BatchServiceClientModel.h>
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/DescribeJobQueuesRequest.h>
#include <aws/batch/model/DescribeJobQueuesResult.h>

namespace Aws {
namespace Batch {
namespace Pagination {

template <typename Client = BatchClient>
struct DescribeJobQueuesPaginationTraits {
  using RequestType = Model::DescribeJobQueuesRequest;
  using ResultType = Model::DescribeJobQueuesResult;
  using OutcomeType = Model::DescribeJobQueuesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeJobQueues(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Batch
}  // namespace Aws
