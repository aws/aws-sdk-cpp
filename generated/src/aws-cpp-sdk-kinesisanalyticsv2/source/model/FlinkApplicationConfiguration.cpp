/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
