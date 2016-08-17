/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

PerformanceMetrics::PerformanceMetrics(const JsonValue& jsonValue) : 
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

PerformanceMetrics& PerformanceMetrics::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Properties"))
  {
    Aws::Map<Aws::String, JsonValue> propertiesJsonMap = jsonValue.GetObject("Properties").GetAllObjects();
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