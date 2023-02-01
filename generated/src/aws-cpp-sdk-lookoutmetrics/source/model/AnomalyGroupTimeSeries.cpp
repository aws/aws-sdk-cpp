/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AnomalyGroupTimeSeries.h>
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

AnomalyGroupTimeSeries::AnomalyGroupTimeSeries() : 
    m_anomalyGroupIdHasBeenSet(false),
    m_timeSeriesIdHasBeenSet(false)
{
}

AnomalyGroupTimeSeries::AnomalyGroupTimeSeries(JsonView jsonValue) : 
    m_anomalyGroupIdHasBeenSet(false),
    m_timeSeriesIdHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyGroupTimeSeries& AnomalyGroupTimeSeries::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnomalyGroupId"))
  {
    m_anomalyGroupId = jsonValue.GetString("AnomalyGroupId");

    m_anomalyGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeSeriesId"))
  {
    m_timeSeriesId = jsonValue.GetString("TimeSeriesId");

    m_timeSeriesIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyGroupTimeSeries::Jsonize() const
{
  JsonValue payload;

  if(m_anomalyGroupIdHasBeenSet)
  {
   payload.WithString("AnomalyGroupId", m_anomalyGroupId);

  }

  if(m_timeSeriesIdHasBeenSet)
  {
   payload.WithString("TimeSeriesId", m_timeSeriesId);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
