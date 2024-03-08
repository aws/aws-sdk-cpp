/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/Replication.h>
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

Replication::Replication() : 
    m_replicationConfigIdentifierHasBeenSet(false),
    m_replicationConfigArnHasBeenSet(false),
    m_sourceEndpointArnHasBeenSet(false),
    m_targetEndpointArnHasBeenSet(false),
    m_replicationType(MigrationTypeValue::NOT_SET),
    m_replicationTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_provisionDataHasBeenSet(false),
    m_stopReasonHasBeenSet(false),
    m_failureMessagesHasBeenSet(false),
    m_replicationStatsHasBeenSet(false),
    m_startReplicationTypeHasBeenSet(false),
    m_cdcStartTimeHasBeenSet(false),
    m_cdcStartPositionHasBeenSet(false),
    m_cdcStopPositionHasBeenSet(false),
    m_recoveryCheckpointHasBeenSet(false),
    m_replicationCreateTimeHasBeenSet(false),
    m_replicationUpdateTimeHasBeenSet(false),
    m_replicationLastStopTimeHasBeenSet(false),
    m_replicationDeprovisionTimeHasBeenSet(false)
{
}

Replication::Replication(JsonView jsonValue) : 
    m_replicationConfigIdentifierHasBeenSet(false),
    m_replicationConfigArnHasBeenSet(false),
    m_sourceEndpointArnHasBeenSet(false),
    m_targetEndpointArnHasBeenSet(false),
    m_replicationType(MigrationTypeValue::NOT_SET),
    m_replicationTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_provisionDataHasBeenSet(false),
    m_stopReasonHasBeenSet(false),
    m_failureMessagesHasBeenSet(false),
    m_replicationStatsHasBeenSet(false),
    m_startReplicationTypeHasBeenSet(false),
    m_cdcStartTimeHasBeenSet(false),
    m_cdcStartPositionHasBeenSet(false),
    m_cdcStopPositionHasBeenSet(false),
    m_recoveryCheckpointHasBeenSet(false),
    m_replicationCreateTimeHasBeenSet(false),
    m_replicationUpdateTimeHasBeenSet(false),
    m_replicationLastStopTimeHasBeenSet(false),
    m_replicationDeprovisionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Replication& Replication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationConfigIdentifier"))
  {
    m_replicationConfigIdentifier = jsonValue.GetString("ReplicationConfigIdentifier");

    m_replicationConfigIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationConfigArn"))
  {
    m_replicationConfigArn = jsonValue.GetString("ReplicationConfigArn");

    m_replicationConfigArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("ReplicationType"))
  {
    m_replicationType = MigrationTypeValueMapper::GetMigrationTypeValueForName(jsonValue.GetString("ReplicationType"));

    m_replicationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionData"))
  {
    m_provisionData = jsonValue.GetObject("ProvisionData");

    m_provisionDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StopReason"))
  {
    m_stopReason = jsonValue.GetString("StopReason");

    m_stopReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureMessages"))
  {
    Aws::Utils::Array<JsonView> failureMessagesJsonList = jsonValue.GetArray("FailureMessages");
    for(unsigned failureMessagesIndex = 0; failureMessagesIndex < failureMessagesJsonList.GetLength(); ++failureMessagesIndex)
    {
      m_failureMessages.push_back(failureMessagesJsonList[failureMessagesIndex].AsString());
    }
    m_failureMessagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationStats"))
  {
    m_replicationStats = jsonValue.GetObject("ReplicationStats");

    m_replicationStatsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartReplicationType"))
  {
    m_startReplicationType = jsonValue.GetString("StartReplicationType");

    m_startReplicationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdcStartTime"))
  {
    m_cdcStartTime = jsonValue.GetDouble("CdcStartTime");

    m_cdcStartTimeHasBeenSet = true;
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

  if(jsonValue.ValueExists("ReplicationCreateTime"))
  {
    m_replicationCreateTime = jsonValue.GetDouble("ReplicationCreateTime");

    m_replicationCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationUpdateTime"))
  {
    m_replicationUpdateTime = jsonValue.GetDouble("ReplicationUpdateTime");

    m_replicationUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationLastStopTime"))
  {
    m_replicationLastStopTime = jsonValue.GetDouble("ReplicationLastStopTime");

    m_replicationLastStopTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationDeprovisionTime"))
  {
    m_replicationDeprovisionTime = jsonValue.GetDouble("ReplicationDeprovisionTime");

    m_replicationDeprovisionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Replication::Jsonize() const
{
  JsonValue payload;

  if(m_replicationConfigIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationConfigIdentifier", m_replicationConfigIdentifier);

  }

  if(m_replicationConfigArnHasBeenSet)
  {
   payload.WithString("ReplicationConfigArn", m_replicationConfigArn);

  }

  if(m_sourceEndpointArnHasBeenSet)
  {
   payload.WithString("SourceEndpointArn", m_sourceEndpointArn);

  }

  if(m_targetEndpointArnHasBeenSet)
  {
   payload.WithString("TargetEndpointArn", m_targetEndpointArn);

  }

  if(m_replicationTypeHasBeenSet)
  {
   payload.WithString("ReplicationType", MigrationTypeValueMapper::GetNameForMigrationTypeValue(m_replicationType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_provisionDataHasBeenSet)
  {
   payload.WithObject("ProvisionData", m_provisionData.Jsonize());

  }

  if(m_stopReasonHasBeenSet)
  {
   payload.WithString("StopReason", m_stopReason);

  }

  if(m_failureMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failureMessagesJsonList(m_failureMessages.size());
   for(unsigned failureMessagesIndex = 0; failureMessagesIndex < failureMessagesJsonList.GetLength(); ++failureMessagesIndex)
   {
     failureMessagesJsonList[failureMessagesIndex].AsString(m_failureMessages[failureMessagesIndex]);
   }
   payload.WithArray("FailureMessages", std::move(failureMessagesJsonList));

  }

  if(m_replicationStatsHasBeenSet)
  {
   payload.WithObject("ReplicationStats", m_replicationStats.Jsonize());

  }

  if(m_startReplicationTypeHasBeenSet)
  {
   payload.WithString("StartReplicationType", m_startReplicationType);

  }

  if(m_cdcStartTimeHasBeenSet)
  {
   payload.WithDouble("CdcStartTime", m_cdcStartTime.SecondsWithMSPrecision());
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

  if(m_replicationCreateTimeHasBeenSet)
  {
   payload.WithDouble("ReplicationCreateTime", m_replicationCreateTime.SecondsWithMSPrecision());
  }

  if(m_replicationUpdateTimeHasBeenSet)
  {
   payload.WithDouble("ReplicationUpdateTime", m_replicationUpdateTime.SecondsWithMSPrecision());
  }

  if(m_replicationLastStopTimeHasBeenSet)
  {
   payload.WithDouble("ReplicationLastStopTime", m_replicationLastStopTime.SecondsWithMSPrecision());
  }

  if(m_replicationDeprovisionTimeHasBeenSet)
  {
   payload.WithDouble("ReplicationDeprovisionTime", m_replicationDeprovisionTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
