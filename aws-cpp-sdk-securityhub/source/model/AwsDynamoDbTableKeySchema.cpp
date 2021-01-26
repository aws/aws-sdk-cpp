/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDynamoDbTableKeySchema.h>
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

AwsDynamoDbTableKeySchema::AwsDynamoDbTableKeySchema() : 
    m_attributeNameHasBeenSet(false),
    m_keyTypeHasBeenSet(false)
{
}

AwsDynamoDbTableKeySchema::AwsDynamoDbTableKeySchema(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_keyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDynamoDbTableKeySchema& AwsDynamoDbTableKeySchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyType"))
  {
    m_keyType = jsonValue.GetString("KeyType");

    m_keyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDynamoDbTableKeySchema::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_keyTypeHasBeenSet)
  {
   payload.WithString("KeyType", m_keyType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
