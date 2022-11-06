/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ResumeWorkflowRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResumeWorkflowRunResult::ResumeWorkflowRunResult()
{
}

ResumeWorkflowRunResult::ResumeWorkflowRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResumeWorkflowRunResult& ResumeWorkflowRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");

  }

  if(jsonValue.ValueExists("NodeIds"))
  {
    Aws::Utils::Array<JsonView> nodeIdsJsonList = jsonValue.GetArray("NodeIds");
    for(unsigned nodeIdsIndex = 0; nodeIdsIndex < nodeIdsJsonList.GetLength(); ++nodeIdsIndex)
    {
      m_nodeIds.push_back(nodeIdsJsonList[nodeIdsIndex].AsString());
    }
  }



  return *this;
}
