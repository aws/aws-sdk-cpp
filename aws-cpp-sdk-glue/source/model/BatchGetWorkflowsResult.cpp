/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetWorkflowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetWorkflowsResult::BatchGetWorkflowsResult()
{
}

BatchGetWorkflowsResult::BatchGetWorkflowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetWorkflowsResult& BatchGetWorkflowsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Workflows"))
  {
    Aws::Utils::Array<JsonView> workflowsJsonList = jsonValue.GetArray("Workflows");
    for(unsigned workflowsIndex = 0; workflowsIndex < workflowsJsonList.GetLength(); ++workflowsIndex)
    {
      m_workflows.push_back(workflowsJsonList[workflowsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("MissingWorkflows"))
  {
    Aws::Utils::Array<JsonView> missingWorkflowsJsonList = jsonValue.GetArray("MissingWorkflows");
    for(unsigned missingWorkflowsIndex = 0; missingWorkflowsIndex < missingWorkflowsJsonList.GetLength(); ++missingWorkflowsIndex)
    {
      m_missingWorkflows.push_back(missingWorkflowsJsonList[missingWorkflowsIndex].AsString());
    }
  }



  return *this;
}
