/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
