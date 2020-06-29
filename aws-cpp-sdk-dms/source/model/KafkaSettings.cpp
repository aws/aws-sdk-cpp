/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/KafkaSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

KafkaSettings::KafkaSettings() : 
    m_brokerHasBeenSet(false),
    m_topicHasBeenSet(false)
{
}

KafkaSettings::KafkaSettings(JsonView jsonValue) : 
    m_brokerHasBeenSet(false),
    m_topicHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaSettings& KafkaSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Broker"))
  {
    m_broker = jsonValue.GetString("Broker");

    m_brokerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Topic"))
  {
    m_topic = jsonValue.GetString("Topic");

    m_topicHasBeenSet = true;
  }

  return *this;
}

JsonValue KafkaSettings::Jsonize() const
{
  JsonValue payload;

  if(m_brokerHasBeenSet)
  {
   payload.WithString("Broker", m_broker);

  }

  if(m_topicHasBeenSet)
  {
   payload.WithString("Topic", m_topic);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
