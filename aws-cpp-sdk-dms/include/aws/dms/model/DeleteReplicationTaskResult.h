/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ReplicationTask.h>
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

  private:

    ReplicationTask m_replicationTask;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
