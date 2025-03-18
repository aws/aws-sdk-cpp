﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/UpdateRelationalDatabaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

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

  if(m_relationalDatabaseBlueprintIdHasBeenSet)
  {
   payload.WithString("relationalDatabaseBlueprintId", m_relationalDatabaseBlueprintId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRelationalDatabaseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.UpdateRelationalDatabase"));
  return headers;

}




