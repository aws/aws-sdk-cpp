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
  class ModifyReplicationConfigResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationConfigResult();
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the serverless replication config that was modified.</p>
     */
    inline const ReplicationConfig& GetReplicationConfig() const{ return m_replicationConfig; }

    /**
     * <p>Information about the serverless replication config that was modified.</p>
     */
    inline void SetReplicationConfig(const ReplicationConfig& value) { m_replicationConfig = value; }

    /**
     * <p>Information about the serverless replication config that was modified.</p>
     */
    inline void SetReplicationConfig(ReplicationConfig&& value) { m_replicationConfig = std::move(value); }

    /**
     * <p>Information about the serverless replication config that was modified.</p>
     */
    inline ModifyReplicationConfigResult& WithReplicationConfig(const ReplicationConfig& value) { SetReplicationConfig(value); return *this;}

    /**
     * <p>Information about the serverless replication config that was modified.</p>
     */
    inline ModifyReplicationConfigResult& WithReplicationConfig(ReplicationConfig&& value) { SetReplicationConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ModifyReplicationConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ModifyReplicationConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ModifyReplicationConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReplicationConfig m_replicationConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
