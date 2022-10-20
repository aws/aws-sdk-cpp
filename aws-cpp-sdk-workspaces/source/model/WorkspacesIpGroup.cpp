/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspacesIpGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

WorkspacesIpGroup::WorkspacesIpGroup() : 
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupDescHasBeenSet(false),
    m_userRulesHasBeenSet(false)
{
}

WorkspacesIpGroup::WorkspacesIpGroup(JsonView jsonValue) : 
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupDescHasBeenSet(false),
    m_userRulesHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspacesIpGroup& WorkspacesIpGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupId"))
  {
    m_groupId = jsonValue.GetString("groupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupDesc"))
  {
    m_groupDesc = jsonValue.GetString("groupDesc");

    m_groupDescHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userRules"))
  {
    Aws::Utils::Array<JsonView> userRulesJsonList = jsonValue.GetArray("userRules");
    for(unsigned userRulesIndex = 0; userRulesIndex < userRulesJsonList.GetLength(); ++userRulesIndex)
    {
      m_userRules.push_back(userRulesJsonList[userRulesIndex].AsObject());
    }
    m_userRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkspacesIpGroup::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("groupId", m_groupId);

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  if(m_groupDescHasBeenSet)
  {
   payload.WithString("groupDesc", m_groupDesc);

  }

  if(m_userRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userRulesJsonList(m_userRules.size());
   for(unsigned userRulesIndex = 0; userRulesIndex < userRulesJsonList.GetLength(); ++userRulesIndex)
   {
     userRulesJsonList[userRulesIndex].AsObject(m_userRules[userRulesIndex].Jsonize());
   }
   payload.WithArray("userRules", std::move(userRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
