/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ConversationLogSettings.h>
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

ConversationLogSettings::ConversationLogSettings() : 
    m_textLogSettingsHasBeenSet(false),
    m_audioLogSettingsHasBeenSet(false)
{
}

ConversationLogSettings::ConversationLogSettings(JsonView jsonValue) : 
    m_textLogSettingsHasBeenSet(false),
    m_audioLogSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ConversationLogSettings& ConversationLogSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textLogSettings"))
  {
    Aws::Utils::Array<JsonView> textLogSettingsJsonList = jsonValue.GetArray("textLogSettings");
    for(unsigned textLogSettingsIndex = 0; textLogSettingsIndex < textLogSettingsJsonList.GetLength(); ++textLogSettingsIndex)
    {
      m_textLogSettings.push_back(textLogSettingsJsonList[textLogSettingsIndex].AsObject());
    }
    m_textLogSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioLogSettings"))
  {
    Aws::Utils::Array<JsonView> audioLogSettingsJsonList = jsonValue.GetArray("audioLogSettings");
    for(unsigned audioLogSettingsIndex = 0; audioLogSettingsIndex < audioLogSettingsJsonList.GetLength(); ++audioLogSettingsIndex)
    {
      m_audioLogSettings.push_back(audioLogSettingsJsonList[audioLogSettingsIndex].AsObject());
    }
    m_audioLogSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConversationLogSettings::Jsonize() const
{
  JsonValue payload;

  if(m_textLogSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> textLogSettingsJsonList(m_textLogSettings.size());
   for(unsigned textLogSettingsIndex = 0; textLogSettingsIndex < textLogSettingsJsonList.GetLength(); ++textLogSettingsIndex)
   {
     textLogSettingsJsonList[textLogSettingsIndex].AsObject(m_textLogSettings[textLogSettingsIndex].Jsonize());
   }
   payload.WithArray("textLogSettings", std::move(textLogSettingsJsonList));

  }

  if(m_audioLogSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioLogSettingsJsonList(m_audioLogSettings.size());
   for(unsigned audioLogSettingsIndex = 0; audioLogSettingsIndex < audioLogSettingsJsonList.GetLength(); ++audioLogSettingsIndex)
   {
     audioLogSettingsJsonList[audioLogSettingsIndex].AsObject(m_audioLogSettings[audioLogSettingsIndex].Jsonize());
   }
   payload.WithArray("audioLogSettings", std::move(audioLogSettingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
