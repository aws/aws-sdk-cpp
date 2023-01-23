/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/GroupMembers.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

GroupMembers::GroupMembers() : 
    m_memberGroupsHasBeenSet(false),
    m_memberUsersHasBeenSet(false),
    m_s3PathforGroupMembersHasBeenSet(false)
{
}

GroupMembers::GroupMembers(JsonView jsonValue) : 
    m_memberGroupsHasBeenSet(false),
    m_memberUsersHasBeenSet(false),
    m_s3PathforGroupMembersHasBeenSet(false)
{
  *this = jsonValue;
}

GroupMembers& GroupMembers::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MemberGroups"))
  {
    Aws::Utils::Array<JsonView> memberGroupsJsonList = jsonValue.GetArray("MemberGroups");
    for(unsigned memberGroupsIndex = 0; memberGroupsIndex < memberGroupsJsonList.GetLength(); ++memberGroupsIndex)
    {
      m_memberGroups.push_back(memberGroupsJsonList[memberGroupsIndex].AsObject());
    }
    m_memberGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberUsers"))
  {
    Aws::Utils::Array<JsonView> memberUsersJsonList = jsonValue.GetArray("MemberUsers");
    for(unsigned memberUsersIndex = 0; memberUsersIndex < memberUsersJsonList.GetLength(); ++memberUsersIndex)
    {
      m_memberUsers.push_back(memberUsersJsonList[memberUsersIndex].AsObject());
    }
    m_memberUsersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3PathforGroupMembers"))
  {
    m_s3PathforGroupMembers = jsonValue.GetObject("S3PathforGroupMembers");

    m_s3PathforGroupMembersHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupMembers::Jsonize() const
{
  JsonValue payload;

  if(m_memberGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memberGroupsJsonList(m_memberGroups.size());
   for(unsigned memberGroupsIndex = 0; memberGroupsIndex < memberGroupsJsonList.GetLength(); ++memberGroupsIndex)
   {
     memberGroupsJsonList[memberGroupsIndex].AsObject(m_memberGroups[memberGroupsIndex].Jsonize());
   }
   payload.WithArray("MemberGroups", std::move(memberGroupsJsonList));

  }

  if(m_memberUsersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memberUsersJsonList(m_memberUsers.size());
   for(unsigned memberUsersIndex = 0; memberUsersIndex < memberUsersJsonList.GetLength(); ++memberUsersIndex)
   {
     memberUsersJsonList[memberUsersIndex].AsObject(m_memberUsers[memberUsersIndex].Jsonize());
   }
   payload.WithArray("MemberUsers", std::move(memberUsersJsonList));

  }

  if(m_s3PathforGroupMembersHasBeenSet)
  {
   payload.WithObject("S3PathforGroupMembers", m_s3PathforGroupMembers.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
