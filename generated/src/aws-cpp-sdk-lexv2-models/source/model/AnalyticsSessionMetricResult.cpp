/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsSessionMetricResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

AnalyticsSessionMetricResult::AnalyticsSessionMetricResult() : 
    m_name(AnalyticsSessionMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(AnalyticsMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

AnalyticsSessionMetricResult::AnalyticsSessionMetricResult(JsonView jsonValue) : 
    m_name(AnalyticsSessionMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(AnalyticsMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsSessionMetricResult& AnalyticsSessionMetricResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsSessionMetricNameMapper::GetAnalyticsSessionMetricNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statistic"))
  {
    m_statistic = AnalyticsMetricStatisticMapper::GetAnalyticsMetricStatisticForName(jsonValue.GetString("statistic"));

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsSessionMetricResult::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsSessionMetricNameMapper::GetNameForAnalyticsSessionMetricName(m_name));
  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("statistic", AnalyticsMetricStatisticMapper::GetNameForAnalyticsMetricStatistic(m_statistic));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
