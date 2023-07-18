/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/MetricMonitor.h>
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

MetricMonitor::MetricMonitor() : 
    m_metricDefinitionHasBeenSet(false)
{
}

MetricMonitor::MetricMonitor(JsonView jsonValue) : 
    m_metricDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

MetricMonitor& MetricMonitor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metricDefinition"))
  {
    m_metricDefinition = jsonValue.GetObject("metricDefinition");

    m_metricDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricMonitor::Jsonize() const
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
