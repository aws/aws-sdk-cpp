/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotRecommendationResults.h>
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

BotRecommendationResults::BotRecommendationResults() : 
    m_botLocaleExportUrlHasBeenSet(false),
    m_associatedTranscriptsUrlHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

BotRecommendationResults::BotRecommendationResults(JsonView jsonValue) : 
    m_botLocaleExportUrlHasBeenSet(false),
    m_associatedTranscriptsUrlHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
  *this = jsonValue;
}

BotRecommendationResults& BotRecommendationResults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botLocaleExportUrl"))
  {
    m_botLocaleExportUrl = jsonValue.GetString("botLocaleExportUrl");

    m_botLocaleExportUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedTranscriptsUrl"))
  {
    m_associatedTranscriptsUrl = jsonValue.GetString("associatedTranscriptsUrl");

    m_associatedTranscriptsUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statistics"))
  {
    m_statistics = jsonValue.GetObject("statistics");

    m_statisticsHasBeenSet = true;
  }

  return *this;
}

JsonValue BotRecommendationResults::Jsonize() const
{
  JsonValue payload;

  if(m_botLocaleExportUrlHasBeenSet)
  {
   payload.WithString("botLocaleExportUrl", m_botLocaleExportUrl);

  }

  if(m_associatedTranscriptsUrlHasBeenSet)
  {
   payload.WithString("associatedTranscriptsUrl", m_associatedTranscriptsUrl);

  }

  if(m_statisticsHasBeenSet)
  {
   payload.WithObject("statistics", m_statistics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
