/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListWorkflowStepExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkflowStepExecutionsResult::ListWorkflowStepExecutionsResult()
{
}

ListWorkflowStepExecutionsResult::ListWorkflowStepExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkflowStepExecutionsResult& ListWorkflowStepExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
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

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
