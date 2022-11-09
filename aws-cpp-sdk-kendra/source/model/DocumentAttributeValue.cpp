/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DocumentAttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

DocumentAttributeValue::DocumentAttributeValue() : 
    m_stringValueHasBeenSet(false),
    m_stringListValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_dateValueHasBeenSet(false)
{
}

DocumentAttributeValue::DocumentAttributeValue(JsonView jsonValue) : 
    m_stringValueHasBeenSet(false),
    m_stringListValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_dateValueHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentAttributeValue& DocumentAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringValue"))
  {
    m_stringValue = jsonValue.GetString("StringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringListValue"))
  {
    Aws::Utils::Array<JsonView> stringListValueJsonList = jsonValue.GetArray("StringListValue");
    for(unsigned stringListValueIndex = 0; stringListValueIndex < stringListValueJsonList.GetLength(); ++stringListValueIndex)
    {
      m_stringListValue.push_back(stringListValueJsonList[stringListValueIndex].AsString());
    }
    m_stringListValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LongValue"))
  {
    m_longValue = jsonValue.GetInt64("LongValue");

    m_longValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateValue"))
  {
    m_dateValue = jsonValue.GetDouble("DateValue");

    m_dateValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("StringValue", m_stringValue);

  }

  if(m_stringListValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringListValueJsonList(m_stringListValue.size());
   for(unsigned stringListValueIndex = 0; stringListValueIndex < stringListValueJsonList.GetLength(); ++stringListValueIndex)
   {
     stringListValueJsonList[stringListValueIndex].AsString(m_stringListValue[stringListValueIndex]);
   }
   payload.WithArray("StringListValue", std::move(stringListValueJsonList));

  }

  if(m_longValueHasBeenSet)
  {
   payload.WithInt64("LongValue", m_longValue);

  }

  if(m_dateValueHasBeenSet)
  {
   payload.WithDouble("DateValue", m_dateValue.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
