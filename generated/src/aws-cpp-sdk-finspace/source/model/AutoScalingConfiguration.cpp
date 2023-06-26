/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/AutoScalingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

AutoScalingConfiguration::AutoScalingConfiguration() : 
    m_minNodeCount(0),
    m_minNodeCountHasBeenSet(false),
    m_maxNodeCount(0),
    m_maxNodeCountHasBeenSet(false),
    m_autoScalingMetric(AutoScalingMetric::NOT_SET),
    m_autoScalingMetricHasBeenSet(false),
    m_metricTarget(0.0),
    m_metricTargetHasBeenSet(false),
    m_scaleInCooldownSeconds(0.0),
    m_scaleInCooldownSecondsHasBeenSet(false),
    m_scaleOutCooldownSeconds(0.0),
    m_scaleOutCooldownSecondsHasBeenSet(false)
{
}

AutoScalingConfiguration::AutoScalingConfiguration(JsonView jsonValue) : 
    m_minNodeCount(0),
    m_minNodeCountHasBeenSet(false),
    m_maxNodeCount(0),
    m_maxNodeCountHasBeenSet(false),
    m_autoScalingMetric(AutoScalingMetric::NOT_SET),
    m_autoScalingMetricHasBeenSet(false),
    m_metricTarget(0.0),
    m_metricTargetHasBeenSet(false),
    m_scaleInCooldownSeconds(0.0),
    m_scaleInCooldownSecondsHasBeenSet(false),
    m_scaleOutCooldownSeconds(0.0),
    m_scaleOutCooldownSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingConfiguration& AutoScalingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("minNodeCount"))
  {
    m_minNodeCount = jsonValue.GetInteger("minNodeCount");

    m_minNodeCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxNodeCount"))
  {
    m_maxNodeCount = jsonValue.GetInteger("maxNodeCount");

    m_maxNodeCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingMetric"))
  {
    m_autoScalingMetric = AutoScalingMetricMapper::GetAutoScalingMetricForName(jsonValue.GetString("autoScalingMetric"));

    m_autoScalingMetricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricTarget"))
  {
    m_metricTarget = jsonValue.GetDouble("metricTarget");

    m_metricTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scaleInCooldownSeconds"))
  {
    m_scaleInCooldownSeconds = jsonValue.GetDouble("scaleInCooldownSeconds");

    m_scaleInCooldownSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scaleOutCooldownSeconds"))
  {
    m_scaleOutCooldownSeconds = jsonValue.GetDouble("scaleOutCooldownSeconds");

    m_scaleOutCooldownSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_minNodeCountHasBeenSet)
  {
   payload.WithInteger("minNodeCount", m_minNodeCount);

  }

  if(m_maxNodeCountHasBeenSet)
  {
   payload.WithInteger("maxNodeCount", m_maxNodeCount);

  }

  if(m_autoScalingMetricHasBeenSet)
  {
   payload.WithString("autoScalingMetric", AutoScalingMetricMapper::GetNameForAutoScalingMetric(m_autoScalingMetric));
  }

  if(m_metricTargetHasBeenSet)
  {
   payload.WithDouble("metricTarget", m_metricTarget);

  }

  if(m_scaleInCooldownSecondsHasBeenSet)
  {
   payload.WithDouble("scaleInCooldownSeconds", m_scaleInCooldownSeconds);

  }

  if(m_scaleOutCooldownSecondsHasBeenSet)
  {
   payload.WithDouble("scaleOutCooldownSeconds", m_scaleOutCooldownSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
