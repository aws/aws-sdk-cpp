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
    Array<JsonView> workflowsJsonList = jsonValue.GetArray("Workflows");
    for(unsigned workflowsIndex = 0; workflowsIndex < workflowsJsonList.GetLength(); ++workflowsIndex)
    {
      m_workflows.push_back(workflowsJsonList[workflowsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("MissingWorkflows"))
  {
    Array<JsonView> missingWorkflowsJsonList = jsonValue.GetArray("MissingWorkflows");
    for(unsigned missingWorkflowsIndex = 0; missingWorkflowsIndex < missingWorkflowsJsonList.GetLength(); ++missingWorkflowsIndex)
    {
      m_missingWorkflows.push_back(missingWorkflowsJsonList[missingWorkflowsIndex].AsString());
    }
  }



  return *this;
}
