/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DownlinkQueueMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

DownlinkQueueMessage::DownlinkQueueMessage() : 
    m_messageIdHasBeenSet(false),
    m_transmitMode(0),
    m_transmitModeHasBeenSet(false),
    m_receivedAtHasBeenSet(false),
    m_loRaWANHasBeenSet(false)
{
}

DownlinkQueueMessage::DownlinkQueueMessage(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_transmitMode(0),
    m_transmitModeHasBeenSet(false),
    m_receivedAtHasBeenSet(false),
    m_loRaWANHasBeenSet(false)
{
  *this = jsonValue;
}

DownlinkQueueMessage& DownlinkQueueMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransmitMode"))
  {
    m_transmitMode = jsonValue.GetInteger("TransmitMode");

    m_transmitModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReceivedAt"))
  {
    m_receivedAt = jsonValue.GetString("ReceivedAt");

    m_receivedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoRaWAN"))
  {
    m_loRaWAN = jsonValue.GetObject("LoRaWAN");

    m_loRaWANHasBeenSet = true;
  }

  return *this;
}

JsonValue DownlinkQueueMessage::Jsonize() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("MessageId", m_messageId);

  }

  if(m_transmitModeHasBeenSet)
  {
   payload.WithInteger("TransmitMode", m_transmitMode);

  }

  if(m_receivedAtHasBeenSet)
  {
   payload.WithString("ReceivedAt", m_receivedAt);

  }

  if(m_loRaWANHasBeenSet)
  {
   payload.WithObject("LoRaWAN", m_loRaWAN.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
