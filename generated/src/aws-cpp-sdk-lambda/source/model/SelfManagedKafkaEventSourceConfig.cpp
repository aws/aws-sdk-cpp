/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/SelfManagedKafkaEventSourceConfig.h>
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

SelfManagedKafkaEventSourceConfig::SelfManagedKafkaEventSourceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

SelfManagedKafkaEventSourceConfig& SelfManagedKafkaEventSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConsumerGroupId"))
  {
    m_consumerGroupId = jsonValue.GetString("ConsumerGroupId");
    m_consumerGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaRegistryConfig"))
  {
    m_schemaRegistryConfig = jsonValue.GetObject("SchemaRegistryConfig");
    m_schemaRegistryConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue SelfManagedKafkaEventSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_consumerGroupIdHasBeenSet)
  {
   payload.WithString("ConsumerGroupId", m_consumerGroupId);

  }

  if(m_schemaRegistryConfigHasBeenSet)
  {
   payload.WithObject("SchemaRegistryConfig", m_schemaRegistryConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
