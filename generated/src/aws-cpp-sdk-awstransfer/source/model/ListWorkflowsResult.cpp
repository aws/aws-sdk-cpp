/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListWorkflowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkflowsResult::ListWorkflowsResult()
{
}

ListWorkflowsResult::ListWorkflowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkflowsResult& ListWorkflowsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Workflows"))
  {
    Aws::Utils::Array<JsonView> workflowsJsonList = jsonValue.GetArray("Workflows");
    for(unsigned workflowsIndex = 0; workflowsIndex < workflowsJsonList.GetLength(); ++workflowsIndex)
    {
      m_workflows.push_back(workflowsJsonList[workflowsIndex].AsObject());
    }
  }



  return *this;
}
