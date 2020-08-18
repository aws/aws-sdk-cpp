/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDynamoDbTableAttributeDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsDynamoDbTableAttributeDefinition::AwsDynamoDbTableAttributeDefinition() : 
    m_attributeNameHasBeenSet(false),
    m_attributeTypeHasBeenSet(false)
{
}

AwsDynamoDbTableAttributeDefinition::AwsDynamoDbTableAttributeDefinition(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_attributeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDynamoDbTableAttributeDefinition& AwsDynamoDbTableAttributeDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeType"))
  {
    m_attributeType = jsonValue.GetString("AttributeType");

    m_attributeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDynamoDbTableAttributeDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_attributeTypeHasBeenSet)
  {
   payload.WithString("AttributeType", m_attributeType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
