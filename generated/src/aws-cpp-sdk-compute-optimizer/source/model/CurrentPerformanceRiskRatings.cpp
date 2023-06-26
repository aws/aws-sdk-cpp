/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/CurrentPerformanceRiskRatings.h>
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

CurrentPerformanceRiskRatings::CurrentPerformanceRiskRatings() : 
    m_high(0),
    m_highHasBeenSet(false),
    m_medium(0),
    m_mediumHasBeenSet(false),
    m_low(0),
    m_lowHasBeenSet(false),
    m_veryLow(0),
    m_veryLowHasBeenSet(false)
{
}

CurrentPerformanceRiskRatings::CurrentPerformanceRiskRatings(JsonView jsonValue) : 
    m_high(0),
    m_highHasBeenSet(false),
    m_medium(0),
    m_mediumHasBeenSet(false),
    m_low(0),
    m_lowHasBeenSet(false),
    m_veryLow(0),
    m_veryLowHasBeenSet(false)
{
  *this = jsonValue;
}

CurrentPerformanceRiskRatings& CurrentPerformanceRiskRatings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("high"))
  {
    m_high = jsonValue.GetInt64("high");

    m_highHasBeenSet = true;
  }

  if(jsonValue.ValueExists("medium"))
  {
    m_medium = jsonValue.GetInt64("medium");

    m_mediumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("low"))
  {
    m_low = jsonValue.GetInt64("low");

    m_lowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("veryLow"))
  {
    m_veryLow = jsonValue.GetInt64("veryLow");

    m_veryLowHasBeenSet = true;
  }

  return *this;
}

JsonValue CurrentPerformanceRiskRatings::Jsonize() const
{
  JsonValue payload;

  if(m_highHasBeenSet)
  {
   payload.WithInt64("high", m_high);

  }

  if(m_mediumHasBeenSet)
  {
   payload.WithInt64("medium", m_medium);

  }

  if(m_lowHasBeenSet)
  {
   payload.WithInt64("low", m_low);

  }

  if(m_veryLowHasBeenSet)
  {
   payload.WithInt64("veryLow", m_veryLow);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
