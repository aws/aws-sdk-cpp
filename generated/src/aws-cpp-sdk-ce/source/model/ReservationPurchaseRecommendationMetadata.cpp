/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ReservationPurchaseRecommendationMetadata.h>
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

ReservationPurchaseRecommendationMetadata::ReservationPurchaseRecommendationMetadata() : 
    m_recommendationIdHasBeenSet(false),
    m_generationTimestampHasBeenSet(false)
{
}

ReservationPurchaseRecommendationMetadata::ReservationPurchaseRecommendationMetadata(JsonView jsonValue) : 
    m_recommendationIdHasBeenSet(false),
    m_generationTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ReservationPurchaseRecommendationMetadata& ReservationPurchaseRecommendationMetadata::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue ReservationPurchaseRecommendationMetadata::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
