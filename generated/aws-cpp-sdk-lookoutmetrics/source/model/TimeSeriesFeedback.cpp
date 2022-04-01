/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/TimeSeriesFeedback.h>
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

TimeSeriesFeedback::TimeSeriesFeedback() : 
    m_timeSeriesIdHasBeenSet(false),
    m_isAnomaly(false),
    m_isAnomalyHasBeenSet(false)
{
}

TimeSeriesFeedback::TimeSeriesFeedback(JsonView jsonValue) : 
    m_timeSeriesIdHasBeenSet(false),
    m_isAnomaly(false),
    m_isAnomalyHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeriesFeedback& TimeSeriesFeedback::operator =(JsonView jsonValue)
{
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

JsonValue TimeSeriesFeedback::Jsonize() const
{
  JsonValue payload;

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
