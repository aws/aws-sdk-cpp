/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/FieldValueUnion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

FieldValueUnion::FieldValueUnion() : 
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
}

FieldValueUnion::FieldValueUnion(JsonView jsonValue) : 
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
  *this = jsonValue;
}

FieldValueUnion& FieldValueUnion::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldValueUnion::Jsonize() const
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

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
