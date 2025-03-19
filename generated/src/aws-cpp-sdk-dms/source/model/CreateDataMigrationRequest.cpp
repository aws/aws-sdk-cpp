/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CreateDataMigrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataMigrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataMigrationNameHasBeenSet)
  {
   payload.WithString("DataMigrationName", m_dataMigrationName);

  }

  if(m_migrationProjectIdentifierHasBeenSet)
  {
   payload.WithString("MigrationProjectIdentifier", m_migrationProjectIdentifier);

  }

  if(m_dataMigrationTypeHasBeenSet)
  {
   payload.WithString("DataMigrationType", MigrationTypeValueMapper::GetNameForMigrationTypeValue(m_dataMigrationType));
  }

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_enableCloudwatchLogsHasBeenSet)
  {
   payload.WithBool("EnableCloudwatchLogs", m_enableCloudwatchLogs);

  }

  if(m_sourceDataSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceDataSettingsJsonList(m_sourceDataSettings.size());
   for(unsigned sourceDataSettingsIndex = 0; sourceDataSettingsIndex < sourceDataSettingsJsonList.GetLength(); ++sourceDataSettingsIndex)
   {
     sourceDataSettingsJsonList[sourceDataSettingsIndex].AsObject(m_sourceDataSettings[sourceDataSettingsIndex].Jsonize());
   }
   payload.WithArray("SourceDataSettings", std::move(sourceDataSettingsJsonList));

  }

  if(m_targetDataSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetDataSettingsJsonList(m_targetDataSettings.size());
   for(unsigned targetDataSettingsIndex = 0; targetDataSettingsIndex < targetDataSettingsJsonList.GetLength(); ++targetDataSettingsIndex)
   {
     targetDataSettingsJsonList[targetDataSettingsIndex].AsObject(m_targetDataSettings[targetDataSettingsIndex].Jsonize());
   }
   payload.WithArray("TargetDataSettings", std::move(targetDataSettingsJsonList));

  }

  if(m_numberOfJobsHasBeenSet)
  {
   payload.WithInteger("NumberOfJobs", m_numberOfJobs);

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

  if(m_selectionRulesHasBeenSet)
  {
   payload.WithString("SelectionRules", m_selectionRules);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDataMigrationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.CreateDataMigration"));
  return headers;

}




