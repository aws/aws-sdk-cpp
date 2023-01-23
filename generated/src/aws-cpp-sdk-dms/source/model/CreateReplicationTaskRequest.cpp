/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CreateReplicationTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateReplicationTaskRequest::CreateReplicationTaskRequest() : 
    m_replicationTaskIdentifierHasBeenSet(false),
    m_sourceEndpointArnHasBeenSet(false),
    m_targetEndpointArnHasBeenSet(false),
    m_replicationInstanceArnHasBeenSet(false),
    m_migrationType(MigrationTypeValue::NOT_SET),
    m_migrationTypeHasBeenSet(false),
    m_tableMappingsHasBeenSet(false),
    m_replicationTaskSettingsHasBeenSet(false),
    m_cdcStartTimeHasBeenSet(false),
    m_cdcStartPositionHasBeenSet(false),
    m_cdcStopPositionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskDataHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false)
{
}

Aws::String CreateReplicationTaskRequest::SerializePayload() const
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_taskDataHasBeenSet)
  {
   payload.WithString("TaskData", m_taskData);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("ResourceIdentifier", m_resourceIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateReplicationTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.CreateReplicationTask"));
  return headers;

}




