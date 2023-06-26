/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/PerformanceInsightsReferenceComparisonValues.h>
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

PerformanceInsightsReferenceComparisonValues::PerformanceInsightsReferenceComparisonValues() : 
    m_referenceScalarHasBeenSet(false),
    m_referenceMetricHasBeenSet(false)
{
}

PerformanceInsightsReferenceComparisonValues::PerformanceInsightsReferenceComparisonValues(JsonView jsonValue) : 
    m_referenceScalarHasBeenSet(false),
    m_referenceMetricHasBeenSet(false)
{
  *this = jsonValue;
}

PerformanceInsightsReferenceComparisonValues& PerformanceInsightsReferenceComparisonValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReferenceScalar"))
  {
    m_referenceScalar = jsonValue.GetObject("ReferenceScalar");

    m_referenceScalarHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceMetric"))
  {
    m_referenceMetric = jsonValue.GetObject("ReferenceMetric");

    m_referenceMetricHasBeenSet = true;
  }

  return *this;
}

JsonValue PerformanceInsightsReferenceComparisonValues::Jsonize() const
{
  JsonValue payload;

  if(m_referenceScalarHasBeenSet)
  {
   payload.WithObject("ReferenceScalar", m_referenceScalar.Jsonize());

  }

  if(m_referenceMetricHasBeenSet)
  {
   payload.WithObject("ReferenceMetric", m_referenceMetric.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
