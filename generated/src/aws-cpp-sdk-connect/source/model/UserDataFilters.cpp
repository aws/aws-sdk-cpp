/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserDataFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

UserDataFilters::UserDataFilters() : 
    m_queuesHasBeenSet(false),
    m_contactFilterHasBeenSet(false),
    m_routingProfilesHasBeenSet(false),
    m_agentsHasBeenSet(false),
    m_userHierarchyGroupsHasBeenSet(false)
{
}

UserDataFilters::UserDataFilters(JsonView jsonValue) : 
    m_queuesHasBeenSet(false),
    m_contactFilterHasBeenSet(false),
    m_routingProfilesHasBeenSet(false),
    m_agentsHasBeenSet(false),
    m_userHierarchyGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

UserDataFilters& UserDataFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Queues"))
  {
    Aws::Utils::Array<JsonView> queuesJsonList = jsonValue.GetArray("Queues");
    for(unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex)
    {
      m_queues.push_back(queuesJsonList[queuesIndex].AsString());
    }
    m_queuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactFilter"))
  {
    m_contactFilter = jsonValue.GetObject("ContactFilter");

    m_contactFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingProfiles"))
  {
    Aws::Utils::Array<JsonView> routingProfilesJsonList = jsonValue.GetArray("RoutingProfiles");
    for(unsigned routingProfilesIndex = 0; routingProfilesIndex < routingProfilesJsonList.GetLength(); ++routingProfilesIndex)
    {
      m_routingProfiles.push_back(routingProfilesJsonList[routingProfilesIndex].AsString());
    }
    m_routingProfilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Agents"))
  {
    Aws::Utils::Array<JsonView> agentsJsonList = jsonValue.GetArray("Agents");
    for(unsigned agentsIndex = 0; agentsIndex < agentsJsonList.GetLength(); ++agentsIndex)
    {
      m_agents.push_back(agentsJsonList[agentsIndex].AsString());
    }
    m_agentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserHierarchyGroups"))
  {
    Aws::Utils::Array<JsonView> userHierarchyGroupsJsonList = jsonValue.GetArray("UserHierarchyGroups");
    for(unsigned userHierarchyGroupsIndex = 0; userHierarchyGroupsIndex < userHierarchyGroupsJsonList.GetLength(); ++userHierarchyGroupsIndex)
    {
      m_userHierarchyGroups.push_back(userHierarchyGroupsJsonList[userHierarchyGroupsIndex].AsString());
    }
    m_userHierarchyGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue UserDataFilters::Jsonize() const
{
  JsonValue payload;

  if(m_queuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queuesJsonList(m_queues.size());
   for(unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex)
   {
     queuesJsonList[queuesIndex].AsString(m_queues[queuesIndex]);
   }
   payload.WithArray("Queues", std::move(queuesJsonList));

  }

  if(m_contactFilterHasBeenSet)
  {
   payload.WithObject("ContactFilter", m_contactFilter.Jsonize());

  }

  if(m_routingProfilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routingProfilesJsonList(m_routingProfiles.size());
   for(unsigned routingProfilesIndex = 0; routingProfilesIndex < routingProfilesJsonList.GetLength(); ++routingProfilesIndex)
   {
     routingProfilesJsonList[routingProfilesIndex].AsString(m_routingProfiles[routingProfilesIndex]);
   }
   payload.WithArray("RoutingProfiles", std::move(routingProfilesJsonList));

  }

  if(m_agentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentsJsonList(m_agents.size());
   for(unsigned agentsIndex = 0; agentsIndex < agentsJsonList.GetLength(); ++agentsIndex)
   {
     agentsJsonList[agentsIndex].AsString(m_agents[agentsIndex]);
   }
   payload.WithArray("Agents", std::move(agentsJsonList));

  }

  if(m_userHierarchyGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userHierarchyGroupsJsonList(m_userHierarchyGroups.size());
   for(unsigned userHierarchyGroupsIndex = 0; userHierarchyGroupsIndex < userHierarchyGroupsJsonList.GetLength(); ++userHierarchyGroupsIndex)
   {
     userHierarchyGroupsJsonList[userHierarchyGroupsIndex].AsString(m_userHierarchyGroups[userHierarchyGroupsIndex]);
   }
   payload.WithArray("UserHierarchyGroups", std::move(userHierarchyGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
