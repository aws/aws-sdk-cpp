/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/TableStatistics.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTableStatisticsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReplicationTableStatisticsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTableStatisticsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTableStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTableStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name of the replication config.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const { return m_replicationConfigArn; }
    template<typename ReplicationConfigArnT = Aws::String>
    void SetReplicationConfigArn(ReplicationConfigArnT&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::forward<ReplicationConfigArnT>(value); }
    template<typename ReplicationConfigArnT = Aws::String>
    DescribeReplicationTableStatisticsResult& WithReplicationConfigArn(ReplicationConfigArnT&& value) { SetReplicationConfigArn(std::forward<ReplicationConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReplicationTableStatisticsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns table statistics on the replication, including table name, rows
     * inserted, rows updated, and rows deleted.</p>
     */
    inline const Aws::Vector<TableStatistics>& GetReplicationTableStatistics() const { return m_replicationTableStatistics; }
    template<typename ReplicationTableStatisticsT = Aws::Vector<TableStatistics>>
    void SetReplicationTableStatistics(ReplicationTableStatisticsT&& value) { m_replicationTableStatisticsHasBeenSet = true; m_replicationTableStatistics = std::forward<ReplicationTableStatisticsT>(value); }
    template<typename ReplicationTableStatisticsT = Aws::Vector<TableStatistics>>
    DescribeReplicationTableStatisticsResult& WithReplicationTableStatistics(ReplicationTableStatisticsT&& value) { SetReplicationTableStatistics(std::forward<ReplicationTableStatisticsT>(value)); return *this;}
    template<typename ReplicationTableStatisticsT = TableStatistics>
    DescribeReplicationTableStatisticsResult& AddReplicationTableStatistics(ReplicationTableStatisticsT&& value) { m_replicationTableStatisticsHasBeenSet = true; m_replicationTableStatistics.emplace_back(std::forward<ReplicationTableStatisticsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReplicationTableStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationConfigArn;
    bool m_replicationConfigArnHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<TableStatistics> m_replicationTableStatistics;
    bool m_replicationTableStatisticsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
