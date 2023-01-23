/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListAgentStatusesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAgentStatusesResult::ListAgentStatusesResult()
{
}

ListAgentStatusesResult::ListAgentStatusesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAgentStatusesResult& ListAgentStatusesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("AgentStatusSummaryList"))
  {
    Aws::Utils::Array<JsonView> agentStatusSummaryListJsonList = jsonValue.GetArray("AgentStatusSummaryList");
    for(unsigned agentStatusSummaryListIndex = 0; agentStatusSummaryListIndex < agentStatusSummaryListJsonList.GetLength(); ++agentStatusSummaryListIndex)
    {
      m_agentStatusSummaryList.push_back(agentStatusSummaryListJsonList[agentStatusSummaryListIndex].AsObject());
    }
  }



  return *this;
}
