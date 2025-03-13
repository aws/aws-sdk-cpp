/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ListPipelineExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPipelineExecutionsResult::ListPipelineExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPipelineExecutionsResult& ListPipelineExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("pipelineExecutionSummaries"))
  {
    Aws::Utils::Array<JsonView> pipelineExecutionSummariesJsonList = jsonValue.GetArray("pipelineExecutionSummaries");
    for(unsigned pipelineExecutionSummariesIndex = 0; pipelineExecutionSummariesIndex < pipelineExecutionSummariesJsonList.GetLength(); ++pipelineExecutionSummariesIndex)
    {
      m_pipelineExecutionSummaries.push_back(pipelineExecutionSummariesJsonList[pipelineExecutionSummariesIndex].AsObject());
    }
    m_pipelineExecutionSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
