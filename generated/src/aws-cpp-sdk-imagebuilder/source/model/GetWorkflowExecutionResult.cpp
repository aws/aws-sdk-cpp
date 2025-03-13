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

GetWorkflowExecutionResult::GetWorkflowExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWorkflowExecutionResult& GetWorkflowExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");
    m_requestIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("type"))
  {
    m_type = WorkflowTypeMapper::GetWorkflowTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkflowExecutionStatusMapper::GetWorkflowExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalStepCount"))
  {
    m_totalStepCount = jsonValue.GetInteger("totalStepCount");
    m_totalStepCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalStepsSucceeded"))
  {
    m_totalStepsSucceeded = jsonValue.GetInteger("totalStepsSucceeded");
    m_totalStepsSucceededHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalStepsFailed"))
  {
    m_totalStepsFailed = jsonValue.GetInteger("totalStepsFailed");
    m_totalStepsFailedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalStepsSkipped"))
  {
    m_totalStepsSkipped = jsonValue.GetInteger("totalStepsSkipped");
    m_totalStepsSkippedHasBeenSet = true;
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
  if(jsonValue.ValueExists("parallelGroup"))
  {
    m_parallelGroup = jsonValue.GetString("parallelGroup");
    m_parallelGroupHasBeenSet = true;
  }


  return *this;
}
