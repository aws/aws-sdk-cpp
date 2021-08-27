/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/UpdateMaintenanceWindowTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateMaintenanceWindowTaskResult::UpdateMaintenanceWindowTaskResult() : 
    m_priority(0)
{
}

UpdateMaintenanceWindowTaskResult::UpdateMaintenanceWindowTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_priority(0)
{
  *this = result;
}

UpdateMaintenanceWindowTaskResult& UpdateMaintenanceWindowTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WindowId"))
  {
    m_windowId = jsonValue.GetString("WindowId");

  }

  if(jsonValue.ValueExists("WindowTaskId"))
  {
    m_windowTaskId = jsonValue.GetString("WindowTaskId");

  }

  if(jsonValue.ValueExists("Targets"))
  {
    Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");

  }

  if(jsonValue.ValueExists("ServiceRoleArn"))
  {
    m_serviceRoleArn = jsonValue.GetString("ServiceRoleArn");

  }

  if(jsonValue.ValueExists("TaskParameters"))
  {
    Aws::Map<Aws::String, JsonView> taskParametersJsonMap = jsonValue.GetObject("TaskParameters").GetAllObjects();
    for(auto& taskParametersItem : taskParametersJsonMap)
    {
      m_taskParameters[taskParametersItem.first] = taskParametersItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("TaskInvocationParameters"))
  {
    m_taskInvocationParameters = jsonValue.GetObject("TaskInvocationParameters");

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

  if(jsonValue.ValueExists("LoggingInfo"))
  {
    m_loggingInfo = jsonValue.GetObject("LoggingInfo");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }



  return *this;
}
