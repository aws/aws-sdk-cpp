/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/TimestampMetricValuePair.h>
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

TimestampMetricValuePair::TimestampMetricValuePair() : 
    m_timestampHasBeenSet(false),
    m_metricValue(0.0),
    m_metricValueHasBeenSet(false)
{
}

TimestampMetricValuePair::TimestampMetricValuePair(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_metricValue(0.0),
    m_metricValueHasBeenSet(false)
{
  *this = jsonValue;
}

TimestampMetricValuePair& TimestampMetricValuePair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricValue"))
  {
    m_metricValue = jsonValue.GetDouble("MetricValue");

    m_metricValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestampMetricValuePair::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_metricValueHasBeenSet)
  {
   payload.WithDouble("MetricValue", m_metricValue);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
