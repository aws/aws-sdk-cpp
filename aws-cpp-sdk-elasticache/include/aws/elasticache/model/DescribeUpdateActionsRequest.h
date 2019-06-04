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
  class AWS_ELASTICACHE_API DescribeUpdateActionsRequest : public ElastiCacheRequest
  {
  public:
    DescribeUpdateActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUpdateActions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline DescribeUpdateActionsRequest& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline DescribeUpdateActionsRequest& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline DescribeUpdateActionsRequest& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}


    /**
     * <p>The replication group IDs</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationGroupIds() const{ return m_replicationGroupIds; }

    /**
     * <p>The replication group IDs</p>
     */
    inline bool ReplicationGroupIdsHasBeenSet() const { return m_replicationGroupIdsHasBeenSet; }

    /**
     * <p>The replication group IDs</p>
     */
    inline void SetReplicationGroupIds(const Aws::Vector<Aws::String>& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds = value; }

    /**
     * <p>The replication group IDs</p>
     */
    inline void SetReplicationGroupIds(Aws::Vector<Aws::String>&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds = std::move(value); }

    /**
     * <p>The replication group IDs</p>
     */
    inline DescribeUpdateActionsRequest& WithReplicationGroupIds(const Aws::Vector<Aws::String>& value) { SetReplicationGroupIds(value); return *this;}

    /**
     * <p>The replication group IDs</p>
     */
    inline DescribeUpdateActionsRequest& WithReplicationGroupIds(Aws::Vector<Aws::String>&& value) { SetReplicationGroupIds(std::move(value)); return *this;}

    /**
     * <p>The replication group IDs</p>
     */
    inline DescribeUpdateActionsRequest& AddReplicationGroupIds(const Aws::String& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(value); return *this; }

    /**
     * <p>The replication group IDs</p>
     */
    inline DescribeUpdateActionsRequest& AddReplicationGroupIds(Aws::String&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The replication group IDs</p>
     */
    inline DescribeUpdateActionsRequest& AddReplicationGroupIds(const char* value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(value); return *this; }


    /**
     * <p>The status of the service update</p>
     */
    inline const Aws::Vector<ServiceUpdateStatus>& GetServiceUpdateStatus() const{ return m_serviceUpdateStatus; }

    /**
     * <p>The status of the service update</p>
     */
    inline bool ServiceUpdateStatusHasBeenSet() const { return m_serviceUpdateStatusHasBeenSet; }

    /**
     * <p>The status of the service update</p>
     */
    inline void SetServiceUpdateStatus(const Aws::Vector<ServiceUpdateStatus>& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = value; }

    /**
     * <p>The status of the service update</p>
     */
    inline void SetServiceUpdateStatus(Aws::Vector<ServiceUpdateStatus>&& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = std::move(value); }

    /**
     * <p>The status of the service update</p>
     */
    inline DescribeUpdateActionsRequest& WithServiceUpdateStatus(const Aws::Vector<ServiceUpdateStatus>& value) { SetServiceUpdateStatus(value); return *this;}

    /**
     * <p>The status of the service update</p>
     */
    inline DescribeUpdateActionsRequest& WithServiceUpdateStatus(Aws::Vector<ServiceUpdateStatus>&& value) { SetServiceUpdateStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the service update</p>
     */
    inline DescribeUpdateActionsRequest& AddServiceUpdateStatus(const ServiceUpdateStatus& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus.push_back(value); return *this; }

    /**
     * <p>The status of the service update</p>
     */
    inline DescribeUpdateActionsRequest& AddServiceUpdateStatus(ServiceUpdateStatus&& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>The range of time specified to search for service updates that are in
     * available status</p>
     */
    inline const TimeRangeFilter& GetServiceUpdateTimeRange() const{ return m_serviceUpdateTimeRange; }

    /**
     * <p>The range of time specified to search for service updates that are in
     * available status</p>
     */
    inline bool ServiceUpdateTimeRangeHasBeenSet() const { return m_serviceUpdateTimeRangeHasBeenSet; }

    /**
     * <p>The range of time specified to search for service updates that are in
     * available status</p>
     */
    inline void SetServiceUpdateTimeRange(const TimeRangeFilter& value) { m_serviceUpdateTimeRangeHasBeenSet = true; m_serviceUpdateTimeRange = value; }

    /**
     * <p>The range of time specified to search for service updates that are in
     * available status</p>
     */
    inline void SetServiceUpdateTimeRange(TimeRangeFilter&& value) { m_serviceUpdateTimeRangeHasBeenSet = true; m_serviceUpdateTimeRange = std::move(value); }

    /**
     * <p>The range of time specified to search for service updates that are in
     * available status</p>
     */
    inline DescribeUpdateActionsRequest& WithServiceUpdateTimeRange(const TimeRangeFilter& value) { SetServiceUpdateTimeRange(value); return *this;}

    /**
     * <p>The range of time specified to search for service updates that are in
     * available status</p>
     */
    inline DescribeUpdateActionsRequest& WithServiceUpdateTimeRange(TimeRangeFilter&& value) { SetServiceUpdateTimeRange(std::move(value)); return *this;}


    /**
     * <p>The status of the update action.</p>
     */
    inline const Aws::Vector<UpdateActionStatus>& GetUpdateActionStatus() const{ return m_updateActionStatus; }

    /**
     * <p>The status of the update action.</p>
     */
    inline bool UpdateActionStatusHasBeenSet() const { return m_updateActionStatusHasBeenSet; }

    /**
     * <p>The status of the update action.</p>
     */
    inline void SetUpdateActionStatus(const Aws::Vector<UpdateActionStatus>& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus = value; }

    /**
     * <p>The status of the update action.</p>
     */
    inline void SetUpdateActionStatus(Aws::Vector<UpdateActionStatus>&& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus = std::move(value); }

    /**
     * <p>The status of the update action.</p>
     */
    inline DescribeUpdateActionsRequest& WithUpdateActionStatus(const Aws::Vector<UpdateActionStatus>& value) { SetUpdateActionStatus(value); return *this;}

    /**
     * <p>The status of the update action.</p>
     */
    inline DescribeUpdateActionsRequest& WithUpdateActionStatus(Aws::Vector<UpdateActionStatus>&& value) { SetUpdateActionStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the update action.</p>
     */
    inline DescribeUpdateActionsRequest& AddUpdateActionStatus(const UpdateActionStatus& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus.push_back(value); return *this; }

    /**
     * <p>The status of the update action.</p>
     */
    inline DescribeUpdateActionsRequest& AddUpdateActionStatus(UpdateActionStatus&& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>Dictates whether to include node level update status in the response </p>
     */
    inline bool GetShowNodeLevelUpdateStatus() const{ return m_showNodeLevelUpdateStatus; }

    /**
     * <p>Dictates whether to include node level update status in the response </p>
     */
    inline bool ShowNodeLevelUpdateStatusHasBeenSet() const { return m_showNodeLevelUpdateStatusHasBeenSet; }

    /**
     * <p>Dictates whether to include node level update status in the response </p>
     */
    inline void SetShowNodeLevelUpdateStatus(bool value) { m_showNodeLevelUpdateStatusHasBeenSet = true; m_showNodeLevelUpdateStatus = value; }

    /**
     * <p>Dictates whether to include node level update status in the response </p>
     */
    inline DescribeUpdateActionsRequest& WithShowNodeLevelUpdateStatus(bool value) { SetShowNodeLevelUpdateStatus(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response</p>
     */
    inline DescribeUpdateActionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


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
    inline DescribeUpdateActionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeUpdateActionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeUpdateActionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet;

    Aws::Vector<Aws::String> m_replicationGroupIds;
    bool m_replicationGroupIdsHasBeenSet;

    Aws::Vector<ServiceUpdateStatus> m_serviceUpdateStatus;
    bool m_serviceUpdateStatusHasBeenSet;

    TimeRangeFilter m_serviceUpdateTimeRange;
    bool m_serviceUpdateTimeRangeHasBeenSet;

    Aws::Vector<UpdateActionStatus> m_updateActionStatus;
    bool m_updateActionStatusHasBeenSet;

    bool m_showNodeLevelUpdateStatus;
    bool m_showNodeLevelUpdateStatusHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
