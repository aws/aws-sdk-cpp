/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/MetricDatapoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

MetricDatapoint::MetricDatapoint(JsonView jsonValue)
{
  *this = jsonValue;
}

MetricDatapoint& MetricDatapoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("average"))
  {
    m_average = jsonValue.GetDouble("average");
    m_averageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maximum"))
  {
    m_maximum = jsonValue.GetDouble("maximum");
    m_maximumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minimum"))
  {
    m_minimum = jsonValue.GetDouble("minimum");
    m_minimumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleCount"))
  {
    m_sampleCount = jsonValue.GetDouble("sampleCount");
    m_sampleCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sum"))
  {
    m_sum = jsonValue.GetDouble("sum");
    m_sumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = MetricUnitMapper::GetMetricUnitForName(jsonValue.GetString("unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricDatapoint::Jsonize() const
{
  JsonValue payload;

  if(m_averageHasBeenSet)
  {
   payload.WithDouble("average", m_average);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithDouble("maximum", m_maximum);

  }

  if(m_minimumHasBeenSet)
  {
   payload.WithDouble("minimum", m_minimum);

  }

  if(m_sampleCountHasBeenSet)
  {
   payload.WithDouble("sampleCount", m_sampleCount);

  }

  if(m_sumHasBeenSet)
  {
   payload.WithDouble("sum", m_sum);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", MetricUnitMapper::GetNameForMetricUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
