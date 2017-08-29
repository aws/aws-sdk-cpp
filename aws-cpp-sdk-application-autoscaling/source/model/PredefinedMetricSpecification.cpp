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

#include <aws/application-autoscaling/model/PredefinedMetricSpecification.h>
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

PredefinedMetricSpecification::PredefinedMetricSpecification() : 
    m_predefinedMetricType(MetricType::NOT_SET),
    m_predefinedMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
}

PredefinedMetricSpecification::PredefinedMetricSpecification(const JsonValue& jsonValue) : 
    m_predefinedMetricType(MetricType::NOT_SET),
    m_predefinedMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
  *this = jsonValue;
}

PredefinedMetricSpecification& PredefinedMetricSpecification::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PredefinedMetricType"))
  {
    m_predefinedMetricType = MetricTypeMapper::GetMetricTypeForName(jsonValue.GetString("PredefinedMetricType"));

    m_predefinedMetricTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceLabel"))
  {
    m_resourceLabel = jsonValue.GetString("ResourceLabel");

    m_resourceLabelHasBeenSet = true;
  }

  return *this;
}

JsonValue PredefinedMetricSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_predefinedMetricTypeHasBeenSet)
  {
   payload.WithString("PredefinedMetricType", MetricTypeMapper::GetNameForMetricType(m_predefinedMetricType));
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
