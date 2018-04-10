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
  class AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstanceTaskLogsResult
  {
  public:
    DescribeReplicationInstanceTaskLogsResult();
    DescribeReplicationInstanceTaskLogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeReplicationInstanceTaskLogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}


    /**
     * <p>An array of replication task log metadata. Each member of the array contains
     * the replication task name, ARN, and task log size (in bytes). </p>
     */
    inline const Aws::Vector<ReplicationInstanceTaskLog>& GetReplicationInstanceTaskLogs() const{ return m_replicationInstanceTaskLogs; }

    /**
     * <p>An array of replication task log metadata. Each member of the array contains
     * the replication task name, ARN, and task log size (in bytes). </p>
     */
    inline void SetReplicationInstanceTaskLogs(const Aws::Vector<ReplicationInstanceTaskLog>& value) { m_replicationInstanceTaskLogs = value; }

    /**
     * <p>An array of replication task log metadata. Each member of the array contains
     * the replication task name, ARN, and task log size (in bytes). </p>
     */
    inline void SetReplicationInstanceTaskLogs(Aws::Vector<ReplicationInstanceTaskLog>&& value) { m_replicationInstanceTaskLogs = std::move(value); }

    /**
     * <p>An array of replication task log metadata. Each member of the array contains
     * the replication task name, ARN, and task log size (in bytes). </p>
     */
    inline DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceTaskLogs(const Aws::Vector<ReplicationInstanceTaskLog>& value) { SetReplicationInstanceTaskLogs(value); return *this;}

    /**
     * <p>An array of replication task log metadata. Each member of the array contains
     * the replication task name, ARN, and task log size (in bytes). </p>
     */
    inline DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceTaskLogs(Aws::Vector<ReplicationInstanceTaskLog>&& value) { SetReplicationInstanceTaskLogs(std::move(value)); return *this;}

    /**
     * <p>An array of replication task log metadata. Each member of the array contains
     * the replication task name, ARN, and task log size (in bytes). </p>
     */
    inline DescribeReplicationInstanceTaskLogsResult& AddReplicationInstanceTaskLogs(const ReplicationInstanceTaskLog& value) { m_replicationInstanceTaskLogs.push_back(value); return *this; }

    /**
     * <p>An array of replication task log metadata. Each member of the array contains
     * the replication task name, ARN, and task log size (in bytes). </p>
     */
    inline DescribeReplicationInstanceTaskLogsResult& AddReplicationInstanceTaskLogs(ReplicationInstanceTaskLog&& value) { m_replicationInstanceTaskLogs.push_back(std::move(value)); return *this; }


    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeReplicationInstanceTaskLogsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeReplicationInstanceTaskLogsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeReplicationInstanceTaskLogsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_replicationInstanceArn;

    Aws::Vector<ReplicationInstanceTaskLog> m_replicationInstanceTaskLogs;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
