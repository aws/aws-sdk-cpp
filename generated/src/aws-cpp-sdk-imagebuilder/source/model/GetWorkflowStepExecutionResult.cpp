/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetWorkflowStepExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkflowStepExecutionResult::GetWorkflowStepExecutionResult() : 
    m_status(WorkflowStepExecutionStatus::NOT_SET),
    m_rollbackStatus(WorkflowStepExecutionRollbackStatus::NOT_SET),
    m_timeoutSeconds(0)
{
}

GetWorkflowStepExecutionResult::GetWorkflowStepExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(WorkflowStepExecutionStatus::NOT_SET),
    m_rollbackStatus(WorkflowStepExecutionRollbackStatus::NOT_SET),
    m_timeoutSeconds(0)
{
  *this = result;
}

GetWorkflowStepExecutionResult& GetWorkflowStepExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("stepExecutionId"))
  {
    m_stepExecutionId = jsonValue.GetString("stepExecutionId");

  }

  if(jsonValue.ValueExists("workflowBuildVersionArn"))
  {
    m_workflowBuildVersionArn = jsonValue.GetString("workflowBuildVersionArn");

  }

  if(jsonValue.ValueExists("workflowExecutionId"))
  {
    m_workflowExecutionId = jsonValue.GetString("workflowExecutionId");

  }

  if(jsonValue.ValueExists("imageBuildVersionArn"))
  {
    m_imageBuildVersionArn = jsonValue.GetString("imageBuildVersionArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkflowStepExecutionStatusMapper::GetWorkflowStepExecutionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("rollbackStatus"))
  {
    m_rollbackStatus = WorkflowStepExecutionRollbackStatusMapper::GetWorkflowStepExecutionRollbackStatusForName(jsonValue.GetString("rollbackStatus"));

  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

  }

  if(jsonValue.ValueExists("inputs"))
  {
    m_inputs = jsonValue.GetString("inputs");

  }

  if(jsonValue.ValueExists("outputs"))
  {
    m_outputs = jsonValue.GetString("outputs");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

  }

  if(jsonValue.ValueExists("onFailure"))
  {
    m_onFailure = jsonValue.GetString("onFailure");

  }

  if(jsonValue.ValueExists("timeoutSeconds"))
  {
    m_timeoutSeconds = jsonValue.GetInteger("timeoutSeconds");

  }



  return *this;
}
