/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/PredefinedScalingMetricSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{

PredefinedScalingMetricSpecification::PredefinedScalingMetricSpecification() : 
    m_predefinedScalingMetricType(ScalingMetricType::NOT_SET),
    m_predefinedScalingMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
}

PredefinedScalingMetricSpecification::PredefinedScalingMetricSpecification(JsonView jsonValue) : 
    m_predefinedScalingMetricType(ScalingMetricType::NOT_SET),
    m_predefinedScalingMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
  *this = jsonValue;
}

PredefinedScalingMetricSpecification& PredefinedScalingMetricSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PredefinedScalingMetricType"))
  {
    m_predefinedScalingMetricType = ScalingMetricTypeMapper::GetScalingMetricTypeForName(jsonValue.GetString("PredefinedScalingMetricType"));

    m_predefinedScalingMetricTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceLabel"))
  {
    m_resourceLabel = jsonValue.GetString("ResourceLabel");

    m_resourceLabelHasBeenSet = true;
  }

  return *this;
}

JsonValue PredefinedScalingMetricSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_predefinedScalingMetricTypeHasBeenSet)
  {
   payload.WithString("PredefinedScalingMetricType", ScalingMetricTypeMapper::GetNameForScalingMetricType(m_predefinedScalingMetricType));
  }

  if(m_resourceLabelHasBeenSet)
  {
   payload.WithString("ResourceLabel", m_resourceLabel);

  }

  return payload;
}

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
