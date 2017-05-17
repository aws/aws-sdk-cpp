/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/xray/model/AnnotationValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

AnnotationValue::AnnotationValue() : 
    m_numberValue(0.0),
    m_numberValueHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
}

AnnotationValue::AnnotationValue(const JsonValue& jsonValue) : 
    m_numberValue(0.0),
    m_numberValueHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
  *this = jsonValue;
}

AnnotationValue& AnnotationValue::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("NumberValue"))
  {
    m_numberValue = jsonValue.GetDouble("NumberValue");

    m_numberValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BooleanValue"))
  {
    m_booleanValue = jsonValue.GetBool("BooleanValue");

    m_booleanValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringValue"))
  {
    m_stringValue = jsonValue.GetString("StringValue");

    m_stringValueHasBeenSet = true;
  }

  return *this;
}

JsonValue AnnotationValue::Jsonize() const
{
  JsonValue payload;

  if(m_numberValueHasBeenSet)
  {
   payload.WithDouble("NumberValue", m_numberValue);

  }

  if(m_booleanValueHasBeenSet)
  {
   payload.WithBool("BooleanValue", m_booleanValue);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("StringValue", m_stringValue);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws