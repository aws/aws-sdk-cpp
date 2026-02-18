/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticache/model/DescribeCacheClustersPaginationTraits.h>
#include <aws/elasticache/model/DescribeCacheEngineVersionsPaginationTraits.h>
#include <aws/elasticache/model/DescribeCacheParameterGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeCacheParametersPaginationTraits.h>
#include <aws/elasticache/model/DescribeCacheSecurityGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeCacheSubnetGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeEngineDefaultParametersPaginationTraits.h>
#include <aws/elasticache/model/DescribeEventsPaginationTraits.h>
#include <aws/elasticache/model/DescribeGlobalReplicationGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeReplicationGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesOfferingsPaginationTraits.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesPaginationTraits.h>
#include <aws/elasticache/model/DescribeServerlessCacheSnapshotsPaginationTraits.h>
#include <aws/elasticache/model/DescribeServerlessCachesPaginationTraits.h>
#include <aws/elasticache/model/DescribeServiceUpdatesPaginationTraits.h>
#include <aws/elasticache/model/DescribeSnapshotsPaginationTraits.h>
#include <aws/elasticache/model/DescribeUpdateActionsPaginationTraits.h>
#include <aws/elasticache/model/DescribeUserGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeUsersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ElastiCache {

class ElastiCacheClient;

template <typename DerivedClient>
class ElastiCachePaginationBase {
 public:
  /**
   * Create a paginator for DescribeCacheClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheClustersRequest,
                                    Pagination::DescribeCacheClustersPaginationTraits<DerivedClient>>
  DescribeCacheClustersPaginator(const Model::DescribeCacheClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheClustersRequest,
                                             Pagination::DescribeCacheClustersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCacheEngineVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheEngineVersionsRequest,
                                    Pagination::DescribeCacheEngineVersionsPaginationTraits<DerivedClient>>
  DescribeCacheEngineVersionsPaginator(const Model::DescribeCacheEngineVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheEngineVersionsRequest,
                                             Pagination::DescribeCacheEngineVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCacheParameterGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheParameterGroupsRequest,
                                    Pagination::DescribeCacheParameterGroupsPaginationTraits<DerivedClient>>
  DescribeCacheParameterGroupsPaginator(const Model::DescribeCacheParameterGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheParameterGroupsRequest,
                                             Pagination::DescribeCacheParameterGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCacheParameters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheParametersRequest,
                                    Pagination::DescribeCacheParametersPaginationTraits<DerivedClient>>
  DescribeCacheParametersPaginator(const Model::DescribeCacheParametersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheParametersRequest,
                                             Pagination::DescribeCacheParametersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCacheSecurityGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheSecurityGroupsRequest,
                                    Pagination::DescribeCacheSecurityGroupsPaginationTraits<DerivedClient>>
  DescribeCacheSecurityGroupsPaginator(const Model::DescribeCacheSecurityGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheSecurityGroupsRequest,
                                             Pagination::DescribeCacheSecurityGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCacheSubnetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheSubnetGroupsRequest,
                                    Pagination::DescribeCacheSubnetGroupsPaginationTraits<DerivedClient>>
  DescribeCacheSubnetGroupsPaginator(const Model::DescribeCacheSubnetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCacheSubnetGroupsRequest,
                                             Pagination::DescribeCacheSubnetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEngineDefaultParameters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEngineDefaultParametersRequest,
                                    Pagination::DescribeEngineDefaultParametersPaginationTraits<DerivedClient>>
  DescribeEngineDefaultParametersPaginator(const Model::DescribeEngineDefaultParametersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEngineDefaultParametersRequest,
                                             Pagination::DescribeEngineDefaultParametersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest, Pagination::DescribeEventsPaginationTraits<DerivedClient>>
  DescribeEventsPaginator(const Model::DescribeEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest,
                                             Pagination::DescribeEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeGlobalReplicationGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGlobalReplicationGroupsRequest,
                                    Pagination::DescribeGlobalReplicationGroupsPaginationTraits<DerivedClient>>
  DescribeGlobalReplicationGroupsPaginator(const Model::DescribeGlobalReplicationGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGlobalReplicationGroupsRequest,
                                             Pagination::DescribeGlobalReplicationGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationGroupsRequest,
                                    Pagination::DescribeReplicationGroupsPaginationTraits<DerivedClient>>
  DescribeReplicationGroupsPaginator(const Model::DescribeReplicationGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationGroupsRequest,
                                             Pagination::DescribeReplicationGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedCacheNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedCacheNodesRequest,
                                    Pagination::DescribeReservedCacheNodesPaginationTraits<DerivedClient>>
  DescribeReservedCacheNodesPaginator(const Model::DescribeReservedCacheNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedCacheNodesRequest,
                                             Pagination::DescribeReservedCacheNodesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedCacheNodesOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedCacheNodesOfferingsRequest,
                                    Pagination::DescribeReservedCacheNodesOfferingsPaginationTraits<DerivedClient>>
  DescribeReservedCacheNodesOfferingsPaginator(const Model::DescribeReservedCacheNodesOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedCacheNodesOfferingsRequest,
                                             Pagination::DescribeReservedCacheNodesOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeServerlessCaches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServerlessCachesRequest,
                                    Pagination::DescribeServerlessCachesPaginationTraits<DerivedClient>>
  DescribeServerlessCachesPaginator(const Model::DescribeServerlessCachesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServerlessCachesRequest,
                                             Pagination::DescribeServerlessCachesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeServerlessCacheSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServerlessCacheSnapshotsRequest,
                                    Pagination::DescribeServerlessCacheSnapshotsPaginationTraits<DerivedClient>>
  DescribeServerlessCacheSnapshotsPaginator(const Model::DescribeServerlessCacheSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServerlessCacheSnapshotsRequest,
                                             Pagination::DescribeServerlessCacheSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeServiceUpdates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServiceUpdatesRequest,
                                    Pagination::DescribeServiceUpdatesPaginationTraits<DerivedClient>>
  DescribeServiceUpdatesPaginator(const Model::DescribeServiceUpdatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServiceUpdatesRequest,
                                             Pagination::DescribeServiceUpdatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotsRequest,
                                    Pagination::DescribeSnapshotsPaginationTraits<DerivedClient>>
  DescribeSnapshotsPaginator(const Model::DescribeSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotsRequest,
                                             Pagination::DescribeSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeUpdateActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUpdateActionsRequest,
                                    Pagination::DescribeUpdateActionsPaginationTraits<DerivedClient>>
  DescribeUpdateActionsPaginator(const Model::DescribeUpdateActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUpdateActionsRequest,
                                             Pagination::DescribeUpdateActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeUserGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUserGroupsRequest,
                                    Pagination::DescribeUserGroupsPaginationTraits<DerivedClient>>
  DescribeUserGroupsPaginator(const Model::DescribeUserGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUserGroupsRequest,
                                             Pagination::DescribeUserGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUsersRequest, Pagination::DescribeUsersPaginationTraits<DerivedClient>>
  DescribeUsersPaginator(const Model::DescribeUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUsersRequest,
                                             Pagination::DescribeUsersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace ElastiCache
}  // namespace Aws
