/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/RequestBasedServiceLevelIndicator.h>
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

RequestBasedServiceLevelIndicator::RequestBasedServiceLevelIndicator(JsonView jsonValue)
{
  *this = jsonValue;
}

RequestBasedServiceLevelIndicator& RequestBasedServiceLevelIndicator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequestBasedSliMetric"))
  {
    m_requestBasedSliMetric = jsonValue.GetObject("RequestBasedSliMetric");
    m_requestBasedSliMetricHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricThreshold"))
  {
    m_metricThreshold = jsonValue.GetDouble("MetricThreshold");
    m_metricThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = ServiceLevelIndicatorComparisonOperatorMapper::GetServiceLevelIndicatorComparisonOperatorForName(jsonValue.GetString("ComparisonOperator"));
    m_comparisonOperatorHasBeenSet = true;
  }
  return *this;
}

JsonValue RequestBasedServiceLevelIndicator::Jsonize() const
{
  JsonValue payload;

  if(m_requestBasedSliMetricHasBeenSet)
  {
   payload.WithObject("RequestBasedSliMetric", m_requestBasedSliMetric.Jsonize());

  }

  if(m_metricThresholdHasBeenSet)
  {
   payload.WithDouble("MetricThreshold", m_metricThreshold);

  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", ServiceLevelIndicatorComparisonOperatorMapper::GetNameForServiceLevelIndicatorComparisonOperator(m_comparisonOperator));
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
