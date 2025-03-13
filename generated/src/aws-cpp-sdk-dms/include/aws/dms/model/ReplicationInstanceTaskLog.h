/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Contains metadata for a replication instance task log.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationInstanceTaskLog">AWS
   * API Reference</a></p>
   */
  class ReplicationInstanceTaskLog
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationInstanceTaskLog() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationInstanceTaskLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationInstanceTaskLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskName() const { return m_replicationTaskName; }
    inline bool ReplicationTaskNameHasBeenSet() const { return m_replicationTaskNameHasBeenSet; }
    template<typename ReplicationTaskNameT = Aws::String>
    void SetReplicationTaskName(ReplicationTaskNameT&& value) { m_replicationTaskNameHasBeenSet = true; m_replicationTaskName = std::forward<ReplicationTaskNameT>(value); }
    template<typename ReplicationTaskNameT = Aws::String>
    ReplicationInstanceTaskLog& WithReplicationTaskName(ReplicationTaskNameT&& value) { SetReplicationTaskName(std::forward<ReplicationTaskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const { return m_replicationTaskArn; }
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }
    template<typename ReplicationTaskArnT = Aws::String>
    void SetReplicationTaskArn(ReplicationTaskArnT&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::forward<ReplicationTaskArnT>(value); }
    template<typename ReplicationTaskArnT = Aws::String>
    ReplicationInstanceTaskLog& WithReplicationTaskArn(ReplicationTaskArnT&& value) { SetReplicationTaskArn(std::forward<ReplicationTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the replication task log.</p>
     */
    inline long long GetReplicationInstanceTaskLogSize() const { return m_replicationInstanceTaskLogSize; }
    inline bool ReplicationInstanceTaskLogSizeHasBeenSet() const { return m_replicationInstanceTaskLogSizeHasBeenSet; }
    inline void SetReplicationInstanceTaskLogSize(long long value) { m_replicationInstanceTaskLogSizeHasBeenSet = true; m_replicationInstanceTaskLogSize = value; }
    inline ReplicationInstanceTaskLog& WithReplicationInstanceTaskLogSize(long long value) { SetReplicationInstanceTaskLogSize(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskName;
    bool m_replicationTaskNameHasBeenSet = false;

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    long long m_replicationInstanceTaskLogSize{0};
    bool m_replicationInstanceTaskLogSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
