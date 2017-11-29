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

#include <aws/iot/model/ThingDocument.h>
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

ThingDocument::ThingDocument() : 
    m_thingNameHasBeenSet(false),
    m_thingIdHasBeenSet(false),
    m_thingTypeNameHasBeenSet(false),
    m_thingGroupNamesHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_shadowHasBeenSet(false)
{
}

ThingDocument::ThingDocument(const JsonValue& jsonValue) : 
    m_thingNameHasBeenSet(false),
    m_thingIdHasBeenSet(false),
    m_thingTypeNameHasBeenSet(false),
    m_thingGroupNamesHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_shadowHasBeenSet(false)
{
  *this = jsonValue;
}

ThingDocument& ThingDocument::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

    m_thingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingId"))
  {
    m_thingId = jsonValue.GetString("thingId");

    m_thingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingTypeName"))
  {
    m_thingTypeName = jsonValue.GetString("thingTypeName");

    m_thingTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingGroupNames"))
  {
    Array<JsonValue> thingGroupNamesJsonList = jsonValue.GetArray("thingGroupNames");
    for(unsigned thingGroupNamesIndex = 0; thingGroupNamesIndex < thingGroupNamesJsonList.GetLength(); ++thingGroupNamesIndex)
    {
      m_thingGroupNames.push_back(thingGroupNamesJsonList[thingGroupNamesIndex].AsString());
    }
    m_thingGroupNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonValue> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shadow"))
  {
    m_shadow = jsonValue.GetString("shadow");

    m_shadowHasBeenSet = true;
  }

  return *this;
}

JsonValue ThingDocument::Jsonize() const
{
  JsonValue payload;

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_thingIdHasBeenSet)
  {
   payload.WithString("thingId", m_thingId);

  }

  if(m_thingTypeNameHasBeenSet)
  {
   payload.WithString("thingTypeName", m_thingTypeName);

  }

  if(m_thingGroupNamesHasBeenSet)
  {
   Array<JsonValue> thingGroupNamesJsonList(m_thingGroupNames.size());
   for(unsigned thingGroupNamesIndex = 0; thingGroupNamesIndex < thingGroupNamesJsonList.GetLength(); ++thingGroupNamesIndex)
   {
     thingGroupNamesJsonList[thingGroupNamesIndex].AsString(m_thingGroupNames[thingGroupNamesIndex]);
   }
   payload.WithArray("thingGroupNames", std::move(thingGroupNamesJsonList));

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

  if(m_shadowHasBeenSet)
  {
   payload.WithString("shadow", m_shadow);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
