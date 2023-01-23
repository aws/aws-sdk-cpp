/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/AttributeDefinition.h>
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

AttributeDefinition::AttributeDefinition() : 
    m_attributeNameHasBeenSet(false),
    m_attributeType(ScalarAttributeType::NOT_SET),
    m_attributeTypeHasBeenSet(false)
{
}

AttributeDefinition::AttributeDefinition(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_attributeType(ScalarAttributeType::NOT_SET),
    m_attributeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeDefinition& AttributeDefinition::operator =(JsonView jsonValue)
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

JsonValue AttributeDefinition::Jsonize() const
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
