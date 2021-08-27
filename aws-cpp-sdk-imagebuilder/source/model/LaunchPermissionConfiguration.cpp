/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LaunchPermissionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LaunchPermissionConfiguration::LaunchPermissionConfiguration() : 
    m_userIdsHasBeenSet(false),
    m_userGroupsHasBeenSet(false)
{
}

LaunchPermissionConfiguration::LaunchPermissionConfiguration(JsonView jsonValue) : 
    m_userIdsHasBeenSet(false),
    m_userGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchPermissionConfiguration& LaunchPermissionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userIds"))
  {
    Array<JsonView> userIdsJsonList = jsonValue.GetArray("userIds");
    for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
    {
      m_userIds.push_back(userIdsJsonList[userIdsIndex].AsString());
    }
    m_userIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userGroups"))
  {
    Array<JsonView> userGroupsJsonList = jsonValue.GetArray("userGroups");
    for(unsigned userGroupsIndex = 0; userGroupsIndex < userGroupsJsonList.GetLength(); ++userGroupsIndex)
    {
      m_userGroups.push_back(userGroupsJsonList[userGroupsIndex].AsString());
    }
    m_userGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchPermissionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_userIdsHasBeenSet)
  {
   Array<JsonValue> userIdsJsonList(m_userIds.size());
   for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
   {
     userIdsJsonList[userIdsIndex].AsString(m_userIds[userIdsIndex]);
   }
   payload.WithArray("userIds", std::move(userIdsJsonList));

  }

  if(m_userGroupsHasBeenSet)
  {
   Array<JsonValue> userGroupsJsonList(m_userGroups.size());
   for(unsigned userGroupsIndex = 0; userGroupsIndex < userGroupsJsonList.GetLength(); ++userGroupsIndex)
   {
     userGroupsJsonList[userGroupsIndex].AsString(m_userGroups[userGroupsIndex]);
   }
   payload.WithArray("userGroups", std::move(userGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
