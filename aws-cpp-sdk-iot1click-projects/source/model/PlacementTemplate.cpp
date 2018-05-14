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

#include <aws/iot1click-projects/model/PlacementTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT1ClickProjects
{
namespace Model
{

PlacementTemplate::PlacementTemplate() : 
    m_defaultAttributesHasBeenSet(false),
    m_deviceTemplatesHasBeenSet(false)
{
}

PlacementTemplate::PlacementTemplate(const JsonValue& jsonValue) : 
    m_defaultAttributesHasBeenSet(false),
    m_deviceTemplatesHasBeenSet(false)
{
  *this = jsonValue;
}

PlacementTemplate& PlacementTemplate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("defaultAttributes"))
  {
    Aws::Map<Aws::String, JsonValue> defaultAttributesJsonMap = jsonValue.GetObject("defaultAttributes").GetAllObjects();
    for(auto& defaultAttributesItem : defaultAttributesJsonMap)
    {
      m_defaultAttributes[defaultAttributesItem.first] = defaultAttributesItem.second.AsString();
    }
    m_defaultAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceTemplates"))
  {
    Aws::Map<Aws::String, JsonValue> deviceTemplatesJsonMap = jsonValue.GetObject("deviceTemplates").GetAllObjects();
    for(auto& deviceTemplatesItem : deviceTemplatesJsonMap)
    {
      m_deviceTemplates[deviceTemplatesItem.first] = deviceTemplatesItem.second.AsObject();
    }
    m_deviceTemplatesHasBeenSet = true;
  }

  return *this;
}

JsonValue PlacementTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_defaultAttributesHasBeenSet)
  {
   JsonValue defaultAttributesJsonMap;
   for(auto& defaultAttributesItem : m_defaultAttributes)
   {
     defaultAttributesJsonMap.WithString(defaultAttributesItem.first, defaultAttributesItem.second);
   }
   payload.WithObject("defaultAttributes", std::move(defaultAttributesJsonMap));

  }

  if(m_deviceTemplatesHasBeenSet)
  {
   JsonValue deviceTemplatesJsonMap;
   for(auto& deviceTemplatesItem : m_deviceTemplates)
   {
     deviceTemplatesJsonMap.WithObject(deviceTemplatesItem.first, deviceTemplatesItem.second.Jsonize());
   }
   payload.WithObject("deviceTemplates", std::move(deviceTemplatesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
