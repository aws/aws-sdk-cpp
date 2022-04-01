/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/SecurityGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

SecurityGroup::SecurityGroup() : 
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

SecurityGroup::SecurityGroup(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityGroup& SecurityGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupId"))
  {
    m_groupId = jsonValue.GetString("groupId");

    m_groupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityGroup::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("groupId", m_groupId);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
