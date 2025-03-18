/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/MetricStat.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

MetricStat::MetricStat(JsonView jsonValue)
{
  *this = jsonValue;
}

MetricStat& MetricStat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Metric"))
  {
    m_metric = jsonValue.GetObject("Metric");
    m_metricHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Period"))
  {
    m_period = jsonValue.GetInteger("Period");
    m_periodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Stat"))
  {
    m_stat = jsonValue.GetString("Stat");
    m_statHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = StandardUnitMapper::GetStandardUnitForName(jsonValue.GetString("Unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricStat::Jsonize() const
{
  JsonValue payload;

  if(m_metricHasBeenSet)
  {
   payload.WithObject("Metric", m_metric.Jsonize());

  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("Period", m_period);

  }

  if(m_statHasBeenSet)
  {
   payload.WithString("Stat", m_stat);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", StandardUnitMapper::GetNameForStandardUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
