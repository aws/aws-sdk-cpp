/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/KafkaSchemaRegistryAccessConfig.h>
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

KafkaSchemaRegistryAccessConfig::KafkaSchemaRegistryAccessConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

KafkaSchemaRegistryAccessConfig& KafkaSchemaRegistryAccessConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = KafkaSchemaRegistryAuthTypeMapper::GetKafkaSchemaRegistryAuthTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("URI"))
  {
    m_uRI = jsonValue.GetString("URI");
    m_uRIHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaSchemaRegistryAccessConfig::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", KafkaSchemaRegistryAuthTypeMapper::GetNameForKafkaSchemaRegistryAuthType(m_type));
  }

  if(m_uRIHasBeenSet)
  {
   payload.WithString("URI", m_uRI);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
