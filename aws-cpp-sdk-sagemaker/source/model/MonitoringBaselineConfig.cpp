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

#include <aws/sagemaker/model/MonitoringBaselineConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MonitoringBaselineConfig::MonitoringBaselineConfig() : 
    m_constraintsResourceHasBeenSet(false),
    m_statisticsResourceHasBeenSet(false)
{
}

MonitoringBaselineConfig::MonitoringBaselineConfig(JsonView jsonValue) : 
    m_constraintsResourceHasBeenSet(false),
    m_statisticsResourceHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringBaselineConfig& MonitoringBaselineConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConstraintsResource"))
  {
    m_constraintsResource = jsonValue.GetObject("ConstraintsResource");

    m_constraintsResourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatisticsResource"))
  {
    m_statisticsResource = jsonValue.GetObject("StatisticsResource");

    m_statisticsResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringBaselineConfig::Jsonize() const
{
  JsonValue payload;

  if(m_constraintsResourceHasBeenSet)
  {
   payload.WithObject("ConstraintsResource", m_constraintsResource.Jsonize());

  }

  if(m_statisticsResourceHasBeenSet)
  {
   payload.WithObject("StatisticsResource", m_statisticsResource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
