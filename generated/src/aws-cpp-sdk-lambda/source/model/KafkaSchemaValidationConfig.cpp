/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/KafkaSchemaValidationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

KafkaSchemaValidationConfig::KafkaSchemaValidationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

KafkaSchemaValidationConfig& KafkaSchemaValidationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = KafkaSchemaValidationAttributeMapper::GetKafkaSchemaValidationAttributeForName(jsonValue.GetString("Attribute"));
    m_attributeHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaSchemaValidationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", KafkaSchemaValidationAttributeMapper::GetNameForKafkaSchemaValidationAttribute(m_attribute));
  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
