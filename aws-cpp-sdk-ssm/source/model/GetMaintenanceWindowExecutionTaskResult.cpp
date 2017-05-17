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

#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMaintenanceWindowExecutionTaskResult::GetMaintenanceWindowExecutionTaskResult() : 
    m_type(MaintenanceWindowTaskType::NOT_SET),
    m_priority(0),
    m_status(MaintenanceWindowExecutionStatus::NOT_SET)
{
}

GetMaintenanceWindowExecutionTaskResult::GetMaintenanceWindowExecutionTaskResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_type(MaintenanceWindowTaskType::NOT_SET),
    m_priority(0),
    m_status(MaintenanceWindowExecutionStatus::NOT_SET)
{
  *this = result;
}

GetMaintenanceWindowExecutionTaskResult& GetMaintenanceWindowExecutionTaskResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");

  }

  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = MaintenanceWindowTaskTypeMapper::GetMaintenanceWindowTaskTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("TaskParameters"))
  {
    Array<JsonValue> taskParametersJsonList = jsonValue.GetArray("TaskParameters");
    for(unsigned taskParametersIndex = 0; taskParametersIndex < taskParametersJsonList.GetLength(); ++taskParametersIndex)
    {
      Aws::Map<Aws::String, JsonValue> maintenanceWindowTaskParametersJsonMap = taskParametersJsonList[taskParametersIndex].GetAllObjects();
      Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression> maintenanceWindowTaskParametersMap;
      for(auto& maintenanceWindowTaskParametersItem : maintenanceWindowTaskParametersJsonMap)
      {
        maintenanceWindowTaskParametersMap[maintenanceWindowTaskParametersItem.first] = maintenanceWindowTaskParametersItem.second.AsObject();
      }
      m_taskParameters.push_back(std::move(maintenanceWindowTaskParametersMap));
    }
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

  }

  if(jsonValue.ValueExists("MaxConcurrency"))
  {
    m_maxConcurrency = jsonValue.GetString("MaxConcurrency");

  }

  if(jsonValue.ValueExists("MaxErrors"))
  {
    m_maxErrors = jsonValue.GetString("MaxErrors");

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
