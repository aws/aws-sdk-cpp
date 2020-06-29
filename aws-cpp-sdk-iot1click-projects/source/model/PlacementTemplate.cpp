/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

PlacementTemplate::PlacementTemplate(JsonView jsonValue) : 
    m_defaultAttributesHasBeenSet(false),
    m_deviceTemplatesHasBeenSet(false)
{
  *this = jsonValue;
}

PlacementTemplate& PlacementTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultAttributes"))
  {
    Aws::Map<Aws::String, JsonView> defaultAttributesJsonMap = jsonValue.GetObject("defaultAttributes").GetAllObjects();
    for(auto& defaultAttributesItem : defaultAttributesJsonMap)
    {
      m_defaultAttributes[defaultAttributesItem.first] = defaultAttributesItem.second.AsString();
    }
    m_defaultAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceTemplates"))
  {
    Aws::Map<Aws::String, JsonView> deviceTemplatesJsonMap = jsonValue.GetObject("deviceTemplates").GetAllObjects();
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
