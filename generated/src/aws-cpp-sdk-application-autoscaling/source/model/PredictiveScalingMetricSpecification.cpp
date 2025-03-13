/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/PredictiveScalingMetricSpecification.h>
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

PredictiveScalingMetricSpecification::PredictiveScalingMetricSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

PredictiveScalingMetricSpecification& PredictiveScalingMetricSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetValue"))
  {
    m_targetValue = jsonValue.GetDouble("TargetValue");
    m_targetValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PredefinedMetricPairSpecification"))
  {
    m_predefinedMetricPairSpecification = jsonValue.GetObject("PredefinedMetricPairSpecification");
    m_predefinedMetricPairSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PredefinedScalingMetricSpecification"))
  {
    m_predefinedScalingMetricSpecification = jsonValue.GetObject("PredefinedScalingMetricSpecification");
    m_predefinedScalingMetricSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PredefinedLoadMetricSpecification"))
  {
    m_predefinedLoadMetricSpecification = jsonValue.GetObject("PredefinedLoadMetricSpecification");
    m_predefinedLoadMetricSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomizedScalingMetricSpecification"))
  {
    m_customizedScalingMetricSpecification = jsonValue.GetObject("CustomizedScalingMetricSpecification");
    m_customizedScalingMetricSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomizedLoadMetricSpecification"))
  {
    m_customizedLoadMetricSpecification = jsonValue.GetObject("CustomizedLoadMetricSpecification");
    m_customizedLoadMetricSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomizedCapacityMetricSpecification"))
  {
    m_customizedCapacityMetricSpecification = jsonValue.GetObject("CustomizedCapacityMetricSpecification");
    m_customizedCapacityMetricSpecificationHasBeenSet = true;
  }
  return *this;
}

JsonValue PredictiveScalingMetricSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_targetValueHasBeenSet)
  {
   payload.WithDouble("TargetValue", m_targetValue);

  }

  if(m_predefinedMetricPairSpecificationHasBeenSet)
  {
   payload.WithObject("PredefinedMetricPairSpecification", m_predefinedMetricPairSpecification.Jsonize());

  }

  if(m_predefinedScalingMetricSpecificationHasBeenSet)
  {
   payload.WithObject("PredefinedScalingMetricSpecification", m_predefinedScalingMetricSpecification.Jsonize());

  }

  if(m_predefinedLoadMetricSpecificationHasBeenSet)
  {
   payload.WithObject("PredefinedLoadMetricSpecification", m_predefinedLoadMetricSpecification.Jsonize());

  }

  if(m_customizedScalingMetricSpecificationHasBeenSet)
  {
   payload.WithObject("CustomizedScalingMetricSpecification", m_customizedScalingMetricSpecification.Jsonize());

  }

  if(m_customizedLoadMetricSpecificationHasBeenSet)
  {
   payload.WithObject("CustomizedLoadMetricSpecification", m_customizedLoadMetricSpecification.Jsonize());

  }

  if(m_customizedCapacityMetricSpecificationHasBeenSet)
  {
   payload.WithObject("CustomizedCapacityMetricSpecification", m_customizedCapacityMetricSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
