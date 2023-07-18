/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/MetricResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

MetricResult::MetricResult() : 
    m_metricNameHasBeenSet(false),
    m_metricValue(0.0),
    m_metricValueHasBeenSet(false)
{
}

MetricResult::MetricResult(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_metricValue(0.0),
    m_metricValueHasBeenSet(false)
{
  *this = jsonValue;
}

MetricResult& MetricResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricValue"))
  {
    m_metricValue = jsonValue.GetDouble("MetricValue");

    m_metricValueHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricResult::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_metricValueHasBeenSet)
  {
   payload.WithDouble("MetricValue", m_metricValue);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
