/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListCodeInterpretersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCodeInterpretersResult::ListCodeInterpretersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCodeInterpretersResult& ListCodeInterpretersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("codeInterpreterSummaries"))
  {
    Aws::Utils::Array<JsonView> codeInterpreterSummariesJsonList = jsonValue.GetArray("codeInterpreterSummaries");
    for(unsigned codeInterpreterSummariesIndex = 0; codeInterpreterSummariesIndex < codeInterpreterSummariesJsonList.GetLength(); ++codeInterpreterSummariesIndex)
    {
      m_codeInterpreterSummaries.push_back(codeInterpreterSummariesJsonList[codeInterpreterSummariesIndex].AsObject());
    }
    m_codeInterpreterSummariesHasBeenSet = true;
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
