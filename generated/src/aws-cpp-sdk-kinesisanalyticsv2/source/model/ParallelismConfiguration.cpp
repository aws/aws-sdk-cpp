/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ParallelismConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ParallelismConfiguration::ParallelismConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ParallelismConfiguration& ParallelismConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationType"))
  {
    m_configurationType = ConfigurationTypeMapper::GetConfigurationTypeForName(jsonValue.GetString("ConfigurationType"));
    m_configurationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Parallelism"))
  {
    m_parallelism = jsonValue.GetInteger("Parallelism");
    m_parallelismHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParallelismPerKPU"))
  {
    m_parallelismPerKPU = jsonValue.GetInteger("ParallelismPerKPU");
    m_parallelismPerKPUHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoScalingEnabled"))
  {
    m_autoScalingEnabled = jsonValue.GetBool("AutoScalingEnabled");
    m_autoScalingEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue ParallelismConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_configurationTypeHasBeenSet)
  {
   payload.WithString("ConfigurationType", ConfigurationTypeMapper::GetNameForConfigurationType(m_configurationType));
  }

  if(m_parallelismHasBeenSet)
  {
   payload.WithInteger("Parallelism", m_parallelism);

  }

  if(m_parallelismPerKPUHasBeenSet)
  {
   payload.WithInteger("ParallelismPerKPU", m_parallelismPerKPU);

  }

  if(m_autoScalingEnabledHasBeenSet)
  {
   payload.WithBool("AutoScalingEnabled", m_autoScalingEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
