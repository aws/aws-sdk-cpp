﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/User.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

User::User() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_identityInfoHasBeenSet(false),
    m_phoneConfigHasBeenSet(false),
    m_directoryUserIdHasBeenSet(false),
    m_securityProfileIdsHasBeenSet(false),
    m_routingProfileIdHasBeenSet(false),
    m_hierarchyGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

User::User(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_identityInfoHasBeenSet(false),
    m_phoneConfigHasBeenSet(false),
    m_directoryUserIdHasBeenSet(false),
    m_securityProfileIdsHasBeenSet(false),
    m_routingProfileIdHasBeenSet(false),
    m_hierarchyGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

User& User::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityInfo"))
  {
    m_identityInfo = jsonValue.GetObject("IdentityInfo");

    m_identityInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneConfig"))
  {
    m_phoneConfig = jsonValue.GetObject("PhoneConfig");

    m_phoneConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryUserId"))
  {
    m_directoryUserId = jsonValue.GetString("DirectoryUserId");

    m_directoryUserIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityProfileIds"))
  {
    Array<JsonView> securityProfileIdsJsonList = jsonValue.GetArray("SecurityProfileIds");
    for(unsigned securityProfileIdsIndex = 0; securityProfileIdsIndex < securityProfileIdsJsonList.GetLength(); ++securityProfileIdsIndex)
    {
      m_securityProfileIds.push_back(securityProfileIdsJsonList[securityProfileIdsIndex].AsString());
    }
    m_securityProfileIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingProfileId"))
  {
    m_routingProfileId = jsonValue.GetString("RoutingProfileId");

    m_routingProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HierarchyGroupId"))
  {
    m_hierarchyGroupId = jsonValue.GetString("HierarchyGroupId");

    m_hierarchyGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue User::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

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
   Array<JsonValue> securityProfileIdsJsonList(m_securityProfileIds.size());
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

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
