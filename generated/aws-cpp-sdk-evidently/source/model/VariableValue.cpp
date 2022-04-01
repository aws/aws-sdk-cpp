/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/VariableValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

VariableValue::VariableValue() : 
    m_boolValue(false),
    m_boolValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
}

VariableValue::VariableValue(JsonView jsonValue) : 
    m_boolValue(false),
    m_boolValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
  *this = jsonValue;
}

VariableValue& VariableValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("boolValue"))
  {
    m_boolValue = jsonValue.GetBool("boolValue");

    m_boolValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doubleValue"))
  {
    m_doubleValue = jsonValue.GetDouble("doubleValue");

    m_doubleValueHasBeenSet = true;
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

  return *this;
}

JsonValue VariableValue::Jsonize() const
{
  JsonValue payload;

  if(m_boolValueHasBeenSet)
  {
   payload.WithBool("boolValue", m_boolValue);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("doubleValue", m_doubleValue);

  }

  if(m_longValueHasBeenSet)
  {
   payload.WithInt64("longValue", m_longValue);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
