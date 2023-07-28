/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentMetric.h>
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

AnalyticsIntentMetric::AnalyticsIntentMetric() : 
    m_name(AnalyticsIntentMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(AnalyticsMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_order(AnalyticsSortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
}

AnalyticsIntentMetric::AnalyticsIntentMetric(JsonView jsonValue) : 
    m_name(AnalyticsIntentMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(AnalyticsMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_order(AnalyticsSortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsIntentMetric& AnalyticsIntentMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsIntentMetricNameMapper::GetAnalyticsIntentMetricNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statistic"))
  {
    m_statistic = AnalyticsMetricStatisticMapper::GetAnalyticsMetricStatisticForName(jsonValue.GetString("statistic"));

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = AnalyticsSortOrderMapper::GetAnalyticsSortOrderForName(jsonValue.GetString("order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsIntentMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsIntentMetricNameMapper::GetNameForAnalyticsIntentMetricName(m_name));
  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("statistic", AnalyticsMetricStatisticMapper::GetNameForAnalyticsMetricStatistic(m_statistic));
  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("order", AnalyticsSortOrderMapper::GetNameForAnalyticsSortOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
