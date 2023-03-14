/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ReplicationTask.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationTaskResponse">AWS
   * API Reference</a></p>
   */
  class CreateReplicationTaskResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationTaskResult();
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The replication task that was created.</p>
     */
    inline const ReplicationTask& GetReplicationTask() const{ return m_replicationTask; }

    /**
     * <p>The replication task that was created.</p>
     */
    inline void SetReplicationTask(const ReplicationTask& value) { m_replicationTask = value; }

    /**
     * <p>The replication task that was created.</p>
     */
    inline void SetReplicationTask(ReplicationTask&& value) { m_replicationTask = std::move(value); }

    /**
     * <p>The replication task that was created.</p>
     */
    inline CreateReplicationTaskResult& WithReplicationTask(const ReplicationTask& value) { SetReplicationTask(value); return *this;}

    /**
     * <p>The replication task that was created.</p>
     */
    inline CreateReplicationTaskResult& WithReplicationTask(ReplicationTask&& value) { SetReplicationTask(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateReplicationTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateReplicationTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateReplicationTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReplicationTask m_replicationTask;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
