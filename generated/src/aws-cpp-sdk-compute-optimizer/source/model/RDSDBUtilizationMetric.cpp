/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSDBUtilizationMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

RDSDBUtilizationMetric::RDSDBUtilizationMetric(JsonView jsonValue)
{
  *this = jsonValue;
}

RDSDBUtilizationMetric& RDSDBUtilizationMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = RDSDBMetricNameMapper::GetRDSDBMetricNameForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statistic"))
  {
    m_statistic = RDSDBMetricStatisticMapper::GetRDSDBMetricStatisticForName(jsonValue.GetString("statistic"));
    m_statisticHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue RDSDBUtilizationMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", RDSDBMetricNameMapper::GetNameForRDSDBMetricName(m_name));
  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("statistic", RDSDBMetricStatisticMapper::GetNameForRDSDBMetricStatistic(m_statistic));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
