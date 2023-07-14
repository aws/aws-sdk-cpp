﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/EntityFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

EntityFilter::EntityFilter() : 
    m_name(EntityFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

EntityFilter::EntityFilter(JsonView jsonValue) : 
    m_name(EntityFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

EntityFilter& EntityFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = EntityFilterNameMapper::GetEntityFilterNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    Array<JsonView> valueJsonList = jsonValue.GetArray("value");
    for(unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex)
    {
      m_value.push_back(valueJsonList[valueIndex].AsString());
    }
    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", EntityFilterNameMapper::GetNameForEntityFilterName(m_name));
  }

  if(m_valueHasBeenSet)
  {
   Array<JsonValue> valueJsonList(m_value.size());
   for(unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex)
   {
     valueJsonList[valueIndex].AsString(m_value[valueIndex]);
   }
   payload.WithArray("value", std::move(valueJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
