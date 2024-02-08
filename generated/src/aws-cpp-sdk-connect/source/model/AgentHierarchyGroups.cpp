/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AgentHierarchyGroups.h>
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

AgentHierarchyGroups::AgentHierarchyGroups() : 
    m_l1IdsHasBeenSet(false),
    m_l2IdsHasBeenSet(false),
    m_l3IdsHasBeenSet(false),
    m_l4IdsHasBeenSet(false),
    m_l5IdsHasBeenSet(false)
{
}

AgentHierarchyGroups::AgentHierarchyGroups(JsonView jsonValue) : 
    m_l1IdsHasBeenSet(false),
    m_l2IdsHasBeenSet(false),
    m_l3IdsHasBeenSet(false),
    m_l4IdsHasBeenSet(false),
    m_l5IdsHasBeenSet(false)
{
  *this = jsonValue;
}

AgentHierarchyGroups& AgentHierarchyGroups::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("L1Ids"))
  {
    Aws::Utils::Array<JsonView> l1IdsJsonList = jsonValue.GetArray("L1Ids");
    for(unsigned l1IdsIndex = 0; l1IdsIndex < l1IdsJsonList.GetLength(); ++l1IdsIndex)
    {
      m_l1Ids.push_back(l1IdsJsonList[l1IdsIndex].AsString());
    }
    m_l1IdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("L2Ids"))
  {
    Aws::Utils::Array<JsonView> l2IdsJsonList = jsonValue.GetArray("L2Ids");
    for(unsigned l2IdsIndex = 0; l2IdsIndex < l2IdsJsonList.GetLength(); ++l2IdsIndex)
    {
      m_l2Ids.push_back(l2IdsJsonList[l2IdsIndex].AsString());
    }
    m_l2IdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("L3Ids"))
  {
    Aws::Utils::Array<JsonView> l3IdsJsonList = jsonValue.GetArray("L3Ids");
    for(unsigned l3IdsIndex = 0; l3IdsIndex < l3IdsJsonList.GetLength(); ++l3IdsIndex)
    {
      m_l3Ids.push_back(l3IdsJsonList[l3IdsIndex].AsString());
    }
    m_l3IdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("L4Ids"))
  {
    Aws::Utils::Array<JsonView> l4IdsJsonList = jsonValue.GetArray("L4Ids");
    for(unsigned l4IdsIndex = 0; l4IdsIndex < l4IdsJsonList.GetLength(); ++l4IdsIndex)
    {
      m_l4Ids.push_back(l4IdsJsonList[l4IdsIndex].AsString());
    }
    m_l4IdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("L5Ids"))
  {
    Aws::Utils::Array<JsonView> l5IdsJsonList = jsonValue.GetArray("L5Ids");
    for(unsigned l5IdsIndex = 0; l5IdsIndex < l5IdsJsonList.GetLength(); ++l5IdsIndex)
    {
      m_l5Ids.push_back(l5IdsJsonList[l5IdsIndex].AsString());
    }
    m_l5IdsHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentHierarchyGroups::Jsonize() const
{
  JsonValue payload;

  if(m_l1IdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> l1IdsJsonList(m_l1Ids.size());
   for(unsigned l1IdsIndex = 0; l1IdsIndex < l1IdsJsonList.GetLength(); ++l1IdsIndex)
   {
     l1IdsJsonList[l1IdsIndex].AsString(m_l1Ids[l1IdsIndex]);
   }
   payload.WithArray("L1Ids", std::move(l1IdsJsonList));

  }

  if(m_l2IdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> l2IdsJsonList(m_l2Ids.size());
   for(unsigned l2IdsIndex = 0; l2IdsIndex < l2IdsJsonList.GetLength(); ++l2IdsIndex)
   {
     l2IdsJsonList[l2IdsIndex].AsString(m_l2Ids[l2IdsIndex]);
   }
   payload.WithArray("L2Ids", std::move(l2IdsJsonList));

  }

  if(m_l3IdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> l3IdsJsonList(m_l3Ids.size());
   for(unsigned l3IdsIndex = 0; l3IdsIndex < l3IdsJsonList.GetLength(); ++l3IdsIndex)
   {
     l3IdsJsonList[l3IdsIndex].AsString(m_l3Ids[l3IdsIndex]);
   }
   payload.WithArray("L3Ids", std::move(l3IdsJsonList));

  }

  if(m_l4IdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> l4IdsJsonList(m_l4Ids.size());
   for(unsigned l4IdsIndex = 0; l4IdsIndex < l4IdsJsonList.GetLength(); ++l4IdsIndex)
   {
     l4IdsJsonList[l4IdsIndex].AsString(m_l4Ids[l4IdsIndex]);
   }
   payload.WithArray("L4Ids", std::move(l4IdsJsonList));

  }

  if(m_l5IdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> l5IdsJsonList(m_l5Ids.size());
   for(unsigned l5IdsIndex = 0; l5IdsIndex < l5IdsJsonList.GetLength(); ++l5IdsIndex)
   {
     l5IdsJsonList[l5IdsIndex].AsString(m_l5Ids[l5IdsIndex]);
   }
   payload.WithArray("L5Ids", std::move(l5IdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
