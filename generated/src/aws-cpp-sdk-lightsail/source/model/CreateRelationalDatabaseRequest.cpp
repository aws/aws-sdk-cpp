/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateRelationalDatabaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRelationalDatabaseRequest::CreateRelationalDatabaseRequest() : 
    m_relationalDatabaseNameHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_relationalDatabaseBlueprintIdHasBeenSet(false),
    m_relationalDatabaseBundleIdHasBeenSet(false),
    m_masterDatabaseNameHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateRelationalDatabaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_relationalDatabaseNameHasBeenSet)
  {
   payload.WithString("relationalDatabaseName", m_relationalDatabaseName);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_relationalDatabaseBlueprintIdHasBeenSet)
  {
   payload.WithString("relationalDatabaseBlueprintId", m_relationalDatabaseBlueprintId);

  }

  if(m_relationalDatabaseBundleIdHasBeenSet)
  {
   payload.WithString("relationalDatabaseBundleId", m_relationalDatabaseBundleId);

  }

  if(m_masterDatabaseNameHasBeenSet)
  {
   payload.WithString("masterDatabaseName", m_masterDatabaseName);

  }

  if(m_masterUsernameHasBeenSet)
  {
   payload.WithString("masterUsername", m_masterUsername);

  }

  if(m_masterUserPasswordHasBeenSet)
  {
   payload.WithString("masterUserPassword", m_masterUserPassword);

  }

  if(m_preferredBackupWindowHasBeenSet)
  {
   payload.WithString("preferredBackupWindow", m_preferredBackupWindow);

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("preferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRelationalDatabaseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateRelationalDatabase"));
  return headers;

}




