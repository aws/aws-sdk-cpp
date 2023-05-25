/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DescribeCacheClusters</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheClustersMessage">AWS
   * API Reference</a></p>
   */
  class DescribeCacheClustersRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DescribeCacheClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCacheClusters"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cluster is returned. This parameter isn't case
     * sensitive.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cluster is returned. This parameter isn't case
     * sensitive.</p>
     */
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cluster is returned. This parameter isn't case
     * sensitive.</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cluster is returned. This parameter isn't case
     * sensitive.</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cluster is returned. This parameter isn't case
     * sensitive.</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cluster is returned. This parameter isn't case
     * sensitive.</p>
     */
    inline DescribeCacheClustersRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cluster is returned. This parameter isn't case
     * sensitive.</p>
     */
    inline DescribeCacheClustersRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cluster is returned. This parameter isn't case
     * sensitive.</p>
     */
    inline DescribeCacheClustersRequest& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline DescribeCacheClustersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeCacheClustersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeCacheClustersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeCacheClustersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>An optional flag that can be included in the
     * <code>DescribeCacheCluster</code> request to retrieve information about the
     * individual cache nodes.</p>
     */
    inline bool GetShowCacheNodeInfo() const{ return m_showCacheNodeInfo; }

    /**
     * <p>An optional flag that can be included in the
     * <code>DescribeCacheCluster</code> request to retrieve information about the
     * individual cache nodes.</p>
     */
    inline bool ShowCacheNodeInfoHasBeenSet() const { return m_showCacheNodeInfoHasBeenSet; }

    /**
     * <p>An optional flag that can be included in the
     * <code>DescribeCacheCluster</code> request to retrieve information about the
     * individual cache nodes.</p>
     */
    inline void SetShowCacheNodeInfo(bool value) { m_showCacheNodeInfoHasBeenSet = true; m_showCacheNodeInfo = value; }

    /**
     * <p>An optional flag that can be included in the
     * <code>DescribeCacheCluster</code> request to retrieve information about the
     * individual cache nodes.</p>
     */
    inline DescribeCacheClustersRequest& WithShowCacheNodeInfo(bool value) { SetShowCacheNodeInfo(value); return *this;}


    /**
     * <p>An optional flag that can be included in the
     * <code>DescribeCacheCluster</code> request to show only nodes (API/CLI: clusters)
     * that are not members of a replication group. In practice, this mean Memcached
     * and single node Redis clusters.</p>
     */
    inline bool GetShowCacheClustersNotInReplicationGroups() const{ return m_showCacheClustersNotInReplicationGroups; }

    /**
     * <p>An optional flag that can be included in the
     * <code>DescribeCacheCluster</code> request to show only nodes (API/CLI: clusters)
     * that are not members of a replication group. In practice, this mean Memcached
     * and single node Redis clusters.</p>
     */
    inline bool ShowCacheClustersNotInReplicationGroupsHasBeenSet() const { return m_showCacheClustersNotInReplicationGroupsHasBeenSet; }

    /**
     * <p>An optional flag that can be included in the
     * <code>DescribeCacheCluster</code> request to show only nodes (API/CLI: clusters)
     * that are not members of a replication group. In practice, this mean Memcached
     * and single node Redis clusters.</p>
     */
    inline void SetShowCacheClustersNotInReplicationGroups(bool value) { m_showCacheClustersNotInReplicationGroupsHasBeenSet = true; m_showCacheClustersNotInReplicationGroups = value; }

    /**
     * <p>An optional flag that can be included in the
     * <code>DescribeCacheCluster</code> request to show only nodes (API/CLI: clusters)
     * that are not members of a replication group. In practice, this mean Memcached
     * and single node Redis clusters.</p>
     */
    inline DescribeCacheClustersRequest& WithShowCacheClustersNotInReplicationGroups(bool value) { SetShowCacheClustersNotInReplicationGroups(value); return *this;}

  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    bool m_showCacheNodeInfo;
    bool m_showCacheNodeInfoHasBeenSet = false;

    bool m_showCacheClustersNotInReplicationGroups;
    bool m_showCacheClustersNotInReplicationGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
