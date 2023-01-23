/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/UpdateInstruction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

UpdateInstruction::UpdateInstruction() : 
    m_action(UpdateAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_role(Role::NOT_SET),
    m_roleHasBeenSet(false),
    m_usersHasBeenSet(false)
{
}

UpdateInstruction::UpdateInstruction(JsonView jsonValue) : 
    m_action(UpdateAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_role(Role::NOT_SET),
    m_roleHasBeenSet(false),
    m_usersHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateInstruction& UpdateInstruction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = UpdateActionMapper::GetUpdateActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("role"))
  {
    m_role = RoleMapper::GetRoleForName(jsonValue.GetString("role"));

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("users"))
  {
    Aws::Utils::Array<JsonView> usersJsonList = jsonValue.GetArray("users");
    for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
    {
      m_users.push_back(usersJsonList[usersIndex].AsObject());
    }
    m_usersHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateInstruction::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", UpdateActionMapper::GetNameForUpdateAction(m_action));
  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", RoleMapper::GetNameForRole(m_role));
  }

  if(m_usersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usersJsonList(m_users.size());
   for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
   {
     usersJsonList[usersIndex].AsObject(m_users[usersIndex].Jsonize());
   }
   payload.WithArray("users", std::move(usersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
