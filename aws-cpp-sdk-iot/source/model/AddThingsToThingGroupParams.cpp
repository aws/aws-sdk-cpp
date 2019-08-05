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
    Array<JsonView> thingGroupNamesJsonList = jsonValue.GetArray("thingGroupNames");
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
   Array<JsonValue> thingGroupNamesJsonList(m_thingGroupNames.size());
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
