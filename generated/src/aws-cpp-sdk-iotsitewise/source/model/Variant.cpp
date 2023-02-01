/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
