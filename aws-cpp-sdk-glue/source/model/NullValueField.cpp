/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/NullValueField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

NullValueField::NullValueField() : 
    m_valueHasBeenSet(false),
    m_datatypeHasBeenSet(false)
{
}

NullValueField::NullValueField(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_datatypeHasBeenSet(false)
{
  *this = jsonValue;
}

NullValueField& NullValueField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Datatype"))
  {
    m_datatype = jsonValue.GetObject("Datatype");

    m_datatypeHasBeenSet = true;
  }

  return *this;
}

JsonValue NullValueField::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_datatypeHasBeenSet)
  {
   payload.WithObject("Datatype", m_datatype.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
