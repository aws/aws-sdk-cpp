/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchAgentStatusesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchAgentStatusesResult::SearchAgentStatusesResult() : 
    m_approximateTotalCount(0)
{
}

SearchAgentStatusesResult::SearchAgentStatusesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : SearchAgentStatusesResult()
{
  *this = result;
}

SearchAgentStatusesResult& SearchAgentStatusesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AgentStatuses"))
  {
    Aws::Utils::Array<JsonView> agentStatusesJsonList = jsonValue.GetArray("AgentStatuses");
    for(unsigned agentStatusesIndex = 0; agentStatusesIndex < agentStatusesJsonList.GetLength(); ++agentStatusesIndex)
    {
      m_agentStatuses.push_back(agentStatusesJsonList[agentStatusesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ApproximateTotalCount"))
  {
    m_approximateTotalCount = jsonValue.GetInt64("ApproximateTotalCount");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
