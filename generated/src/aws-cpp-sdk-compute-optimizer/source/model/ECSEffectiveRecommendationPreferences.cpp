/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSEffectiveRecommendationPreferences.h>
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

ECSEffectiveRecommendationPreferences::ECSEffectiveRecommendationPreferences() : 
    m_savingsEstimationModeHasBeenSet(false)
{
}

ECSEffectiveRecommendationPreferences::ECSEffectiveRecommendationPreferences(JsonView jsonValue) : 
    m_savingsEstimationModeHasBeenSet(false)
{
  *this = jsonValue;
}

ECSEffectiveRecommendationPreferences& ECSEffectiveRecommendationPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("savingsEstimationMode"))
  {
    m_savingsEstimationMode = jsonValue.GetObject("savingsEstimationMode");

    m_savingsEstimationModeHasBeenSet = true;
  }

  return *this;
}

JsonValue ECSEffectiveRecommendationPreferences::Jsonize() const
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
