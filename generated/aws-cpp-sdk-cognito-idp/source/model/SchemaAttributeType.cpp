/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SchemaAttributeType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

SchemaAttributeType::SchemaAttributeType() : 
    m_nameHasBeenSet(false),
    m_attributeDataType(AttributeDataType::NOT_SET),
    m_attributeDataTypeHasBeenSet(false),
    m_developerOnlyAttribute(false),
    m_developerOnlyAttributeHasBeenSet(false),
    m_mutable(false),
    m_mutableHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_numberAttributeConstraintsHasBeenSet(false),
    m_stringAttributeConstraintsHasBeenSet(false)
{
}

SchemaAttributeType::SchemaAttributeType(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_attributeDataType(AttributeDataType::NOT_SET),
    m_attributeDataTypeHasBeenSet(false),
    m_developerOnlyAttribute(false),
    m_developerOnlyAttributeHasBeenSet(false),
    m_mutable(false),
    m_mutableHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_numberAttributeConstraintsHasBeenSet(false),
    m_stringAttributeConstraintsHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaAttributeType& SchemaAttributeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeDataType"))
  {
    m_attributeDataType = AttributeDataTypeMapper::GetAttributeDataTypeForName(jsonValue.GetString("AttributeDataType"));

    m_attributeDataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeveloperOnlyAttribute"))
  {
    m_developerOnlyAttribute = jsonValue.GetBool("DeveloperOnlyAttribute");

    m_developerOnlyAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mutable"))
  {
    m_mutable = jsonValue.GetBool("Mutable");

    m_mutableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Required"))
  {
    m_required = jsonValue.GetBool("Required");

    m_requiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberAttributeConstraints"))
  {
    m_numberAttributeConstraints = jsonValue.GetObject("NumberAttributeConstraints");

    m_numberAttributeConstraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringAttributeConstraints"))
  {
    m_stringAttributeConstraints = jsonValue.GetObject("StringAttributeConstraints");

    m_stringAttributeConstraintsHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaAttributeType::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_attributeDataTypeHasBeenSet)
  {
   payload.WithString("AttributeDataType", AttributeDataTypeMapper::GetNameForAttributeDataType(m_attributeDataType));
  }

  if(m_developerOnlyAttributeHasBeenSet)
  {
   payload.WithBool("DeveloperOnlyAttribute", m_developerOnlyAttribute);

  }

  if(m_mutableHasBeenSet)
  {
   payload.WithBool("Mutable", m_mutable);

  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("Required", m_required);

  }

  if(m_numberAttributeConstraintsHasBeenSet)
  {
   payload.WithObject("NumberAttributeConstraints", m_numberAttributeConstraints.Jsonize());

  }

  if(m_stringAttributeConstraintsHasBeenSet)
  {
   payload.WithObject("StringAttributeConstraints", m_stringAttributeConstraints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
