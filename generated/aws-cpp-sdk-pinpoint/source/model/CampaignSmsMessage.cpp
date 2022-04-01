/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CampaignSmsMessage.h>
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

CampaignSmsMessage::CampaignSmsMessage() : 
    m_bodyHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_originationNumberHasBeenSet(false),
    m_senderIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

CampaignSmsMessage::CampaignSmsMessage(JsonView jsonValue) : 
    m_bodyHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_originationNumberHasBeenSet(false),
    m_senderIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignSmsMessage& CampaignSmsMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageType"))
  {
    m_messageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("MessageType"));

    m_messageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginationNumber"))
  {
    m_originationNumber = jsonValue.GetString("OriginationNumber");

    m_originationNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SenderId"))
  {
    m_senderId = jsonValue.GetString("SenderId");

    m_senderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetString("EntityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateId"))
  {
    m_templateId = jsonValue.GetString("TemplateId");

    m_templateIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CampaignSmsMessage::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_originationNumberHasBeenSet)
  {
   payload.WithString("OriginationNumber", m_originationNumber);

  }

  if(m_senderIdHasBeenSet)
  {
   payload.WithString("SenderId", m_senderId);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("TemplateId", m_templateId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
