/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReplicationTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ReplicationTask::ReplicationTask() : 
    m_replicationTaskIdentifierHasBeenSet(false),
    m_sourceEndpointArnHasBeenSet(false),
    m_targetEndpointArnHasBeenSet(false),
    m_replicationInstanceArnHasBeenSet(false),
    m_migrationType(MigrationTypeValue::NOT_SET),
    m_migrationTypeHasBeenSet(false),
    m_tableMappingsHasBeenSet(false),
    m_replicationTaskSettingsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastFailureMessageHasBeenSet(false),
    m_stopReasonHasBeenSet(false),
    m_replicationTaskCreationDateHasBeenSet(false),
    m_replicationTaskStartDateHasBeenSet(false),
    m_cdcStartPositionHasBeenSet(false),
    m_cdcStopPositionHasBeenSet(false),
    m_recoveryCheckpointHasBeenSet(false),
    m_replicationTaskArnHasBeenSet(false),
    m_replicationTaskStatsHasBeenSet(false),
    m_taskDataHasBeenSet(false),
    m_targetReplicationInstanceArnHasBeenSet(false)
{
}

ReplicationTask::ReplicationTask(JsonView jsonValue) : 
    m_replicationTaskIdentifierHasBeenSet(false),
    m_sourceEndpointArnHasBeenSet(false),
    m_targetEndpointArnHasBeenSet(false),
    m_replicationInstanceArnHasBeenSet(false),
    m_migrationType(MigrationTypeValue::NOT_SET),
    m_migrationTypeHasBeenSet(false),
    m_tableMappingsHasBeenSet(false),
    m_replicationTaskSettingsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastFailureMessageHasBeenSet(false),
    m_stopReasonHasBeenSet(false),
    m_replicationTaskCreationDateHasBeenSet(false),
    m_replicationTaskStartDateHasBeenSet(false),
    m_cdcStartPositionHasBeenSet(false),
    m_cdcStopPositionHasBeenSet(false),
    m_recoveryCheckpointHasBeenSet(false),
    m_replicationTaskArnHasBeenSet(false),
    m_replicationTaskStatsHasBeenSet(false),
    m_taskDataHasBeenSet(false),
    m_targetReplicationInstanceArnHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationTask& ReplicationTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationTaskIdentifier"))
  {
    m_replicationTaskIdentifier = jsonValue.GetString("ReplicationTaskIdentifier");

    m_replicationTaskIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceEndpointArn"))
  {
    m_sourceEndpointArn = jsonValue.GetString("SourceEndpointArn");

    m_sourceEndpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetEndpointArn"))
  {
    m_targetEndpointArn = jsonValue.GetString("TargetEndpointArn");

    m_targetEndpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceArn"))
  {
    m_replicationInstanceArn = jsonValue.GetString("ReplicationInstanceArn");

    m_replicationInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MigrationType"))
  {
    m_migrationType = MigrationTypeValueMapper::GetMigrationTypeValueForName(jsonValue.GetString("MigrationType"));

    m_migrationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableMappings"))
  {
    m_tableMappings = jsonValue.GetString("TableMappings");

    m_tableMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskSettings"))
  {
    m_replicationTaskSettings = jsonValue.GetString("ReplicationTaskSettings");

    m_replicationTaskSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastFailureMessage"))
  {
    m_lastFailureMessage = jsonValue.GetString("LastFailureMessage");

    m_lastFailureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StopReason"))
  {
    m_stopReason = jsonValue.GetString("StopReason");

    m_stopReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskCreationDate"))
  {
    m_replicationTaskCreationDate = jsonValue.GetDouble("ReplicationTaskCreationDate");

    m_replicationTaskCreationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskStartDate"))
  {
    m_replicationTaskStartDate = jsonValue.GetDouble("ReplicationTaskStartDate");

    m_replicationTaskStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdcStartPosition"))
  {
    m_cdcStartPosition = jsonValue.GetString("CdcStartPosition");

    m_cdcStartPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdcStopPosition"))
  {
    m_cdcStopPosition = jsonValue.GetString("CdcStopPosition");

    m_cdcStopPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecoveryCheckpoint"))
  {
    m_recoveryCheckpoint = jsonValue.GetString("RecoveryCheckpoint");

    m_recoveryCheckpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskArn"))
  {
    m_replicationTaskArn = jsonValue.GetString("ReplicationTaskArn");

    m_replicationTaskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskStats"))
  {
    m_replicationTaskStats = jsonValue.GetObject("ReplicationTaskStats");

    m_replicationTaskStatsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskData"))
  {
    m_taskData = jsonValue.GetString("TaskData");

    m_taskDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetReplicationInstanceArn"))
  {
    m_targetReplicationInstanceArn = jsonValue.GetString("TargetReplicationInstanceArn");

    m_targetReplicationInstanceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationTask::Jsonize() const
{
  JsonValue payload;

  if(m_replicationTaskIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationTaskIdentifier", m_replicationTaskIdentifier);

  }

  if(m_sourceEndpointArnHasBeenSet)
  {
   payload.WithString("SourceEndpointArn", m_sourceEndpointArn);

  }

  if(m_targetEndpointArnHasBeenSet)
  {
   payload.WithString("TargetEndpointArn", m_targetEndpointArn);

  }

  if(m_replicationInstanceArnHasBeenSet)
  {
   payload.WithString("ReplicationInstanceArn", m_replicationInstanceArn);

  }

  if(m_migrationTypeHasBeenSet)
  {
   payload.WithString("MigrationType", MigrationTypeValueMapper::GetNameForMigrationTypeValue(m_migrationType));
  }

  if(m_tableMappingsHasBeenSet)
  {
   payload.WithString("TableMappings", m_tableMappings);

  }

  if(m_replicationTaskSettingsHasBeenSet)
  {
   payload.WithString("ReplicationTaskSettings", m_replicationTaskSettings);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_lastFailureMessageHasBeenSet)
  {
   payload.WithString("LastFailureMessage", m_lastFailureMessage);

  }

  if(m_stopReasonHasBeenSet)
  {
   payload.WithString("StopReason", m_stopReason);

  }

  if(m_replicationTaskCreationDateHasBeenSet)
  {
   payload.WithDouble("ReplicationTaskCreationDate", m_replicationTaskCreationDate.SecondsWithMSPrecision());
  }

  if(m_replicationTaskStartDateHasBeenSet)
  {
   payload.WithDouble("ReplicationTaskStartDate", m_replicationTaskStartDate.SecondsWithMSPrecision());
  }

  if(m_cdcStartPositionHasBeenSet)
  {
   payload.WithString("CdcStartPosition", m_cdcStartPosition);

  }

  if(m_cdcStopPositionHasBeenSet)
  {
   payload.WithString("CdcStopPosition", m_cdcStopPosition);

  }

  if(m_recoveryCheckpointHasBeenSet)
  {
   payload.WithString("RecoveryCheckpoint", m_recoveryCheckpoint);

  }

  if(m_replicationTaskArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskArn", m_replicationTaskArn);

  }

  if(m_replicationTaskStatsHasBeenSet)
  {
   payload.WithObject("ReplicationTaskStats", m_replicationTaskStats.Jsonize());

  }

  if(m_taskDataHasBeenSet)
  {
   payload.WithString("TaskData", m_taskData);

  }

  if(m_targetReplicationInstanceArnHasBeenSet)
  {
   payload.WithString("TargetReplicationInstanceArn", m_targetReplicationInstanceArn);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
