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

#include <aws/ssm/model/GetMaintenanceWindowExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMaintenanceWindowExecutionResult::GetMaintenanceWindowExecutionResult() : 
    m_status(MaintenanceWindowExecutionStatus::NOT_SET)
{
}

GetMaintenanceWindowExecutionResult::GetMaintenanceWindowExecutionResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_status(MaintenanceWindowExecutionStatus::NOT_SET)
{
  *this = result;
}

GetMaintenanceWindowExecutionResult& GetMaintenanceWindowExecutionResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("WindowExecutionId"))
  {
    m_windowExecutionId = jsonValue.GetString("WindowExecutionId");

  }

  if(jsonValue.ValueExists("TaskIds"))
  {
    Array<JsonValue> taskIdsJsonList = jsonValue.GetArray("TaskIds");
    for(unsigned taskIdsIndex = 0; taskIdsIndex < taskIdsJsonList.GetLength(); ++taskIdsIndex)
    {
      m_taskIds.push_back(taskIdsJsonList[taskIdsIndex].AsString());
    }
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



  return *this;
}
