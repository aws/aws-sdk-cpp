/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Reference.h>
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

Reference::Reference() : 
    m_valueHasBeenSet(false),
    m_type(ReferenceType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Reference::Reference(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_type(ReferenceType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Reference& Reference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ReferenceTypeMapper::GetReferenceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Reference::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ReferenceTypeMapper::GetNameForReferenceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
