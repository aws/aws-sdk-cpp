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

#include <aws/lakeformation/model/GrantPermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GrantPermissionsRequest::GrantPermissionsRequest() : 
    m_catalogIdHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_permissionsWithGrantOptionHasBeenSet(false)
{
}

Aws::String GrantPermissionsRequest::SerializePayload() const
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
   Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsString(PermissionMapper::GetNameForPermission(m_permissions[permissionsIndex]));
   }
   payload.WithArray("Permissions", std::move(permissionsJsonList));

  }

  if(m_permissionsWithGrantOptionHasBeenSet)
  {
   Array<JsonValue> permissionsWithGrantOptionJsonList(m_permissionsWithGrantOption.size());
   for(unsigned permissionsWithGrantOptionIndex = 0; permissionsWithGrantOptionIndex < permissionsWithGrantOptionJsonList.GetLength(); ++permissionsWithGrantOptionIndex)
   {
     permissionsWithGrantOptionJsonList[permissionsWithGrantOptionIndex].AsString(PermissionMapper::GetNameForPermission(m_permissionsWithGrantOption[permissionsWithGrantOptionIndex]));
   }
   payload.WithArray("PermissionsWithGrantOption", std::move(permissionsWithGrantOptionJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GrantPermissionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLakeFormation.GrantPermissions"));
  return headers;

}




