/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

ServiceSummary::ServiceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceSummary& ServiceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyAttributes"))
  {
    Aws::Map<Aws::String, JsonView> keyAttributesJsonMap = jsonValue.GetObject("KeyAttributes").GetAllObjects();
    for(auto& keyAttributesItem : keyAttributesJsonMap)
    {
      m_keyAttributes[keyAttributesItem.first] = keyAttributesItem.second.AsString();
    }
    m_keyAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttributeMaps"))
  {
    Aws::Utils::Array<JsonView> attributeMapsJsonList = jsonValue.GetArray("AttributeMaps");
    for(unsigned attributeMapsIndex = 0; attributeMapsIndex < attributeMapsJsonList.GetLength(); ++attributeMapsIndex)
    {
      Aws::Map<Aws::String, JsonView> attributeMapJsonMap = attributeMapsJsonList[attributeMapsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> attributeMapMap;
      for(auto& attributeMapItem : attributeMapJsonMap)
      {
        attributeMapMap[attributeMapItem.first] = attributeMapItem.second.AsString();
      }
      m_attributeMaps.push_back(std::move(attributeMapMap));
    }
    m_attributeMapsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricReferences"))
  {
    Aws::Utils::Array<JsonView> metricReferencesJsonList = jsonValue.GetArray("MetricReferences");
    for(unsigned metricReferencesIndex = 0; metricReferencesIndex < metricReferencesJsonList.GetLength(); ++metricReferencesIndex)
    {
      m_metricReferences.push_back(metricReferencesJsonList[metricReferencesIndex].AsObject());
    }
    m_metricReferencesHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_keyAttributesHasBeenSet)
  {
   JsonValue keyAttributesJsonMap;
   for(auto& keyAttributesItem : m_keyAttributes)
   {
     keyAttributesJsonMap.WithString(keyAttributesItem.first, keyAttributesItem.second);
   }
   payload.WithObject("KeyAttributes", std::move(keyAttributesJsonMap));

  }

  if(m_attributeMapsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeMapsJsonList(m_attributeMaps.size());
   for(unsigned attributeMapsIndex = 0; attributeMapsIndex < attributeMapsJsonList.GetLength(); ++attributeMapsIndex)
   {
     JsonValue attributeMapJsonMap;
     for(auto& attributeMapItem : m_attributeMaps[attributeMapsIndex])
     {
       attributeMapJsonMap.WithString(attributeMapItem.first, attributeMapItem.second);
     }
     attributeMapsJsonList[attributeMapsIndex].AsObject(std::move(attributeMapJsonMap));
   }
   payload.WithArray("AttributeMaps", std::move(attributeMapsJsonList));

  }

  if(m_metricReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricReferencesJsonList(m_metricReferences.size());
   for(unsigned metricReferencesIndex = 0; metricReferencesIndex < metricReferencesJsonList.GetLength(); ++metricReferencesIndex)
   {
     metricReferencesJsonList[metricReferencesIndex].AsObject(m_metricReferences[metricReferencesIndex].Jsonize());
   }
   payload.WithArray("MetricReferences", std::move(metricReferencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
