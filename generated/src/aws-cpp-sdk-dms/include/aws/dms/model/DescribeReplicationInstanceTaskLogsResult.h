/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationInstanceTaskLog.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{
  class DescribeReplicationInstanceTaskLogsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstanceTaskLogsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstanceTaskLogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstanceTaskLogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const { return m_replicationInstanceArn; }
    template<typename ReplicationInstanceArnT = Aws::String>
    void SetReplicationInstanceArn(ReplicationInstanceArnT&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::forward<ReplicationInstanceArnT>(value); }
    template<typename ReplicationInstanceArnT = Aws::String>
    DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceArn(ReplicationInstanceArnT&& value) { SetReplicationInstanceArn(std::forward<ReplicationInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of replication task log metadata. Each member of the array contains
     * the replication task name, ARN, and task log size (in bytes). </p>
     */
    inline const Aws::Vector<ReplicationInstanceTaskLog>& GetReplicationInstanceTaskLogs() const { return m_replicationInstanceTaskLogs; }
    template<typename ReplicationInstanceTaskLogsT = Aws::Vector<ReplicationInstanceTaskLog>>
    void SetReplicationInstanceTaskLogs(ReplicationInstanceTaskLogsT&& value) { m_replicationInstanceTaskLogsHasBeenSet = true; m_replicationInstanceTaskLogs = std::forward<ReplicationInstanceTaskLogsT>(value); }
    template<typename ReplicationInstanceTaskLogsT = Aws::Vector<ReplicationInstanceTaskLog>>
    DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceTaskLogs(ReplicationInstanceTaskLogsT&& value) { SetReplicationInstanceTaskLogs(std::forward<ReplicationInstanceTaskLogsT>(value)); return *this;}
    template<typename ReplicationInstanceTaskLogsT = ReplicationInstanceTaskLog>
    DescribeReplicationInstanceTaskLogsResult& AddReplicationInstanceTaskLogs(ReplicationInstanceTaskLogsT&& value) { m_replicationInstanceTaskLogsHasBeenSet = true; m_replicationInstanceTaskLogs.emplace_back(std::forward<ReplicationInstanceTaskLogsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReplicationInstanceTaskLogsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReplicationInstanceTaskLogsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    Aws::Vector<ReplicationInstanceTaskLog> m_replicationInstanceTaskLogs;
    bool m_replicationInstanceTaskLogsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
