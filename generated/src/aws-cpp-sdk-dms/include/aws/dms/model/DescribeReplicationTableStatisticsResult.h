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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTableStatisticsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTableStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTableStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name of the replication config.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const{ return m_replicationConfigArn; }

    /**
     * <p>The Amazon Resource Name of the replication config.</p>
     */
    inline void SetReplicationConfigArn(const Aws::String& value) { m_replicationConfigArn = value; }

    /**
     * <p>The Amazon Resource Name of the replication config.</p>
     */
    inline void SetReplicationConfigArn(Aws::String&& value) { m_replicationConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the replication config.</p>
     */
    inline void SetReplicationConfigArn(const char* value) { m_replicationConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the replication config.</p>
     */
    inline DescribeReplicationTableStatisticsResult& WithReplicationConfigArn(const Aws::String& value) { SetReplicationConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the replication config.</p>
     */
    inline DescribeReplicationTableStatisticsResult& WithReplicationConfigArn(Aws::String&& value) { SetReplicationConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the replication config.</p>
     */
    inline DescribeReplicationTableStatisticsResult& WithReplicationConfigArn(const char* value) { SetReplicationConfigArn(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationTableStatisticsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationTableStatisticsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationTableStatisticsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Returns table statistics on the replication, including table name, rows
     * inserted, rows updated, and rows deleted.</p>
     */
    inline const Aws::Vector<TableStatistics>& GetReplicationTableStatistics() const{ return m_replicationTableStatistics; }

    /**
     * <p>Returns table statistics on the replication, including table name, rows
     * inserted, rows updated, and rows deleted.</p>
     */
    inline void SetReplicationTableStatistics(const Aws::Vector<TableStatistics>& value) { m_replicationTableStatistics = value; }

    /**
     * <p>Returns table statistics on the replication, including table name, rows
     * inserted, rows updated, and rows deleted.</p>
     */
    inline void SetReplicationTableStatistics(Aws::Vector<TableStatistics>&& value) { m_replicationTableStatistics = std::move(value); }

    /**
     * <p>Returns table statistics on the replication, including table name, rows
     * inserted, rows updated, and rows deleted.</p>
     */
    inline DescribeReplicationTableStatisticsResult& WithReplicationTableStatistics(const Aws::Vector<TableStatistics>& value) { SetReplicationTableStatistics(value); return *this;}

    /**
     * <p>Returns table statistics on the replication, including table name, rows
     * inserted, rows updated, and rows deleted.</p>
     */
    inline DescribeReplicationTableStatisticsResult& WithReplicationTableStatistics(Aws::Vector<TableStatistics>&& value) { SetReplicationTableStatistics(std::move(value)); return *this;}

    /**
     * <p>Returns table statistics on the replication, including table name, rows
     * inserted, rows updated, and rows deleted.</p>
     */
    inline DescribeReplicationTableStatisticsResult& AddReplicationTableStatistics(const TableStatistics& value) { m_replicationTableStatistics.push_back(value); return *this; }

    /**
     * <p>Returns table statistics on the replication, including table name, rows
     * inserted, rows updated, and rows deleted.</p>
     */
    inline DescribeReplicationTableStatisticsResult& AddReplicationTableStatistics(TableStatistics&& value) { m_replicationTableStatistics.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeReplicationTableStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeReplicationTableStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeReplicationTableStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_replicationConfigArn;

    Aws::String m_marker;

    Aws::Vector<TableStatistics> m_replicationTableStatistics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
