/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/RightsizingRecommendationMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

RightsizingRecommendationMetadata::RightsizingRecommendationMetadata() : 
    m_recommendationIdHasBeenSet(false),
    m_generationTimestampHasBeenSet(false),
    m_lookbackPeriodInDays(LookbackPeriodInDays::NOT_SET),
    m_lookbackPeriodInDaysHasBeenSet(false)
{
}

RightsizingRecommendationMetadata::RightsizingRecommendationMetadata(JsonView jsonValue) : 
    m_recommendationIdHasBeenSet(false),
    m_generationTimestampHasBeenSet(false),
    m_lookbackPeriodInDays(LookbackPeriodInDays::NOT_SET),
    m_lookbackPeriodInDaysHasBeenSet(false)
{
  *this = jsonValue;
}

RightsizingRecommendationMetadata& RightsizingRecommendationMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecommendationId"))
  {
    m_recommendationId = jsonValue.GetString("RecommendationId");

    m_recommendationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GenerationTimestamp"))
  {
    m_generationTimestamp = jsonValue.GetString("GenerationTimestamp");

    m_generationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LookbackPeriodInDays"))
  {
    m_lookbackPeriodInDays = LookbackPeriodInDaysMapper::GetLookbackPeriodInDaysForName(jsonValue.GetString("LookbackPeriodInDays"));

    m_lookbackPeriodInDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue RightsizingRecommendationMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("RecommendationId", m_recommendationId);

  }

  if(m_generationTimestampHasBeenSet)
  {
   payload.WithString("GenerationTimestamp", m_generationTimestamp);

  }

  if(m_lookbackPeriodInDaysHasBeenSet)
  {
   payload.WithString("LookbackPeriodInDays", LookbackPeriodInDaysMapper::GetNameForLookbackPeriodInDays(m_lookbackPeriodInDays));
  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
