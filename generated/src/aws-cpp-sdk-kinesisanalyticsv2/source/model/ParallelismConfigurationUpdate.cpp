/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ParallelismConfigurationUpdate.h>
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

ParallelismConfigurationUpdate::ParallelismConfigurationUpdate() : 
    m_configurationTypeUpdate(ConfigurationType::NOT_SET),
    m_configurationTypeUpdateHasBeenSet(false),
    m_parallelismUpdate(0),
    m_parallelismUpdateHasBeenSet(false),
    m_parallelismPerKPUUpdate(0),
    m_parallelismPerKPUUpdateHasBeenSet(false),
    m_autoScalingEnabledUpdate(false),
    m_autoScalingEnabledUpdateHasBeenSet(false)
{
}

ParallelismConfigurationUpdate::ParallelismConfigurationUpdate(JsonView jsonValue) : 
    m_configurationTypeUpdate(ConfigurationType::NOT_SET),
    m_configurationTypeUpdateHasBeenSet(false),
    m_parallelismUpdate(0),
    m_parallelismUpdateHasBeenSet(false),
    m_parallelismPerKPUUpdate(0),
    m_parallelismPerKPUUpdateHasBeenSet(false),
    m_autoScalingEnabledUpdate(false),
    m_autoScalingEnabledUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ParallelismConfigurationUpdate& ParallelismConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationTypeUpdate"))
  {
    m_configurationTypeUpdate = ConfigurationTypeMapper::GetConfigurationTypeForName(jsonValue.GetString("ConfigurationTypeUpdate"));

    m_configurationTypeUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelismUpdate"))
  {
    m_parallelismUpdate = jsonValue.GetInteger("ParallelismUpdate");

    m_parallelismUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelismPerKPUUpdate"))
  {
    m_parallelismPerKPUUpdate = jsonValue.GetInteger("ParallelismPerKPUUpdate");

    m_parallelismPerKPUUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingEnabledUpdate"))
  {
    m_autoScalingEnabledUpdate = jsonValue.GetBool("AutoScalingEnabledUpdate");

    m_autoScalingEnabledUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ParallelismConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_configurationTypeUpdateHasBeenSet)
  {
   payload.WithString("ConfigurationTypeUpdate", ConfigurationTypeMapper::GetNameForConfigurationType(m_configurationTypeUpdate));
  }

  if(m_parallelismUpdateHasBeenSet)
  {
   payload.WithInteger("ParallelismUpdate", m_parallelismUpdate);

  }

  if(m_parallelismPerKPUUpdateHasBeenSet)
  {
   payload.WithInteger("ParallelismPerKPUUpdate", m_parallelismPerKPUUpdate);

  }

  if(m_autoScalingEnabledUpdateHasBeenSet)
  {
   payload.WithBool("AutoScalingEnabledUpdate", m_autoScalingEnabledUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
