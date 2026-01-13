/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCacheServiceClientModel.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/DescribeServerlessCacheSnapshotsRequest.h>
#include <aws/elasticache/model/DescribeServerlessCacheSnapshotsResult.h>

namespace Aws {
namespace ElastiCache {
namespace Pagination {

template <typename Client = ElastiCacheClient>
struct DescribeServerlessCacheSnapshotsPaginationTraits {
  using RequestType = Model::DescribeServerlessCacheSnapshotsRequest;
  using ResultType = Model::DescribeServerlessCacheSnapshotsResult;
  using OutcomeType = Model::DescribeServerlessCacheSnapshotsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeServerlessCacheSnapshots(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ElastiCache
}  // namespace Aws
