/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCacheServiceClientModel.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/DescribeServiceUpdatesRequest.h>
#include <aws/elasticache/model/DescribeServiceUpdatesResult.h>

namespace Aws {
namespace ElastiCache {
namespace Pagination {

template <typename Client = ElastiCacheClient>
struct DescribeServiceUpdatesPaginationTraits {
  using RequestType = Model::DescribeServiceUpdatesRequest;
  using ResultType = Model::DescribeServiceUpdatesResult;
  using OutcomeType = Model::DescribeServiceUpdatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeServiceUpdates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace ElastiCache
}  // namespace Aws
