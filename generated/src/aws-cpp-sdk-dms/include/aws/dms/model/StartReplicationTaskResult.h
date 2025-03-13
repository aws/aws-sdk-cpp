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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTaskResponse">AWS
   * API Reference</a></p>
   */
  class StartReplicationTaskResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartReplicationTaskResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API StartReplicationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API StartReplicationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The replication task started.</p>
     */
    inline const ReplicationTask& GetReplicationTask() const { return m_replicationTask; }
    template<typename ReplicationTaskT = ReplicationTask>
    void SetReplicationTask(ReplicationTaskT&& value) { m_replicationTaskHasBeenSet = true; m_replicationTask = std::forward<ReplicationTaskT>(value); }
    template<typename ReplicationTaskT = ReplicationTask>
    StartReplicationTaskResult& WithReplicationTask(ReplicationTaskT&& value) { SetReplicationTask(std::forward<ReplicationTaskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartReplicationTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReplicationTask m_replicationTask;
    bool m_replicationTaskHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
