/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CreateReplicationConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateReplicationConfigRequest::CreateReplicationConfigRequest() : 
    m_replicationConfigIdentifierHasBeenSet(false),
    m_sourceEndpointArnHasBeenSet(false),
    m_targetEndpointArnHasBeenSet(false),
    m_computeConfigHasBeenSet(false),
    m_replicationType(MigrationTypeValue::NOT_SET),
    m_replicationTypeHasBeenSet(false),
    m_tableMappingsHasBeenSet(false),
    m_replicationSettingsHasBeenSet(false),
    m_supplementalSettingsHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateReplicationConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationConfigIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationConfigIdentifier", m_replicationConfigIdentifier);

  }

  if(m_sourceEndpointArnHasBeenSet)
  {
   payload.WithString("SourceEndpointArn", m_sourceEndpointArn);

  }

  if(m_targetEndpointArnHasBeenSet)
  {
   payload.WithString("TargetEndpointArn", m_targetEndpointArn);

  }

  if(m_computeConfigHasBeenSet)
  {
   payload.WithObject("ComputeConfig", m_computeConfig.Jsonize());

  }

  if(m_replicationTypeHasBeenSet)
  {
   payload.WithString("ReplicationType", MigrationTypeValueMapper::GetNameForMigrationTypeValue(m_replicationType));
  }

  if(m_tableMappingsHasBeenSet)
  {
   payload.WithString("TableMappings", m_tableMappings);

  }

  if(m_replicationSettingsHasBeenSet)
  {
   payload.WithString("ReplicationSettings", m_replicationSettings);

  }

  if(m_supplementalSettingsHasBeenSet)
  {
   payload.WithString("SupplementalSettings", m_supplementalSettings);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("ResourceIdentifier", m_resourceIdentifier);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateReplicationConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.CreateReplicationConfig"));
  return headers;

}




