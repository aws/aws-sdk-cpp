﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/model/MaintenanceWindowExecutionTaskIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

MaintenanceWindowExecutionTaskIdentity::MaintenanceWindowExecutionTaskIdentity() : 
    m_windowExecutionIdHasBeenSet(false),
    m_taskExecutionIdHasBeenSet(false),
    m_status(MaintenanceWindowExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_taskType(MaintenanceWindowTaskType::NOT_SET),
    m_taskTypeHasBeenSet(false)
{
}

MaintenanceWindowExecutionTaskIdentity::MaintenanceWindowExecutionTaskIdentity(const JsonValue& jsonValue) : 
    m_windowExecutionIdHasBeenSet(false),
    m_taskExecutionIdHasBeenSet(false),
    m_status(MaintenanceWindowExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_taskType(MaintenanceWindowTaskType::NOT_SET),
    m_taskTypeHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowExecutionTaskIdentity& MaintenanceWindowExecutionTaskIdentity::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("WindowExecutionId"))
  {
    m_windowExecutionId = jsonValue.GetString("WindowExecutionId");

    m_windowExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskExecutionId"))
  {
    m_taskExecutionId = jsonValue.GetString("TaskExecutionId");

    m_taskExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MaintenanceWindowExecutionStatusMapper::GetMaintenanceWindowExecutionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");

    m_statusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskType"))
  {
    m_taskType = MaintenanceWindowTaskTypeMapper::GetMaintenanceWindowTaskTypeForName(jsonValue.GetString("TaskType"));

    m_taskTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowExecutionTaskIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_windowExecutionIdHasBeenSet)
  {
   payload.WithString("WindowExecutionId", m_windowExecutionId);

  }

  if(m_taskExecutionIdHasBeenSet)
  {
   payload.WithString("TaskExecutionId", m_taskExecutionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MaintenanceWindowExecutionStatusMapper::GetNameForMaintenanceWindowExecutionStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   payload.WithString("StatusDetails", m_statusDetails);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("TaskArn", m_taskArn);

  }

  if(m_taskTypeHasBeenSet)
  {
   payload.WithString("TaskType", MaintenanceWindowTaskTypeMapper::GetNameForMaintenanceWindowTaskType(m_taskType));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws