/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SegmentAttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

SegmentAttributeValue::SegmentAttributeValue() : 
    m_valueStringHasBeenSet(false),
    m_valueMapHasBeenSet(false),
    m_valueInteger(0),
    m_valueIntegerHasBeenSet(false)
{
}

SegmentAttributeValue::SegmentAttributeValue(JsonView jsonValue)
  : SegmentAttributeValue()
{
  *this = jsonValue;
}

SegmentAttributeValue& SegmentAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValueString"))
  {
    m_valueString = jsonValue.GetString("ValueString");

    m_valueStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueMap"))
  {
    Aws::Map<Aws::String, JsonView> valueMapJsonMap = jsonValue.GetObject("ValueMap").GetAllObjects();
    for(auto& valueMapItem : valueMapJsonMap)
    {
      m_valueMap[valueMapItem.first] = valueMapItem.second.AsObject();
    }
    m_valueMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueInteger"))
  {
    m_valueInteger = jsonValue.GetInteger("ValueInteger");

    m_valueIntegerHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueStringHasBeenSet)
  {
   payload.WithString("ValueString", m_valueString);

  }

  if(m_valueMapHasBeenSet)
  {
   JsonValue valueMapJsonMap;
   for(auto& valueMapItem : m_valueMap)
   {
     valueMapJsonMap.WithObject(valueMapItem.first, valueMapItem.second.Jsonize());
   }
   payload.WithObject("ValueMap", std::move(valueMapJsonMap));

  }

  if(m_valueIntegerHasBeenSet)
  {
   payload.WithInteger("ValueInteger", m_valueInteger);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
