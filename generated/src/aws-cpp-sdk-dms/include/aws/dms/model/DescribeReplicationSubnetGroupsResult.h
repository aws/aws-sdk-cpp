﻿/**
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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationSubnetGroupsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationSubnetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationSubnetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeReplicationSubnetGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationSubnetGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationSubnetGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A description of the replication subnet groups.</p>
     */
    inline const Aws::Vector<ReplicationSubnetGroup>& GetReplicationSubnetGroups() const{ return m_replicationSubnetGroups; }

    /**
     * <p>A description of the replication subnet groups.</p>
     */
    inline void SetReplicationSubnetGroups(const Aws::Vector<ReplicationSubnetGroup>& value) { m_replicationSubnetGroups = value; }

    /**
     * <p>A description of the replication subnet groups.</p>
     */
    inline void SetReplicationSubnetGroups(Aws::Vector<ReplicationSubnetGroup>&& value) { m_replicationSubnetGroups = std::move(value); }

    /**
     * <p>A description of the replication subnet groups.</p>
     */
    inline DescribeReplicationSubnetGroupsResult& WithReplicationSubnetGroups(const Aws::Vector<ReplicationSubnetGroup>& value) { SetReplicationSubnetGroups(value); return *this;}

    /**
     * <p>A description of the replication subnet groups.</p>
     */
    inline DescribeReplicationSubnetGroupsResult& WithReplicationSubnetGroups(Aws::Vector<ReplicationSubnetGroup>&& value) { SetReplicationSubnetGroups(std::move(value)); return *this;}

    /**
     * <p>A description of the replication subnet groups.</p>
     */
    inline DescribeReplicationSubnetGroupsResult& AddReplicationSubnetGroups(const ReplicationSubnetGroup& value) { m_replicationSubnetGroups.push_back(value); return *this; }

    /**
     * <p>A description of the replication subnet groups.</p>
     */
    inline DescribeReplicationSubnetGroupsResult& AddReplicationSubnetGroups(ReplicationSubnetGroup&& value) { m_replicationSubnetGroups.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeReplicationSubnetGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeReplicationSubnetGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeReplicationSubnetGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<ReplicationSubnetGroup> m_replicationSubnetGroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
