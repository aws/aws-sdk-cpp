/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetTemporaryGluePartitionCredentialsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTemporaryGluePartitionCredentialsRequest::GetTemporaryGluePartitionCredentialsRequest() : 
    m_tableArnHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_auditContextHasBeenSet(false),
    m_supportedPermissionTypesHasBeenSet(false)
{
}

Aws::String GetTemporaryGluePartitionCredentialsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableArnHasBeenSet)
  {
   payload.WithString("TableArn", m_tableArn);

  }

  if(m_partitionHasBeenSet)
  {
   payload.WithObject("Partition", m_partition.Jsonize());

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

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithInteger("DurationSeconds", m_durationSeconds);

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




