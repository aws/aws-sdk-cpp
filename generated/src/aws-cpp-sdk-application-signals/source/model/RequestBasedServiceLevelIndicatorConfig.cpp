/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/RequestBasedServiceLevelIndicatorConfig.h>
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

RequestBasedServiceLevelIndicatorConfig::RequestBasedServiceLevelIndicatorConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

RequestBasedServiceLevelIndicatorConfig& RequestBasedServiceLevelIndicatorConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequestBasedSliMetricConfig"))
  {
    m_requestBasedSliMetricConfig = jsonValue.GetObject("RequestBasedSliMetricConfig");
    m_requestBasedSliMetricConfigHasBeenSet = true;
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

JsonValue RequestBasedServiceLevelIndicatorConfig::Jsonize() const
{
  JsonValue payload;

  if(m_requestBasedSliMetricConfigHasBeenSet)
  {
   payload.WithObject("RequestBasedSliMetricConfig", m_requestBasedSliMetricConfig.Jsonize());

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
