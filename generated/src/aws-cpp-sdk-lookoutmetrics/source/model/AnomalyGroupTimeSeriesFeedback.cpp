/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AnomalyGroupTimeSeriesFeedback.h>
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

AnomalyGroupTimeSeriesFeedback::AnomalyGroupTimeSeriesFeedback() : 
    m_anomalyGroupIdHasBeenSet(false),
    m_timeSeriesIdHasBeenSet(false),
    m_isAnomaly(false),
    m_isAnomalyHasBeenSet(false)
{
}

AnomalyGroupTimeSeriesFeedback::AnomalyGroupTimeSeriesFeedback(JsonView jsonValue) : 
    m_anomalyGroupIdHasBeenSet(false),
    m_timeSeriesIdHasBeenSet(false),
    m_isAnomaly(false),
    m_isAnomalyHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyGroupTimeSeriesFeedback& AnomalyGroupTimeSeriesFeedback::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("IsAnomaly"))
  {
    m_isAnomaly = jsonValue.GetBool("IsAnomaly");

    m_isAnomalyHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyGroupTimeSeriesFeedback::Jsonize() const
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

  if(m_isAnomalyHasBeenSet)
  {
   payload.WithBool("IsAnomaly", m_isAnomaly);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
