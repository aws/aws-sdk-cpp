/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/Value.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rds-data/model/StructValue.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

Value::Value() : 
    m_isNull(false),
    m_isNullHasBeenSet(false),
    m_bitValue(false),
    m_bitValueHasBeenSet(false),
    m_bigIntValue(0),
    m_bigIntValueHasBeenSet(false),
    m_intValue(0),
    m_intValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_realValue(0.0),
    m_realValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_blobValueHasBeenSet(false),
    m_arrayValuesHasBeenSet(false),
    m_structValueHasBeenSet(false)
{
}

Value::Value(JsonView jsonValue) : 
    m_isNull(false),
    m_isNullHasBeenSet(false),
    m_bitValue(false),
    m_bitValueHasBeenSet(false),
    m_bigIntValue(0),
    m_bigIntValueHasBeenSet(false),
    m_intValue(0),
    m_intValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_realValue(0.0),
    m_realValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_blobValueHasBeenSet(false),
    m_arrayValuesHasBeenSet(false),
    m_structValueHasBeenSet(false)
{
  *this = jsonValue;
}

const StructValue& Value::GetStructValue() const{ return *m_structValue; }
bool Value::StructValueHasBeenSet() const { return m_structValueHasBeenSet; }
void Value::SetStructValue(const StructValue& value) { m_structValueHasBeenSet = true; m_structValue = Aws::MakeShared<StructValue>("Value", value); }
void Value::SetStructValue(StructValue&& value) { m_structValueHasBeenSet = true; m_structValue = Aws::MakeShared<StructValue>("Value", std::move(value)); }
Value& Value::WithStructValue(const StructValue& value) { SetStructValue(value); return *this;}
Value& Value::WithStructValue(StructValue&& value) { SetStructValue(std::move(value)); return *this;}

Value& Value::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isNull"))
  {
    m_isNull = jsonValue.GetBool("isNull");

    m_isNullHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitValue"))
  {
    m_bitValue = jsonValue.GetBool("bitValue");

    m_bitValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bigIntValue"))
  {
    m_bigIntValue = jsonValue.GetInt64("bigIntValue");

    m_bigIntValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intValue"))
  {
    m_intValue = jsonValue.GetInteger("intValue");

    m_intValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doubleValue"))
  {
    m_doubleValue = jsonValue.GetDouble("doubleValue");

    m_doubleValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("realValue"))
  {
    m_realValue = jsonValue.GetDouble("realValue");

    m_realValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blobValue"))
  {
    m_blobValue = HashingUtils::Base64Decode(jsonValue.GetString("blobValue"));
    m_blobValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arrayValues"))
  {
    Aws::Utils::Array<JsonView> arrayValuesJsonList = jsonValue.GetArray("arrayValues");
    for(unsigned arrayValuesIndex = 0; arrayValuesIndex < arrayValuesJsonList.GetLength(); ++arrayValuesIndex)
    {
      m_arrayValues.push_back(arrayValuesJsonList[arrayValuesIndex].AsObject());
    }
    m_arrayValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("structValue"))
  {
    m_structValue = Aws::MakeShared<StructValue>("Value", jsonValue.GetObject("structValue"));

    m_structValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Value::Jsonize() const
{
  JsonValue payload;

  if(m_isNullHasBeenSet)
  {
   payload.WithBool("isNull", m_isNull);

  }

  if(m_bitValueHasBeenSet)
  {
   payload.WithBool("bitValue", m_bitValue);

  }

  if(m_bigIntValueHasBeenSet)
  {
   payload.WithInt64("bigIntValue", m_bigIntValue);

  }

  if(m_intValueHasBeenSet)
  {
   payload.WithInteger("intValue", m_intValue);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("doubleValue", m_doubleValue);

  }

  if(m_realValueHasBeenSet)
  {
   payload.WithDouble("realValue", m_realValue);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_blobValueHasBeenSet)
  {
   payload.WithString("blobValue", HashingUtils::Base64Encode(m_blobValue));
  }

  if(m_arrayValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> arrayValuesJsonList(m_arrayValues.size());
   for(unsigned arrayValuesIndex = 0; arrayValuesIndex < arrayValuesJsonList.GetLength(); ++arrayValuesIndex)
   {
     arrayValuesJsonList[arrayValuesIndex].AsObject(m_arrayValues[arrayValuesIndex].Jsonize());
   }
   payload.WithArray("arrayValues", std::move(arrayValuesJsonList));

  }

  if(m_structValueHasBeenSet)
  {
   payload.WithObject("structValue", m_structValue->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
