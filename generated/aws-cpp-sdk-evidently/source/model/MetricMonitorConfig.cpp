/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/MetricMonitorConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

MetricMonitorConfig::MetricMonitorConfig() : 
    m_metricDefinitionHasBeenSet(false)
{
}

MetricMonitorConfig::MetricMonitorConfig(JsonView jsonValue) : 
    m_metricDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

MetricMonitorConfig& MetricMonitorConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metricDefinition"))
  {
    m_metricDefinition = jsonValue.GetObject("metricDefinition");

    m_metricDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricMonitorConfig::Jsonize() const
{
  JsonValue payload;

  if(m_metricDefinitionHasBeenSet)
  {
   payload.WithObject("metricDefinition", m_metricDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
