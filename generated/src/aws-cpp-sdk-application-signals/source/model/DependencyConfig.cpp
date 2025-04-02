/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/DependencyConfig.h>
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

DependencyConfig::DependencyConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

DependencyConfig& DependencyConfig::operator =(JsonView jsonValue)
{
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
  return *this;
}

JsonValue DependencyConfig::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
