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

#include <aws/iotthingsgraph/model/MetricsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

MetricsConfiguration::MetricsConfiguration() : 
    m_cloudMetricEnabled(false),
    m_cloudMetricEnabledHasBeenSet(false),
    m_metricRuleRoleArnHasBeenSet(false)
{
}

MetricsConfiguration::MetricsConfiguration(JsonView jsonValue) : 
    m_cloudMetricEnabled(false),
    m_cloudMetricEnabledHasBeenSet(false),
    m_metricRuleRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

MetricsConfiguration& MetricsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudMetricEnabled"))
  {
    m_cloudMetricEnabled = jsonValue.GetBool("cloudMetricEnabled");

    m_cloudMetricEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricRuleRoleArn"))
  {
    m_metricRuleRoleArn = jsonValue.GetString("metricRuleRoleArn");

    m_metricRuleRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_cloudMetricEnabledHasBeenSet)
  {
   payload.WithBool("cloudMetricEnabled", m_cloudMetricEnabled);

  }

  if(m_metricRuleRoleArnHasBeenSet)
  {
   payload.WithString("metricRuleRoleArn", m_metricRuleRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
