/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/TimeRangeFilter.h>
#include <aws/elasticache/model/ServiceUpdateStatus.h>
#include <aws/elasticache/model/UpdateActionStatus.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class DescribeUpdateActionsRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DescribeUpdateActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUpdateActions"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }
    inline DescribeUpdateActionsRequest& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}
    inline DescribeUpdateActionsRequest& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}
    inline DescribeUpdateActionsRequest& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication group IDs</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationGroupIds() const{ return m_replicationGroupIds; }
    inline bool ReplicationGroupIdsHasBeenSet() const { return m_replicationGroupIdsHasBeenSet; }
    inline void SetReplicationGroupIds(const Aws::Vector<Aws::String>& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds = value; }
    inline void SetReplicationGroupIds(Aws::Vector<Aws::String>&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds = std::move(value); }
    inline DescribeUpdateActionsRequest& WithReplicationGroupIds(const Aws::Vector<Aws::String>& value) { SetReplicationGroupIds(value); return *this;}
    inline DescribeUpdateActionsRequest& WithReplicationGroupIds(Aws::Vector<Aws::String>&& value) { SetReplicationGroupIds(std::move(value)); return *this;}
    inline DescribeUpdateActionsRequest& AddReplicationGroupIds(const Aws::String& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(value); return *this; }
    inline DescribeUpdateActionsRequest& AddReplicationGroupIds(Aws::String&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(std::move(value)); return *this; }
    inline DescribeUpdateActionsRequest& AddReplicationGroupIds(const char* value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cache cluster IDs</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheClusterIds() const{ return m_cacheClusterIds; }
    inline bool CacheClusterIdsHasBeenSet() const { return m_cacheClusterIdsHasBeenSet; }
    inline void SetCacheClusterIds(const Aws::Vector<Aws::String>& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds = value; }
    inline void SetCacheClusterIds(Aws::Vector<Aws::String>&& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds = std::move(value); }
    inline DescribeUpdateActionsRequest& WithCacheClusterIds(const Aws::Vector<Aws::String>& value) { SetCacheClusterIds(value); return *this;}
    inline DescribeUpdateActionsRequest& WithCacheClusterIds(Aws::Vector<Aws::String>&& value) { SetCacheClusterIds(std::move(value)); return *this;}
    inline DescribeUpdateActionsRequest& AddCacheClusterIds(const Aws::String& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds.push_back(value); return *this; }
    inline DescribeUpdateActionsRequest& AddCacheClusterIds(Aws::String&& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds.push_back(std::move(value)); return *this; }
    inline DescribeUpdateActionsRequest& AddCacheClusterIds(const char* value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Elasticache engine to which the update applies. Either Valkey, Redis OSS
     * or Memcached.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DescribeUpdateActionsRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DescribeUpdateActionsRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DescribeUpdateActionsRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update</p>
     */
    inline const Aws::Vector<ServiceUpdateStatus>& GetServiceUpdateStatus() const{ return m_serviceUpdateStatus; }
    inline bool ServiceUpdateStatusHasBeenSet() const { return m_serviceUpdateStatusHasBeenSet; }
    inline void SetServiceUpdateStatus(const Aws::Vector<ServiceUpdateStatus>& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = value; }
    inline void SetServiceUpdateStatus(Aws::Vector<ServiceUpdateStatus>&& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = std::move(value); }
    inline DescribeUpdateActionsRequest& WithServiceUpdateStatus(const Aws::Vector<ServiceUpdateStatus>& value) { SetServiceUpdateStatus(value); return *this;}
    inline DescribeUpdateActionsRequest& WithServiceUpdateStatus(Aws::Vector<ServiceUpdateStatus>&& value) { SetServiceUpdateStatus(std::move(value)); return *this;}
    inline DescribeUpdateActionsRequest& AddServiceUpdateStatus(const ServiceUpdateStatus& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus.push_back(value); return *this; }
    inline DescribeUpdateActionsRequest& AddServiceUpdateStatus(ServiceUpdateStatus&& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The range of time specified to search for service updates that are in
     * available status</p>
     */
    inline const TimeRangeFilter& GetServiceUpdateTimeRange() const{ return m_serviceUpdateTimeRange; }
    inline bool ServiceUpdateTimeRangeHasBeenSet() const { return m_serviceUpdateTimeRangeHasBeenSet; }
    inline void SetServiceUpdateTimeRange(const TimeRangeFilter& value) { m_serviceUpdateTimeRangeHasBeenSet = true; m_serviceUpdateTimeRange = value; }
    inline void SetServiceUpdateTimeRange(TimeRangeFilter&& value) { m_serviceUpdateTimeRangeHasBeenSet = true; m_serviceUpdateTimeRange = std::move(value); }
    inline DescribeUpdateActionsRequest& WithServiceUpdateTimeRange(const TimeRangeFilter& value) { SetServiceUpdateTimeRange(value); return *this;}
    inline DescribeUpdateActionsRequest& WithServiceUpdateTimeRange(TimeRangeFilter&& value) { SetServiceUpdateTimeRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the update action.</p>
     */
    inline const Aws::Vector<UpdateActionStatus>& GetUpdateActionStatus() const{ return m_updateActionStatus; }
    inline bool UpdateActionStatusHasBeenSet() const { return m_updateActionStatusHasBeenSet; }
    inline void SetUpdateActionStatus(const Aws::Vector<UpdateActionStatus>& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus = value; }
    inline void SetUpdateActionStatus(Aws::Vector<UpdateActionStatus>&& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus = std::move(value); }
    inline DescribeUpdateActionsRequest& WithUpdateActionStatus(const Aws::Vector<UpdateActionStatus>& value) { SetUpdateActionStatus(value); return *this;}
    inline DescribeUpdateActionsRequest& WithUpdateActionStatus(Aws::Vector<UpdateActionStatus>&& value) { SetUpdateActionStatus(std::move(value)); return *this;}
    inline DescribeUpdateActionsRequest& AddUpdateActionStatus(const UpdateActionStatus& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus.push_back(value); return *this; }
    inline DescribeUpdateActionsRequest& AddUpdateActionStatus(UpdateActionStatus&& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Dictates whether to include node level update status in the response </p>
     */
    inline bool GetShowNodeLevelUpdateStatus() const{ return m_showNodeLevelUpdateStatus; }
    inline bool ShowNodeLevelUpdateStatusHasBeenSet() const { return m_showNodeLevelUpdateStatusHasBeenSet; }
    inline void SetShowNodeLevelUpdateStatus(bool value) { m_showNodeLevelUpdateStatusHasBeenSet = true; m_showNodeLevelUpdateStatus = value; }
    inline DescribeUpdateActionsRequest& WithShowNodeLevelUpdateStatus(bool value) { SetShowNodeLevelUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeUpdateActionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeUpdateActionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeUpdateActionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeUpdateActionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationGroupIds;
    bool m_replicationGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheClusterIds;
    bool m_cacheClusterIdsHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::Vector<ServiceUpdateStatus> m_serviceUpdateStatus;
    bool m_serviceUpdateStatusHasBeenSet = false;

    TimeRangeFilter m_serviceUpdateTimeRange;
    bool m_serviceUpdateTimeRangeHasBeenSet = false;

    Aws::Vector<UpdateActionStatus> m_updateActionStatus;
    bool m_updateActionStatusHasBeenSet = false;

    bool m_showNodeLevelUpdateStatus;
    bool m_showNodeLevelUpdateStatusHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
