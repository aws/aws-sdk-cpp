/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/TargetTrackingScalingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

TargetTrackingScalingConfiguration::TargetTrackingScalingConfiguration() : 
    m_metricType(FleetScalingMetricType::NOT_SET),
    m_metricTypeHasBeenSet(false),
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false)
{
}

TargetTrackingScalingConfiguration::TargetTrackingScalingConfiguration(JsonView jsonValue) : 
    m_metricType(FleetScalingMetricType::NOT_SET),
    m_metricTypeHasBeenSet(false),
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false)
{
  *this = jsonValue;
}

TargetTrackingScalingConfiguration& TargetTrackingScalingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metricType"))
  {
    m_metricType = FleetScalingMetricTypeMapper::GetFleetScalingMetricTypeForName(jsonValue.GetString("metricType"));

    m_metricTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetValue"))
  {
    m_targetValue = jsonValue.GetDouble("targetValue");

    m_targetValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetTrackingScalingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_metricTypeHasBeenSet)
  {
   payload.WithString("metricType", FleetScalingMetricTypeMapper::GetNameForFleetScalingMetricType(m_metricType));
  }

  if(m_targetValueHasBeenSet)
  {
   payload.WithDouble("targetValue", m_targetValue);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
