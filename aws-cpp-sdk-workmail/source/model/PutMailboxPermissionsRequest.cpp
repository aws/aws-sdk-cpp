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

#include <aws/workmail/model/PutMailboxPermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutMailboxPermissionsRequest::PutMailboxPermissionsRequest() : 
    m_organizationIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_granteeIdHasBeenSet(false),
    m_permissionValuesHasBeenSet(false)
{
}

Aws::String PutMailboxPermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  if(m_granteeIdHasBeenSet)
  {
   payload.WithString("GranteeId", m_granteeId);

  }

  if(m_permissionValuesHasBeenSet)
  {
   Array<JsonValue> permissionValuesJsonList(m_permissionValues.size());
   for(unsigned permissionValuesIndex = 0; permissionValuesIndex < permissionValuesJsonList.GetLength(); ++permissionValuesIndex)
   {
     permissionValuesJsonList[permissionValuesIndex].AsString(PermissionTypeMapper::GetNameForPermissionType(m_permissionValues[permissionValuesIndex]));
   }
   payload.WithArray("PermissionValues", std::move(permissionValuesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PutMailboxPermissionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.PutMailboxPermissions"));
  return headers;

}




