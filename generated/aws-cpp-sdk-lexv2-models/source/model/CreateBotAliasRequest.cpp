/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateBotAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBotAliasRequest::CreateBotAliasRequest() : 
    m_botAliasNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_botAliasLocaleSettingsHasBeenSet(false),
    m_conversationLogSettingsHasBeenSet(false),
    m_sentimentAnalysisSettingsHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateBotAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_botAliasNameHasBeenSet)
  {
   payload.WithString("botAliasName", m_botAliasName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_botAliasLocaleSettingsHasBeenSet)
  {
   JsonValue botAliasLocaleSettingsJsonMap;
   for(auto& botAliasLocaleSettingsItem : m_botAliasLocaleSettings)
   {
     botAliasLocaleSettingsJsonMap.WithObject(botAliasLocaleSettingsItem.first, botAliasLocaleSettingsItem.second.Jsonize());
   }
   payload.WithObject("botAliasLocaleSettings", std::move(botAliasLocaleSettingsJsonMap));

  }

  if(m_conversationLogSettingsHasBeenSet)
  {
   payload.WithObject("conversationLogSettings", m_conversationLogSettings.Jsonize());

  }

  if(m_sentimentAnalysisSettingsHasBeenSet)
  {
   payload.WithObject("sentimentAnalysisSettings", m_sentimentAnalysisSettings.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




