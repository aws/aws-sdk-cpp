/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/SecurityGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

SecurityGroup::SecurityGroup() : 
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

SecurityGroup::SecurityGroup(JsonView jsonValue) : 
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityGroup& SecurityGroup::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue SecurityGroup::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
