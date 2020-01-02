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

#include <aws/lightsail/model/UpdateRelationalDatabaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRelationalDatabaseRequest::UpdateRelationalDatabaseRequest() : 
    m_relationalDatabaseNameHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_rotateMasterUserPassword(false),
    m_rotateMasterUserPasswordHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_enableBackupRetention(false),
    m_enableBackupRetentionHasBeenSet(false),
    m_disableBackupRetention(false),
    m_disableBackupRetentionHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false),
    m_caCertificateIdentifierHasBeenSet(false)
{
}

Aws::String UpdateRelationalDatabaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_relationalDatabaseNameHasBeenSet)
  {
   payload.WithString("relationalDatabaseName", m_relationalDatabaseName);

  }

  if(m_masterUserPasswordHasBeenSet)
  {
   payload.WithString("masterUserPassword", m_masterUserPassword);

  }

  if(m_rotateMasterUserPasswordHasBeenSet)
  {
   payload.WithBool("rotateMasterUserPassword", m_rotateMasterUserPassword);

  }

  if(m_preferredBackupWindowHasBeenSet)
  {
   payload.WithString("preferredBackupWindow", m_preferredBackupWindow);

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("preferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_enableBackupRetentionHasBeenSet)
  {
   payload.WithBool("enableBackupRetention", m_enableBackupRetention);

  }

  if(m_disableBackupRetentionHasBeenSet)
  {
   payload.WithBool("disableBackupRetention", m_disableBackupRetention);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_applyImmediatelyHasBeenSet)
  {
   payload.WithBool("applyImmediately", m_applyImmediately);

  }

  if(m_caCertificateIdentifierHasBeenSet)
  {
   payload.WithString("caCertificateIdentifier", m_caCertificateIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRelationalDatabaseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.UpdateRelationalDatabase"));
  return headers;

}




