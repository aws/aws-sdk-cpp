/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DimensionValueContribution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

DimensionValueContribution::DimensionValueContribution() : 
    m_dimensionValueHasBeenSet(false),
    m_contributionScore(0.0),
    m_contributionScoreHasBeenSet(false)
{
}

DimensionValueContribution::DimensionValueContribution(JsonView jsonValue) : 
    m_dimensionValueHasBeenSet(false),
    m_contributionScore(0.0),
    m_contributionScoreHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionValueContribution& DimensionValueContribution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionValue"))
  {
    m_dimensionValue = jsonValue.GetString("DimensionValue");

    m_dimensionValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContributionScore"))
  {
    m_contributionScore = jsonValue.GetDouble("ContributionScore");

    m_contributionScoreHasBeenSet = true;
  }

  return *this;
}

JsonValue DimensionValueContribution::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionValueHasBeenSet)
  {
   payload.WithString("DimensionValue", m_dimensionValue);

  }

  if(m_contributionScoreHasBeenSet)
  {
   payload.WithDouble("ContributionScore", m_contributionScore);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
