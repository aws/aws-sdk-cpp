/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceDependent.h>
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

ServiceDependent::ServiceDependent(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceDependent& ServiceDependent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OperationName"))
  {
    m_operationName = jsonValue.GetString("OperationName");
    m_operationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DependentKeyAttributes"))
  {
    Aws::Map<Aws::String, JsonView> dependentKeyAttributesJsonMap = jsonValue.GetObject("DependentKeyAttributes").GetAllObjects();
    for(auto& dependentKeyAttributesItem : dependentKeyAttributesJsonMap)
    {
      m_dependentKeyAttributes[dependentKeyAttributesItem.first] = dependentKeyAttributesItem.second.AsString();
    }
    m_dependentKeyAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DependentOperationName"))
  {
    m_dependentOperationName = jsonValue.GetString("DependentOperationName");
    m_dependentOperationNameHasBeenSet = true;
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

JsonValue ServiceDependent::Jsonize() const
{
  JsonValue payload;

  if(m_operationNameHasBeenSet)
  {
   payload.WithString("OperationName", m_operationName);

  }

  if(m_dependentKeyAttributesHasBeenSet)
  {
   JsonValue dependentKeyAttributesJsonMap;
   for(auto& dependentKeyAttributesItem : m_dependentKeyAttributes)
   {
     dependentKeyAttributesJsonMap.WithString(dependentKeyAttributesItem.first, dependentKeyAttributesItem.second);
   }
   payload.WithObject("DependentKeyAttributes", std::move(dependentKeyAttributesJsonMap));

  }

  if(m_dependentOperationNameHasBeenSet)
  {
   payload.WithString("DependentOperationName", m_dependentOperationName);

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
