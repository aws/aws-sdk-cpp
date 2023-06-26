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
    m_userGroupsHasBeenSet(false),
    m_organizationArnsHasBeenSet(false),
    m_organizationalUnitArnsHasBeenSet(false)
{
}

LaunchPermissionConfiguration::LaunchPermissionConfiguration(JsonView jsonValue) : 
    m_userIdsHasBeenSet(false),
    m_userGroupsHasBeenSet(false),
    m_organizationArnsHasBeenSet(false),
    m_organizationalUnitArnsHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchPermissionConfiguration& LaunchPermissionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userIds"))
  {
    Aws::Utils::Array<JsonView> userIdsJsonList = jsonValue.GetArray("userIds");
    for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
    {
      m_userIds.push_back(userIdsJsonList[userIdsIndex].AsString());
    }
    m_userIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userGroups"))
  {
    Aws::Utils::Array<JsonView> userGroupsJsonList = jsonValue.GetArray("userGroups");
    for(unsigned userGroupsIndex = 0; userGroupsIndex < userGroupsJsonList.GetLength(); ++userGroupsIndex)
    {
      m_userGroups.push_back(userGroupsJsonList[userGroupsIndex].AsString());
    }
    m_userGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("organizationArns"))
  {
    Aws::Utils::Array<JsonView> organizationArnsJsonList = jsonValue.GetArray("organizationArns");
    for(unsigned organizationArnsIndex = 0; organizationArnsIndex < organizationArnsJsonList.GetLength(); ++organizationArnsIndex)
    {
      m_organizationArns.push_back(organizationArnsJsonList[organizationArnsIndex].AsString());
    }
    m_organizationArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("organizationalUnitArns"))
  {
    Aws::Utils::Array<JsonView> organizationalUnitArnsJsonList = jsonValue.GetArray("organizationalUnitArns");
    for(unsigned organizationalUnitArnsIndex = 0; organizationalUnitArnsIndex < organizationalUnitArnsJsonList.GetLength(); ++organizationalUnitArnsIndex)
    {
      m_organizationalUnitArns.push_back(organizationalUnitArnsJsonList[organizationalUnitArnsIndex].AsString());
    }
    m_organizationalUnitArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchPermissionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_userIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userIdsJsonList(m_userIds.size());
   for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
   {
     userIdsJsonList[userIdsIndex].AsString(m_userIds[userIdsIndex]);
   }
   payload.WithArray("userIds", std::move(userIdsJsonList));

  }

  if(m_userGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userGroupsJsonList(m_userGroups.size());
   for(unsigned userGroupsIndex = 0; userGroupsIndex < userGroupsJsonList.GetLength(); ++userGroupsIndex)
   {
     userGroupsJsonList[userGroupsIndex].AsString(m_userGroups[userGroupsIndex]);
   }
   payload.WithArray("userGroups", std::move(userGroupsJsonList));

  }

  if(m_organizationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationArnsJsonList(m_organizationArns.size());
   for(unsigned organizationArnsIndex = 0; organizationArnsIndex < organizationArnsJsonList.GetLength(); ++organizationArnsIndex)
   {
     organizationArnsJsonList[organizationArnsIndex].AsString(m_organizationArns[organizationArnsIndex]);
   }
   payload.WithArray("organizationArns", std::move(organizationArnsJsonList));

  }

  if(m_organizationalUnitArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationalUnitArnsJsonList(m_organizationalUnitArns.size());
   for(unsigned organizationalUnitArnsIndex = 0; organizationalUnitArnsIndex < organizationalUnitArnsJsonList.GetLength(); ++organizationalUnitArnsIndex)
   {
     organizationalUnitArnsJsonList[organizationalUnitArnsIndex].AsString(m_organizationalUnitArns[organizationalUnitArnsIndex]);
   }
   payload.WithArray("organizationalUnitArns", std::move(organizationalUnitArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
