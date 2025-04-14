/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/ProviderSchemaAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

ProviderSchemaAttribute::ProviderSchemaAttribute(JsonView jsonValue)
{
  *this = jsonValue;
}

ProviderSchemaAttribute& ProviderSchemaAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldName"))
  {
    m_fieldName = jsonValue.GetString("fieldName");
    m_fieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = SchemaAttributeTypeMapper::GetSchemaAttributeTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subType"))
  {
    m_subType = jsonValue.GetString("subType");
    m_subTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hashing"))
  {
    m_hashing = jsonValue.GetBool("hashing");
    m_hashingHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderSchemaAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("fieldName", m_fieldName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SchemaAttributeTypeMapper::GetNameForSchemaAttributeType(m_type));
  }

  if(m_subTypeHasBeenSet)
  {
   payload.WithString("subType", m_subType);

  }

  if(m_hashingHasBeenSet)
  {
   payload.WithBool("hashing", m_hashing);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
