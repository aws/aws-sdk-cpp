/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/FlinkApplicationConfigurationUpdate.h>
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

FlinkApplicationConfigurationUpdate::FlinkApplicationConfigurationUpdate() : 
    m_checkpointConfigurationUpdateHasBeenSet(false),
    m_monitoringConfigurationUpdateHasBeenSet(false),
    m_parallelismConfigurationUpdateHasBeenSet(false)
{
}

FlinkApplicationConfigurationUpdate::FlinkApplicationConfigurationUpdate(JsonView jsonValue) : 
    m_checkpointConfigurationUpdateHasBeenSet(false),
    m_monitoringConfigurationUpdateHasBeenSet(false),
    m_parallelismConfigurationUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

FlinkApplicationConfigurationUpdate& FlinkApplicationConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CheckpointConfigurationUpdate"))
  {
    m_checkpointConfigurationUpdate = jsonValue.GetObject("CheckpointConfigurationUpdate");

    m_checkpointConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringConfigurationUpdate"))
  {
    m_monitoringConfigurationUpdate = jsonValue.GetObject("MonitoringConfigurationUpdate");

    m_monitoringConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelismConfigurationUpdate"))
  {
    m_parallelismConfigurationUpdate = jsonValue.GetObject("ParallelismConfigurationUpdate");

    m_parallelismConfigurationUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue FlinkApplicationConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_checkpointConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("CheckpointConfigurationUpdate", m_checkpointConfigurationUpdate.Jsonize());

  }

  if(m_monitoringConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("MonitoringConfigurationUpdate", m_monitoringConfigurationUpdate.Jsonize());

  }

  if(m_parallelismConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("ParallelismConfigurationUpdate", m_parallelismConfigurationUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
