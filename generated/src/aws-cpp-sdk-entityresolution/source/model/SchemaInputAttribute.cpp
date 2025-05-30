﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/SchemaInputAttribute.h>
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

SchemaInputAttribute::SchemaInputAttribute(JsonView jsonValue)
{
  *this = jsonValue;
}

SchemaInputAttribute& SchemaInputAttribute::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");
    m_groupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchKey"))
  {
    m_matchKey = jsonValue.GetString("matchKey");
    m_matchKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subType"))
  {
    m_subType = jsonValue.GetString("subType");
    m_subTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hashed"))
  {
    m_hashed = jsonValue.GetBool("hashed");
    m_hashedHasBeenSet = true;
  }
  return *this;
}

JsonValue SchemaInputAttribute::Jsonize() const
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

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  if(m_matchKeyHasBeenSet)
  {
   payload.WithString("matchKey", m_matchKey);

  }

  if(m_subTypeHasBeenSet)
  {
   payload.WithString("subType", m_subType);

  }

  if(m_hashedHasBeenSet)
  {
   payload.WithBool("hashed", m_hashed);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
