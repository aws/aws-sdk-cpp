/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/FieldValue.h>
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

FieldValue::FieldValue() : 
    m_idHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

FieldValue::FieldValue(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

FieldValue& FieldValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldValue::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
