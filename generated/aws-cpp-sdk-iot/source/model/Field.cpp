/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/Field.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

Field::Field() : 
    m_nameHasBeenSet(false),
    m_type(FieldType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Field::Field(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(FieldType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Field& Field::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = FieldTypeMapper::GetFieldTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Field::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FieldTypeMapper::GetNameForFieldType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
