/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationTask.h>
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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTasksResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReplicationTasksResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTasksResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReplicationTasksResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the replication tasks.</p>
     */
    inline const Aws::Vector<ReplicationTask>& GetReplicationTasks() const { return m_replicationTasks; }
    template<typename ReplicationTasksT = Aws::Vector<ReplicationTask>>
    void SetReplicationTasks(ReplicationTasksT&& value) { m_replicationTasksHasBeenSet = true; m_replicationTasks = std::forward<ReplicationTasksT>(value); }
    template<typename ReplicationTasksT = Aws::Vector<ReplicationTask>>
    DescribeReplicationTasksResult& WithReplicationTasks(ReplicationTasksT&& value) { SetReplicationTasks(std::forward<ReplicationTasksT>(value)); return *this;}
    template<typename ReplicationTasksT = ReplicationTask>
    DescribeReplicationTasksResult& AddReplicationTasks(ReplicationTasksT&& value) { m_replicationTasksHasBeenSet = true; m_replicationTasks.emplace_back(std::forward<ReplicationTasksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReplicationTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReplicationTask> m_replicationTasks;
    bool m_replicationTasksHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
