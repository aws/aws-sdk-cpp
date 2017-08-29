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

#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskInvocationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMaintenanceWindowExecutionTaskInvocationResult::GetMaintenanceWindowExecutionTaskInvocationResult() : 
    m_taskType(MaintenanceWindowTaskType::NOT_SET),
    m_status(MaintenanceWindowExecutionStatus::NOT_SET)
{
}

GetMaintenanceWindowExecutionTaskInvocationResult::GetMaintenanceWindowExecutionTaskInvocationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_taskType(MaintenanceWindowTaskType::NOT_SET),
    m_status(MaintenanceWindowExecutionStatus::NOT_SET)
{
  *this = result;
}

GetMaintenanceWindowExecutionTaskInvocationResult& GetMaintenanceWindowExecutionTaskInvocationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("WindowExecutionId"))
  {
    m_windowExecutionId = jsonValue.GetString("WindowExecutionId");

  }

  if(jsonValue.ValueExists("TaskExecutionId"))
  {
    m_taskExecutionId = jsonValue.GetString("TaskExecutionId");

  }

  if(jsonValue.ValueExists("InvocationId"))
  {
    m_invocationId = jsonValue.GetString("InvocationId");

  }

  if(jsonValue.ValueExists("ExecutionId"))
  {
    m_executionId = jsonValue.GetString("ExecutionId");

  }

  if(jsonValue.ValueExists("TaskType"))
  {
    m_taskType = MaintenanceWindowTaskTypeMapper::GetMaintenanceWindowTaskTypeForName(jsonValue.GetString("TaskType"));

  }

  if(jsonValue.ValueExists("Parameters"))
  {
    m_parameters = jsonValue.GetString("Parameters");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MaintenanceWindowExecutionStatusMapper::GetMaintenanceWindowExecutionStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }

  if(jsonValue.ValueExists("OwnerInformation"))
  {
    m_ownerInformation = jsonValue.GetString("OwnerInformation");

  }

  if(jsonValue.ValueExists("WindowTargetId"))
  {
    m_windowTargetId = jsonValue.GetString("WindowTargetId");

  }



  return *this;
}
