/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/PredictiveScalingPredefinedLoadMetricSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

PredictiveScalingPredefinedLoadMetricSpecification::PredictiveScalingPredefinedLoadMetricSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

PredictiveScalingPredefinedLoadMetricSpecification& PredictiveScalingPredefinedLoadMetricSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PredefinedMetricType"))
  {
    m_predefinedMetricType = jsonValue.GetString("PredefinedMetricType");
    m_predefinedMetricTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceLabel"))
  {
    m_resourceLabel = jsonValue.GetString("ResourceLabel");
    m_resourceLabelHasBeenSet = true;
  }
  return *this;
}

JsonValue PredictiveScalingPredefinedLoadMetricSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_predefinedMetricTypeHasBeenSet)
  {
   payload.WithString("PredefinedMetricType", m_predefinedMetricType);

  }

  if(m_resourceLabelHasBeenSet)
  {
   payload.WithString("ResourceLabel", m_resourceLabel);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
