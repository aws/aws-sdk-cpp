/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/KeySchemaElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDBStreams
{
namespace Model
{

KeySchemaElement::KeySchemaElement() : 
    m_attributeNameHasBeenSet(false),
    m_keyType(KeyType::NOT_SET),
    m_keyTypeHasBeenSet(false)
{
}

KeySchemaElement::KeySchemaElement(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_keyType(KeyType::NOT_SET),
    m_keyTypeHasBeenSet(false)
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

  if(jsonValue.ValueExists("KeyType"))
  {
    m_keyType = KeyTypeMapper::GetKeyTypeForName(jsonValue.GetString("KeyType"));

    m_keyTypeHasBeenSet = true;
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

  if(m_keyTypeHasBeenSet)
  {
   payload.WithString("KeyType", KeyTypeMapper::GetNameForKeyType(m_keyType));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
