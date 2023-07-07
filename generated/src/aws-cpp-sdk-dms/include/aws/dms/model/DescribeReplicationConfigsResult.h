/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationConfig.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationConfigsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReplicationConfigsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationConfigsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeReplicationConfigsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationConfigsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationConfigsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Returned configuration parameters that describe each provisioned DMS
     * Serverless replication.</p>
     */
    inline const Aws::Vector<ReplicationConfig>& GetReplicationConfigs() const{ return m_replicationConfigs; }

    /**
     * <p>Returned configuration parameters that describe each provisioned DMS
     * Serverless replication.</p>
     */
    inline void SetReplicationConfigs(const Aws::Vector<ReplicationConfig>& value) { m_replicationConfigs = value; }

    /**
     * <p>Returned configuration parameters that describe each provisioned DMS
     * Serverless replication.</p>
     */
    inline void SetReplicationConfigs(Aws::Vector<ReplicationConfig>&& value) { m_replicationConfigs = std::move(value); }

    /**
     * <p>Returned configuration parameters that describe each provisioned DMS
     * Serverless replication.</p>
     */
    inline DescribeReplicationConfigsResult& WithReplicationConfigs(const Aws::Vector<ReplicationConfig>& value) { SetReplicationConfigs(value); return *this;}

    /**
     * <p>Returned configuration parameters that describe each provisioned DMS
     * Serverless replication.</p>
     */
    inline DescribeReplicationConfigsResult& WithReplicationConfigs(Aws::Vector<ReplicationConfig>&& value) { SetReplicationConfigs(std::move(value)); return *this;}

    /**
     * <p>Returned configuration parameters that describe each provisioned DMS
     * Serverless replication.</p>
     */
    inline DescribeReplicationConfigsResult& AddReplicationConfigs(const ReplicationConfig& value) { m_replicationConfigs.push_back(value); return *this; }

    /**
     * <p>Returned configuration parameters that describe each provisioned DMS
     * Serverless replication.</p>
     */
    inline DescribeReplicationConfigsResult& AddReplicationConfigs(ReplicationConfig&& value) { m_replicationConfigs.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeReplicationConfigsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeReplicationConfigsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeReplicationConfigsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<ReplicationConfig> m_replicationConfigs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
