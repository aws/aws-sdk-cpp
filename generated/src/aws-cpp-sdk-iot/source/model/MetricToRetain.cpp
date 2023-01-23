/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MetricToRetain.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

MetricToRetain::MetricToRetain() : 
    m_metricHasBeenSet(false),
    m_metricDimensionHasBeenSet(false)
{
}

MetricToRetain::MetricToRetain(JsonView jsonValue) : 
    m_metricHasBeenSet(false),
    m_metricDimensionHasBeenSet(false)
{
  *this = jsonValue;
}

MetricToRetain& MetricToRetain::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metric"))
  {
    m_metric = jsonValue.GetString("metric");

    m_metricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricDimension"))
  {
    m_metricDimension = jsonValue.GetObject("metricDimension");

    m_metricDimensionHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricToRetain::Jsonize() const
{
  JsonValue payload;

  if(m_metricHasBeenSet)
  {
   payload.WithString("metric", m_metric);

  }

  if(m_metricDimensionHasBeenSet)
  {
   payload.WithObject("metricDimension", m_metricDimension.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
