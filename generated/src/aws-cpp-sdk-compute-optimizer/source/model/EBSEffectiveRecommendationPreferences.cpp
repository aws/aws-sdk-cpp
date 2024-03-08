/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/EBSEffectiveRecommendationPreferences.h>
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

EBSEffectiveRecommendationPreferences::EBSEffectiveRecommendationPreferences() : 
    m_savingsEstimationModeHasBeenSet(false)
{
}

EBSEffectiveRecommendationPreferences::EBSEffectiveRecommendationPreferences(JsonView jsonValue) : 
    m_savingsEstimationModeHasBeenSet(false)
{
  *this = jsonValue;
}

EBSEffectiveRecommendationPreferences& EBSEffectiveRecommendationPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("savingsEstimationMode"))
  {
    m_savingsEstimationMode = jsonValue.GetObject("savingsEstimationMode");

    m_savingsEstimationModeHasBeenSet = true;
  }

  return *this;
}

JsonValue EBSEffectiveRecommendationPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_savingsEstimationModeHasBeenSet)
  {
   payload.WithObject("savingsEstimationMode", m_savingsEstimationMode.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
