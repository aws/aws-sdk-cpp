/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MigrationTypeValue.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dms/model/ReplicationTaskStats.h>
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
   * <p>Provides information that describes a replication task created by the
   * <code>CreateReplicationTask</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationTask">AWS
   * API Reference</a></p>
   */
  class ReplicationTask
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTask() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user-assigned replication task identifier or name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1-255 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetReplicationTaskIdentifier() const { return m_replicationTaskIdentifier; }
    inline bool ReplicationTaskIdentifierHasBeenSet() const { return m_replicationTaskIdentifierHasBeenSet; }
    template<typename ReplicationTaskIdentifierT = Aws::String>
    void SetReplicationTaskIdentifier(ReplicationTaskIdentifierT&& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = std::forward<ReplicationTaskIdentifierT>(value); }
    template<typename ReplicationTaskIdentifierT = Aws::String>
    ReplicationTask& WithReplicationTaskIdentifier(ReplicationTaskIdentifierT&& value) { SetReplicationTaskIdentifier(std::forward<ReplicationTaskIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the endpoint.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const { return m_sourceEndpointArn; }
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }
    template<typename SourceEndpointArnT = Aws::String>
    void SetSourceEndpointArn(SourceEndpointArnT&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::forward<SourceEndpointArnT>(value); }
    template<typename SourceEndpointArnT = Aws::String>
    ReplicationTask& WithSourceEndpointArn(SourceEndpointArnT&& value) { SetSourceEndpointArn(std::forward<SourceEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN that uniquely identifies the endpoint.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const { return m_targetEndpointArn; }
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }
    template<typename TargetEndpointArnT = Aws::String>
    void SetTargetEndpointArn(TargetEndpointArnT&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::forward<TargetEndpointArnT>(value); }
    template<typename TargetEndpointArnT = Aws::String>
    ReplicationTask& WithTargetEndpointArn(TargetEndpointArnT&& value) { SetTargetEndpointArn(std::forward<TargetEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const { return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    template<typename ReplicationInstanceArnT = Aws::String>
    void SetReplicationInstanceArn(ReplicationInstanceArnT&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::forward<ReplicationInstanceArnT>(value); }
    template<typename ReplicationInstanceArnT = Aws::String>
    ReplicationTask& WithReplicationInstanceArn(ReplicationInstanceArnT&& value) { SetReplicationInstanceArn(std::forward<ReplicationInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of migration.</p>
     */
    inline MigrationTypeValue GetMigrationType() const { return m_migrationType; }
    inline bool MigrationTypeHasBeenSet() const { return m_migrationTypeHasBeenSet; }
    inline void SetMigrationType(MigrationTypeValue value) { m_migrationTypeHasBeenSet = true; m_migrationType = value; }
    inline ReplicationTask& WithMigrationType(MigrationTypeValue value) { SetMigrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline const Aws::String& GetTableMappings() const { return m_tableMappings; }
    inline bool TableMappingsHasBeenSet() const { return m_tableMappingsHasBeenSet; }
    template<typename TableMappingsT = Aws::String>
    void SetTableMappings(TableMappingsT&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = std::forward<TableMappingsT>(value); }
    template<typename TableMappingsT = Aws::String>
    ReplicationTask& WithTableMappings(TableMappingsT&& value) { SetTableMappings(std::forward<TableMappingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskSettings() const { return m_replicationTaskSettings; }
    inline bool ReplicationTaskSettingsHasBeenSet() const { return m_replicationTaskSettingsHasBeenSet; }
    template<typename ReplicationTaskSettingsT = Aws::String>
    void SetReplicationTaskSettings(ReplicationTaskSettingsT&& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = std::forward<ReplicationTaskSettingsT>(value); }
    template<typename ReplicationTaskSettingsT = Aws::String>
    ReplicationTask& WithReplicationTaskSettings(ReplicationTaskSettingsT&& value) { SetReplicationTaskSettings(std::forward<ReplicationTaskSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the replication task. This response parameter can return one of
     * the following values:</p> <ul> <li> <p> <code>"moving"</code> – The task is
     * being moved in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"creating"</code> – The task is being created in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateReplicationTask.html">
     * <code>CreateReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"deleting"</code> – The task is being deleted in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – The task failed to successfully complete the database
     * migration in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed-move"</code> – The task failed to move in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"modifying"</code> – The task definition is being modified in response to
     * running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_ModifyReplicationTask.html">
     * <code>ModifyReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"ready"</code> – The task is in a <code>ready</code> state where it can
     * respond to other task operations, such as <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> or <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a>. </p> </li> <li> <p>
     * <code>"running"</code> – The task is performing a database migration in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"starting"</code> – The task is preparing to perform a database migration
     * in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopped"</code> – The task has stopped in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopping"</code> – The task is preparing to stop in response to running
     * the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"testing"</code> – The database migration specified for this task is being
     * tested in response to running either the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> or the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation.</p>  <p> <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> is an improved premigration
     * task assessment operation. The <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation assesses data type
     * compatibility only between the source and target database of a given migration
     * task. In contrast, <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> enables you to specify a
     * variety of premigration task assessments in addition to data type compatibility.
     * These assessments include ones for the validity of primary key definitions and
     * likely issues with database migration performance, among others.</p> 
     * </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ReplicationTask& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last error (failure) message generated for the replication task.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const { return m_lastFailureMessage; }
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }
    template<typename LastFailureMessageT = Aws::String>
    void SetLastFailureMessage(LastFailureMessageT&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::forward<LastFailureMessageT>(value); }
    template<typename LastFailureMessageT = Aws::String>
    ReplicationTask& WithLastFailureMessage(LastFailureMessageT&& value) { SetLastFailureMessage(std::forward<LastFailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the replication task was stopped. This response parameter can
     * return one of the following values:</p> <ul> <li> <p> <code>"Stop Reason
     * NORMAL"</code> – The task completed successfully with no additional information
     * returned.</p> </li> <li> <p> <code>"Stop Reason RECOVERABLE_ERROR"</code> </p>
     * </li> <li> <p> <code>"Stop Reason FATAL_ERROR"</code> </p> </li> <li> <p>
     * <code>"Stop Reason FULL_LOAD_ONLY_FINISHED"</code> – The task completed the full
     * load phase. DMS applied cached changes if you set
     * <code>StopTaskCachedChangesApplied</code> to <code>true</code>.</p> </li> <li>
     * <p> <code>"Stop Reason STOPPED_AFTER_FULL_LOAD"</code> – Full load completed,
     * with cached changes not applied</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_CACHED_EVENTS"</code> – Full load completed, with cached changes
     * applied</p> </li> <li> <p> <code>"Stop Reason
     * EXPRESS_LICENSE_LIMITS_REACHED"</code> </p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_DDL_APPLY"</code> – User-defined stop task after DDL applied</p>
     * </li> <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_MEMORY"</code> </p> </li>
     * <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_DISK"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AT_SERVER_TIME"</code> – User-defined server time for
     * stopping task</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AT_COMMIT_TIME"</code> – User-defined commit time for stopping task</p>
     * </li> <li> <p> <code>"Stop Reason RECONFIGURATION_RESTART"</code> </p> </li>
     * <li> <p> <code>"Stop Reason RECYCLE_TASK"</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStopReason() const { return m_stopReason; }
    inline bool StopReasonHasBeenSet() const { return m_stopReasonHasBeenSet; }
    template<typename StopReasonT = Aws::String>
    void SetStopReason(StopReasonT&& value) { m_stopReasonHasBeenSet = true; m_stopReason = std::forward<StopReasonT>(value); }
    template<typename StopReasonT = Aws::String>
    ReplicationTask& WithStopReason(StopReasonT&& value) { SetStopReason(std::forward<StopReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskCreationDate() const { return m_replicationTaskCreationDate; }
    inline bool ReplicationTaskCreationDateHasBeenSet() const { return m_replicationTaskCreationDateHasBeenSet; }
    template<typename ReplicationTaskCreationDateT = Aws::Utils::DateTime>
    void SetReplicationTaskCreationDate(ReplicationTaskCreationDateT&& value) { m_replicationTaskCreationDateHasBeenSet = true; m_replicationTaskCreationDate = std::forward<ReplicationTaskCreationDateT>(value); }
    template<typename ReplicationTaskCreationDateT = Aws::Utils::DateTime>
    ReplicationTask& WithReplicationTaskCreationDate(ReplicationTaskCreationDateT&& value) { SetReplicationTaskCreationDate(std::forward<ReplicationTaskCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskStartDate() const { return m_replicationTaskStartDate; }
    inline bool ReplicationTaskStartDateHasBeenSet() const { return m_replicationTaskStartDateHasBeenSet; }
    template<typename ReplicationTaskStartDateT = Aws::Utils::DateTime>
    void SetReplicationTaskStartDate(ReplicationTaskStartDateT&& value) { m_replicationTaskStartDateHasBeenSet = true; m_replicationTaskStartDate = std::forward<ReplicationTaskStartDateT>(value); }
    template<typename ReplicationTaskStartDateT = Aws::Utils::DateTime>
    ReplicationTask& WithReplicationTaskStartDate(ReplicationTaskStartDateT&& value) { SetReplicationTaskStartDate(std::forward<ReplicationTaskStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want the CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     * <p>Date Example: --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint
     * Example: --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline const Aws::String& GetCdcStartPosition() const { return m_cdcStartPosition; }
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }
    template<typename CdcStartPositionT = Aws::String>
    void SetCdcStartPosition(CdcStartPositionT&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::forward<CdcStartPositionT>(value); }
    template<typename CdcStartPositionT = Aws::String>
    ReplicationTask& WithCdcStartPosition(CdcStartPositionT&& value) { SetCdcStartPosition(std::forward<CdcStartPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time:2018-02-09T12:12:12“</p>
     */
    inline const Aws::String& GetCdcStopPosition() const { return m_cdcStopPosition; }
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }
    template<typename CdcStopPositionT = Aws::String>
    void SetCdcStopPosition(CdcStopPositionT&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::forward<CdcStopPositionT>(value); }
    template<typename CdcStopPositionT = Aws::String>
    ReplicationTask& WithCdcStopPosition(CdcStopPositionT&& value) { SetCdcStopPosition(std::forward<CdcStopPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline const Aws::String& GetRecoveryCheckpoint() const { return m_recoveryCheckpoint; }
    inline bool RecoveryCheckpointHasBeenSet() const { return m_recoveryCheckpointHasBeenSet; }
    template<typename RecoveryCheckpointT = Aws::String>
    void SetRecoveryCheckpoint(RecoveryCheckpointT&& value) { m_recoveryCheckpointHasBeenSet = true; m_recoveryCheckpoint = std::forward<RecoveryCheckpointT>(value); }
    template<typename RecoveryCheckpointT = Aws::String>
    ReplicationTask& WithRecoveryCheckpoint(RecoveryCheckpointT&& value) { SetRecoveryCheckpoint(std::forward<RecoveryCheckpointT>(value)); return *this;}
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
    ReplicationTask& WithReplicationTaskArn(ReplicationTaskArnT&& value) { SetReplicationTaskArn(std::forward<ReplicationTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistics for the task, including elapsed time, tables loaded, and table
     * errors.</p>
     */
    inline const ReplicationTaskStats& GetReplicationTaskStats() const { return m_replicationTaskStats; }
    inline bool ReplicationTaskStatsHasBeenSet() const { return m_replicationTaskStatsHasBeenSet; }
    template<typename ReplicationTaskStatsT = ReplicationTaskStats>
    void SetReplicationTaskStats(ReplicationTaskStatsT&& value) { m_replicationTaskStatsHasBeenSet = true; m_replicationTaskStats = std::forward<ReplicationTaskStatsT>(value); }
    template<typename ReplicationTaskStatsT = ReplicationTaskStats>
    ReplicationTask& WithReplicationTaskStats(ReplicationTaskStatsT&& value) { SetReplicationTaskStats(std::forward<ReplicationTaskStatsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">Specifying
     * Supplemental Data for Task Settings</a> in the <i>Database Migration Service
     * User Guide.</i> </p>
     */
    inline const Aws::String& GetTaskData() const { return m_taskData; }
    inline bool TaskDataHasBeenSet() const { return m_taskDataHasBeenSet; }
    template<typename TaskDataT = Aws::String>
    void SetTaskData(TaskDataT&& value) { m_taskDataHasBeenSet = true; m_taskData = std::forward<TaskDataT>(value); }
    template<typename TaskDataT = Aws::String>
    ReplicationTask& WithTaskData(TaskDataT&& value) { SetTaskData(std::forward<TaskDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the replication instance to which this task is moved in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation. Otherwise, this response
     * parameter isn't a member of the <code>ReplicationTask</code> object.</p>
     */
    inline const Aws::String& GetTargetReplicationInstanceArn() const { return m_targetReplicationInstanceArn; }
    inline bool TargetReplicationInstanceArnHasBeenSet() const { return m_targetReplicationInstanceArnHasBeenSet; }
    template<typename TargetReplicationInstanceArnT = Aws::String>
    void SetTargetReplicationInstanceArn(TargetReplicationInstanceArnT&& value) { m_targetReplicationInstanceArnHasBeenSet = true; m_targetReplicationInstanceArn = std::forward<TargetReplicationInstanceArnT>(value); }
    template<typename TargetReplicationInstanceArnT = Aws::String>
    ReplicationTask& WithTargetReplicationInstanceArn(TargetReplicationInstanceArnT&& value) { SetTargetReplicationInstanceArn(std::forward<TargetReplicationInstanceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskIdentifier;
    bool m_replicationTaskIdentifierHasBeenSet = false;

    Aws::String m_sourceEndpointArn;
    bool m_sourceEndpointArnHasBeenSet = false;

    Aws::String m_targetEndpointArn;
    bool m_targetEndpointArnHasBeenSet = false;

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    MigrationTypeValue m_migrationType{MigrationTypeValue::NOT_SET};
    bool m_migrationTypeHasBeenSet = false;

    Aws::String m_tableMappings;
    bool m_tableMappingsHasBeenSet = false;

    Aws::String m_replicationTaskSettings;
    bool m_replicationTaskSettingsHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;

    Aws::String m_stopReason;
    bool m_stopReasonHasBeenSet = false;

    Aws::Utils::DateTime m_replicationTaskCreationDate{};
    bool m_replicationTaskCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_replicationTaskStartDate{};
    bool m_replicationTaskStartDateHasBeenSet = false;

    Aws::String m_cdcStartPosition;
    bool m_cdcStartPositionHasBeenSet = false;

    Aws::String m_cdcStopPosition;
    bool m_cdcStopPositionHasBeenSet = false;

    Aws::String m_recoveryCheckpoint;
    bool m_recoveryCheckpointHasBeenSet = false;

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    ReplicationTaskStats m_replicationTaskStats;
    bool m_replicationTaskStatsHasBeenSet = false;

    Aws::String m_taskData;
    bool m_taskDataHasBeenSet = false;

    Aws::String m_targetReplicationInstanceArn;
    bool m_targetReplicationInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
