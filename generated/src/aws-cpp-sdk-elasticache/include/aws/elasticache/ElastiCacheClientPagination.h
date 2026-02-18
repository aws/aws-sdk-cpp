/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticache/ElastiCacheClient.h>
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

namespace Aws {
namespace ElastiCache {

using DescribeCacheClustersPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeCacheClustersRequest,
                                      Pagination::DescribeCacheClustersPaginationTraits<ElastiCacheClient>>;
using DescribeCacheEngineVersionsPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeCacheEngineVersionsRequest,
                                      Pagination::DescribeCacheEngineVersionsPaginationTraits<ElastiCacheClient>>;
using DescribeCacheParameterGroupsPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeCacheParameterGroupsRequest,
                                      Pagination::DescribeCacheParameterGroupsPaginationTraits<ElastiCacheClient>>;
using DescribeCacheParametersPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeCacheParametersRequest,
                                      Pagination::DescribeCacheParametersPaginationTraits<ElastiCacheClient>>;
using DescribeCacheSecurityGroupsPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeCacheSecurityGroupsRequest,
                                      Pagination::DescribeCacheSecurityGroupsPaginationTraits<ElastiCacheClient>>;
using DescribeCacheSubnetGroupsPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeCacheSubnetGroupsRequest,
                                      Pagination::DescribeCacheSubnetGroupsPaginationTraits<ElastiCacheClient>>;
using DescribeEngineDefaultParametersPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeEngineDefaultParametersRequest,
                                      Pagination::DescribeEngineDefaultParametersPaginationTraits<ElastiCacheClient>>;
using DescribeEventsPaginator = Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeEventsRequest,
                                                                  Pagination::DescribeEventsPaginationTraits<ElastiCacheClient>>;
using DescribeGlobalReplicationGroupsPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeGlobalReplicationGroupsRequest,
                                      Pagination::DescribeGlobalReplicationGroupsPaginationTraits<ElastiCacheClient>>;
using DescribeReplicationGroupsPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeReplicationGroupsRequest,
                                      Pagination::DescribeReplicationGroupsPaginationTraits<ElastiCacheClient>>;
using DescribeReservedCacheNodesPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeReservedCacheNodesRequest,
                                      Pagination::DescribeReservedCacheNodesPaginationTraits<ElastiCacheClient>>;
using DescribeReservedCacheNodesOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeReservedCacheNodesOfferingsRequest,
                                      Pagination::DescribeReservedCacheNodesOfferingsPaginationTraits<ElastiCacheClient>>;
using DescribeServerlessCachesPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeServerlessCachesRequest,
                                      Pagination::DescribeServerlessCachesPaginationTraits<ElastiCacheClient>>;
using DescribeServerlessCacheSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeServerlessCacheSnapshotsRequest,
                                      Pagination::DescribeServerlessCacheSnapshotsPaginationTraits<ElastiCacheClient>>;
using DescribeServiceUpdatesPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeServiceUpdatesRequest,
                                      Pagination::DescribeServiceUpdatesPaginationTraits<ElastiCacheClient>>;
using DescribeSnapshotsPaginator = Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeSnapshotsRequest,
                                                                     Pagination::DescribeSnapshotsPaginationTraits<ElastiCacheClient>>;
using DescribeUpdateActionsPaginator =
    Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeUpdateActionsRequest,
                                      Pagination::DescribeUpdateActionsPaginationTraits<ElastiCacheClient>>;
using DescribeUserGroupsPaginator = Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeUserGroupsRequest,
                                                                      Pagination::DescribeUserGroupsPaginationTraits<ElastiCacheClient>>;
using DescribeUsersPaginator = Aws::Utils::Pagination::Paginator<ElastiCacheClient, Model::DescribeUsersRequest,
                                                                 Pagination::DescribeUsersPaginationTraits<ElastiCacheClient>>;

}  // namespace ElastiCache
}  // namespace Aws
