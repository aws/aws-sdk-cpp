/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringScheduleConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MonitoringScheduleConfig::MonitoringScheduleConfig() : 
    m_scheduleConfigHasBeenSet(false),
    m_monitoringJobDefinitionHasBeenSet(false),
    m_monitoringJobDefinitionNameHasBeenSet(false),
    m_monitoringType(MonitoringType::NOT_SET),
    m_monitoringTypeHasBeenSet(false)
{
}

MonitoringScheduleConfig::MonitoringScheduleConfig(JsonView jsonValue) : 
    m_scheduleConfigHasBeenSet(false),
    m_monitoringJobDefinitionHasBeenSet(false),
    m_monitoringJobDefinitionNameHasBeenSet(false),
    m_monitoringType(MonitoringType::NOT_SET),
    m_monitoringTypeHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringScheduleConfig& MonitoringScheduleConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleConfig"))
  {
    m_scheduleConfig = jsonValue.GetObject("ScheduleConfig");

    m_scheduleConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringJobDefinition"))
  {
    m_monitoringJobDefinition = jsonValue.GetObject("MonitoringJobDefinition");

    m_monitoringJobDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringJobDefinitionName"))
  {
    m_monitoringJobDefinitionName = jsonValue.GetString("MonitoringJobDefinitionName");

    m_monitoringJobDefinitionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringType"))
  {
    m_monitoringType = MonitoringTypeMapper::GetMonitoringTypeForName(jsonValue.GetString("MonitoringType"));

    m_monitoringTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringScheduleConfig::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleConfigHasBeenSet)
  {
   payload.WithObject("ScheduleConfig", m_scheduleConfig.Jsonize());

  }

  if(m_monitoringJobDefinitionHasBeenSet)
  {
   payload.WithObject("MonitoringJobDefinition", m_monitoringJobDefinition.Jsonize());

  }

  if(m_monitoringJobDefinitionNameHasBeenSet)
  {
   payload.WithString("MonitoringJobDefinitionName", m_monitoringJobDefinitionName);

  }

  if(m_monitoringTypeHasBeenSet)
  {
   payload.WithString("MonitoringType", MonitoringTypeMapper::GetNameForMonitoringType(m_monitoringType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
