/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateBotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBotRequest::CreateBotRequest() : 
    m_botNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_dataPrivacyHasBeenSet(false),
    m_idleSessionTTLInSeconds(0),
    m_idleSessionTTLInSecondsHasBeenSet(false),
    m_botTagsHasBeenSet(false),
    m_testBotAliasTagsHasBeenSet(false)
{
}

Aws::String CreateBotRequest::SerializePayload() const
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

  if(m_botTagsHasBeenSet)
  {
   JsonValue botTagsJsonMap;
   for(auto& botTagsItem : m_botTags)
   {
     botTagsJsonMap.WithString(botTagsItem.first, botTagsItem.second);
   }
   payload.WithObject("botTags", std::move(botTagsJsonMap));

  }

  if(m_testBotAliasTagsHasBeenSet)
  {
   JsonValue testBotAliasTagsJsonMap;
   for(auto& testBotAliasTagsItem : m_testBotAliasTags)
   {
     testBotAliasTagsJsonMap.WithString(testBotAliasTagsItem.first, testBotAliasTagsItem.second);
   }
   payload.WithObject("testBotAliasTags", std::move(testBotAliasTagsJsonMap));

  }

  return payload.View().WriteReadable();
}




