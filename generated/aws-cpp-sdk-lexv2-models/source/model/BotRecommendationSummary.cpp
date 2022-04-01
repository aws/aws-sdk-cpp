/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotRecommendationSummary.h>
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

BotRecommendationSummary::BotRecommendationSummary() : 
    m_botRecommendationStatus(BotRecommendationStatus::NOT_SET),
    m_botRecommendationStatusHasBeenSet(false),
    m_botRecommendationIdHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

BotRecommendationSummary::BotRecommendationSummary(JsonView jsonValue) : 
    m_botRecommendationStatus(BotRecommendationStatus::NOT_SET),
    m_botRecommendationStatusHasBeenSet(false),
    m_botRecommendationIdHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BotRecommendationSummary& BotRecommendationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botRecommendationStatus"))
  {
    m_botRecommendationStatus = BotRecommendationStatusMapper::GetBotRecommendationStatusForName(jsonValue.GetString("botRecommendationStatus"));

    m_botRecommendationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botRecommendationId"))
  {
    m_botRecommendationId = jsonValue.GetString("botRecommendationId");

    m_botRecommendationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue BotRecommendationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_botRecommendationStatusHasBeenSet)
  {
   payload.WithString("botRecommendationStatus", BotRecommendationStatusMapper::GetNameForBotRecommendationStatus(m_botRecommendationStatus));
  }

  if(m_botRecommendationIdHasBeenSet)
  {
   payload.WithString("botRecommendationId", m_botRecommendationId);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
