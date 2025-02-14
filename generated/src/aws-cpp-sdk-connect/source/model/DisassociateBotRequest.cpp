/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateBotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateBotRequest::DisassociateBotRequest() : 
    m_instanceIdHasBeenSet(false),
    m_lexBotHasBeenSet(false),
    m_lexV2BotHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String DisassociateBotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lexBotHasBeenSet)
  {
   payload.WithObject("LexBot", m_lexBot.Jsonize());

  }

  if(m_lexV2BotHasBeenSet)
  {
   payload.WithObject("LexV2Bot", m_lexV2Bot.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




