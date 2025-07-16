/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RetrieveMemoryRecordsResult::RetrieveMemoryRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RetrieveMemoryRecordsResult& RetrieveMemoryRecordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("memoryRecordSummaries"))
  {
    Aws::Utils::Array<JsonView> memoryRecordSummariesJsonList = jsonValue.GetArray("memoryRecordSummaries");
    for(unsigned memoryRecordSummariesIndex = 0; memoryRecordSummariesIndex < memoryRecordSummariesJsonList.GetLength(); ++memoryRecordSummariesIndex)
    {
      m_memoryRecordSummaries.push_back(memoryRecordSummariesJsonList[memoryRecordSummariesIndex].AsObject());
    }
    m_memoryRecordSummariesHasBeenSet = true;
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
