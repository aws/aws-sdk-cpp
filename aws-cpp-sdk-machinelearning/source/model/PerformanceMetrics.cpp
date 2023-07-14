/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/PerformanceMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

PerformanceMetrics::PerformanceMetrics() : 
    m_propertiesHasBeenSet(false)
{
}

PerformanceMetrics::PerformanceMetrics(JsonView jsonValue) : 
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

PerformanceMetrics& PerformanceMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Properties"))
  {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("Properties").GetAllObjects();
    for(auto& propertiesItem : propertiesJsonMap)
    {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue PerformanceMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_propertiesHasBeenSet)
  {
   JsonValue propertiesJsonMap;
   for(auto& propertiesItem : m_properties)
   {
     propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
   }
   payload.WithObject("Properties", std::move(propertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
