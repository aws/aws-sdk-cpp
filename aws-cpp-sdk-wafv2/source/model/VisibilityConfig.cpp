/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/VisibilityConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

VisibilityConfig::VisibilityConfig() : 
    m_sampledRequestsEnabled(false),
    m_sampledRequestsEnabledHasBeenSet(false),
    m_cloudWatchMetricsEnabled(false),
    m_cloudWatchMetricsEnabledHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
}

VisibilityConfig::VisibilityConfig(JsonView jsonValue) : 
    m_sampledRequestsEnabled(false),
    m_sampledRequestsEnabledHasBeenSet(false),
    m_cloudWatchMetricsEnabled(false),
    m_cloudWatchMetricsEnabledHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
  *this = jsonValue;
}

VisibilityConfig& VisibilityConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SampledRequestsEnabled"))
  {
    m_sampledRequestsEnabled = jsonValue.GetBool("SampledRequestsEnabled");

    m_sampledRequestsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchMetricsEnabled"))
  {
    m_cloudWatchMetricsEnabled = jsonValue.GetBool("CloudWatchMetricsEnabled");

    m_cloudWatchMetricsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VisibilityConfig::Jsonize() const
{
  JsonValue payload;

  if(m_sampledRequestsEnabledHasBeenSet)
  {
   payload.WithBool("SampledRequestsEnabled", m_sampledRequestsEnabled);

  }

  if(m_cloudWatchMetricsEnabledHasBeenSet)
  {
   payload.WithBool("CloudWatchMetricsEnabled", m_cloudWatchMetricsEnabled);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
