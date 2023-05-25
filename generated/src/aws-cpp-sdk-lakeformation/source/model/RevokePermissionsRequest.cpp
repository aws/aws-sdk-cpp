/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/RevokePermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RevokePermissionsRequest::RevokePermissionsRequest() : 
    m_catalogIdHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_permissionsWithGrantOptionHasBeenSet(false)
{
}

Aws::String RevokePermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithObject("Principal", m_principal.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("Resource", m_resource.Jsonize());

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

  if(m_permissionsWithGrantOptionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsWithGrantOptionJsonList(m_permissionsWithGrantOption.size());
   for(unsigned permissionsWithGrantOptionIndex = 0; permissionsWithGrantOptionIndex < permissionsWithGrantOptionJsonList.GetLength(); ++permissionsWithGrantOptionIndex)
   {
     permissionsWithGrantOptionJsonList[permissionsWithGrantOptionIndex].AsString(PermissionMapper::GetNameForPermission(m_permissionsWithGrantOption[permissionsWithGrantOptionIndex]));
   }
   payload.WithArray("PermissionsWithGrantOption", std::move(permissionsWithGrantOptionJsonList));

  }

  return payload.View().WriteReadable();
}




