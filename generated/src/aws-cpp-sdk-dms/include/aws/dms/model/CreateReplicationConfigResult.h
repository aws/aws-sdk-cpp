/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ReplicationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationConfigResponse">AWS
   * API Reference</a></p>
   */
  class CreateReplicationConfigResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationConfigResult();
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Configuration parameters returned from the DMS Serverless replication after
     * it is created.</p>
     */
    inline const ReplicationConfig& GetReplicationConfig() const{ return m_replicationConfig; }

    /**
     * <p>Configuration parameters returned from the DMS Serverless replication after
     * it is created.</p>
     */
    inline void SetReplicationConfig(const ReplicationConfig& value) { m_replicationConfig = value; }

    /**
     * <p>Configuration parameters returned from the DMS Serverless replication after
     * it is created.</p>
     */
    inline void SetReplicationConfig(ReplicationConfig&& value) { m_replicationConfig = std::move(value); }

    /**
     * <p>Configuration parameters returned from the DMS Serverless replication after
     * it is created.</p>
     */
    inline CreateReplicationConfigResult& WithReplicationConfig(const ReplicationConfig& value) { SetReplicationConfig(value); return *this;}

    /**
     * <p>Configuration parameters returned from the DMS Serverless replication after
     * it is created.</p>
     */
    inline CreateReplicationConfigResult& WithReplicationConfig(ReplicationConfig&& value) { SetReplicationConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateReplicationConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateReplicationConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateReplicationConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReplicationConfig m_replicationConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
