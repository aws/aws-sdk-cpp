/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MigrationTypeValue.h>
#include <aws/dms/model/ProvisionData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationStats.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Provides information that describes a serverless replication created by the
   * <code>CreateReplication</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/Replication">AWS API
   * Reference</a></p>
   */
  class Replication
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API Replication();
    AWS_DATABASEMIGRATIONSERVICE_API Replication(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Replication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline const Aws::String& GetReplicationConfigIdentifier() const{ return m_replicationConfigIdentifier; }
    inline bool ReplicationConfigIdentifierHasBeenSet() const { return m_replicationConfigIdentifierHasBeenSet; }
    inline void SetReplicationConfigIdentifier(const Aws::String& value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier = value; }
    inline void SetReplicationConfigIdentifier(Aws::String&& value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier = std::move(value); }
    inline void SetReplicationConfigIdentifier(const char* value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier.assign(value); }
    inline Replication& WithReplicationConfigIdentifier(const Aws::String& value) { SetReplicationConfigIdentifier(value); return *this;}
    inline Replication& WithReplicationConfigIdentifier(Aws::String&& value) { SetReplicationConfigIdentifier(std::move(value)); return *this;}
    inline Replication& WithReplicationConfigIdentifier(const char* value) { SetReplicationConfigIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name for the <code>ReplicationConfig</code> associated
     * with the replication.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const{ return m_replicationConfigArn; }
    inline bool ReplicationConfigArnHasBeenSet() const { return m_replicationConfigArnHasBeenSet; }
    inline void SetReplicationConfigArn(const Aws::String& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = value; }
    inline void SetReplicationConfigArn(Aws::String&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::move(value); }
    inline void SetReplicationConfigArn(const char* value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn.assign(value); }
    inline Replication& WithReplicationConfigArn(const Aws::String& value) { SetReplicationConfigArn(value); return *this;}
    inline Replication& WithReplicationConfigArn(Aws::String&& value) { SetReplicationConfigArn(std::move(value)); return *this;}
    inline Replication& WithReplicationConfigArn(const char* value) { SetReplicationConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data source.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const{ return m_sourceEndpointArn; }
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }
    inline void SetSourceEndpointArn(const Aws::String& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = value; }
    inline void SetSourceEndpointArn(Aws::String&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::move(value); }
    inline void SetSourceEndpointArn(const char* value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn.assign(value); }
    inline Replication& WithSourceEndpointArn(const Aws::String& value) { SetSourceEndpointArn(value); return *this;}
    inline Replication& WithSourceEndpointArn(Aws::String&& value) { SetSourceEndpointArn(std::move(value)); return *this;}
    inline Replication& WithSourceEndpointArn(const char* value) { SetSourceEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data target.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const{ return m_targetEndpointArn; }
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }
    inline void SetTargetEndpointArn(const Aws::String& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = value; }
    inline void SetTargetEndpointArn(Aws::String&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::move(value); }
    inline void SetTargetEndpointArn(const char* value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn.assign(value); }
    inline Replication& WithTargetEndpointArn(const Aws::String& value) { SetTargetEndpointArn(value); return *this;}
    inline Replication& WithTargetEndpointArn(Aws::String&& value) { SetTargetEndpointArn(std::move(value)); return *this;}
    inline Replication& WithTargetEndpointArn(const char* value) { SetTargetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the serverless replication.</p>
     */
    inline const MigrationTypeValue& GetReplicationType() const{ return m_replicationType; }
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }
    inline void SetReplicationType(const MigrationTypeValue& value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }
    inline void SetReplicationType(MigrationTypeValue&& value) { m_replicationTypeHasBeenSet = true; m_replicationType = std::move(value); }
    inline Replication& WithReplicationType(const MigrationTypeValue& value) { SetReplicationType(value); return *this;}
    inline Replication& WithReplicationType(MigrationTypeValue&& value) { SetReplicationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the serverless replication.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Replication& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Replication& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Replication& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about provisioning resources for an DMS serverless
     * replication.</p>
     */
    inline const ProvisionData& GetProvisionData() const{ return m_provisionData; }
    inline bool ProvisionDataHasBeenSet() const { return m_provisionDataHasBeenSet; }
    inline void SetProvisionData(const ProvisionData& value) { m_provisionDataHasBeenSet = true; m_provisionData = value; }
    inline void SetProvisionData(ProvisionData&& value) { m_provisionDataHasBeenSet = true; m_provisionData = std::move(value); }
    inline Replication& WithProvisionData(const ProvisionData& value) { SetProvisionData(value); return *this;}
    inline Replication& WithProvisionData(ProvisionData&& value) { SetProvisionData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the replication task was stopped. This response parameter can
     * return one of the following values:</p> <ul> <li> <p> <code>"Stop Reason
     * NORMAL"</code> </p> </li> <li> <p> <code>"Stop Reason RECOVERABLE_ERROR"</code>
     * </p> </li> <li> <p> <code>"Stop Reason FATAL_ERROR"</code> </p> </li> <li> <p>
     * <code>"Stop Reason FULL_LOAD_ONLY_FINISHED"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AFTER_FULL_LOAD"</code> – Full load completed, with
     * cached changes not applied</p> </li> <li> <p> <code>"Stop Reason
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
    inline const Aws::String& GetStopReason() const{ return m_stopReason; }
    inline bool StopReasonHasBeenSet() const { return m_stopReasonHasBeenSet; }
    inline void SetStopReason(const Aws::String& value) { m_stopReasonHasBeenSet = true; m_stopReason = value; }
    inline void SetStopReason(Aws::String&& value) { m_stopReasonHasBeenSet = true; m_stopReason = std::move(value); }
    inline void SetStopReason(const char* value) { m_stopReasonHasBeenSet = true; m_stopReason.assign(value); }
    inline Replication& WithStopReason(const Aws::String& value) { SetStopReason(value); return *this;}
    inline Replication& WithStopReason(Aws::String&& value) { SetStopReason(std::move(value)); return *this;}
    inline Replication& WithStopReason(const char* value) { SetStopReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error and other information about why a serverless replication failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureMessages() const{ return m_failureMessages; }
    inline bool FailureMessagesHasBeenSet() const { return m_failureMessagesHasBeenSet; }
    inline void SetFailureMessages(const Aws::Vector<Aws::String>& value) { m_failureMessagesHasBeenSet = true; m_failureMessages = value; }
    inline void SetFailureMessages(Aws::Vector<Aws::String>&& value) { m_failureMessagesHasBeenSet = true; m_failureMessages = std::move(value); }
    inline Replication& WithFailureMessages(const Aws::Vector<Aws::String>& value) { SetFailureMessages(value); return *this;}
    inline Replication& WithFailureMessages(Aws::Vector<Aws::String>&& value) { SetFailureMessages(std::move(value)); return *this;}
    inline Replication& AddFailureMessages(const Aws::String& value) { m_failureMessagesHasBeenSet = true; m_failureMessages.push_back(value); return *this; }
    inline Replication& AddFailureMessages(Aws::String&& value) { m_failureMessagesHasBeenSet = true; m_failureMessages.push_back(std::move(value)); return *this; }
    inline Replication& AddFailureMessages(const char* value) { m_failureMessagesHasBeenSet = true; m_failureMessages.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This object provides a collection of statistics about a serverless
     * replication.</p>
     */
    inline const ReplicationStats& GetReplicationStats() const{ return m_replicationStats; }
    inline bool ReplicationStatsHasBeenSet() const { return m_replicationStatsHasBeenSet; }
    inline void SetReplicationStats(const ReplicationStats& value) { m_replicationStatsHasBeenSet = true; m_replicationStats = value; }
    inline void SetReplicationStats(ReplicationStats&& value) { m_replicationStatsHasBeenSet = true; m_replicationStats = std::move(value); }
    inline Replication& WithReplicationStats(const ReplicationStats& value) { SetReplicationStats(value); return *this;}
    inline Replication& WithReplicationStats(ReplicationStats&& value) { SetReplicationStats(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of replication to start.</p>
     */
    inline const Aws::String& GetStartReplicationType() const{ return m_startReplicationType; }
    inline bool StartReplicationTypeHasBeenSet() const { return m_startReplicationTypeHasBeenSet; }
    inline void SetStartReplicationType(const Aws::String& value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType = value; }
    inline void SetStartReplicationType(Aws::String&& value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType = std::move(value); }
    inline void SetStartReplicationType(const char* value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType.assign(value); }
    inline Replication& WithStartReplicationType(const Aws::String& value) { SetStartReplicationType(value); return *this;}
    inline Replication& WithStartReplicationType(Aws::String&& value) { SetStartReplicationType(std::move(value)); return *this;}
    inline Replication& WithStartReplicationType(const char* value) { SetStartReplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline const Aws::Utils::DateTime& GetCdcStartTime() const{ return m_cdcStartTime; }
    inline bool CdcStartTimeHasBeenSet() const { return m_cdcStartTimeHasBeenSet; }
    inline void SetCdcStartTime(const Aws::Utils::DateTime& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = value; }
    inline void SetCdcStartTime(Aws::Utils::DateTime&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = std::move(value); }
    inline Replication& WithCdcStartTime(const Aws::Utils::DateTime& value) { SetCdcStartTime(value); return *this;}
    inline Replication& WithCdcStartTime(Aws::Utils::DateTime&& value) { SetCdcStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline const Aws::String& GetCdcStartPosition() const{ return m_cdcStartPosition; }
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }
    inline void SetCdcStartPosition(const Aws::String& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = value; }
    inline void SetCdcStartPosition(Aws::String&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::move(value); }
    inline void SetCdcStartPosition(const char* value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition.assign(value); }
    inline Replication& WithCdcStartPosition(const Aws::String& value) { SetCdcStartPosition(value); return *this;}
    inline Replication& WithCdcStartPosition(Aws::String&& value) { SetCdcStartPosition(std::move(value)); return *this;}
    inline Replication& WithCdcStartPosition(const char* value) { SetCdcStartPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline const Aws::String& GetCdcStopPosition() const{ return m_cdcStopPosition; }
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }
    inline void SetCdcStopPosition(const Aws::String& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = value; }
    inline void SetCdcStopPosition(Aws::String&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::move(value); }
    inline void SetCdcStopPosition(const char* value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition.assign(value); }
    inline Replication& WithCdcStopPosition(const Aws::String& value) { SetCdcStopPosition(value); return *this;}
    inline Replication& WithCdcStopPosition(Aws::String&& value) { SetCdcStopPosition(std::move(value)); return *this;}
    inline Replication& WithCdcStopPosition(const char* value) { SetCdcStopPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline const Aws::String& GetRecoveryCheckpoint() const{ return m_recoveryCheckpoint; }
    inline bool RecoveryCheckpointHasBeenSet() const { return m_recoveryCheckpointHasBeenSet; }
    inline void SetRecoveryCheckpoint(const Aws::String& value) { m_recoveryCheckpointHasBeenSet = true; m_recoveryCheckpoint = value; }
    inline void SetRecoveryCheckpoint(Aws::String&& value) { m_recoveryCheckpointHasBeenSet = true; m_recoveryCheckpoint = std::move(value); }
    inline void SetRecoveryCheckpoint(const char* value) { m_recoveryCheckpointHasBeenSet = true; m_recoveryCheckpoint.assign(value); }
    inline Replication& WithRecoveryCheckpoint(const Aws::String& value) { SetRecoveryCheckpoint(value); return *this;}
    inline Replication& WithRecoveryCheckpoint(Aws::String&& value) { SetRecoveryCheckpoint(std::move(value)); return *this;}
    inline Replication& WithRecoveryCheckpoint(const char* value) { SetRecoveryCheckpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the serverless replication was created.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationCreateTime() const{ return m_replicationCreateTime; }
    inline bool ReplicationCreateTimeHasBeenSet() const { return m_replicationCreateTimeHasBeenSet; }
    inline void SetReplicationCreateTime(const Aws::Utils::DateTime& value) { m_replicationCreateTimeHasBeenSet = true; m_replicationCreateTime = value; }
    inline void SetReplicationCreateTime(Aws::Utils::DateTime&& value) { m_replicationCreateTimeHasBeenSet = true; m_replicationCreateTime = std::move(value); }
    inline Replication& WithReplicationCreateTime(const Aws::Utils::DateTime& value) { SetReplicationCreateTime(value); return *this;}
    inline Replication& WithReplicationCreateTime(Aws::Utils::DateTime&& value) { SetReplicationCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the serverless replication was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationUpdateTime() const{ return m_replicationUpdateTime; }
    inline bool ReplicationUpdateTimeHasBeenSet() const { return m_replicationUpdateTimeHasBeenSet; }
    inline void SetReplicationUpdateTime(const Aws::Utils::DateTime& value) { m_replicationUpdateTimeHasBeenSet = true; m_replicationUpdateTime = value; }
    inline void SetReplicationUpdateTime(Aws::Utils::DateTime&& value) { m_replicationUpdateTimeHasBeenSet = true; m_replicationUpdateTime = std::move(value); }
    inline Replication& WithReplicationUpdateTime(const Aws::Utils::DateTime& value) { SetReplicationUpdateTime(value); return *this;}
    inline Replication& WithReplicationUpdateTime(Aws::Utils::DateTime&& value) { SetReplicationUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when replication was last stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationLastStopTime() const{ return m_replicationLastStopTime; }
    inline bool ReplicationLastStopTimeHasBeenSet() const { return m_replicationLastStopTimeHasBeenSet; }
    inline void SetReplicationLastStopTime(const Aws::Utils::DateTime& value) { m_replicationLastStopTimeHasBeenSet = true; m_replicationLastStopTime = value; }
    inline void SetReplicationLastStopTime(Aws::Utils::DateTime&& value) { m_replicationLastStopTimeHasBeenSet = true; m_replicationLastStopTime = std::move(value); }
    inline Replication& WithReplicationLastStopTime(const Aws::Utils::DateTime& value) { SetReplicationLastStopTime(value); return *this;}
    inline Replication& WithReplicationLastStopTime(Aws::Utils::DateTime&& value) { SetReplicationLastStopTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when DMS will deprovision the replication.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationDeprovisionTime() const{ return m_replicationDeprovisionTime; }
    inline bool ReplicationDeprovisionTimeHasBeenSet() const { return m_replicationDeprovisionTimeHasBeenSet; }
    inline void SetReplicationDeprovisionTime(const Aws::Utils::DateTime& value) { m_replicationDeprovisionTimeHasBeenSet = true; m_replicationDeprovisionTime = value; }
    inline void SetReplicationDeprovisionTime(Aws::Utils::DateTime&& value) { m_replicationDeprovisionTimeHasBeenSet = true; m_replicationDeprovisionTime = std::move(value); }
    inline Replication& WithReplicationDeprovisionTime(const Aws::Utils::DateTime& value) { SetReplicationDeprovisionTime(value); return *this;}
    inline Replication& WithReplicationDeprovisionTime(Aws::Utils::DateTime&& value) { SetReplicationDeprovisionTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationConfigIdentifier;
    bool m_replicationConfigIdentifierHasBeenSet = false;

    Aws::String m_replicationConfigArn;
    bool m_replicationConfigArnHasBeenSet = false;

    Aws::String m_sourceEndpointArn;
    bool m_sourceEndpointArnHasBeenSet = false;

    Aws::String m_targetEndpointArn;
    bool m_targetEndpointArnHasBeenSet = false;

    MigrationTypeValue m_replicationType;
    bool m_replicationTypeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ProvisionData m_provisionData;
    bool m_provisionDataHasBeenSet = false;

    Aws::String m_stopReason;
    bool m_stopReasonHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureMessages;
    bool m_failureMessagesHasBeenSet = false;

    ReplicationStats m_replicationStats;
    bool m_replicationStatsHasBeenSet = false;

    Aws::String m_startReplicationType;
    bool m_startReplicationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_cdcStartTime;
    bool m_cdcStartTimeHasBeenSet = false;

    Aws::String m_cdcStartPosition;
    bool m_cdcStartPositionHasBeenSet = false;

    Aws::String m_cdcStopPosition;
    bool m_cdcStopPositionHasBeenSet = false;

    Aws::String m_recoveryCheckpoint;
    bool m_recoveryCheckpointHasBeenSet = false;

    Aws::Utils::DateTime m_replicationCreateTime;
    bool m_replicationCreateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replicationUpdateTime;
    bool m_replicationUpdateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replicationLastStopTime;
    bool m_replicationLastStopTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replicationDeprovisionTime;
    bool m_replicationDeprovisionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
