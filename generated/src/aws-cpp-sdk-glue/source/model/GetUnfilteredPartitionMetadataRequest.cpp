﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetUnfilteredPartitionMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetUnfilteredPartitionMetadataRequest::SerializePayload() const
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

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_partitionValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionValuesJsonList(m_partitionValues.size());
   for(unsigned partitionValuesIndex = 0; partitionValuesIndex < partitionValuesJsonList.GetLength(); ++partitionValuesIndex)
   {
     partitionValuesJsonList[partitionValuesIndex].AsString(m_partitionValues[partitionValuesIndex]);
   }
   payload.WithArray("PartitionValues", std::move(partitionValuesJsonList));

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

  if(m_querySessionContextHasBeenSet)
  {
   payload.WithObject("QuerySessionContext", m_querySessionContext.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetUnfilteredPartitionMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetUnfilteredPartitionMetadata"));
  return headers;

}




