/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/UpdatePermissionGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePermissionGroupRequest::UpdatePermissionGroupRequest() : 
    m_permissionGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_applicationPermissionsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdatePermissionGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_applicationPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationPermissionsJsonList(m_applicationPermissions.size());
   for(unsigned applicationPermissionsIndex = 0; applicationPermissionsIndex < applicationPermissionsJsonList.GetLength(); ++applicationPermissionsIndex)
   {
     applicationPermissionsJsonList[applicationPermissionsIndex].AsString(ApplicationPermissionMapper::GetNameForApplicationPermission(m_applicationPermissions[applicationPermissionsIndex]));
   }
   payload.WithArray("applicationPermissions", std::move(applicationPermissionsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




