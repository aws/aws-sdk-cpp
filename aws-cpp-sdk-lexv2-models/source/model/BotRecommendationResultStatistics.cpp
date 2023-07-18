/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotRecommendationResultStatistics.h>
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

BotRecommendationResultStatistics::BotRecommendationResultStatistics() : 
    m_intentsHasBeenSet(false),
    m_slotTypesHasBeenSet(false)
{
}

BotRecommendationResultStatistics::BotRecommendationResultStatistics(JsonView jsonValue) : 
    m_intentsHasBeenSet(false),
    m_slotTypesHasBeenSet(false)
{
  *this = jsonValue;
}

BotRecommendationResultStatistics& BotRecommendationResultStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intents"))
  {
    m_intents = jsonValue.GetObject("intents");

    m_intentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotTypes"))
  {
    m_slotTypes = jsonValue.GetObject("slotTypes");

    m_slotTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue BotRecommendationResultStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_intentsHasBeenSet)
  {
   payload.WithObject("intents", m_intents.Jsonize());

  }

  if(m_slotTypesHasBeenSet)
  {
   payload.WithObject("slotTypes", m_slotTypes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
