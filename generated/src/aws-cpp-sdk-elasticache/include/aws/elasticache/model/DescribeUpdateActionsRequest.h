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
    AWS_ELASTICACHE_API DescribeUpdateActionsRequest() = default;

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
    inline const Aws::String& GetServiceUpdateName() const { return m_serviceUpdateName; }
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }
    template<typename ServiceUpdateNameT = Aws::String>
    void SetServiceUpdateName(ServiceUpdateNameT&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::forward<ServiceUpdateNameT>(value); }
    template<typename ServiceUpdateNameT = Aws::String>
    DescribeUpdateActionsRequest& WithServiceUpdateName(ServiceUpdateNameT&& value) { SetServiceUpdateName(std::forward<ServiceUpdateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication group IDs</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationGroupIds() const { return m_replicationGroupIds; }
    inline bool ReplicationGroupIdsHasBeenSet() const { return m_replicationGroupIdsHasBeenSet; }
    template<typename ReplicationGroupIdsT = Aws::Vector<Aws::String>>
    void SetReplicationGroupIds(ReplicationGroupIdsT&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds = std::forward<ReplicationGroupIdsT>(value); }
    template<typename ReplicationGroupIdsT = Aws::Vector<Aws::String>>
    DescribeUpdateActionsRequest& WithReplicationGroupIds(ReplicationGroupIdsT&& value) { SetReplicationGroupIds(std::forward<ReplicationGroupIdsT>(value)); return *this;}
    template<typename ReplicationGroupIdsT = Aws::String>
    DescribeUpdateActionsRequest& AddReplicationGroupIds(ReplicationGroupIdsT&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.emplace_back(std::forward<ReplicationGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cache cluster IDs</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheClusterIds() const { return m_cacheClusterIds; }
    inline bool CacheClusterIdsHasBeenSet() const { return m_cacheClusterIdsHasBeenSet; }
    template<typename CacheClusterIdsT = Aws::Vector<Aws::String>>
    void SetCacheClusterIds(CacheClusterIdsT&& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds = std::forward<CacheClusterIdsT>(value); }
    template<typename CacheClusterIdsT = Aws::Vector<Aws::String>>
    DescribeUpdateActionsRequest& WithCacheClusterIds(CacheClusterIdsT&& value) { SetCacheClusterIds(std::forward<CacheClusterIdsT>(value)); return *this;}
    template<typename CacheClusterIdsT = Aws::String>
    DescribeUpdateActionsRequest& AddCacheClusterIds(CacheClusterIdsT&& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds.emplace_back(std::forward<CacheClusterIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Elasticache engine to which the update applies. Either Valkey, Redis OSS
     * or Memcached.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    DescribeUpdateActionsRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update</p>
     */
    inline const Aws::Vector<ServiceUpdateStatus>& GetServiceUpdateStatus() const { return m_serviceUpdateStatus; }
    inline bool ServiceUpdateStatusHasBeenSet() const { return m_serviceUpdateStatusHasBeenSet; }
    template<typename ServiceUpdateStatusT = Aws::Vector<ServiceUpdateStatus>>
    void SetServiceUpdateStatus(ServiceUpdateStatusT&& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = std::forward<ServiceUpdateStatusT>(value); }
    template<typename ServiceUpdateStatusT = Aws::Vector<ServiceUpdateStatus>>
    DescribeUpdateActionsRequest& WithServiceUpdateStatus(ServiceUpdateStatusT&& value) { SetServiceUpdateStatus(std::forward<ServiceUpdateStatusT>(value)); return *this;}
    inline DescribeUpdateActionsRequest& AddServiceUpdateStatus(ServiceUpdateStatus value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The range of time specified to search for service updates that are in
     * available status</p>
     */
    inline const TimeRangeFilter& GetServiceUpdateTimeRange() const { return m_serviceUpdateTimeRange; }
    inline bool ServiceUpdateTimeRangeHasBeenSet() const { return m_serviceUpdateTimeRangeHasBeenSet; }
    template<typename ServiceUpdateTimeRangeT = TimeRangeFilter>
    void SetServiceUpdateTimeRange(ServiceUpdateTimeRangeT&& value) { m_serviceUpdateTimeRangeHasBeenSet = true; m_serviceUpdateTimeRange = std::forward<ServiceUpdateTimeRangeT>(value); }
    template<typename ServiceUpdateTimeRangeT = TimeRangeFilter>
    DescribeUpdateActionsRequest& WithServiceUpdateTimeRange(ServiceUpdateTimeRangeT&& value) { SetServiceUpdateTimeRange(std::forward<ServiceUpdateTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the update action.</p>
     */
    inline const Aws::Vector<UpdateActionStatus>& GetUpdateActionStatus() const { return m_updateActionStatus; }
    inline bool UpdateActionStatusHasBeenSet() const { return m_updateActionStatusHasBeenSet; }
    template<typename UpdateActionStatusT = Aws::Vector<UpdateActionStatus>>
    void SetUpdateActionStatus(UpdateActionStatusT&& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus = std::forward<UpdateActionStatusT>(value); }
    template<typename UpdateActionStatusT = Aws::Vector<UpdateActionStatus>>
    DescribeUpdateActionsRequest& WithUpdateActionStatus(UpdateActionStatusT&& value) { SetUpdateActionStatus(std::forward<UpdateActionStatusT>(value)); return *this;}
    inline DescribeUpdateActionsRequest& AddUpdateActionStatus(UpdateActionStatus value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Dictates whether to include node level update status in the response </p>
     */
    inline bool GetShowNodeLevelUpdateStatus() const { return m_showNodeLevelUpdateStatus; }
    inline bool ShowNodeLevelUpdateStatusHasBeenSet() const { return m_showNodeLevelUpdateStatusHasBeenSet; }
    inline void SetShowNodeLevelUpdateStatus(bool value) { m_showNodeLevelUpdateStatusHasBeenSet = true; m_showNodeLevelUpdateStatus = value; }
    inline DescribeUpdateActionsRequest& WithShowNodeLevelUpdateStatus(bool value) { SetShowNodeLevelUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
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
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeUpdateActionsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
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

    bool m_showNodeLevelUpdateStatus{false};
    bool m_showNodeLevelUpdateStatusHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
