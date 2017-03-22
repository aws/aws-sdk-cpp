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
#include <aws/opsworkscm/model/UpdateServerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServerRequest::UpdateServerRequest() : 
    m_disableAutomatedBackup(false),
    m_disableAutomatedBackupHasBeenSet(false),
    m_backupRetentionCount(0),
    m_backupRetentionCountHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false)
{
}

Aws::String UpdateServerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_disableAutomatedBackupHasBeenSet)
  {
   payload.WithBool("DisableAutomatedBackup", m_disableAutomatedBackup);

  }

  if(m_backupRetentionCountHasBeenSet)
  {
   payload.WithInteger("BackupRetentionCount", m_backupRetentionCount);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_preferredBackupWindowHasBeenSet)
  {
   payload.WithString("PreferredBackupWindow", m_preferredBackupWindow);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorksCM_V2016_11_01.UpdateServer"));
  return headers;

}




