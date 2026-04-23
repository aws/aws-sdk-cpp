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

#include <aws/autoscaling-plans/model/PredefinedLoadMetricSpecification.h>
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

PredefinedLoadMetricSpecification::PredefinedLoadMetricSpecification() : 
    m_predefinedLoadMetricType(LoadMetricType::NOT_SET),
    m_predefinedLoadMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
}

PredefinedLoadMetricSpecification::PredefinedLoadMetricSpecification(JsonView jsonValue) : 
    m_predefinedLoadMetricType(LoadMetricType::NOT_SET),
    m_predefinedLoadMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
  *this = jsonValue;
}

PredefinedLoadMetricSpecification& PredefinedLoadMetricSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PredefinedLoadMetricType"))
  {
    m_predefinedLoadMetricType = LoadMetricTypeMapper::GetLoadMetricTypeForName(jsonValue.GetString("PredefinedLoadMetricType"));

    m_predefinedLoadMetricTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceLabel"))
  {
    m_resourceLabel = jsonValue.GetString("ResourceLabel");

    m_resourceLabelHasBeenSet = true;
  }

  return *this;
}

JsonValue PredefinedLoadMetricSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_predefinedLoadMetricTypeHasBeenSet)
  {
   payload.WithString("PredefinedLoadMetricType", LoadMetricTypeMapper::GetNameForLoadMetricType(m_predefinedLoadMetricType));
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
