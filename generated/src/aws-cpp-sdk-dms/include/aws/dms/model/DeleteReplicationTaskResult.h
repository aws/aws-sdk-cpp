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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationTaskResponse">AWS
   * API Reference</a></p>
   */
  class DeleteReplicationTaskResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationTaskResult();
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The deleted replication task.</p>
     */
    inline const ReplicationTask& GetReplicationTask() const{ return m_replicationTask; }

    /**
     * <p>The deleted replication task.</p>
     */
    inline void SetReplicationTask(const ReplicationTask& value) { m_replicationTask = value; }

    /**
     * <p>The deleted replication task.</p>
     */
    inline void SetReplicationTask(ReplicationTask&& value) { m_replicationTask = std::move(value); }

    /**
     * <p>The deleted replication task.</p>
     */
    inline DeleteReplicationTaskResult& WithReplicationTask(const ReplicationTask& value) { SetReplicationTask(value); return *this;}

    /**
     * <p>The deleted replication task.</p>
     */
    inline DeleteReplicationTaskResult& WithReplicationTask(ReplicationTask&& value) { SetReplicationTask(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteReplicationTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteReplicationTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteReplicationTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReplicationTask m_replicationTask;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
