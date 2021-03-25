/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/MetricLevelImpact.h>
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

MetricLevelImpact::MetricLevelImpact() : 
    m_metricNameHasBeenSet(false),
    m_numTimeSeries(0),
    m_numTimeSeriesHasBeenSet(false),
    m_contributionMatrixHasBeenSet(false)
{
}

MetricLevelImpact::MetricLevelImpact(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_numTimeSeries(0),
    m_numTimeSeriesHasBeenSet(false),
    m_contributionMatrixHasBeenSet(false)
{
  *this = jsonValue;
}

MetricLevelImpact& MetricLevelImpact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumTimeSeries"))
  {
    m_numTimeSeries = jsonValue.GetInteger("NumTimeSeries");

    m_numTimeSeriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContributionMatrix"))
  {
    m_contributionMatrix = jsonValue.GetObject("ContributionMatrix");

    m_contributionMatrixHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricLevelImpact::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_numTimeSeriesHasBeenSet)
  {
   payload.WithInteger("NumTimeSeries", m_numTimeSeries);

  }

  if(m_contributionMatrixHasBeenSet)
  {
   payload.WithObject("ContributionMatrix", m_contributionMatrix.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
