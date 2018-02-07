/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

PredefinedScalingMetricSpecification::PredefinedScalingMetricSpecification(const JsonValue& jsonValue) : 
    m_predefinedScalingMetricType(ScalingMetricType::NOT_SET),
    m_predefinedScalingMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
  *this = jsonValue;
}

PredefinedScalingMetricSpecification& PredefinedScalingMetricSpecification::operator =(const JsonValue& jsonValue)
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
