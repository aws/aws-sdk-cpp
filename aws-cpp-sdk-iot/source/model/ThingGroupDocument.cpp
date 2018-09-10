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

#include <aws/iot/model/ThingGroupDocument.h>
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

ThingGroupDocument::ThingGroupDocument() : 
    m_thingGroupNameHasBeenSet(false),
    m_thingGroupIdHasBeenSet(false),
    m_thingGroupDescriptionHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_parentGroupNamesHasBeenSet(false)
{
}

ThingGroupDocument::ThingGroupDocument(JsonView jsonValue) : 
    m_thingGroupNameHasBeenSet(false),
    m_thingGroupIdHasBeenSet(false),
    m_thingGroupDescriptionHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_parentGroupNamesHasBeenSet(false)
{
  *this = jsonValue;
}

ThingGroupDocument& ThingGroupDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingGroupName"))
  {
    m_thingGroupName = jsonValue.GetString("thingGroupName");

    m_thingGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingGroupId"))
  {
    m_thingGroupId = jsonValue.GetString("thingGroupId");

    m_thingGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingGroupDescription"))
  {
    m_thingGroupDescription = jsonValue.GetString("thingGroupDescription");

    m_thingGroupDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentGroupNames"))
  {
    Array<JsonView> parentGroupNamesJsonList = jsonValue.GetArray("parentGroupNames");
    for(unsigned parentGroupNamesIndex = 0; parentGroupNamesIndex < parentGroupNamesJsonList.GetLength(); ++parentGroupNamesIndex)
    {
      m_parentGroupNames.push_back(parentGroupNamesJsonList[parentGroupNamesIndex].AsString());
    }
    m_parentGroupNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue ThingGroupDocument::Jsonize() const
{
  JsonValue payload;

  if(m_thingGroupNameHasBeenSet)
  {
   payload.WithString("thingGroupName", m_thingGroupName);

  }

  if(m_thingGroupIdHasBeenSet)
  {
   payload.WithString("thingGroupId", m_thingGroupId);

  }

  if(m_thingGroupDescriptionHasBeenSet)
  {
   payload.WithString("thingGroupDescription", m_thingGroupDescription);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_parentGroupNamesHasBeenSet)
  {
   Array<JsonValue> parentGroupNamesJsonList(m_parentGroupNames.size());
   for(unsigned parentGroupNamesIndex = 0; parentGroupNamesIndex < parentGroupNamesJsonList.GetLength(); ++parentGroupNamesIndex)
   {
     parentGroupNamesJsonList[parentGroupNamesIndex].AsString(m_parentGroupNames[parentGroupNamesIndex]);
   }
   payload.WithArray("parentGroupNames", std::move(parentGroupNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
