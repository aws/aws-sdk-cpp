/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCacheServiceClientModel.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/DescribeUsersRequest.h>
#include <aws/elasticache/model/DescribeUsersResult.h>

namespace Aws {
namespace ElastiCache {
namespace Pagination {

template <typename Client = ElastiCacheClient>
struct DescribeUsersPaginationTraits {
  using RequestType = Model::DescribeUsersRequest;
  using ResultType = Model::DescribeUsersResult;
  using OutcomeType = Model::DescribeUsersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeUsers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace ElastiCache
}  // namespace Aws
