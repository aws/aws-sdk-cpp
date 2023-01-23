/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/FlinkApplicationConfigurationDescription.h>
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

FlinkApplicationConfigurationDescription::FlinkApplicationConfigurationDescription() : 
    m_checkpointConfigurationDescriptionHasBeenSet(false),
    m_monitoringConfigurationDescriptionHasBeenSet(false),
    m_parallelismConfigurationDescriptionHasBeenSet(false),
    m_jobPlanDescriptionHasBeenSet(false)
{
}

FlinkApplicationConfigurationDescription::FlinkApplicationConfigurationDescription(JsonView jsonValue) : 
    m_checkpointConfigurationDescriptionHasBeenSet(false),
    m_monitoringConfigurationDescriptionHasBeenSet(false),
    m_parallelismConfigurationDescriptionHasBeenSet(false),
    m_jobPlanDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

FlinkApplicationConfigurationDescription& FlinkApplicationConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CheckpointConfigurationDescription"))
  {
    m_checkpointConfigurationDescription = jsonValue.GetObject("CheckpointConfigurationDescription");

    m_checkpointConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringConfigurationDescription"))
  {
    m_monitoringConfigurationDescription = jsonValue.GetObject("MonitoringConfigurationDescription");

    m_monitoringConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelismConfigurationDescription"))
  {
    m_parallelismConfigurationDescription = jsonValue.GetObject("ParallelismConfigurationDescription");

    m_parallelismConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobPlanDescription"))
  {
    m_jobPlanDescription = jsonValue.GetString("JobPlanDescription");

    m_jobPlanDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue FlinkApplicationConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_checkpointConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("CheckpointConfigurationDescription", m_checkpointConfigurationDescription.Jsonize());

  }

  if(m_monitoringConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("MonitoringConfigurationDescription", m_monitoringConfigurationDescription.Jsonize());

  }

  if(m_parallelismConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("ParallelismConfigurationDescription", m_parallelismConfigurationDescription.Jsonize());

  }

  if(m_jobPlanDescriptionHasBeenSet)
  {
   payload.WithString("JobPlanDescription", m_jobPlanDescription);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
