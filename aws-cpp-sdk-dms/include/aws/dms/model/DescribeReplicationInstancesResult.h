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
#include <aws/dms/model/ReplicationInstance.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationInstancesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstancesResult
  {
  public:
    DescribeReplicationInstancesResult();
    DescribeReplicationInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeReplicationInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationInstancesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationInstancesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationInstancesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The replication instances described.</p>
     */
    inline const Aws::Vector<ReplicationInstance>& GetReplicationInstances() const{ return m_replicationInstances; }

    /**
     * <p>The replication instances described.</p>
     */
    inline void SetReplicationInstances(const Aws::Vector<ReplicationInstance>& value) { m_replicationInstances = value; }

    /**
     * <p>The replication instances described.</p>
     */
    inline void SetReplicationInstances(Aws::Vector<ReplicationInstance>&& value) { m_replicationInstances = std::move(value); }

    /**
     * <p>The replication instances described.</p>
     */
    inline DescribeReplicationInstancesResult& WithReplicationInstances(const Aws::Vector<ReplicationInstance>& value) { SetReplicationInstances(value); return *this;}

    /**
     * <p>The replication instances described.</p>
     */
    inline DescribeReplicationInstancesResult& WithReplicationInstances(Aws::Vector<ReplicationInstance>&& value) { SetReplicationInstances(std::move(value)); return *this;}

    /**
     * <p>The replication instances described.</p>
     */
    inline DescribeReplicationInstancesResult& AddReplicationInstances(const ReplicationInstance& value) { m_replicationInstances.push_back(value); return *this; }

    /**
     * <p>The replication instances described.</p>
     */
    inline DescribeReplicationInstancesResult& AddReplicationInstances(ReplicationInstance&& value) { m_replicationInstances.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_marker;

    Aws::Vector<ReplicationInstance> m_replicationInstances;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
