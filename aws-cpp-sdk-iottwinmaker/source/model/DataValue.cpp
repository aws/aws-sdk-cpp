/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/DataValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

DataValue::DataValue() : 
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_listValueHasBeenSet(false),
    m_mapValueHasBeenSet(false),
    m_relationshipValueHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

DataValue::DataValue(JsonView jsonValue) : 
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_listValueHasBeenSet(false),
    m_mapValueHasBeenSet(false),
    m_relationshipValueHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
  *this = jsonValue;
}

DataValue& DataValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("booleanValue"))
  {
    m_booleanValue = jsonValue.GetBool("booleanValue");

    m_booleanValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doubleValue"))
  {
    m_doubleValue = jsonValue.GetDouble("doubleValue");

    m_doubleValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integerValue"))
  {
    m_integerValue = jsonValue.GetInteger("integerValue");

    m_integerValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("longValue"))
  {
    m_longValue = jsonValue.GetInt64("longValue");

    m_longValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listValue"))
  {
    Aws::Utils::Array<JsonView> listValueJsonList = jsonValue.GetArray("listValue");
    for(unsigned listValueIndex = 0; listValueIndex < listValueJsonList.GetLength(); ++listValueIndex)
    {
      m_listValue.push_back(listValueJsonList[listValueIndex].AsObject());
    }
    m_listValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mapValue"))
  {
    Aws::Map<Aws::String, JsonView> mapValueJsonMap = jsonValue.GetObject("mapValue").GetAllObjects();
    for(auto& mapValueItem : mapValueJsonMap)
    {
      m_mapValue[mapValueItem.first] = mapValueItem.second.AsObject();
    }
    m_mapValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationshipValue"))
  {
    m_relationshipValue = jsonValue.GetObject("relationshipValue");

    m_relationshipValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");

    m_expressionHasBeenSet = true;
  }

  return *this;
}

JsonValue DataValue::Jsonize() const
{
  JsonValue payload;

  if(m_booleanValueHasBeenSet)
  {
   payload.WithBool("booleanValue", m_booleanValue);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("doubleValue", m_doubleValue);

  }

  if(m_integerValueHasBeenSet)
  {
   payload.WithInteger("integerValue", m_integerValue);

  }

  if(m_longValueHasBeenSet)
  {
   payload.WithInt64("longValue", m_longValue);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_listValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listValueJsonList(m_listValue.size());
   for(unsigned listValueIndex = 0; listValueIndex < listValueJsonList.GetLength(); ++listValueIndex)
   {
     listValueJsonList[listValueIndex].AsObject(m_listValue[listValueIndex].Jsonize());
   }
   payload.WithArray("listValue", std::move(listValueJsonList));

  }

  if(m_mapValueHasBeenSet)
  {
   JsonValue mapValueJsonMap;
   for(auto& mapValueItem : m_mapValue)
   {
     mapValueJsonMap.WithObject(mapValueItem.first, mapValueItem.second.Jsonize());
   }
   payload.WithObject("mapValue", std::move(mapValueJsonMap));

  }

  if(m_relationshipValueHasBeenSet)
  {
   payload.WithObject("relationshipValue", m_relationshipValue.Jsonize());

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
