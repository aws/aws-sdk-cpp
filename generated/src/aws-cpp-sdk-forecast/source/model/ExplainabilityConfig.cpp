/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ExplainabilityConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

ExplainabilityConfig::ExplainabilityConfig() : 
    m_timeSeriesGranularity(TimeSeriesGranularity::NOT_SET),
    m_timeSeriesGranularityHasBeenSet(false),
    m_timePointGranularity(TimePointGranularity::NOT_SET),
    m_timePointGranularityHasBeenSet(false)
{
}

ExplainabilityConfig::ExplainabilityConfig(JsonView jsonValue) : 
    m_timeSeriesGranularity(TimeSeriesGranularity::NOT_SET),
    m_timeSeriesGranularityHasBeenSet(false),
    m_timePointGranularity(TimePointGranularity::NOT_SET),
    m_timePointGranularityHasBeenSet(false)
{
  *this = jsonValue;
}

ExplainabilityConfig& ExplainabilityConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeSeriesGranularity"))
  {
    m_timeSeriesGranularity = TimeSeriesGranularityMapper::GetTimeSeriesGranularityForName(jsonValue.GetString("TimeSeriesGranularity"));

    m_timeSeriesGranularityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimePointGranularity"))
  {
    m_timePointGranularity = TimePointGranularityMapper::GetTimePointGranularityForName(jsonValue.GetString("TimePointGranularity"));

    m_timePointGranularityHasBeenSet = true;
  }

  return *this;
}

JsonValue ExplainabilityConfig::Jsonize() const
{
  JsonValue payload;

  if(m_timeSeriesGranularityHasBeenSet)
  {
   payload.WithString("TimeSeriesGranularity", TimeSeriesGranularityMapper::GetNameForTimeSeriesGranularity(m_timeSeriesGranularity));
  }

  if(m_timePointGranularityHasBeenSet)
  {
   payload.WithString("TimePointGranularity", TimePointGranularityMapper::GetNameForTimePointGranularity(m_timePointGranularity));
  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
