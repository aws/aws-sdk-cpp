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
