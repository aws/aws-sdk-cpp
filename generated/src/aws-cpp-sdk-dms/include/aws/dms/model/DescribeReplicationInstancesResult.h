/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeReplicationInstancesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstancesResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    DescribeReplicationInstancesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication instances described.</p>
     */
    inline const Aws::Vector<ReplicationInstance>& GetReplicationInstances() const { return m_replicationInstances; }
    template<typename ReplicationInstancesT = Aws::Vector<ReplicationInstance>>
    void SetReplicationInstances(ReplicationInstancesT&& value) { m_replicationInstancesHasBeenSet = true; m_replicationInstances = std::forward<ReplicationInstancesT>(value); }
    template<typename ReplicationInstancesT = Aws::Vector<ReplicationInstance>>
    DescribeReplicationInstancesResult& WithReplicationInstances(ReplicationInstancesT&& value) { SetReplicationInstances(std::forward<ReplicationInstancesT>(value)); return *this;}
    template<typename ReplicationInstancesT = ReplicationInstance>
    DescribeReplicationInstancesResult& AddReplicationInstances(ReplicationInstancesT&& value) { m_replicationInstancesHasBeenSet = true; m_replicationInstances.emplace_back(std::forward<ReplicationInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReplicationInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReplicationInstance> m_replicationInstances;
    bool m_replicationInstancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
