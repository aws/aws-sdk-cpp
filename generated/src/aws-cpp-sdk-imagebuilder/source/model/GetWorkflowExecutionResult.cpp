/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetWorkflowExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkflowExecutionResult::GetWorkflowExecutionResult() : 
    m_type(WorkflowType::NOT_SET),
    m_status(WorkflowExecutionStatus::NOT_SET),
    m_totalStepCount(0),
    m_totalStepsSucceeded(0),
    m_totalStepsFailed(0),
    m_totalStepsSkipped(0)
{
}

GetWorkflowExecutionResult::GetWorkflowExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(WorkflowType::NOT_SET),
    m_status(WorkflowExecutionStatus::NOT_SET),
    m_totalStepCount(0),
    m_totalStepsSucceeded(0),
    m_totalStepsFailed(0),
    m_totalStepsSkipped(0)
{
  *this = result;
}

GetWorkflowExecutionResult& GetWorkflowExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

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

  if(jsonValue.ValueExists("type"))
  {
    m_type = WorkflowTypeMapper::GetWorkflowTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkflowExecutionStatusMapper::GetWorkflowExecutionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

  }

  if(jsonValue.ValueExists("totalStepCount"))
  {
    m_totalStepCount = jsonValue.GetInteger("totalStepCount");

  }

  if(jsonValue.ValueExists("totalStepsSucceeded"))
  {
    m_totalStepsSucceeded = jsonValue.GetInteger("totalStepsSucceeded");

  }

  if(jsonValue.ValueExists("totalStepsFailed"))
  {
    m_totalStepsFailed = jsonValue.GetInteger("totalStepsFailed");

  }

  if(jsonValue.ValueExists("totalStepsSkipped"))
  {
    m_totalStepsSkipped = jsonValue.GetInteger("totalStepsSkipped");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

  }

  if(jsonValue.ValueExists("parallelGroup"))
  {
    m_parallelGroup = jsonValue.GetString("parallelGroup");

  }



  return *this;
}
