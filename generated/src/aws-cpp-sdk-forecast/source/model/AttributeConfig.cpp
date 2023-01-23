/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/AttributeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

AttributeConfig::AttributeConfig() : 
    m_attributeNameHasBeenSet(false),
    m_transformationsHasBeenSet(false)
{
}

AttributeConfig::AttributeConfig(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_transformationsHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeConfig& AttributeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Transformations"))
  {
    Aws::Map<Aws::String, JsonView> transformationsJsonMap = jsonValue.GetObject("Transformations").GetAllObjects();
    for(auto& transformationsItem : transformationsJsonMap)
    {
      m_transformations[transformationsItem.first] = transformationsItem.second.AsString();
    }
    m_transformationsHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_transformationsHasBeenSet)
  {
   JsonValue transformationsJsonMap;
   for(auto& transformationsItem : m_transformations)
   {
     transformationsJsonMap.WithString(transformationsItem.first, transformationsItem.second);
   }
   payload.WithObject("Transformations", std::move(transformationsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
