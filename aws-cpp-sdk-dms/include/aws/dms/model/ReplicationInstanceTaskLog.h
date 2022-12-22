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
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationInstanceTaskLog();
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationInstanceTaskLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationInstanceTaskLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskName() const{ return m_replicationTaskName; }

    /**
     * <p>The name of the replication task.</p>
     */
    inline bool ReplicationTaskNameHasBeenSet() const { return m_replicationTaskNameHasBeenSet; }

    /**
     * <p>The name of the replication task.</p>
     */
    inline void SetReplicationTaskName(const Aws::String& value) { m_replicationTaskNameHasBeenSet = true; m_replicationTaskName = value; }

    /**
     * <p>The name of the replication task.</p>
     */
    inline void SetReplicationTaskName(Aws::String&& value) { m_replicationTaskNameHasBeenSet = true; m_replicationTaskName = std::move(value); }

    /**
     * <p>The name of the replication task.</p>
     */
    inline void SetReplicationTaskName(const char* value) { m_replicationTaskNameHasBeenSet = true; m_replicationTaskName.assign(value); }

    /**
     * <p>The name of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskName(const Aws::String& value) { SetReplicationTaskName(value); return *this;}

    /**
     * <p>The name of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskName(Aws::String&& value) { SetReplicationTaskName(std::move(value)); return *this;}

    /**
     * <p>The name of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskName(const char* value) { SetReplicationTaskName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}


    /**
     * <p>The size, in bytes, of the replication task log.</p>
     */
    inline long long GetReplicationInstanceTaskLogSize() const{ return m_replicationInstanceTaskLogSize; }

    /**
     * <p>The size, in bytes, of the replication task log.</p>
     */
    inline bool ReplicationInstanceTaskLogSizeHasBeenSet() const { return m_replicationInstanceTaskLogSizeHasBeenSet; }

    /**
     * <p>The size, in bytes, of the replication task log.</p>
     */
    inline void SetReplicationInstanceTaskLogSize(long long value) { m_replicationInstanceTaskLogSizeHasBeenSet = true; m_replicationInstanceTaskLogSize = value; }

    /**
     * <p>The size, in bytes, of the replication task log.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationInstanceTaskLogSize(long long value) { SetReplicationInstanceTaskLogSize(value); return *this;}

  private:

    Aws::String m_replicationTaskName;
    bool m_replicationTaskNameHasBeenSet = false;

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    long long m_replicationInstanceTaskLogSize;
    bool m_replicationInstanceTaskLogSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
