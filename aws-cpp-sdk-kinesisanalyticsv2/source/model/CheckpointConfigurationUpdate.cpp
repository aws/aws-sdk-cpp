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

#include <aws/kinesisanalyticsv2/model/CheckpointConfigurationUpdate.h>
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

CheckpointConfigurationUpdate::CheckpointConfigurationUpdate() : 
    m_configurationTypeUpdate(ConfigurationType::NOT_SET),
    m_configurationTypeUpdateHasBeenSet(false),
    m_checkpointingEnabledUpdate(false),
    m_checkpointingEnabledUpdateHasBeenSet(false),
    m_checkpointIntervalUpdate(0),
    m_checkpointIntervalUpdateHasBeenSet(false),
    m_minPauseBetweenCheckpointsUpdate(0),
    m_minPauseBetweenCheckpointsUpdateHasBeenSet(false)
{
}

CheckpointConfigurationUpdate::CheckpointConfigurationUpdate(JsonView jsonValue) : 
    m_configurationTypeUpdate(ConfigurationType::NOT_SET),
    m_configurationTypeUpdateHasBeenSet(false),
    m_checkpointingEnabledUpdate(false),
    m_checkpointingEnabledUpdateHasBeenSet(false),
    m_checkpointIntervalUpdate(0),
    m_checkpointIntervalUpdateHasBeenSet(false),
    m_minPauseBetweenCheckpointsUpdate(0),
    m_minPauseBetweenCheckpointsUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

CheckpointConfigurationUpdate& CheckpointConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationTypeUpdate"))
  {
    m_configurationTypeUpdate = ConfigurationTypeMapper::GetConfigurationTypeForName(jsonValue.GetString("ConfigurationTypeUpdate"));

    m_configurationTypeUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CheckpointingEnabledUpdate"))
  {
    m_checkpointingEnabledUpdate = jsonValue.GetBool("CheckpointingEnabledUpdate");

    m_checkpointingEnabledUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CheckpointIntervalUpdate"))
  {
    m_checkpointIntervalUpdate = jsonValue.GetInt64("CheckpointIntervalUpdate");

    m_checkpointIntervalUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinPauseBetweenCheckpointsUpdate"))
  {
    m_minPauseBetweenCheckpointsUpdate = jsonValue.GetInt64("MinPauseBetweenCheckpointsUpdate");

    m_minPauseBetweenCheckpointsUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue CheckpointConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_configurationTypeUpdateHasBeenSet)
  {
   payload.WithString("ConfigurationTypeUpdate", ConfigurationTypeMapper::GetNameForConfigurationType(m_configurationTypeUpdate));
  }

  if(m_checkpointingEnabledUpdateHasBeenSet)
  {
   payload.WithBool("CheckpointingEnabledUpdate", m_checkpointingEnabledUpdate);

  }

  if(m_checkpointIntervalUpdateHasBeenSet)
  {
   payload.WithInt64("CheckpointIntervalUpdate", m_checkpointIntervalUpdate);

  }

  if(m_minPauseBetweenCheckpointsUpdateHasBeenSet)
  {
   payload.WithInt64("MinPauseBetweenCheckpointsUpdate", m_minPauseBetweenCheckpointsUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
