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
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_auditContextHasBeenSet(false),
    m_supportedPermissionTypesHasBeenSet(false)
{
}

Aws::String GetUnfilteredTableMetadataRequest::SerializePayload() const
{
  JsonValue payload;

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetUnfilteredTableMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetUnfilteredTableMetadata"));
  return headers;

}




