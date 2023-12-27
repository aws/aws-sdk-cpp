/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FieldValueUnion.h>
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

FieldValueUnion::FieldValueUnion() : 
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_emptyValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
}

FieldValueUnion::FieldValueUnion(JsonView jsonValue) : 
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_emptyValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
  *this = jsonValue;
}

FieldValueUnion& FieldValueUnion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BooleanValue"))
  {
    m_booleanValue = jsonValue.GetBool("BooleanValue");

    m_booleanValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DoubleValue"))
  {
    m_doubleValue = jsonValue.GetDouble("DoubleValue");

    m_doubleValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmptyValue"))
  {
    m_emptyValue = jsonValue.GetObject("EmptyValue");

    m_emptyValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringValue"))
  {
    m_stringValue = jsonValue.GetString("StringValue");

    m_stringValueHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldValueUnion::Jsonize() const
{
  JsonValue payload;

  if(m_booleanValueHasBeenSet)
  {
   payload.WithBool("BooleanValue", m_booleanValue);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("DoubleValue", m_doubleValue);

  }

  if(m_emptyValueHasBeenSet)
  {
   payload.WithObject("EmptyValue", m_emptyValue.Jsonize());

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("StringValue", m_stringValue);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
