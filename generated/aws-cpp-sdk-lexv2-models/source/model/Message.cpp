/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/Message.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

Message::Message() : 
    m_plainTextMessageHasBeenSet(false),
    m_customPayloadHasBeenSet(false),
    m_ssmlMessageHasBeenSet(false),
    m_imageResponseCardHasBeenSet(false)
{
}

Message::Message(JsonView jsonValue) : 
    m_plainTextMessageHasBeenSet(false),
    m_customPayloadHasBeenSet(false),
    m_ssmlMessageHasBeenSet(false),
    m_imageResponseCardHasBeenSet(false)
{
  *this = jsonValue;
}

Message& Message::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("plainTextMessage"))
  {
    m_plainTextMessage = jsonValue.GetObject("plainTextMessage");

    m_plainTextMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customPayload"))
  {
    m_customPayload = jsonValue.GetObject("customPayload");

    m_customPayloadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssmlMessage"))
  {
    m_ssmlMessage = jsonValue.GetObject("ssmlMessage");

    m_ssmlMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageResponseCard"))
  {
    m_imageResponseCard = jsonValue.GetObject("imageResponseCard");

    m_imageResponseCardHasBeenSet = true;
  }

  return *this;
}

JsonValue Message::Jsonize() const
{
  JsonValue payload;

  if(m_plainTextMessageHasBeenSet)
  {
   payload.WithObject("plainTextMessage", m_plainTextMessage.Jsonize());

  }

  if(m_customPayloadHasBeenSet)
  {
   payload.WithObject("customPayload", m_customPayload.Jsonize());

  }

  if(m_ssmlMessageHasBeenSet)
  {
   payload.WithObject("ssmlMessage", m_ssmlMessage.Jsonize());

  }

  if(m_imageResponseCardHasBeenSet)
  {
   payload.WithObject("imageResponseCard", m_imageResponseCard.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
