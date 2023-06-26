/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/PerformanceInsightsReferenceMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

PerformanceInsightsReferenceMetric::PerformanceInsightsReferenceMetric() : 
    m_metricQueryHasBeenSet(false)
{
}

PerformanceInsightsReferenceMetric::PerformanceInsightsReferenceMetric(JsonView jsonValue) : 
    m_metricQueryHasBeenSet(false)
{
  *this = jsonValue;
}

PerformanceInsightsReferenceMetric& PerformanceInsightsReferenceMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricQuery"))
  {
    m_metricQuery = jsonValue.GetObject("MetricQuery");

    m_metricQueryHasBeenSet = true;
  }

  return *this;
}

JsonValue PerformanceInsightsReferenceMetric::Jsonize() const
{
  JsonValue payload;

  if(m_metricQueryHasBeenSet)
  {
   payload.WithObject("MetricQuery", m_metricQuery.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
