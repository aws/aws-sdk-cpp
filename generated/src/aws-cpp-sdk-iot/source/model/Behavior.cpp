/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/Behavior.h>
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

Behavior::Behavior() : 
    m_nameHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_metricDimensionHasBeenSet(false),
    m_criteriaHasBeenSet(false),
    m_suppressAlerts(false),
    m_suppressAlertsHasBeenSet(false),
    m_exportMetric(false),
    m_exportMetricHasBeenSet(false)
{
}

Behavior::Behavior(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_metricDimensionHasBeenSet(false),
    m_criteriaHasBeenSet(false),
    m_suppressAlerts(false),
    m_suppressAlertsHasBeenSet(false),
    m_exportMetric(false),
    m_exportMetricHasBeenSet(false)
{
  *this = jsonValue;
}

Behavior& Behavior::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("criteria"))
  {
    m_criteria = jsonValue.GetObject("criteria");

    m_criteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suppressAlerts"))
  {
    m_suppressAlerts = jsonValue.GetBool("suppressAlerts");

    m_suppressAlertsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exportMetric"))
  {
    m_exportMetric = jsonValue.GetBool("exportMetric");

    m_exportMetricHasBeenSet = true;
  }

  return *this;
}

JsonValue Behavior::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_metricHasBeenSet)
  {
   payload.WithString("metric", m_metric);

  }

  if(m_metricDimensionHasBeenSet)
  {
   payload.WithObject("metricDimension", m_metricDimension.Jsonize());

  }

  if(m_criteriaHasBeenSet)
  {
   payload.WithObject("criteria", m_criteria.Jsonize());

  }

  if(m_suppressAlertsHasBeenSet)
  {
   payload.WithBool("suppressAlerts", m_suppressAlerts);

  }

  if(m_exportMetricHasBeenSet)
  {
   payload.WithBool("exportMetric", m_exportMetric);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
