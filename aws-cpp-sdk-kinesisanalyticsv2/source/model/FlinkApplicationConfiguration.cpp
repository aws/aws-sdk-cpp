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

#include <aws/kinesisanalyticsv2/model/FlinkApplicationConfiguration.h>
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

FlinkApplicationConfiguration::FlinkApplicationConfiguration() : 
    m_checkpointConfigurationHasBeenSet(false),
    m_monitoringConfigurationHasBeenSet(false),
    m_parallelismConfigurationHasBeenSet(false)
{
}

FlinkApplicationConfiguration::FlinkApplicationConfiguration(JsonView jsonValue) : 
    m_checkpointConfigurationHasBeenSet(false),
    m_monitoringConfigurationHasBeenSet(false),
    m_parallelismConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

FlinkApplicationConfiguration& FlinkApplicationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CheckpointConfiguration"))
  {
    m_checkpointConfiguration = jsonValue.GetObject("CheckpointConfiguration");

    m_checkpointConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringConfiguration"))
  {
    m_monitoringConfiguration = jsonValue.GetObject("MonitoringConfiguration");

    m_monitoringConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelismConfiguration"))
  {
    m_parallelismConfiguration = jsonValue.GetObject("ParallelismConfiguration");

    m_parallelismConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue FlinkApplicationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_checkpointConfigurationHasBeenSet)
  {
   payload.WithObject("CheckpointConfiguration", m_checkpointConfiguration.Jsonize());

  }

  if(m_monitoringConfigurationHasBeenSet)
  {
   payload.WithObject("MonitoringConfiguration", m_monitoringConfiguration.Jsonize());

  }

  if(m_parallelismConfigurationHasBeenSet)
  {
   payload.WithObject("ParallelismConfiguration", m_parallelismConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
