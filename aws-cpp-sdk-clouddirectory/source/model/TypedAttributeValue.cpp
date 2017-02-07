/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/clouddirectory/model/TypedAttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

TypedAttributeValue::TypedAttributeValue() : 
    m_stringValueHasBeenSet(false),
    m_binaryValueHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_numberValueHasBeenSet(false),
    m_datetimeValueHasBeenSet(false)
{
}

TypedAttributeValue::TypedAttributeValue(const JsonValue& jsonValue) : 
    m_stringValueHasBeenSet(false),
    m_binaryValueHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_numberValueHasBeenSet(false),
    m_datetimeValueHasBeenSet(false)
{
  *this = jsonValue;
}

TypedAttributeValue& TypedAttributeValue::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StringValue"))
  {
    m_stringValue = jsonValue.GetString("StringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BinaryValue"))
  {
    m_binaryValue = HashingUtils::Base64Decode(jsonValue.GetString("BinaryValue"));
    m_binaryValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BooleanValue"))
  {
    m_booleanValue = jsonValue.GetBool("BooleanValue");

    m_booleanValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberValue"))
  {
    m_numberValue = jsonValue.GetString("NumberValue");

    m_numberValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatetimeValue"))
  {
    m_datetimeValue = jsonValue.GetDouble("DatetimeValue");

    m_datetimeValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TypedAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("StringValue", m_stringValue);

  }

  if(m_binaryValueHasBeenSet)
  {
   payload.WithString("BinaryValue", HashingUtils::Base64Encode(m_binaryValue));
  }

  if(m_booleanValueHasBeenSet)
  {
   payload.WithBool("BooleanValue", m_booleanValue);

  }

  if(m_numberValueHasBeenSet)
  {
   payload.WithString("NumberValue", m_numberValue);

  }

  if(m_datetimeValueHasBeenSet)
  {
   payload.WithDouble("DatetimeValue", m_datetimeValue.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws