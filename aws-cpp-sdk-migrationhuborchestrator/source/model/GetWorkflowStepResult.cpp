/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/GetWorkflowStepResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkflowStepResult::GetWorkflowStepResult() : 
    m_stepActionType(StepActionType::NOT_SET),
    m_owner(Owner::NOT_SET),
    m_status(StepStatus::NOT_SET),
    m_noOfSrvCompleted(0),
    m_noOfSrvFailed(0),
    m_totalNoOfSrv(0)
{
}

GetWorkflowStepResult::GetWorkflowStepResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_stepActionType(StepActionType::NOT_SET),
    m_owner(Owner::NOT_SET),
    m_status(StepStatus::NOT_SET),
    m_noOfSrvCompleted(0),
    m_noOfSrvFailed(0),
    m_totalNoOfSrv(0)
{
  *this = result;
}

GetWorkflowStepResult& GetWorkflowStepResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("stepGroupId"))
  {
    m_stepGroupId = jsonValue.GetString("stepGroupId");

  }

  if(jsonValue.ValueExists("workflowId"))
  {
    m_workflowId = jsonValue.GetString("workflowId");

  }

  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("stepActionType"))
  {
    m_stepActionType = StepActionTypeMapper::GetStepActionTypeForName(jsonValue.GetString("stepActionType"));

  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = OwnerMapper::GetOwnerForName(jsonValue.GetString("owner"));

  }

  if(jsonValue.ValueExists("workflowStepAutomationConfiguration"))
  {
    m_workflowStepAutomationConfiguration = jsonValue.GetObject("workflowStepAutomationConfiguration");

  }

  if(jsonValue.ValueExists("stepTarget"))
  {
    Aws::Utils::Array<JsonView> stepTargetJsonList = jsonValue.GetArray("stepTarget");
    for(unsigned stepTargetIndex = 0; stepTargetIndex < stepTargetJsonList.GetLength(); ++stepTargetIndex)
    {
      m_stepTarget.push_back(stepTargetJsonList[stepTargetIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("previous"))
  {
    Aws::Utils::Array<JsonView> previousJsonList = jsonValue.GetArray("previous");
    for(unsigned previousIndex = 0; previousIndex < previousJsonList.GetLength(); ++previousIndex)
    {
      m_previous.push_back(previousJsonList[previousIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("next"))
  {
    Aws::Utils::Array<JsonView> nextJsonList = jsonValue.GetArray("next");
    for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
    {
      m_next.push_back(nextJsonList[nextIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StepStatusMapper::GetStepStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }

  if(jsonValue.ValueExists("scriptOutputLocation"))
  {
    m_scriptOutputLocation = jsonValue.GetString("scriptOutputLocation");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("lastStartTime"))
  {
    m_lastStartTime = jsonValue.GetDouble("lastStartTime");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

  }

  if(jsonValue.ValueExists("noOfSrvCompleted"))
  {
    m_noOfSrvCompleted = jsonValue.GetInteger("noOfSrvCompleted");

  }

  if(jsonValue.ValueExists("noOfSrvFailed"))
  {
    m_noOfSrvFailed = jsonValue.GetInteger("noOfSrvFailed");

  }

  if(jsonValue.ValueExists("totalNoOfSrv"))
  {
    m_totalNoOfSrv = jsonValue.GetInteger("totalNoOfSrv");

  }



  return *this;
}
