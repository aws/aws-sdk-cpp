/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkSendDataToDevice.h>
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

SidewalkSendDataToDevice::SidewalkSendDataToDevice() : 
    m_seq(0),
    m_seqHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_ackModeRetryDurationSecs(0),
    m_ackModeRetryDurationSecsHasBeenSet(false)
{
}

SidewalkSendDataToDevice::SidewalkSendDataToDevice(JsonView jsonValue) : 
    m_seq(0),
    m_seqHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_ackModeRetryDurationSecs(0),
    m_ackModeRetryDurationSecsHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkSendDataToDevice& SidewalkSendDataToDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Seq"))
  {
    m_seq = jsonValue.GetInteger("Seq");

    m_seqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageType"))
  {
    m_messageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("MessageType"));

    m_messageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AckModeRetryDurationSecs"))
  {
    m_ackModeRetryDurationSecs = jsonValue.GetInteger("AckModeRetryDurationSecs");

    m_ackModeRetryDurationSecsHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkSendDataToDevice::Jsonize() const
{
  JsonValue payload;

  if(m_seqHasBeenSet)
  {
   payload.WithInteger("Seq", m_seq);

  }

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_ackModeRetryDurationSecsHasBeenSet)
  {
   payload.WithInteger("AckModeRetryDurationSecs", m_ackModeRetryDurationSecs);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
