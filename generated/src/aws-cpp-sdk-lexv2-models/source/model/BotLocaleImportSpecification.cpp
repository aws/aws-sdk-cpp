/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotLocaleImportSpecification.h>
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

BotLocaleImportSpecification::BotLocaleImportSpecification() : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_nluIntentConfidenceThreshold(0.0),
    m_nluIntentConfidenceThresholdHasBeenSet(false),
    m_voiceSettingsHasBeenSet(false)
{
}

BotLocaleImportSpecification::BotLocaleImportSpecification(JsonView jsonValue) : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_nluIntentConfidenceThreshold(0.0),
    m_nluIntentConfidenceThresholdHasBeenSet(false),
    m_voiceSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

BotLocaleImportSpecification& BotLocaleImportSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

    m_botIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

    m_localeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nluIntentConfidenceThreshold"))
  {
    m_nluIntentConfidenceThreshold = jsonValue.GetDouble("nluIntentConfidenceThreshold");

    m_nluIntentConfidenceThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("voiceSettings"))
  {
    m_voiceSettings = jsonValue.GetObject("voiceSettings");

    m_voiceSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue BotLocaleImportSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_botIdHasBeenSet)
  {
   payload.WithString("botId", m_botId);

  }

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_localeIdHasBeenSet)
  {
   payload.WithString("localeId", m_localeId);

  }

  if(m_nluIntentConfidenceThresholdHasBeenSet)
  {
   payload.WithDouble("nluIntentConfidenceThreshold", m_nluIntentConfidenceThreshold);

  }

  if(m_voiceSettingsHasBeenSet)
  {
   payload.WithObject("voiceSettings", m_voiceSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
