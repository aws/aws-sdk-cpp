/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserRequest::CreateUserRequest() : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_identityInfoHasBeenSet(false),
    m_phoneConfigHasBeenSet(false),
    m_directoryUserIdHasBeenSet(false),
    m_securityProfileIdsHasBeenSet(false),
    m_routingProfileIdHasBeenSet(false),
    m_hierarchyGroupIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_identityInfoHasBeenSet)
  {
   payload.WithObject("IdentityInfo", m_identityInfo.Jsonize());

  }

  if(m_phoneConfigHasBeenSet)
  {
   payload.WithObject("PhoneConfig", m_phoneConfig.Jsonize());

  }

  if(m_directoryUserIdHasBeenSet)
  {
   payload.WithString("DirectoryUserId", m_directoryUserId);

  }

  if(m_securityProfileIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityProfileIdsJsonList(m_securityProfileIds.size());
   for(unsigned securityProfileIdsIndex = 0; securityProfileIdsIndex < securityProfileIdsJsonList.GetLength(); ++securityProfileIdsIndex)
   {
     securityProfileIdsJsonList[securityProfileIdsIndex].AsString(m_securityProfileIds[securityProfileIdsIndex]);
   }
   payload.WithArray("SecurityProfileIds", std::move(securityProfileIdsJsonList));

  }

  if(m_routingProfileIdHasBeenSet)
  {
   payload.WithString("RoutingProfileId", m_routingProfileId);

  }

  if(m_hierarchyGroupIdHasBeenSet)
  {
   payload.WithString("HierarchyGroupId", m_hierarchyGroupId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




