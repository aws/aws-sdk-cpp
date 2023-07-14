/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/Field.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

Field::Field() : 
    m_keyHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_refValueHasBeenSet(false)
{
}

Field::Field(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_refValueHasBeenSet(false)
{
  *this = jsonValue;
}

Field& Field::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("refValue"))
  {
    m_refValue = jsonValue.GetString("refValue");

    m_refValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Field::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_refValueHasBeenSet)
  {
   payload.WithString("refValue", m_refValue);

  }

  return payload;
}

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
