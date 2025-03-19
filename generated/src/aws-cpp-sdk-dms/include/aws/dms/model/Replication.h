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
#include <aws/dms/model/PremigrationAssessmentStatus.h>
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
    AWS_DATABASEMIGRATIONSERVICE_API Replication() = default;
    AWS_DATABASEMIGRATIONSERVICE_API Replication(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Replication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline const Aws::String& GetReplicationConfigIdentifier() const { return m_replicationConfigIdentifier; }
    inline bool ReplicationConfigIdentifierHasBeenSet() const { return m_replicationConfigIdentifierHasBeenSet; }
    template<typename ReplicationConfigIdentifierT = Aws::String>
    void SetReplicationConfigIdentifier(ReplicationConfigIdentifierT&& value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier = std::forward<ReplicationConfigIdentifierT>(value); }
    template<typename ReplicationConfigIdentifierT = Aws::String>
    Replication& WithReplicationConfigIdentifier(ReplicationConfigIdentifierT&& value) { SetReplicationConfigIdentifier(std::forward<ReplicationConfigIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name for the <code>ReplicationConfig</code> associated
     * with the replication.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const { return m_replicationConfigArn; }
    inline bool ReplicationConfigArnHasBeenSet() const { return m_replicationConfigArnHasBeenSet; }
    template<typename ReplicationConfigArnT = Aws::String>
    void SetReplicationConfigArn(ReplicationConfigArnT&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::forward<ReplicationConfigArnT>(value); }
    template<typename ReplicationConfigArnT = Aws::String>
    Replication& WithReplicationConfigArn(ReplicationConfigArnT&& value) { SetReplicationConfigArn(std::forward<ReplicationConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data source.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const { return m_sourceEndpointArn; }
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }
    template<typename SourceEndpointArnT = Aws::String>
    void SetSourceEndpointArn(SourceEndpointArnT&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::forward<SourceEndpointArnT>(value); }
    template<typename SourceEndpointArnT = Aws::String>
    Replication& WithSourceEndpointArn(SourceEndpointArnT&& value) { SetSourceEndpointArn(std::forward<SourceEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data target.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const { return m_targetEndpointArn; }
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }
    template<typename TargetEndpointArnT = Aws::String>
    void SetTargetEndpointArn(TargetEndpointArnT&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::forward<TargetEndpointArnT>(value); }
    template<typename TargetEndpointArnT = Aws::String>
    Replication& WithTargetEndpointArn(TargetEndpointArnT&& value) { SetTargetEndpointArn(std::forward<TargetEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the serverless replication.</p>
     */
    inline MigrationTypeValue GetReplicationType() const { return m_replicationType; }
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }
    inline void SetReplicationType(MigrationTypeValue value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }
    inline Replication& WithReplicationType(MigrationTypeValue value) { SetReplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the serverless replication.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Replication& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about provisioning resources for an DMS serverless
     * replication.</p>
     */
    inline const ProvisionData& GetProvisionData() const { return m_provisionData; }
    inline bool ProvisionDataHasBeenSet() const { return m_provisionDataHasBeenSet; }
    template<typename ProvisionDataT = ProvisionData>
    void SetProvisionData(ProvisionDataT&& value) { m_provisionDataHasBeenSet = true; m_provisionData = std::forward<ProvisionDataT>(value); }
    template<typename ProvisionDataT = ProvisionData>
    Replication& WithProvisionData(ProvisionDataT&& value) { SetProvisionData(std::forward<ProvisionDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status output of premigration assessment in describe-replications.</p>
     */
    inline const Aws::Vector<PremigrationAssessmentStatus>& GetPremigrationAssessmentStatuses() const { return m_premigrationAssessmentStatuses; }
    inline bool PremigrationAssessmentStatusesHasBeenSet() const { return m_premigrationAssessmentStatusesHasBeenSet; }
    template<typename PremigrationAssessmentStatusesT = Aws::Vector<PremigrationAssessmentStatus>>
    void SetPremigrationAssessmentStatuses(PremigrationAssessmentStatusesT&& value) { m_premigrationAssessmentStatusesHasBeenSet = true; m_premigrationAssessmentStatuses = std::forward<PremigrationAssessmentStatusesT>(value); }
    template<typename PremigrationAssessmentStatusesT = Aws::Vector<PremigrationAssessmentStatus>>
    Replication& WithPremigrationAssessmentStatuses(PremigrationAssessmentStatusesT&& value) { SetPremigrationAssessmentStatuses(std::forward<PremigrationAssessmentStatusesT>(value)); return *this;}
    template<typename PremigrationAssessmentStatusesT = PremigrationAssessmentStatus>
    Replication& AddPremigrationAssessmentStatuses(PremigrationAssessmentStatusesT&& value) { m_premigrationAssessmentStatusesHasBeenSet = true; m_premigrationAssessmentStatuses.emplace_back(std::forward<PremigrationAssessmentStatusesT>(value)); return *this; }
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
    inline const Aws::String& GetStopReason() const { return m_stopReason; }
    inline bool StopReasonHasBeenSet() const { return m_stopReasonHasBeenSet; }
    template<typename StopReasonT = Aws::String>
    void SetStopReason(StopReasonT&& value) { m_stopReasonHasBeenSet = true; m_stopReason = std::forward<StopReasonT>(value); }
    template<typename StopReasonT = Aws::String>
    Replication& WithStopReason(StopReasonT&& value) { SetStopReason(std::forward<StopReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error and other information about why a serverless replication failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureMessages() const { return m_failureMessages; }
    inline bool FailureMessagesHasBeenSet() const { return m_failureMessagesHasBeenSet; }
    template<typename FailureMessagesT = Aws::Vector<Aws::String>>
    void SetFailureMessages(FailureMessagesT&& value) { m_failureMessagesHasBeenSet = true; m_failureMessages = std::forward<FailureMessagesT>(value); }
    template<typename FailureMessagesT = Aws::Vector<Aws::String>>
    Replication& WithFailureMessages(FailureMessagesT&& value) { SetFailureMessages(std::forward<FailureMessagesT>(value)); return *this;}
    template<typename FailureMessagesT = Aws::String>
    Replication& AddFailureMessages(FailureMessagesT&& value) { m_failureMessagesHasBeenSet = true; m_failureMessages.emplace_back(std::forward<FailureMessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This object provides a collection of statistics about a serverless
     * replication.</p>
     */
    inline const ReplicationStats& GetReplicationStats() const { return m_replicationStats; }
    inline bool ReplicationStatsHasBeenSet() const { return m_replicationStatsHasBeenSet; }
    template<typename ReplicationStatsT = ReplicationStats>
    void SetReplicationStats(ReplicationStatsT&& value) { m_replicationStatsHasBeenSet = true; m_replicationStats = std::forward<ReplicationStatsT>(value); }
    template<typename ReplicationStatsT = ReplicationStats>
    Replication& WithReplicationStats(ReplicationStatsT&& value) { SetReplicationStats(std::forward<ReplicationStatsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of replication to start.</p>
     */
    inline const Aws::String& GetStartReplicationType() const { return m_startReplicationType; }
    inline bool StartReplicationTypeHasBeenSet() const { return m_startReplicationTypeHasBeenSet; }
    template<typename StartReplicationTypeT = Aws::String>
    void SetStartReplicationType(StartReplicationTypeT&& value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType = std::forward<StartReplicationTypeT>(value); }
    template<typename StartReplicationTypeT = Aws::String>
    Replication& WithStartReplicationType(StartReplicationTypeT&& value) { SetStartReplicationType(std::forward<StartReplicationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline const Aws::Utils::DateTime& GetCdcStartTime() const { return m_cdcStartTime; }
    inline bool CdcStartTimeHasBeenSet() const { return m_cdcStartTimeHasBeenSet; }
    template<typename CdcStartTimeT = Aws::Utils::DateTime>
    void SetCdcStartTime(CdcStartTimeT&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = std::forward<CdcStartTimeT>(value); }
    template<typename CdcStartTimeT = Aws::Utils::DateTime>
    Replication& WithCdcStartTime(CdcStartTimeT&& value) { SetCdcStartTime(std::forward<CdcStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline const Aws::String& GetCdcStartPosition() const { return m_cdcStartPosition; }
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }
    template<typename CdcStartPositionT = Aws::String>
    void SetCdcStartPosition(CdcStartPositionT&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::forward<CdcStartPositionT>(value); }
    template<typename CdcStartPositionT = Aws::String>
    Replication& WithCdcStartPosition(CdcStartPositionT&& value) { SetCdcStartPosition(std::forward<CdcStartPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline const Aws::String& GetCdcStopPosition() const { return m_cdcStopPosition; }
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }
    template<typename CdcStopPositionT = Aws::String>
    void SetCdcStopPosition(CdcStopPositionT&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::forward<CdcStopPositionT>(value); }
    template<typename CdcStopPositionT = Aws::String>
    Replication& WithCdcStopPosition(CdcStopPositionT&& value) { SetCdcStopPosition(std::forward<CdcStopPositionT>(value)); return *this;}
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
    Replication& WithRecoveryCheckpoint(RecoveryCheckpointT&& value) { SetRecoveryCheckpoint(std::forward<RecoveryCheckpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the serverless replication was created.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationCreateTime() const { return m_replicationCreateTime; }
    inline bool ReplicationCreateTimeHasBeenSet() const { return m_replicationCreateTimeHasBeenSet; }
    template<typename ReplicationCreateTimeT = Aws::Utils::DateTime>
    void SetReplicationCreateTime(ReplicationCreateTimeT&& value) { m_replicationCreateTimeHasBeenSet = true; m_replicationCreateTime = std::forward<ReplicationCreateTimeT>(value); }
    template<typename ReplicationCreateTimeT = Aws::Utils::DateTime>
    Replication& WithReplicationCreateTime(ReplicationCreateTimeT&& value) { SetReplicationCreateTime(std::forward<ReplicationCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the serverless replication was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationUpdateTime() const { return m_replicationUpdateTime; }
    inline bool ReplicationUpdateTimeHasBeenSet() const { return m_replicationUpdateTimeHasBeenSet; }
    template<typename ReplicationUpdateTimeT = Aws::Utils::DateTime>
    void SetReplicationUpdateTime(ReplicationUpdateTimeT&& value) { m_replicationUpdateTimeHasBeenSet = true; m_replicationUpdateTime = std::forward<ReplicationUpdateTimeT>(value); }
    template<typename ReplicationUpdateTimeT = Aws::Utils::DateTime>
    Replication& WithReplicationUpdateTime(ReplicationUpdateTimeT&& value) { SetReplicationUpdateTime(std::forward<ReplicationUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when replication was last stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationLastStopTime() const { return m_replicationLastStopTime; }
    inline bool ReplicationLastStopTimeHasBeenSet() const { return m_replicationLastStopTimeHasBeenSet; }
    template<typename ReplicationLastStopTimeT = Aws::Utils::DateTime>
    void SetReplicationLastStopTime(ReplicationLastStopTimeT&& value) { m_replicationLastStopTimeHasBeenSet = true; m_replicationLastStopTime = std::forward<ReplicationLastStopTimeT>(value); }
    template<typename ReplicationLastStopTimeT = Aws::Utils::DateTime>
    Replication& WithReplicationLastStopTime(ReplicationLastStopTimeT&& value) { SetReplicationLastStopTime(std::forward<ReplicationLastStopTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when DMS will deprovision the replication.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationDeprovisionTime() const { return m_replicationDeprovisionTime; }
    inline bool ReplicationDeprovisionTimeHasBeenSet() const { return m_replicationDeprovisionTimeHasBeenSet; }
    template<typename ReplicationDeprovisionTimeT = Aws::Utils::DateTime>
    void SetReplicationDeprovisionTime(ReplicationDeprovisionTimeT&& value) { m_replicationDeprovisionTimeHasBeenSet = true; m_replicationDeprovisionTime = std::forward<ReplicationDeprovisionTimeT>(value); }
    template<typename ReplicationDeprovisionTimeT = Aws::Utils::DateTime>
    Replication& WithReplicationDeprovisionTime(ReplicationDeprovisionTimeT&& value) { SetReplicationDeprovisionTime(std::forward<ReplicationDeprovisionTimeT>(value)); return *this;}
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

    MigrationTypeValue m_replicationType{MigrationTypeValue::NOT_SET};
    bool m_replicationTypeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ProvisionData m_provisionData;
    bool m_provisionDataHasBeenSet = false;

    Aws::Vector<PremigrationAssessmentStatus> m_premigrationAssessmentStatuses;
    bool m_premigrationAssessmentStatusesHasBeenSet = false;

    Aws::String m_stopReason;
    bool m_stopReasonHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureMessages;
    bool m_failureMessagesHasBeenSet = false;

    ReplicationStats m_replicationStats;
    bool m_replicationStatsHasBeenSet = false;

    Aws::String m_startReplicationType;
    bool m_startReplicationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_cdcStartTime{};
    bool m_cdcStartTimeHasBeenSet = false;

    Aws::String m_cdcStartPosition;
    bool m_cdcStartPositionHasBeenSet = false;

    Aws::String m_cdcStopPosition;
    bool m_cdcStopPositionHasBeenSet = false;

    Aws::String m_recoveryCheckpoint;
    bool m_recoveryCheckpointHasBeenSet = false;

    Aws::Utils::DateTime m_replicationCreateTime{};
    bool m_replicationCreateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replicationUpdateTime{};
    bool m_replicationUpdateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replicationLastStopTime{};
    bool m_replicationLastStopTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replicationDeprovisionTime{};
    bool m_replicationDeprovisionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
