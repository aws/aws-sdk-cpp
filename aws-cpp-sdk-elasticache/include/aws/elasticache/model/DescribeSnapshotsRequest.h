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
   * <p>Represents the input of a <code>DescribeSnapshotsMessage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeSnapshotsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API DescribeSnapshotsRequest : public ElastiCacheRequest
  {
  public:
    DescribeSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshots"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A user-supplied replication group identifier. If this parameter is specified,
     * only snapshots associated with that specific replication group are
     * described.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>A user-supplied replication group identifier. If this parameter is specified,
     * only snapshots associated with that specific replication group are
     * described.</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>A user-supplied replication group identifier. If this parameter is specified,
     * only snapshots associated with that specific replication group are
     * described.</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>A user-supplied replication group identifier. If this parameter is specified,
     * only snapshots associated with that specific replication group are
     * described.</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>A user-supplied replication group identifier. If this parameter is specified,
     * only snapshots associated with that specific replication group are
     * described.</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>A user-supplied replication group identifier. If this parameter is specified,
     * only snapshots associated with that specific replication group are
     * described.</p>
     */
    inline DescribeSnapshotsRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>A user-supplied replication group identifier. If this parameter is specified,
     * only snapshots associated with that specific replication group are
     * described.</p>
     */
    inline DescribeSnapshotsRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied replication group identifier. If this parameter is specified,
     * only snapshots associated with that specific replication group are
     * described.</p>
     */
    inline DescribeSnapshotsRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline DescribeSnapshotsRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline DescribeSnapshotsRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline DescribeSnapshotsRequest& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}


    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this snapshot are described.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this snapshot are described.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this snapshot are described.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this snapshot are described.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this snapshot are described.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this snapshot are described.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this snapshot are described.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this snapshot are described.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


    /**
     * <p>If set to <code>system</code>, the output shows snapshots that were
     * automatically created by ElastiCache. If set to <code>user</code> the output
     * shows snapshots that were manually created. If omitted, the output shows both
     * automatically and manually created snapshots.</p>
     */
    inline const Aws::String& GetSnapshotSource() const{ return m_snapshotSource; }

    /**
     * <p>If set to <code>system</code>, the output shows snapshots that were
     * automatically created by ElastiCache. If set to <code>user</code> the output
     * shows snapshots that were manually created. If omitted, the output shows both
     * automatically and manually created snapshots.</p>
     */
    inline bool SnapshotSourceHasBeenSet() const { return m_snapshotSourceHasBeenSet; }

    /**
     * <p>If set to <code>system</code>, the output shows snapshots that were
     * automatically created by ElastiCache. If set to <code>user</code> the output
     * shows snapshots that were manually created. If omitted, the output shows both
     * automatically and manually created snapshots.</p>
     */
    inline void SetSnapshotSource(const Aws::String& value) { m_snapshotSourceHasBeenSet = true; m_snapshotSource = value; }

    /**
     * <p>If set to <code>system</code>, the output shows snapshots that were
     * automatically created by ElastiCache. If set to <code>user</code> the output
     * shows snapshots that were manually created. If omitted, the output shows both
     * automatically and manually created snapshots.</p>
     */
    inline void SetSnapshotSource(Aws::String&& value) { m_snapshotSourceHasBeenSet = true; m_snapshotSource = std::move(value); }

    /**
     * <p>If set to <code>system</code>, the output shows snapshots that were
     * automatically created by ElastiCache. If set to <code>user</code> the output
     * shows snapshots that were manually created. If omitted, the output shows both
     * automatically and manually created snapshots.</p>
     */
    inline void SetSnapshotSource(const char* value) { m_snapshotSourceHasBeenSet = true; m_snapshotSource.assign(value); }

    /**
     * <p>If set to <code>system</code>, the output shows snapshots that were
     * automatically created by ElastiCache. If set to <code>user</code> the output
     * shows snapshots that were manually created. If omitted, the output shows both
     * automatically and manually created snapshots.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotSource(const Aws::String& value) { SetSnapshotSource(value); return *this;}

    /**
     * <p>If set to <code>system</code>, the output shows snapshots that were
     * automatically created by ElastiCache. If set to <code>user</code> the output
     * shows snapshots that were manually created. If omitted, the output shows both
     * automatically and manually created snapshots.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotSource(Aws::String&& value) { SetSnapshotSource(std::move(value)); return *this;}

    /**
     * <p>If set to <code>system</code>, the output shows snapshots that were
     * automatically created by ElastiCache. If set to <code>user</code> the output
     * shows snapshots that were manually created. If omitted, the output shows both
     * automatically and manually created snapshots.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotSource(const char* value) { SetSnapshotSource(value); return *this;}


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
    inline DescribeSnapshotsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeSnapshotsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeSnapshotsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 50</p> <p>Constraints: minimum 20; maximum 50.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 50</p> <p>Constraints: minimum 20; maximum 50.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 50</p> <p>Constraints: minimum 20; maximum 50.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 50</p> <p>Constraints: minimum 20; maximum 50.</p>
     */
    inline DescribeSnapshotsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>A Boolean value which if true, the node group (shard) configuration is
     * included in the snapshot description.</p>
     */
    inline bool GetShowNodeGroupConfig() const{ return m_showNodeGroupConfig; }

    /**
     * <p>A Boolean value which if true, the node group (shard) configuration is
     * included in the snapshot description.</p>
     */
    inline bool ShowNodeGroupConfigHasBeenSet() const { return m_showNodeGroupConfigHasBeenSet; }

    /**
     * <p>A Boolean value which if true, the node group (shard) configuration is
     * included in the snapshot description.</p>
     */
    inline void SetShowNodeGroupConfig(bool value) { m_showNodeGroupConfigHasBeenSet = true; m_showNodeGroupConfig = value; }

    /**
     * <p>A Boolean value which if true, the node group (shard) configuration is
     * included in the snapshot description.</p>
     */
    inline DescribeSnapshotsRequest& WithShowNodeGroupConfig(bool value) { SetShowNodeGroupConfig(value); return *this;}

  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet;

    Aws::String m_snapshotSource;
    bool m_snapshotSourceHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    bool m_showNodeGroupConfig;
    bool m_showNodeGroupConfigHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
