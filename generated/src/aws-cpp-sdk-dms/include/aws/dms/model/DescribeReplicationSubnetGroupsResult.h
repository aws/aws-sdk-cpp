/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationSubnetGroup.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationSubnetGroupsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReplicationSubnetGroupsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationSubnetGroupsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationSubnetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationSubnetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    DescribeReplicationSubnetGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the replication subnet groups.</p>
     */
    inline const Aws::Vector<ReplicationSubnetGroup>& GetReplicationSubnetGroups() const { return m_replicationSubnetGroups; }
    template<typename ReplicationSubnetGroupsT = Aws::Vector<ReplicationSubnetGroup>>
    void SetReplicationSubnetGroups(ReplicationSubnetGroupsT&& value) { m_replicationSubnetGroupsHasBeenSet = true; m_replicationSubnetGroups = std::forward<ReplicationSubnetGroupsT>(value); }
    template<typename ReplicationSubnetGroupsT = Aws::Vector<ReplicationSubnetGroup>>
    DescribeReplicationSubnetGroupsResult& WithReplicationSubnetGroups(ReplicationSubnetGroupsT&& value) { SetReplicationSubnetGroups(std::forward<ReplicationSubnetGroupsT>(value)); return *this;}
    template<typename ReplicationSubnetGroupsT = ReplicationSubnetGroup>
    DescribeReplicationSubnetGroupsResult& AddReplicationSubnetGroups(ReplicationSubnetGroupsT&& value) { m_replicationSubnetGroupsHasBeenSet = true; m_replicationSubnetGroups.emplace_back(std::forward<ReplicationSubnetGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReplicationSubnetGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReplicationSubnetGroup> m_replicationSubnetGroups;
    bool m_replicationSubnetGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
