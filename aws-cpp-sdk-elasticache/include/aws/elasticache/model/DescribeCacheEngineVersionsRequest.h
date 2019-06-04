/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DescribeCacheEngineVersions</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheEngineVersionsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API DescribeCacheEngineVersionsRequest : public ElastiCacheRequest
  {
  public:
    DescribeCacheEngineVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCacheEngineVersions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The cache engine to return. Valid values: <code>memcached</code> |
     * <code>redis</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The cache engine to return. Valid values: <code>memcached</code> |
     * <code>redis</code> </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The cache engine to return. Valid values: <code>memcached</code> |
     * <code>redis</code> </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The cache engine to return. Valid values: <code>memcached</code> |
     * <code>redis</code> </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The cache engine to return. Valid values: <code>memcached</code> |
     * <code>redis</code> </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The cache engine to return. Valid values: <code>memcached</code> |
     * <code>redis</code> </p>
     */
    inline DescribeCacheEngineVersionsRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The cache engine to return. Valid values: <code>memcached</code> |
     * <code>redis</code> </p>
     */
    inline DescribeCacheEngineVersionsRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The cache engine to return. Valid values: <code>memcached</code> |
     * <code>redis</code> </p>
     */
    inline DescribeCacheEngineVersionsRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The cache engine version to return.</p> <p>Example: <code>1.4.14</code> </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The cache engine version to return.</p> <p>Example: <code>1.4.14</code> </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The cache engine version to return.</p> <p>Example: <code>1.4.14</code> </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The cache engine version to return.</p> <p>Example: <code>1.4.14</code> </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The cache engine version to return.</p> <p>Example: <code>1.4.14</code> </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The cache engine version to return.</p> <p>Example: <code>1.4.14</code> </p>
     */
    inline DescribeCacheEngineVersionsRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The cache engine version to return.</p> <p>Example: <code>1.4.14</code> </p>
     */
    inline DescribeCacheEngineVersionsRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The cache engine version to return.</p> <p>Example: <code>1.4.14</code> </p>
     */
    inline DescribeCacheEngineVersionsRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The name of a specific cache parameter group family to return details
     * for.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetCacheParameterGroupFamily() const{ return m_cacheParameterGroupFamily; }

    /**
     * <p>The name of a specific cache parameter group family to return details
     * for.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline bool CacheParameterGroupFamilyHasBeenSet() const { return m_cacheParameterGroupFamilyHasBeenSet; }

    /**
     * <p>The name of a specific cache parameter group family to return details
     * for.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetCacheParameterGroupFamily(const Aws::String& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = value; }

    /**
     * <p>The name of a specific cache parameter group family to return details
     * for.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetCacheParameterGroupFamily(Aws::String&& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = std::move(value); }

    /**
     * <p>The name of a specific cache parameter group family to return details
     * for.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetCacheParameterGroupFamily(const char* value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily.assign(value); }

    /**
     * <p>The name of a specific cache parameter group family to return details
     * for.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline DescribeCacheEngineVersionsRequest& WithCacheParameterGroupFamily(const Aws::String& value) { SetCacheParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of a specific cache parameter group family to return details
     * for.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline DescribeCacheEngineVersionsRequest& WithCacheParameterGroupFamily(Aws::String&& value) { SetCacheParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of a specific cache parameter group family to return details
     * for.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric characters</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline DescribeCacheEngineVersionsRequest& WithCacheParameterGroupFamily(const char* value) { SetCacheParameterGroupFamily(value); return *this;}


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
    inline DescribeCacheEngineVersionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


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
    inline DescribeCacheEngineVersionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeCacheEngineVersionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeCacheEngineVersionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>If <code>true</code>, specifies that only the default version of the
     * specified engine or engine and major version combination is to be returned.</p>
     */
    inline bool GetDefaultOnly() const{ return m_defaultOnly; }

    /**
     * <p>If <code>true</code>, specifies that only the default version of the
     * specified engine or engine and major version combination is to be returned.</p>
     */
    inline bool DefaultOnlyHasBeenSet() const { return m_defaultOnlyHasBeenSet; }

    /**
     * <p>If <code>true</code>, specifies that only the default version of the
     * specified engine or engine and major version combination is to be returned.</p>
     */
    inline void SetDefaultOnly(bool value) { m_defaultOnlyHasBeenSet = true; m_defaultOnly = value; }

    /**
     * <p>If <code>true</code>, specifies that only the default version of the
     * specified engine or engine and major version combination is to be returned.</p>
     */
    inline DescribeCacheEngineVersionsRequest& WithDefaultOnly(bool value) { SetDefaultOnly(value); return *this;}

  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_cacheParameterGroupFamily;
    bool m_cacheParameterGroupFamilyHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    bool m_defaultOnly;
    bool m_defaultOnlyHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
