/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/Slot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

Slot::Slot() : 
    m_valueHasBeenSet(false),
    m_shape(Shape::NOT_SET),
    m_shapeHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_subSlotsHasBeenSet(false)
{
}

Slot::Slot(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_shape(Shape::NOT_SET),
    m_shapeHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_subSlotsHasBeenSet(false)
{
  *this = jsonValue;
}

Slot& Slot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shape"))
  {
    m_shape = ShapeMapper::GetShapeForName(jsonValue.GetString("shape"));

    m_shapeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subSlots"))
  {
    Aws::Map<Aws::String, JsonView> subSlotsJsonMap = jsonValue.GetObject("subSlots").GetAllObjects();
    for(auto& subSlotsItem : subSlotsJsonMap)
    {
      m_subSlots[subSlotsItem.first] = subSlotsItem.second.AsObject();
    }
    m_subSlotsHasBeenSet = true;
  }

  return *this;
}

JsonValue Slot::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  if(m_shapeHasBeenSet)
  {
   payload.WithString("shape", ShapeMapper::GetNameForShape(m_shape));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  if(m_subSlotsHasBeenSet)
  {
   JsonValue subSlotsJsonMap;
   for(auto& subSlotsItem : m_subSlots)
   {
     subSlotsJsonMap.WithObject(subSlotsItem.first, subSlotsItem.second.Jsonize());
   }
   payload.WithObject("subSlots", std::move(subSlotsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
