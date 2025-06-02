/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSDBStorageRecommendationOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

RDSDBStorageRecommendationOption::RDSDBStorageRecommendationOption(JsonView jsonValue)
{
  *this = jsonValue;
}

RDSDBStorageRecommendationOption& RDSDBStorageRecommendationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("storageConfiguration"))
  {
    m_storageConfiguration = jsonValue.GetObject("storageConfiguration");
    m_storageConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rank"))
  {
    m_rank = jsonValue.GetInteger("rank");
    m_rankHasBeenSet = true;
  }
  if(jsonValue.ValueExists("savingsOpportunity"))
  {
    m_savingsOpportunity = jsonValue.GetObject("savingsOpportunity");
    m_savingsOpportunityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("savingsOpportunityAfterDiscounts"))
  {
    m_savingsOpportunityAfterDiscounts = jsonValue.GetObject("savingsOpportunityAfterDiscounts");
    m_savingsOpportunityAfterDiscountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedMonthlyVolumeIOPsCostVariation"))
  {
    m_estimatedMonthlyVolumeIOPsCostVariation = RDSEstimatedMonthlyVolumeIOPsCostVariationMapper::GetRDSEstimatedMonthlyVolumeIOPsCostVariationForName(jsonValue.GetString("estimatedMonthlyVolumeIOPsCostVariation"));
    m_estimatedMonthlyVolumeIOPsCostVariationHasBeenSet = true;
  }
  return *this;
}

JsonValue RDSDBStorageRecommendationOption::Jsonize() const
{
  JsonValue payload;

  if(m_storageConfigurationHasBeenSet)
  {
   payload.WithObject("storageConfiguration", m_storageConfiguration.Jsonize());

  }

  if(m_rankHasBeenSet)
  {
   payload.WithInteger("rank", m_rank);

  }

  if(m_savingsOpportunityHasBeenSet)
  {
   payload.WithObject("savingsOpportunity", m_savingsOpportunity.Jsonize());

  }

  if(m_savingsOpportunityAfterDiscountsHasBeenSet)
  {
   payload.WithObject("savingsOpportunityAfterDiscounts", m_savingsOpportunityAfterDiscounts.Jsonize());

  }

  if(m_estimatedMonthlyVolumeIOPsCostVariationHasBeenSet)
  {
   payload.WithString("estimatedMonthlyVolumeIOPsCostVariation", RDSEstimatedMonthlyVolumeIOPsCostVariationMapper::GetNameForRDSEstimatedMonthlyVolumeIOPsCostVariation(m_estimatedMonthlyVolumeIOPsCostVariation));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
