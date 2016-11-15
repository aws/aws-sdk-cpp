/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DescribeCacheClusters</code> operation.</p>
   */
  class AWS_ELASTICACHE_API DescribeCacheClustersRequest : public ElastiCacheRequest
  {
  public:
    DescribeCacheClustersRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cache cluster is returned. This parameter isn't
     * case sensitive.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cache cluster is returned. This parameter isn't
     * case sensitive.</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cache cluster is returned. This parameter isn't
     * case sensitive.</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cache cluster is returned. This parameter isn't
     * case sensitive.</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cache cluster is returned. This parameter isn't
     * case sensitive.</p>
     */
    inline DescribeCacheClustersRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cache cluster is returned. This parameter isn't
     * case sensitive.</p>
     */
    inline DescribeCacheClustersRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified, only
     * information about that specific cache cluster is returned. This parameter isn't
     * case sensitive.</p>
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
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

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
    inline DescribeCacheClustersRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeCacheClustersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>An optional flag that can be included in the DescribeCacheCluster request to
     * retrieve information about the individual cache nodes.</p>
     */
    inline bool GetShowCacheNodeInfo() const{ return m_showCacheNodeInfo; }

    /**
     * <p>An optional flag that can be included in the DescribeCacheCluster request to
     * retrieve information about the individual cache nodes.</p>
     */
    inline void SetShowCacheNodeInfo(bool value) { m_showCacheNodeInfoHasBeenSet = true; m_showCacheNodeInfo = value; }

    /**
     * <p>An optional flag that can be included in the DescribeCacheCluster request to
     * retrieve information about the individual cache nodes.</p>
     */
    inline DescribeCacheClustersRequest& WithShowCacheNodeInfo(bool value) { SetShowCacheNodeInfo(value); return *this;}

  private:
    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;
    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    bool m_showCacheNodeInfo;
    bool m_showCacheNodeInfoHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
