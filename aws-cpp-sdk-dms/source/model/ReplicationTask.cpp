/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_replicationTaskCreationDateHasBeenSet(false),
    m_replicationTaskStartDateHasBeenSet(false),
    m_replicationTaskArnHasBeenSet(false),
    m_replicationTaskStatsHasBeenSet(false)
{
}

ReplicationTask::ReplicationTask(const JsonValue& jsonValue) : 
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
    m_replicationTaskCreationDateHasBeenSet(false),
    m_replicationTaskStartDateHasBeenSet(false),
    m_replicationTaskArnHasBeenSet(false),
    m_replicationTaskStatsHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationTask& ReplicationTask::operator =(const JsonValue& jsonValue)
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

  if(m_replicationTaskCreationDateHasBeenSet)
  {
   payload.WithDouble("ReplicationTaskCreationDate", m_replicationTaskCreationDate.SecondsWithMSPrecision());
  }

  if(m_replicationTaskStartDateHasBeenSet)
  {
   payload.WithDouble("ReplicationTaskStartDate", m_replicationTaskStartDate.SecondsWithMSPrecision());
  }

  if(m_replicationTaskArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskArn", m_replicationTaskArn);

  }

  if(m_replicationTaskStatsHasBeenSet)
  {
   payload.WithObject("ReplicationTaskStats", m_replicationTaskStats.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws