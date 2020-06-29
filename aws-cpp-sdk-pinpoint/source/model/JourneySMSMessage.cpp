/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneySMSMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneySMSMessage::JourneySMSMessage() : 
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_senderIdHasBeenSet(false)
{
}

JourneySMSMessage::JourneySMSMessage(JsonView jsonValue) : 
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_senderIdHasBeenSet(false)
{
  *this = jsonValue;
}

JourneySMSMessage& JourneySMSMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageType"))
  {
    m_messageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("MessageType"));

    m_messageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SenderId"))
  {
    m_senderId = jsonValue.GetString("SenderId");

    m_senderIdHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneySMSMessage::Jsonize() const
{
  JsonValue payload;

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_senderIdHasBeenSet)
  {
   payload.WithString("SenderId", m_senderId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
