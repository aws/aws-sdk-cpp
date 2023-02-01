/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/IamActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

IamActionDefinition::IamActionDefinition() : 
    m_policyArnHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_usersHasBeenSet(false)
{
}

IamActionDefinition::IamActionDefinition(JsonView jsonValue) : 
    m_policyArnHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_usersHasBeenSet(false)
{
  *this = jsonValue;
}

IamActionDefinition& IamActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyArn"))
  {
    m_policyArn = jsonValue.GetString("PolicyArn");

    m_policyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Roles"))
  {
    Aws::Utils::Array<JsonView> rolesJsonList = jsonValue.GetArray("Roles");
    for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
    {
      m_roles.push_back(rolesJsonList[rolesIndex].AsString());
    }
    m_rolesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("Groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsString());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Users"))
  {
    Aws::Utils::Array<JsonView> usersJsonList = jsonValue.GetArray("Users");
    for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
    {
      m_users.push_back(usersJsonList[usersIndex].AsString());
    }
    m_usersHasBeenSet = true;
  }

  return *this;
}

JsonValue IamActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("PolicyArn", m_policyArn);

  }

  if(m_rolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rolesJsonList(m_roles.size());
   for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
   {
     rolesJsonList[rolesIndex].AsString(m_roles[rolesIndex]);
   }
   payload.WithArray("Roles", std::move(rolesJsonList));

  }

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsString(m_groups[groupsIndex]);
   }
   payload.WithArray("Groups", std::move(groupsJsonList));

  }

  if(m_usersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usersJsonList(m_users.size());
   for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
   {
     usersJsonList[usersIndex].AsString(m_users[usersIndex]);
   }
   payload.WithArray("Users", std::move(usersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
