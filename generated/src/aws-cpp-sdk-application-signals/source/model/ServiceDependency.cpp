/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceDependency.h>
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

ServiceDependency::ServiceDependency(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceDependency& ServiceDependency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OperationName"))
  {
    m_operationName = jsonValue.GetString("OperationName");
    m_operationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DependencyKeyAttributes"))
  {
    Aws::Map<Aws::String, JsonView> dependencyKeyAttributesJsonMap = jsonValue.GetObject("DependencyKeyAttributes").GetAllObjects();
    for(auto& dependencyKeyAttributesItem : dependencyKeyAttributesJsonMap)
    {
      m_dependencyKeyAttributes[dependencyKeyAttributesItem.first] = dependencyKeyAttributesItem.second.AsString();
    }
    m_dependencyKeyAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DependencyOperationName"))
  {
    m_dependencyOperationName = jsonValue.GetString("DependencyOperationName");
    m_dependencyOperationNameHasBeenSet = true;
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

JsonValue ServiceDependency::Jsonize() const
{
  JsonValue payload;

  if(m_operationNameHasBeenSet)
  {
   payload.WithString("OperationName", m_operationName);

  }

  if(m_dependencyKeyAttributesHasBeenSet)
  {
   JsonValue dependencyKeyAttributesJsonMap;
   for(auto& dependencyKeyAttributesItem : m_dependencyKeyAttributes)
   {
     dependencyKeyAttributesJsonMap.WithString(dependencyKeyAttributesItem.first, dependencyKeyAttributesItem.second);
   }
   payload.WithObject("DependencyKeyAttributes", std::move(dependencyKeyAttributesJsonMap));

  }

  if(m_dependencyOperationNameHasBeenSet)
  {
   payload.WithString("DependencyOperationName", m_dependencyOperationName);

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
