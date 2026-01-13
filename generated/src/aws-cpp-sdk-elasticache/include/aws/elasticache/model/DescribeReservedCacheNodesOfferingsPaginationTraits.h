/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCacheServiceClientModel.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesOfferingsRequest.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesOfferingsResult.h>

namespace Aws {
namespace ElastiCache {
namespace Pagination {

template <typename Client = ElastiCacheClient>
struct DescribeReservedCacheNodesOfferingsPaginationTraits {
  using RequestType = Model::DescribeReservedCacheNodesOfferingsRequest;
  using ResultType = Model::DescribeReservedCacheNodesOfferingsResult;
  using OutcomeType = Model::DescribeReservedCacheNodesOfferingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeReservedCacheNodesOfferings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace ElastiCache
}  // namespace Aws
