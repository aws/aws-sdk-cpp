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

#include <aws/mq/model/UserPendingChanges.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

UserPendingChanges::UserPendingChanges() : 
    m_consoleAccess(false),
    m_consoleAccessHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_pendingChange(ChangeType::NOT_SET),
    m_pendingChangeHasBeenSet(false)
{
}

UserPendingChanges::UserPendingChanges(const JsonValue& jsonValue) : 
    m_consoleAccess(false),
    m_consoleAccessHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_pendingChange(ChangeType::NOT_SET),
    m_pendingChangeHasBeenSet(false)
{
  *this = jsonValue;
}

UserPendingChanges& UserPendingChanges::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("consoleAccess"))
  {
    m_consoleAccess = jsonValue.GetBool("consoleAccess");

    m_consoleAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groups"))
  {
    Array<JsonValue> groupsJsonList = jsonValue.GetArray("groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsString());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingChange"))
  {
    m_pendingChange = ChangeTypeMapper::GetChangeTypeForName(jsonValue.GetString("pendingChange"));

    m_pendingChangeHasBeenSet = true;
  }

  return *this;
}

JsonValue UserPendingChanges::Jsonize() const
{
  JsonValue payload;

  if(m_consoleAccessHasBeenSet)
  {
   payload.WithBool("consoleAccess", m_consoleAccess);

  }

  if(m_groupsHasBeenSet)
  {
   Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsString(m_groups[groupsIndex]);
   }
   payload.WithArray("groups", std::move(groupsJsonList));

  }

  if(m_pendingChangeHasBeenSet)
  {
   payload.WithString("pendingChange", ChangeTypeMapper::GetNameForChangeType(m_pendingChange));
  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
