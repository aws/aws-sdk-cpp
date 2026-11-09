/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECRServiceClientModel.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/DescribeReplicationBackfillResultsRequest.h>
#include <aws/ecr/model/DescribeReplicationBackfillResultsResult.h>

namespace Aws {
namespace ECR {
namespace Pagination {

template <typename Client = ECRClient>
struct DescribeReplicationBackfillResultsPaginationTraits {
  using RequestType = Model::DescribeReplicationBackfillResultsRequest;
  using ResultType = Model::DescribeReplicationBackfillResultsResult;
  using OutcomeType = Model::DescribeReplicationBackfillResultsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeReplicationBackfillResults(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ECR
}  // namespace Aws
