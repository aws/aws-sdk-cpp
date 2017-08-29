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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/OrderableReplicationInstance.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeOrderableReplicationInstancesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API DescribeOrderableReplicationInstancesResult
  {
  public:
    DescribeOrderableReplicationInstancesResult();
    DescribeOrderableReplicationInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeOrderableReplicationInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The order-able replication instances available.</p>
     */
    inline const Aws::Vector<OrderableReplicationInstance>& GetOrderableReplicationInstances() const{ return m_orderableReplicationInstances; }

    /**
     * <p>The order-able replication instances available.</p>
     */
    inline void SetOrderableReplicationInstances(const Aws::Vector<OrderableReplicationInstance>& value) { m_orderableReplicationInstances = value; }

    /**
     * <p>The order-able replication instances available.</p>
     */
    inline void SetOrderableReplicationInstances(Aws::Vector<OrderableReplicationInstance>&& value) { m_orderableReplicationInstances = std::move(value); }

    /**
     * <p>The order-able replication instances available.</p>
     */
    inline DescribeOrderableReplicationInstancesResult& WithOrderableReplicationInstances(const Aws::Vector<OrderableReplicationInstance>& value) { SetOrderableReplicationInstances(value); return *this;}

    /**
     * <p>The order-able replication instances available.</p>
     */
    inline DescribeOrderableReplicationInstancesResult& WithOrderableReplicationInstances(Aws::Vector<OrderableReplicationInstance>&& value) { SetOrderableReplicationInstances(std::move(value)); return *this;}

    /**
     * <p>The order-able replication instances available.</p>
     */
    inline DescribeOrderableReplicationInstancesResult& AddOrderableReplicationInstances(const OrderableReplicationInstance& value) { m_orderableReplicationInstances.push_back(value); return *this; }

    /**
     * <p>The order-able replication instances available.</p>
     */
    inline DescribeOrderableReplicationInstancesResult& AddOrderableReplicationInstances(OrderableReplicationInstance&& value) { m_orderableReplicationInstances.push_back(std::move(value)); return *this; }


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
    inline DescribeOrderableReplicationInstancesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeOrderableReplicationInstancesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeOrderableReplicationInstancesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<OrderableReplicationInstance> m_orderableReplicationInstances;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
