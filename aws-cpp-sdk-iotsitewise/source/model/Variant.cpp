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

#include <aws/iotsitewise/model/Variant.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Variant::Variant() : 
    m_stringValueHasBeenSet(false),
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false)
{
}

Variant::Variant(JsonView jsonValue) : 
    m_stringValueHasBeenSet(false),
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false)
{
  *this = jsonValue;
}

Variant& Variant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integerValue"))
  {
    m_integerValue = jsonValue.GetInteger("integerValue");

    m_integerValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doubleValue"))
  {
    m_doubleValue = jsonValue.GetDouble("doubleValue");

    m_doubleValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("booleanValue"))
  {
    m_booleanValue = jsonValue.GetBool("booleanValue");

    m_booleanValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Variant::Jsonize() const
{
  JsonValue payload;

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_integerValueHasBeenSet)
  {
   payload.WithInteger("integerValue", m_integerValue);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("doubleValue", m_doubleValue);

  }

  if(m_booleanValueHasBeenSet)
  {
   payload.WithBool("booleanValue", m_booleanValue);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
