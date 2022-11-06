/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/GetWorkflowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkflowResult::GetWorkflowResult() : 
    m_status(MigrationWorkflowStatusEnum::NOT_SET),
    m_totalSteps(0),
    m_completedSteps(0)
{
}

GetWorkflowResult::GetWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(MigrationWorkflowStatusEnum::NOT_SET),
    m_totalSteps(0),
    m_completedSteps(0)
{
  *this = result;
}

GetWorkflowResult& GetWorkflowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("templateId"))
  {
    m_templateId = jsonValue.GetString("templateId");

  }

  if(jsonValue.ValueExists("adsApplicationConfigurationId"))
  {
    m_adsApplicationConfigurationId = jsonValue.GetString("adsApplicationConfigurationId");

  }

  if(jsonValue.ValueExists("adsApplicationName"))
  {
    m_adsApplicationName = jsonValue.GetString("adsApplicationName");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = MigrationWorkflowStatusEnumMapper::GetMigrationWorkflowStatusEnumForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("lastStartTime"))
  {
    m_lastStartTime = jsonValue.GetDouble("lastStartTime");

  }

  if(jsonValue.ValueExists("lastStopTime"))
  {
    m_lastStopTime = jsonValue.GetDouble("lastStopTime");

  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("lastModifiedTime");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

  }

  if(jsonValue.ValueExists("tools"))
  {
    Aws::Utils::Array<JsonView> toolsJsonList = jsonValue.GetArray("tools");
    for(unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex)
    {
      m_tools.push_back(toolsJsonList[toolsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("totalSteps"))
  {
    m_totalSteps = jsonValue.GetInteger("totalSteps");

  }

  if(jsonValue.ValueExists("completedSteps"))
  {
    m_completedSteps = jsonValue.GetInteger("completedSteps");

  }

  if(jsonValue.ValueExists("workflowInputs"))
  {
    Aws::Map<Aws::String, JsonView> workflowInputsJsonMap = jsonValue.GetObject("workflowInputs").GetAllObjects();
    for(auto& workflowInputsItem : workflowInputsJsonMap)
    {
      m_workflowInputs[workflowInputsItem.first] = workflowInputsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("workflowBucket"))
  {
    m_workflowBucket = jsonValue.GetString("workflowBucket");

  }



  return *this;
}
