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

GetWorkflowStepExecutionResult::GetWorkflowStepExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWorkflowStepExecutionResult& GetWorkflowStepExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");
    m_requestIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepExecutionId"))
  {
    m_stepExecutionId = jsonValue.GetString("stepExecutionId");
    m_stepExecutionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowBuildVersionArn"))
  {
    m_workflowBuildVersionArn = jsonValue.GetString("workflowBuildVersionArn");
    m_workflowBuildVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowExecutionId"))
  {
    m_workflowExecutionId = jsonValue.GetString("workflowExecutionId");
    m_workflowExecutionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imageBuildVersionArn"))
  {
    m_imageBuildVersionArn = jsonValue.GetString("imageBuildVersionArn");
    m_imageBuildVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkflowStepExecutionStatusMapper::GetWorkflowStepExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rollbackStatus"))
  {
    m_rollbackStatus = WorkflowStepExecutionRollbackStatusMapper::GetWorkflowStepExecutionRollbackStatusForName(jsonValue.GetString("rollbackStatus"));
    m_rollbackStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputs"))
  {
    m_inputs = jsonValue.GetString("inputs");
    m_inputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputs"))
  {
    m_outputs = jsonValue.GetString("outputs");
    m_outputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("onFailure"))
  {
    m_onFailure = jsonValue.GetString("onFailure");
    m_onFailureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeoutSeconds"))
  {
    m_timeoutSeconds = jsonValue.GetInteger("timeoutSeconds");
    m_timeoutSecondsHasBeenSet = true;
  }


  return *this;
}
