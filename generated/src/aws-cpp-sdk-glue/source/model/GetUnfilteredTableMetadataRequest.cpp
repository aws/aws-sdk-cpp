/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetUnfilteredTableMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetUnfilteredTableMetadataRequest::GetUnfilteredTableMetadataRequest() : 
    m_regionHasBeenSet(false),
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_auditContextHasBeenSet(false),
    m_supportedPermissionTypesHasBeenSet(false),
    m_supportedDialectHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_querySessionContextHasBeenSet(false)
{
}

Aws::String GetUnfilteredTableMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_auditContextHasBeenSet)
  {
   payload.WithObject("AuditContext", m_auditContext.Jsonize());

  }

  if(m_supportedPermissionTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedPermissionTypesJsonList(m_supportedPermissionTypes.size());
   for(unsigned supportedPermissionTypesIndex = 0; supportedPermissionTypesIndex < supportedPermissionTypesJsonList.GetLength(); ++supportedPermissionTypesIndex)
   {
     supportedPermissionTypesJsonList[supportedPermissionTypesIndex].AsString(PermissionTypeMapper::GetNameForPermissionType(m_supportedPermissionTypes[supportedPermissionTypesIndex]));
   }
   payload.WithArray("SupportedPermissionTypes", std::move(supportedPermissionTypesJsonList));

  }

  if(m_supportedDialectHasBeenSet)
  {
   payload.WithObject("SupportedDialect", m_supportedDialect.Jsonize());

  }

  if(m_permissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsString(PermissionMapper::GetNameForPermission(m_permissions[permissionsIndex]));
   }
   payload.WithArray("Permissions", std::move(permissionsJsonList));

  }

  if(m_querySessionContextHasBeenSet)
  {
   payload.WithObject("QuerySessionContext", m_querySessionContext.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetUnfilteredTableMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetUnfilteredTableMetadata"));
  return headers;

}




