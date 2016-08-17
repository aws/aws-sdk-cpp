/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/AutoScalingThresholds.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

AutoScalingThresholds::AutoScalingThresholds() : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_thresholdsWaitTime(0),
    m_thresholdsWaitTimeHasBeenSet(false),
    m_ignoreMetricsTime(0),
    m_ignoreMetricsTimeHasBeenSet(false),
    m_cpuThreshold(0.0),
    m_cpuThresholdHasBeenSet(false),
    m_memoryThreshold(0.0),
    m_memoryThresholdHasBeenSet(false),
    m_loadThreshold(0.0),
    m_loadThresholdHasBeenSet(false),
    m_alarmsHasBeenSet(false)
{
}

AutoScalingThresholds::AutoScalingThresholds(const JsonValue& jsonValue) : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_thresholdsWaitTime(0),
    m_thresholdsWaitTimeHasBeenSet(false),
    m_ignoreMetricsTime(0),
    m_ignoreMetricsTimeHasBeenSet(false),
    m_cpuThreshold(0.0),
    m_cpuThresholdHasBeenSet(false),
    m_memoryThreshold(0.0),
    m_memoryThresholdHasBeenSet(false),
    m_loadThreshold(0.0),
    m_loadThresholdHasBeenSet(false),
    m_alarmsHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingThresholds& AutoScalingThresholds::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThresholdsWaitTime"))
  {
    m_thresholdsWaitTime = jsonValue.GetInteger("ThresholdsWaitTime");

    m_thresholdsWaitTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IgnoreMetricsTime"))
  {
    m_ignoreMetricsTime = jsonValue.GetInteger("IgnoreMetricsTime");

    m_ignoreMetricsTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CpuThreshold"))
  {
    m_cpuThreshold = jsonValue.GetDouble("CpuThreshold");

    m_cpuThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemoryThreshold"))
  {
    m_memoryThreshold = jsonValue.GetDouble("MemoryThreshold");

    m_memoryThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoadThreshold"))
  {
    m_loadThreshold = jsonValue.GetDouble("LoadThreshold");

    m_loadThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Alarms"))
  {
    Array<JsonValue> alarmsJsonList = jsonValue.GetArray("Alarms");
    for(unsigned alarmsIndex = 0; alarmsIndex < alarmsJsonList.GetLength(); ++alarmsIndex)
    {
      m_alarms.push_back(alarmsJsonList[alarmsIndex].AsString());
    }
    m_alarmsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingThresholds::Jsonize() const
{
  JsonValue payload;

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_thresholdsWaitTimeHasBeenSet)
  {
   payload.WithInteger("ThresholdsWaitTime", m_thresholdsWaitTime);

  }

  if(m_ignoreMetricsTimeHasBeenSet)
  {
   payload.WithInteger("IgnoreMetricsTime", m_ignoreMetricsTime);

  }

  if(m_cpuThresholdHasBeenSet)
  {
   payload.WithDouble("CpuThreshold", m_cpuThreshold);

  }

  if(m_memoryThresholdHasBeenSet)
  {
   payload.WithDouble("MemoryThreshold", m_memoryThreshold);

  }

  if(m_loadThresholdHasBeenSet)
  {
   payload.WithDouble("LoadThreshold", m_loadThreshold);

  }

  if(m_alarmsHasBeenSet)
  {
   Array<JsonValue> alarmsJsonList(m_alarms.size());
   for(unsigned alarmsIndex = 0; alarmsIndex < alarmsJsonList.GetLength(); ++alarmsIndex)
   {
     alarmsJsonList[alarmsIndex].AsString(m_alarms[alarmsIndex]);
   }
   payload.WithArray("Alarms", std::move(alarmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws