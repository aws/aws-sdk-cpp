/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_publiclyAccessibleHasBeenSet(false)
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRelationalDatabaseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateRelationalDatabase"));
  return headers;

}




