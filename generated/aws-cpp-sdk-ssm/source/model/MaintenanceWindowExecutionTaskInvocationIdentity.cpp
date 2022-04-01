/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowExecutionTaskInvocationIdentity.h>
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

MaintenanceWindowExecutionTaskInvocationIdentity::MaintenanceWindowExecutionTaskInvocationIdentity() : 
    m_windowExecutionIdHasBeenSet(false),
    m_taskExecutionIdHasBeenSet(false),
    m_invocationIdHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_taskType(MaintenanceWindowTaskType::NOT_SET),
    m_taskTypeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_status(MaintenanceWindowExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_ownerInformationHasBeenSet(false),
    m_windowTargetIdHasBeenSet(false)
{
}

MaintenanceWindowExecutionTaskInvocationIdentity::MaintenanceWindowExecutionTaskInvocationIdentity(JsonView jsonValue) : 
    m_windowExecutionIdHasBeenSet(false),
    m_taskExecutionIdHasBeenSet(false),
    m_invocationIdHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_taskType(MaintenanceWindowTaskType::NOT_SET),
    m_taskTypeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_status(MaintenanceWindowExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_ownerInformationHasBeenSet(false),
    m_windowTargetIdHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowExecutionTaskInvocationIdentity& MaintenanceWindowExecutionTaskInvocationIdentity::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("InvocationId"))
  {
    m_invocationId = jsonValue.GetString("InvocationId");

    m_invocationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionId"))
  {
    m_executionId = jsonValue.GetString("ExecutionId");

    m_executionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskType"))
  {
    m_taskType = MaintenanceWindowTaskTypeMapper::GetMaintenanceWindowTaskTypeForName(jsonValue.GetString("TaskType"));

    m_taskTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    m_parameters = jsonValue.GetString("Parameters");

    m_parametersHasBeenSet = true;
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

  if(jsonValue.ValueExists("OwnerInformation"))
  {
    m_ownerInformation = jsonValue.GetString("OwnerInformation");

    m_ownerInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WindowTargetId"))
  {
    m_windowTargetId = jsonValue.GetString("WindowTargetId");

    m_windowTargetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowExecutionTaskInvocationIdentity::Jsonize() const
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

  if(m_invocationIdHasBeenSet)
  {
   payload.WithString("InvocationId", m_invocationId);

  }

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("ExecutionId", m_executionId);

  }

  if(m_taskTypeHasBeenSet)
  {
   payload.WithString("TaskType", MaintenanceWindowTaskTypeMapper::GetNameForMaintenanceWindowTaskType(m_taskType));
  }

  if(m_parametersHasBeenSet)
  {
   payload.WithString("Parameters", m_parameters);

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

  if(m_ownerInformationHasBeenSet)
  {
   payload.WithString("OwnerInformation", m_ownerInformation);

  }

  if(m_windowTargetIdHasBeenSet)
  {
   payload.WithString("WindowTargetId", m_windowTargetId);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
