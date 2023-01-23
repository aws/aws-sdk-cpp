/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HistoricalMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

HistoricalMetric::HistoricalMetric() : 
    m_name(HistoricalMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

HistoricalMetric::HistoricalMetric(JsonView jsonValue) : 
    m_name(HistoricalMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

HistoricalMetric& HistoricalMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = HistoricalMetricNameMapper::GetHistoricalMetricNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Threshold"))
  {
    m_threshold = jsonValue.GetObject("Threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statistic"))
  {
    m_statistic = StatisticMapper::GetStatisticForName(jsonValue.GetString("Statistic"));

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = UnitMapper::GetUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue HistoricalMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", HistoricalMetricNameMapper::GetNameForHistoricalMetricName(m_name));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithObject("Threshold", m_threshold.Jsonize());

  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("Statistic", StatisticMapper::GetNameForStatistic(m_statistic));
  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", UnitMapper::GetNameForUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
