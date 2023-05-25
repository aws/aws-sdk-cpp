/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/IotTopicPublishAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

IotTopicPublishAction::IotTopicPublishAction() : 
    m_mqttTopicHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

IotTopicPublishAction::IotTopicPublishAction(JsonView jsonValue) : 
    m_mqttTopicHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
  *this = jsonValue;
}

IotTopicPublishAction& IotTopicPublishAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mqttTopic"))
  {
    m_mqttTopic = jsonValue.GetString("mqttTopic");

    m_mqttTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetObject("payload");

    m_payloadHasBeenSet = true;
  }

  return *this;
}

JsonValue IotTopicPublishAction::Jsonize() const
{
  JsonValue payload;

  if(m_mqttTopicHasBeenSet)
  {
   payload.WithString("mqttTopic", m_mqttTopic);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithObject("payload", m_payload.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
