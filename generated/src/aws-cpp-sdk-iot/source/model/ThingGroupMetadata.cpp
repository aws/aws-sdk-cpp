/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingGroupMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ThingGroupMetadata::ThingGroupMetadata() : 
    m_parentGroupNameHasBeenSet(false),
    m_rootToParentThingGroupsHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

ThingGroupMetadata::ThingGroupMetadata(JsonView jsonValue) : 
    m_parentGroupNameHasBeenSet(false),
    m_rootToParentThingGroupsHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

ThingGroupMetadata& ThingGroupMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parentGroupName"))
  {
    m_parentGroupName = jsonValue.GetString("parentGroupName");

    m_parentGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rootToParentThingGroups"))
  {
    Aws::Utils::Array<JsonView> rootToParentThingGroupsJsonList = jsonValue.GetArray("rootToParentThingGroups");
    for(unsigned rootToParentThingGroupsIndex = 0; rootToParentThingGroupsIndex < rootToParentThingGroupsJsonList.GetLength(); ++rootToParentThingGroupsIndex)
    {
      m_rootToParentThingGroups.push_back(rootToParentThingGroupsJsonList[rootToParentThingGroupsIndex].AsObject());
    }
    m_rootToParentThingGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ThingGroupMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_parentGroupNameHasBeenSet)
  {
   payload.WithString("parentGroupName", m_parentGroupName);

  }

  if(m_rootToParentThingGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rootToParentThingGroupsJsonList(m_rootToParentThingGroups.size());
   for(unsigned rootToParentThingGroupsIndex = 0; rootToParentThingGroupsIndex < rootToParentThingGroupsJsonList.GetLength(); ++rootToParentThingGroupsIndex)
   {
     rootToParentThingGroupsJsonList[rootToParentThingGroupsIndex].AsObject(m_rootToParentThingGroups[rootToParentThingGroupsIndex].Jsonize());
   }
   payload.WithArray("rootToParentThingGroups", std::move(rootToParentThingGroupsJsonList));

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
