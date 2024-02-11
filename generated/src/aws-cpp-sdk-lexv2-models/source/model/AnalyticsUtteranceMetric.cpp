/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsUtteranceMetric.h>
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

AnalyticsUtteranceMetric::AnalyticsUtteranceMetric() : 
    m_name(AnalyticsUtteranceMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(AnalyticsMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_order(AnalyticsSortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
}

AnalyticsUtteranceMetric::AnalyticsUtteranceMetric(JsonView jsonValue) : 
    m_name(AnalyticsUtteranceMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(AnalyticsMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_order(AnalyticsSortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsUtteranceMetric& AnalyticsUtteranceMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsUtteranceMetricNameMapper::GetAnalyticsUtteranceMetricNameForName(jsonValue.GetString("name"));

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

JsonValue AnalyticsUtteranceMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsUtteranceMetricNameMapper::GetNameForAnalyticsUtteranceMetricName(m_name));
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
