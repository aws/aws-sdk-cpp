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
   */
  class DescribeServerlessCacheSnapshotsRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DescribeServerlessCacheSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServerlessCacheSnapshots"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of serverless cache. If this parameter is specified, only
     * snapshots associated with that specific serverless cache are described.
     * Available for Redis only.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const{ return m_serverlessCacheName; }

    /**
     * <p>The identifier of serverless cache. If this parameter is specified, only
     * snapshots associated with that specific serverless cache are described.
     * Available for Redis only.</p>
     */
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }

    /**
     * <p>The identifier of serverless cache. If this parameter is specified, only
     * snapshots associated with that specific serverless cache are described.
     * Available for Redis only.</p>
     */
    inline void SetServerlessCacheName(const Aws::String& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = value; }

    /**
     * <p>The identifier of serverless cache. If this parameter is specified, only
     * snapshots associated with that specific serverless cache are described.
     * Available for Redis only.</p>
     */
    inline void SetServerlessCacheName(Aws::String&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::move(value); }

    /**
     * <p>The identifier of serverless cache. If this parameter is specified, only
     * snapshots associated with that specific serverless cache are described.
     * Available for Redis only.</p>
     */
    inline void SetServerlessCacheName(const char* value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName.assign(value); }

    /**
     * <p>The identifier of serverless cache. If this parameter is specified, only
     * snapshots associated with that specific serverless cache are described.
     * Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithServerlessCacheName(const Aws::String& value) { SetServerlessCacheName(value); return *this;}

    /**
     * <p>The identifier of serverless cache. If this parameter is specified, only
     * snapshots associated with that specific serverless cache are described.
     * Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithServerlessCacheName(Aws::String&& value) { SetServerlessCacheName(std::move(value)); return *this;}

    /**
     * <p>The identifier of serverless cache. If this parameter is specified, only
     * snapshots associated with that specific serverless cache are described.
     * Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithServerlessCacheName(const char* value) { SetServerlessCacheName(value); return *this;}


    /**
     * <p>The identifier of the serverless cache’s snapshot. If this parameter is
     * specified, only this snapshot is described. Available for Redis only.</p>
     */
    inline const Aws::String& GetServerlessCacheSnapshotName() const{ return m_serverlessCacheSnapshotName; }

    /**
     * <p>The identifier of the serverless cache’s snapshot. If this parameter is
     * specified, only this snapshot is described. Available for Redis only.</p>
     */
    inline bool ServerlessCacheSnapshotNameHasBeenSet() const { return m_serverlessCacheSnapshotNameHasBeenSet; }

    /**
     * <p>The identifier of the serverless cache’s snapshot. If this parameter is
     * specified, only this snapshot is described. Available for Redis only.</p>
     */
    inline void SetServerlessCacheSnapshotName(const Aws::String& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = value; }

    /**
     * <p>The identifier of the serverless cache’s snapshot. If this parameter is
     * specified, only this snapshot is described. Available for Redis only.</p>
     */
    inline void SetServerlessCacheSnapshotName(Aws::String&& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = std::move(value); }

    /**
     * <p>The identifier of the serverless cache’s snapshot. If this parameter is
     * specified, only this snapshot is described. Available for Redis only.</p>
     */
    inline void SetServerlessCacheSnapshotName(const char* value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName.assign(value); }

    /**
     * <p>The identifier of the serverless cache’s snapshot. If this parameter is
     * specified, only this snapshot is described. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithServerlessCacheSnapshotName(const Aws::String& value) { SetServerlessCacheSnapshotName(value); return *this;}

    /**
     * <p>The identifier of the serverless cache’s snapshot. If this parameter is
     * specified, only this snapshot is described. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithServerlessCacheSnapshotName(Aws::String&& value) { SetServerlessCacheSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The identifier of the serverless cache’s snapshot. If this parameter is
     * specified, only this snapshot is described. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithServerlessCacheSnapshotName(const char* value) { SetServerlessCacheSnapshotName(value); return *this;}


    /**
     * <p>The type of snapshot that is being described. Available for Redis only.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p>The type of snapshot that is being described. Available for Redis only.</p>
     */
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }

    /**
     * <p>The type of snapshot that is being described. Available for Redis only.</p>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>The type of snapshot that is being described. Available for Redis only.</p>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }

    /**
     * <p>The type of snapshot that is being described. Available for Redis only.</p>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p>The type of snapshot that is being described. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>The type of snapshot that is being described. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}

    /**
     * <p>The type of snapshot that is being described. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}


    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified max-results value, a market is included in the response
     * so that remaining results can be retrieved. Available for Redis only.The default
     * is 50. The Validation Constraints are a maximum of 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified max-results value, a market is included in the response
     * so that remaining results can be retrieved. Available for Redis only.The default
     * is 50. The Validation Constraints are a maximum of 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified max-results value, a market is included in the response
     * so that remaining results can be retrieved. Available for Redis only.The default
     * is 50. The Validation Constraints are a maximum of 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified max-results value, a market is included in the response
     * so that remaining results can be retrieved. Available for Redis only.The default
     * is 50. The Validation Constraints are a maximum of 50.</p>
     */
    inline DescribeServerlessCacheSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_serverlessCacheName;
    bool m_serverlessCacheNameHasBeenSet = false;

    Aws::String m_serverlessCacheSnapshotName;
    bool m_serverlessCacheSnapshotNameHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
