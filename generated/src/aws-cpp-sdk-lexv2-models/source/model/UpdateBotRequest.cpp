/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UpdateBotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBotRequest::UpdateBotRequest() : 
    m_botIdHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_dataPrivacyHasBeenSet(false),
    m_idleSessionTTLInSeconds(0),
    m_idleSessionTTLInSecondsHasBeenSet(false),
    m_botType(BotType::NOT_SET),
    m_botTypeHasBeenSet(false),
    m_botMembersHasBeenSet(false)
{
}

Aws::String UpdateBotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_botNameHasBeenSet)
  {
   payload.WithString("botName", m_botName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_dataPrivacyHasBeenSet)
  {
   payload.WithObject("dataPrivacy", m_dataPrivacy.Jsonize());

  }

  if(m_idleSessionTTLInSecondsHasBeenSet)
  {
   payload.WithInteger("idleSessionTTLInSeconds", m_idleSessionTTLInSeconds);

  }

  if(m_botTypeHasBeenSet)
  {
   payload.WithString("botType", BotTypeMapper::GetNameForBotType(m_botType));
  }

  if(m_botMembersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> botMembersJsonList(m_botMembers.size());
   for(unsigned botMembersIndex = 0; botMembersIndex < botMembersJsonList.GetLength(); ++botMembersIndex)
   {
     botMembersJsonList[botMembersIndex].AsObject(m_botMembers[botMembersIndex].Jsonize());
   }
   payload.WithArray("botMembers", std::move(botMembersJsonList));

  }

  return payload.View().WriteReadable();
}




