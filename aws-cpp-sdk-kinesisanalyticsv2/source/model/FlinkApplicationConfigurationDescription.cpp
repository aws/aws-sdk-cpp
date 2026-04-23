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
