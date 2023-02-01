/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AddThingsToThingGroupParams.h>
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

AddThingsToThingGroupParams::AddThingsToThingGroupParams() : 
    m_thingGroupNamesHasBeenSet(false),
    m_overrideDynamicGroups(false),
    m_overrideDynamicGroupsHasBeenSet(false)
{
}

AddThingsToThingGroupParams::AddThingsToThingGroupParams(JsonView jsonValue) : 
    m_thingGroupNamesHasBeenSet(false),
    m_overrideDynamicGroups(false),
    m_overrideDynamicGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

AddThingsToThingGroupParams& AddThingsToThingGroupParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingGroupNames"))
  {
    Aws::Utils::Array<JsonView> thingGroupNamesJsonList = jsonValue.GetArray("thingGroupNames");
    for(unsigned thingGroupNamesIndex = 0; thingGroupNamesIndex < thingGroupNamesJsonList.GetLength(); ++thingGroupNamesIndex)
    {
      m_thingGroupNames.push_back(thingGroupNamesJsonList[thingGroupNamesIndex].AsString());
    }
    m_thingGroupNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overrideDynamicGroups"))
  {
    m_overrideDynamicGroups = jsonValue.GetBool("overrideDynamicGroups");

    m_overrideDynamicGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue AddThingsToThingGroupParams::Jsonize() const
{
  JsonValue payload;

  if(m_thingGroupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> thingGroupNamesJsonList(m_thingGroupNames.size());
   for(unsigned thingGroupNamesIndex = 0; thingGroupNamesIndex < thingGroupNamesJsonList.GetLength(); ++thingGroupNamesIndex)
   {
     thingGroupNamesJsonList[thingGroupNamesIndex].AsString(m_thingGroupNames[thingGroupNamesIndex]);
   }
   payload.WithArray("thingGroupNames", std::move(thingGroupNamesJsonList));

  }

  if(m_overrideDynamicGroupsHasBeenSet)
  {
   payload.WithBool("overrideDynamicGroups", m_overrideDynamicGroups);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
