/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ServiceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

ServiceConfiguration::ServiceConfiguration() : 
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_containerConfigurationsHasBeenSet(false),
    m_autoScalingConfiguration(AutoScalingConfiguration::NOT_SET),
    m_autoScalingConfigurationHasBeenSet(false),
    m_taskDefinitionArnHasBeenSet(false)
{
}

ServiceConfiguration::ServiceConfiguration(JsonView jsonValue) : 
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_containerConfigurationsHasBeenSet(false),
    m_autoScalingConfiguration(AutoScalingConfiguration::NOT_SET),
    m_autoScalingConfigurationHasBeenSet(false),
    m_taskDefinitionArnHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceConfiguration& ServiceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInteger("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetInteger("cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerConfigurations"))
  {
    Aws::Utils::Array<JsonView> containerConfigurationsJsonList = jsonValue.GetArray("containerConfigurations");
    for(unsigned containerConfigurationsIndex = 0; containerConfigurationsIndex < containerConfigurationsJsonList.GetLength(); ++containerConfigurationsIndex)
    {
      m_containerConfigurations.push_back(containerConfigurationsJsonList[containerConfigurationsIndex].AsObject());
    }
    m_containerConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingConfiguration"))
  {
    m_autoScalingConfiguration = AutoScalingConfigurationMapper::GetAutoScalingConfigurationForName(jsonValue.GetString("autoScalingConfiguration"));

    m_autoScalingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskDefinitionArn"))
  {
    m_taskDefinitionArn = jsonValue.GetString("taskDefinitionArn");

    m_taskDefinitionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_memoryHasBeenSet)
  {
   payload.WithInteger("memory", m_memory);

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithInteger("cpu", m_cpu);

  }

  if(m_containerConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerConfigurationsJsonList(m_containerConfigurations.size());
   for(unsigned containerConfigurationsIndex = 0; containerConfigurationsIndex < containerConfigurationsJsonList.GetLength(); ++containerConfigurationsIndex)
   {
     containerConfigurationsJsonList[containerConfigurationsIndex].AsObject(m_containerConfigurations[containerConfigurationsIndex].Jsonize());
   }
   payload.WithArray("containerConfigurations", std::move(containerConfigurationsJsonList));

  }

  if(m_autoScalingConfigurationHasBeenSet)
  {
   payload.WithString("autoScalingConfiguration", AutoScalingConfigurationMapper::GetNameForAutoScalingConfiguration(m_autoScalingConfiguration));
  }

  if(m_taskDefinitionArnHasBeenSet)
  {
   payload.WithString("taskDefinitionArn", m_taskDefinitionArn);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
