/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeOrderableReplicationInstancesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeOrderableReplicationInstancesResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeOrderableReplicationInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeOrderableReplicationInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The order-able replication instances available.</p>
     */
    inline const Aws::Vector<OrderableReplicationInstance>& GetOrderableReplicationInstances() const { return m_orderableReplicationInstances; }
    template<typename OrderableReplicationInstancesT = Aws::Vector<OrderableReplicationInstance>>
    void SetOrderableReplicationInstances(OrderableReplicationInstancesT&& value) { m_orderableReplicationInstancesHasBeenSet = true; m_orderableReplicationInstances = std::forward<OrderableReplicationInstancesT>(value); }
    template<typename OrderableReplicationInstancesT = Aws::Vector<OrderableReplicationInstance>>
    DescribeOrderableReplicationInstancesResult& WithOrderableReplicationInstances(OrderableReplicationInstancesT&& value) { SetOrderableReplicationInstances(std::forward<OrderableReplicationInstancesT>(value)); return *this;}
    template<typename OrderableReplicationInstancesT = OrderableReplicationInstance>
    DescribeOrderableReplicationInstancesResult& AddOrderableReplicationInstances(OrderableReplicationInstancesT&& value) { m_orderableReplicationInstancesHasBeenSet = true; m_orderableReplicationInstances.emplace_back(std::forward<OrderableReplicationInstancesT>(value)); return *this; }
    ///@}

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
    DescribeOrderableReplicationInstancesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrderableReplicationInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrderableReplicationInstance> m_orderableReplicationInstances;
    bool m_orderableReplicationInstancesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
