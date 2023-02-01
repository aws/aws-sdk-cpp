/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

Configuration::Configuration() : 
    m_classificationHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_configurationsHasBeenSet(false)
{
}

Configuration::Configuration(JsonView jsonValue) : 
    m_classificationHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_configurationsHasBeenSet(false)
{
  *this = jsonValue;
}

Configuration& Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("classification"))
  {
    m_classification = jsonValue.GetString("classification");

    m_classificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("properties"))
  {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("properties").GetAllObjects();
    for(auto& propertiesItem : propertiesJsonMap)
    {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurations"))
  {
    Aws::Utils::Array<JsonView> configurationsJsonList = jsonValue.GetArray("configurations");
    for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
    {
      m_configurations.push_back(configurationsJsonList[configurationsIndex].AsObject());
    }
    m_configurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_classificationHasBeenSet)
  {
   payload.WithString("classification", m_classification);

  }

  if(m_propertiesHasBeenSet)
  {
   JsonValue propertiesJsonMap;
   for(auto& propertiesItem : m_properties)
   {
     propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
   }
   payload.WithObject("properties", std::move(propertiesJsonMap));

  }

  if(m_configurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationsJsonList(m_configurations.size());
   for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
   {
     configurationsJsonList[configurationsIndex].AsObject(m_configurations[configurationsIndex].Jsonize());
   }
   payload.WithArray("configurations", std::move(configurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
