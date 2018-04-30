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

WorkspacesIpGroup::WorkspacesIpGroup(const JsonValue& jsonValue) : 
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupDescHasBeenSet(false),
    m_userRulesHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspacesIpGroup& WorkspacesIpGroup::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> userRulesJsonList = jsonValue.GetArray("userRules");
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
   Array<JsonValue> userRulesJsonList(m_userRules.size());
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
