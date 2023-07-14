﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/Message.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

Message::Message() : 
    m_messageIdHasBeenSet(false),
    m_inputNameHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

Message::Message(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_inputNameHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

Message& Message::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageId"))
  {
    m_messageId = jsonValue.GetString("messageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputName"))
  {
    m_inputName = jsonValue.GetString("inputName");

    m_inputNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = HashingUtils::Base64Decode(jsonValue.GetString("payload"));
    m_payloadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetObject("timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Message::Jsonize() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("messageId", m_messageId);

  }

  if(m_inputNameHasBeenSet)
  {
   payload.WithString("inputName", m_inputName);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithString("payload", HashingUtils::Base64Encode(m_payload));
  }

  if(m_timestampHasBeenSet)
  {
   payload.WithObject("timestamp", m_timestamp.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
