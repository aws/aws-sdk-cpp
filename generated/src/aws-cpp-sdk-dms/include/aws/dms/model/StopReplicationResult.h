/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/Replication.h>
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
  class StopReplicationResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StopReplicationResult();
    AWS_DATABASEMIGRATIONSERVICE_API StopReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API StopReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The replication that DMS stopped.</p>
     */
    inline const Replication& GetReplication() const{ return m_replication; }

    /**
     * <p>The replication that DMS stopped.</p>
     */
    inline void SetReplication(const Replication& value) { m_replication = value; }

    /**
     * <p>The replication that DMS stopped.</p>
     */
    inline void SetReplication(Replication&& value) { m_replication = std::move(value); }

    /**
     * <p>The replication that DMS stopped.</p>
     */
    inline StopReplicationResult& WithReplication(const Replication& value) { SetReplication(value); return *this;}

    /**
     * <p>The replication that DMS stopped.</p>
     */
    inline StopReplicationResult& WithReplication(Replication&& value) { SetReplication(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopReplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopReplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopReplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Replication m_replication;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
