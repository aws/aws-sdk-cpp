/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/StartReplicationTaskTypeValue.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTaskMessage">AWS
   * API Reference</a></p>
   */
  class StartReplicationTaskRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartReplicationTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartReplicationTask"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be started.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be started.</p>
     */
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be started.</p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be started.</p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be started.</p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be started.</p>
     */
    inline StartReplicationTaskRequest& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be started.</p>
     */
    inline StartReplicationTaskRequest& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be started.</p>
     */
    inline StartReplicationTaskRequest& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}


    /**
     * <p>The type of replication task to start.</p> <p>When the migration type is
     * <code>full-load</code> or <code>full-load-and-cdc</code>, the only valid value
     * for the first run of the task is <code>start-replication</code>. You use
     * <code>reload-target</code> to restart the task and
     * <code>resume-processing</code> to resume the task.</p> <p>When the migration
     * type is <code>cdc</code>, you use <code>start-replication</code> to start or
     * restart the task, and <code>resume-processing</code> to resume the task.
     * <code>reload-target</code> is not a valid value for a task with migration type
     * of <code>cdc</code>.</p>
     */
    inline const StartReplicationTaskTypeValue& GetStartReplicationTaskType() const{ return m_startReplicationTaskType; }

    /**
     * <p>The type of replication task to start.</p> <p>When the migration type is
     * <code>full-load</code> or <code>full-load-and-cdc</code>, the only valid value
     * for the first run of the task is <code>start-replication</code>. You use
     * <code>reload-target</code> to restart the task and
     * <code>resume-processing</code> to resume the task.</p> <p>When the migration
     * type is <code>cdc</code>, you use <code>start-replication</code> to start or
     * restart the task, and <code>resume-processing</code> to resume the task.
     * <code>reload-target</code> is not a valid value for a task with migration type
     * of <code>cdc</code>.</p>
     */
    inline bool StartReplicationTaskTypeHasBeenSet() const { return m_startReplicationTaskTypeHasBeenSet; }

    /**
     * <p>The type of replication task to start.</p> <p>When the migration type is
     * <code>full-load</code> or <code>full-load-and-cdc</code>, the only valid value
     * for the first run of the task is <code>start-replication</code>. You use
     * <code>reload-target</code> to restart the task and
     * <code>resume-processing</code> to resume the task.</p> <p>When the migration
     * type is <code>cdc</code>, you use <code>start-replication</code> to start or
     * restart the task, and <code>resume-processing</code> to resume the task.
     * <code>reload-target</code> is not a valid value for a task with migration type
     * of <code>cdc</code>.</p>
     */
    inline void SetStartReplicationTaskType(const StartReplicationTaskTypeValue& value) { m_startReplicationTaskTypeHasBeenSet = true; m_startReplicationTaskType = value; }

    /**
     * <p>The type of replication task to start.</p> <p>When the migration type is
     * <code>full-load</code> or <code>full-load-and-cdc</code>, the only valid value
     * for the first run of the task is <code>start-replication</code>. You use
     * <code>reload-target</code> to restart the task and
     * <code>resume-processing</code> to resume the task.</p> <p>When the migration
     * type is <code>cdc</code>, you use <code>start-replication</code> to start or
     * restart the task, and <code>resume-processing</code> to resume the task.
     * <code>reload-target</code> is not a valid value for a task with migration type
     * of <code>cdc</code>.</p>
     */
    inline void SetStartReplicationTaskType(StartReplicationTaskTypeValue&& value) { m_startReplicationTaskTypeHasBeenSet = true; m_startReplicationTaskType = std::move(value); }

    /**
     * <p>The type of replication task to start.</p> <p>When the migration type is
     * <code>full-load</code> or <code>full-load-and-cdc</code>, the only valid value
     * for the first run of the task is <code>start-replication</code>. You use
     * <code>reload-target</code> to restart the task and
     * <code>resume-processing</code> to resume the task.</p> <p>When the migration
     * type is <code>cdc</code>, you use <code>start-replication</code> to start or
     * restart the task, and <code>resume-processing</code> to resume the task.
     * <code>reload-target</code> is not a valid value for a task with migration type
     * of <code>cdc</code>.</p>
     */
    inline StartReplicationTaskRequest& WithStartReplicationTaskType(const StartReplicationTaskTypeValue& value) { SetStartReplicationTaskType(value); return *this;}

    /**
     * <p>The type of replication task to start.</p> <p>When the migration type is
     * <code>full-load</code> or <code>full-load-and-cdc</code>, the only valid value
     * for the first run of the task is <code>start-replication</code>. You use
     * <code>reload-target</code> to restart the task and
     * <code>resume-processing</code> to resume the task.</p> <p>When the migration
     * type is <code>cdc</code>, you use <code>start-replication</code> to start or
     * restart the task, and <code>resume-processing</code> to resume the task.
     * <code>reload-target</code> is not a valid value for a task with migration type
     * of <code>cdc</code>.</p>
     */
    inline StartReplicationTaskRequest& WithStartReplicationTaskType(StartReplicationTaskTypeValue&& value) { SetStartReplicationTaskType(std::move(value)); return *this;}


    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline const Aws::Utils::DateTime& GetCdcStartTime() const{ return m_cdcStartTime; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline bool CdcStartTimeHasBeenSet() const { return m_cdcStartTimeHasBeenSet; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline void SetCdcStartTime(const Aws::Utils::DateTime& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = value; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline void SetCdcStartTime(Aws::Utils::DateTime&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = std::move(value); }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline StartReplicationTaskRequest& WithCdcStartTime(const Aws::Utils::DateTime& value) { SetCdcStartTime(value); return *this;}

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline StartReplicationTaskRequest& WithCdcStartTime(Aws::Utils::DateTime&& value) { SetCdcStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p> 
     * <p>When you use this task setting with a source PostgreSQL database, a logical
     * replication slot should already be created and associated with the source
     * endpoint. You can verify this by setting the <code>slotName</code> extra
     * connection attribute to the name of this logical replication slot. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.html#CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * Connection Attributes When Using PostgreSQL as a Source for DMS</a>.</p> 
     */
    inline const Aws::String& GetCdcStartPosition() const{ return m_cdcStartPosition; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p> 
     * <p>When you use this task setting with a source PostgreSQL database, a logical
     * replication slot should already be created and associated with the source
     * endpoint. You can verify this by setting the <code>slotName</code> extra
     * connection attribute to the name of this logical replication slot. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.html#CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * Connection Attributes When Using PostgreSQL as a Source for DMS</a>.</p> 
     */
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p> 
     * <p>When you use this task setting with a source PostgreSQL database, a logical
     * replication slot should already be created and associated with the source
     * endpoint. You can verify this by setting the <code>slotName</code> extra
     * connection attribute to the name of this logical replication slot. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.html#CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * Connection Attributes When Using PostgreSQL as a Source for DMS</a>.</p> 
     */
    inline void SetCdcStartPosition(const Aws::String& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = value; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p> 
     * <p>When you use this task setting with a source PostgreSQL database, a logical
     * replication slot should already be created and associated with the source
     * endpoint. You can verify this by setting the <code>slotName</code> extra
     * connection attribute to the name of this logical replication slot. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.html#CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * Connection Attributes When Using PostgreSQL as a Source for DMS</a>.</p> 
     */
    inline void SetCdcStartPosition(Aws::String&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::move(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p> 
     * <p>When you use this task setting with a source PostgreSQL database, a logical
     * replication slot should already be created and associated with the source
     * endpoint. You can verify this by setting the <code>slotName</code> extra
     * connection attribute to the name of this logical replication slot. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.html#CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * Connection Attributes When Using PostgreSQL as a Source for DMS</a>.</p> 
     */
    inline void SetCdcStartPosition(const char* value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition.assign(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p> 
     * <p>When you use this task setting with a source PostgreSQL database, a logical
     * replication slot should already be created and associated with the source
     * endpoint. You can verify this by setting the <code>slotName</code> extra
     * connection attribute to the name of this logical replication slot. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.html#CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * Connection Attributes When Using PostgreSQL as a Source for DMS</a>.</p> 
     */
    inline StartReplicationTaskRequest& WithCdcStartPosition(const Aws::String& value) { SetCdcStartPosition(value); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p> 
     * <p>When you use this task setting with a source PostgreSQL database, a logical
     * replication slot should already be created and associated with the source
     * endpoint. You can verify this by setting the <code>slotName</code> extra
     * connection attribute to the name of this logical replication slot. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.html#CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * Connection Attributes When Using PostgreSQL as a Source for DMS</a>.</p> 
     */
    inline StartReplicationTaskRequest& WithCdcStartPosition(Aws::String&& value) { SetCdcStartPosition(std::move(value)); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p> 
     * <p>When you use this task setting with a source PostgreSQL database, a logical
     * replication slot should already be created and associated with the source
     * endpoint. You can verify this by setting the <code>slotName</code> extra
     * connection attribute to the name of this logical replication slot. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.html#CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * Connection Attributes When Using PostgreSQL as a Source for DMS</a>.</p> 
     */
    inline StartReplicationTaskRequest& WithCdcStartPosition(const char* value) { SetCdcStartPosition(value); return *this;}


    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline const Aws::String& GetCdcStopPosition() const{ return m_cdcStopPosition; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline void SetCdcStopPosition(const Aws::String& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = value; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline void SetCdcStopPosition(Aws::String&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::move(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline void SetCdcStopPosition(const char* value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition.assign(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline StartReplicationTaskRequest& WithCdcStopPosition(const Aws::String& value) { SetCdcStopPosition(value); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline StartReplicationTaskRequest& WithCdcStopPosition(Aws::String&& value) { SetCdcStopPosition(std::move(value)); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline StartReplicationTaskRequest& WithCdcStopPosition(const char* value) { SetCdcStopPosition(value); return *this;}

  private:

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    StartReplicationTaskTypeValue m_startReplicationTaskType;
    bool m_startReplicationTaskTypeHasBeenSet = false;

    Aws::Utils::DateTime m_cdcStartTime;
    bool m_cdcStartTimeHasBeenSet = false;

    Aws::String m_cdcStartPosition;
    bool m_cdcStartPositionHasBeenSet = false;

    Aws::String m_cdcStopPosition;
    bool m_cdcStopPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
