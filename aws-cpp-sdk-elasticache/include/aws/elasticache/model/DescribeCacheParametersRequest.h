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
   * <p>Represents the input of a <i>DescribeCacheParameters</i> action.</p>
   */
  class AWS_ELASTICACHE_API DescribeCacheParametersRequest : public ElastiCacheRequest
  {
  public:
    DescribeCacheParametersRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of a specific cache parameter group to return details for.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of a specific cache parameter group to return details for.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of a specific cache parameter group to return details for.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of a specific cache parameter group to return details for.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of a specific cache parameter group to return details for.</p>
     */
    inline DescribeCacheParametersRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of a specific cache parameter group to return details for.</p>
     */
    inline DescribeCacheParametersRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of a specific cache parameter group to return details for.</p>
     */
    inline DescribeCacheParametersRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The parameter types to return.</p> <p>Valid values: <code>user</code> |
     * <code>system</code> | <code>engine-default</code> </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The parameter types to return.</p> <p>Valid values: <code>user</code> |
     * <code>system</code> | <code>engine-default</code> </p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The parameter types to return.</p> <p>Valid values: <code>user</code> |
     * <code>system</code> | <code>engine-default</code> </p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The parameter types to return.</p> <p>Valid values: <code>user</code> |
     * <code>system</code> | <code>engine-default</code> </p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The parameter types to return.</p> <p>Valid values: <code>user</code> |
     * <code>system</code> | <code>engine-default</code> </p>
     */
    inline DescribeCacheParametersRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The parameter types to return.</p> <p>Valid values: <code>user</code> |
     * <code>system</code> | <code>engine-default</code> </p>
     */
    inline DescribeCacheParametersRequest& WithSource(Aws::String&& value) { SetSource(value); return *this;}

    /**
     * <p>The parameter types to return.</p> <p>Valid values: <code>user</code> |
     * <code>system</code> | <code>engine-default</code> </p>
     */
    inline DescribeCacheParametersRequest& WithSource(const char* value) { SetSource(value); return *this;}

    /**
     * <p>The maximum number of brecords to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline long GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of brecords to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline void SetMaxRecords(long value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of brecords to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline DescribeCacheParametersRequest& WithMaxRecords(long value) { SetMaxRecords(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline DescribeCacheParametersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline DescribeCacheParametersRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline DescribeCacheParametersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet;
    Aws::String m_source;
    bool m_sourceHasBeenSet;
    long m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
