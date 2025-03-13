/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/MqttTopicConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

MqttTopicConfig::MqttTopicConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

MqttTopicConfig& MqttTopicConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mqttTopicArn"))
  {
    m_mqttTopicArn = jsonValue.GetString("mqttTopicArn");
    m_mqttTopicArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue MqttTopicConfig::Jsonize() const
{
  JsonValue payload;

  if(m_mqttTopicArnHasBeenSet)
  {
   payload.WithString("mqttTopicArn", m_mqttTopicArn);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
