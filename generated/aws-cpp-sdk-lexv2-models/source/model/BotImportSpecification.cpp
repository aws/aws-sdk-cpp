/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotImportSpecification.h>
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

BotImportSpecification::BotImportSpecification() : 
    m_botNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_dataPrivacyHasBeenSet(false),
    m_idleSessionTTLInSeconds(0),
    m_idleSessionTTLInSecondsHasBeenSet(false),
    m_botTagsHasBeenSet(false),
    m_testBotAliasTagsHasBeenSet(false)
{
}

BotImportSpecification::BotImportSpecification(JsonView jsonValue) : 
    m_botNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_dataPrivacyHasBeenSet(false),
    m_idleSessionTTLInSeconds(0),
    m_idleSessionTTLInSecondsHasBeenSet(false),
    m_botTagsHasBeenSet(false),
    m_testBotAliasTagsHasBeenSet(false)
{
  *this = jsonValue;
}

BotImportSpecification& BotImportSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botName"))
  {
    m_botName = jsonValue.GetString("botName");

    m_botNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataPrivacy"))
  {
    m_dataPrivacy = jsonValue.GetObject("dataPrivacy");

    m_dataPrivacyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("idleSessionTTLInSeconds"))
  {
    m_idleSessionTTLInSeconds = jsonValue.GetInteger("idleSessionTTLInSeconds");

    m_idleSessionTTLInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botTags"))
  {
    Aws::Map<Aws::String, JsonView> botTagsJsonMap = jsonValue.GetObject("botTags").GetAllObjects();
    for(auto& botTagsItem : botTagsJsonMap)
    {
      m_botTags[botTagsItem.first] = botTagsItem.second.AsString();
    }
    m_botTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testBotAliasTags"))
  {
    Aws::Map<Aws::String, JsonView> testBotAliasTagsJsonMap = jsonValue.GetObject("testBotAliasTags").GetAllObjects();
    for(auto& testBotAliasTagsItem : testBotAliasTagsJsonMap)
    {
      m_testBotAliasTags[testBotAliasTagsItem.first] = testBotAliasTagsItem.second.AsString();
    }
    m_testBotAliasTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue BotImportSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_botNameHasBeenSet)
  {
   payload.WithString("botName", m_botName);

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

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
