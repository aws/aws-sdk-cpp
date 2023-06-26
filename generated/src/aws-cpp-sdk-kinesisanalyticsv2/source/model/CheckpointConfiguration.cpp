/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
