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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MoveReplicationTaskResponse">AWS
   * API Reference</a></p>
   */
  class MoveReplicationTaskResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API MoveReplicationTaskResult();
    AWS_DATABASEMIGRATIONSERVICE_API MoveReplicationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API MoveReplicationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The replication task that was moved.</p>
     */
    inline const ReplicationTask& GetReplicationTask() const{ return m_replicationTask; }

    /**
     * <p>The replication task that was moved.</p>
     */
    inline void SetReplicationTask(const ReplicationTask& value) { m_replicationTask = value; }

    /**
     * <p>The replication task that was moved.</p>
     */
    inline void SetReplicationTask(ReplicationTask&& value) { m_replicationTask = std::move(value); }

    /**
     * <p>The replication task that was moved.</p>
     */
    inline MoveReplicationTaskResult& WithReplicationTask(const ReplicationTask& value) { SetReplicationTask(value); return *this;}

    /**
     * <p>The replication task that was moved.</p>
     */
    inline MoveReplicationTaskResult& WithReplicationTask(ReplicationTask&& value) { SetReplicationTask(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline MoveReplicationTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline MoveReplicationTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline MoveReplicationTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReplicationTask m_replicationTask;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
