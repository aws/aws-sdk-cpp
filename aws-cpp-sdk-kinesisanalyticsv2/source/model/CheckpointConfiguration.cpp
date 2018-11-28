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

#include <aws/kinesisanalyticsv2/model/CheckpointConfiguration.h>
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

CheckpointConfiguration::CheckpointConfiguration() : 
    m_configurationType(ConfigurationType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_checkpointingEnabled(false),
    m_checkpointingEnabledHasBeenSet(false),
    m_checkpointInterval(0),
    m_checkpointIntervalHasBeenSet(false),
    m_minPauseBetweenCheckpoints(0),
    m_minPauseBetweenCheckpointsHasBeenSet(false)
{
}

CheckpointConfiguration::CheckpointConfiguration(JsonView jsonValue) : 
    m_configurationType(ConfigurationType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_checkpointingEnabled(false),
    m_checkpointingEnabledHasBeenSet(false),
    m_checkpointInterval(0),
    m_checkpointIntervalHasBeenSet(false),
    m_minPauseBetweenCheckpoints(0),
    m_minPauseBetweenCheckpointsHasBeenSet(false)
{
  *this = jsonValue;
}

CheckpointConfiguration& CheckpointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationType"))
  {
    m_configurationType = ConfigurationTypeMapper::GetConfigurationTypeForName(jsonValue.GetString("ConfigurationType"));

    m_configurationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CheckpointingEnabled"))
  {
    m_checkpointingEnabled = jsonValue.GetBool("CheckpointingEnabled");

    m_checkpointingEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CheckpointInterval"))
  {
    m_checkpointInterval = jsonValue.GetInt64("CheckpointInterval");

    m_checkpointIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinPauseBetweenCheckpoints"))
  {
    m_minPauseBetweenCheckpoints = jsonValue.GetInt64("MinPauseBetweenCheckpoints");

    m_minPauseBetweenCheckpointsHasBeenSet = true;
  }

  return *this;
}

JsonValue CheckpointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_configurationTypeHasBeenSet)
  {
   payload.WithString("ConfigurationType", ConfigurationTypeMapper::GetNameForConfigurationType(m_configurationType));
  }

  if(m_checkpointingEnabledHasBeenSet)
  {
   payload.WithBool("CheckpointingEnabled", m_checkpointingEnabled);

  }

  if(m_checkpointIntervalHasBeenSet)
  {
   payload.WithInt64("CheckpointInterval", m_checkpointInterval);

  }

  if(m_minPauseBetweenCheckpointsHasBeenSet)
  {
   payload.WithInt64("MinPauseBetweenCheckpoints", m_minPauseBetweenCheckpoints);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
