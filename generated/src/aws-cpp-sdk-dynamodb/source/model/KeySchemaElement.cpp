/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/KeySchemaElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

KeySchemaElement::KeySchemaElement() : 
    m_attributeNameHasBeenSet(false),
    m_attributeType(ScalarAttributeType::NOT_SET),
    m_attributeTypeHasBeenSet(false)
{
}

KeySchemaElement::KeySchemaElement(JsonView jsonValue)
  : KeySchemaElement()
{
  *this = jsonValue;
}

KeySchemaElement& KeySchemaElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeType"))
  {
    m_attributeType = ScalarAttributeTypeMapper::GetScalarAttributeTypeForName(jsonValue.GetString("AttributeType"));

    m_attributeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue KeySchemaElement::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_attributeTypeHasBeenSet)
  {
   payload.WithString("AttributeType", ScalarAttributeTypeMapper::GetNameForScalarAttributeType(m_attributeType));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
