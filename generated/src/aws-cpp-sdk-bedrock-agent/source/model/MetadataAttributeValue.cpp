/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MetadataAttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

MetadataAttributeValue::MetadataAttributeValue() : 
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_numberValue(0.0),
    m_numberValueHasBeenSet(false),
    m_stringListValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_type(MetadataValueType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

MetadataAttributeValue::MetadataAttributeValue(JsonView jsonValue)
  : MetadataAttributeValue()
{
  *this = jsonValue;
}

MetadataAttributeValue& MetadataAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("booleanValue"))
  {
    m_booleanValue = jsonValue.GetBool("booleanValue");

    m_booleanValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberValue"))
  {
    m_numberValue = jsonValue.GetDouble("numberValue");

    m_numberValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringListValue"))
  {
    Aws::Utils::Array<JsonView> stringListValueJsonList = jsonValue.GetArray("stringListValue");
    for(unsigned stringListValueIndex = 0; stringListValueIndex < stringListValueJsonList.GetLength(); ++stringListValueIndex)
    {
      m_stringListValue.push_back(stringListValueJsonList[stringListValueIndex].AsString());
    }
    m_stringListValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = MetadataValueTypeMapper::GetMetadataValueTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue MetadataAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_booleanValueHasBeenSet)
  {
   payload.WithBool("booleanValue", m_booleanValue);

  }

  if(m_numberValueHasBeenSet)
  {
   payload.WithDouble("numberValue", m_numberValue);

  }

  if(m_stringListValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringListValueJsonList(m_stringListValue.size());
   for(unsigned stringListValueIndex = 0; stringListValueIndex < stringListValueJsonList.GetLength(); ++stringListValueIndex)
   {
     stringListValueJsonList[stringListValueIndex].AsString(m_stringListValue[stringListValueIndex]);
   }
   payload.WithArray("stringListValue", std::move(stringListValueJsonList));

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MetadataValueTypeMapper::GetNameForMetadataValueType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
