/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ListAgentKnowledgeBasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAgentKnowledgeBasesResult::ListAgentKnowledgeBasesResult()
{
}

ListAgentKnowledgeBasesResult::ListAgentKnowledgeBasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAgentKnowledgeBasesResult& ListAgentKnowledgeBasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("agentKnowledgeBaseSummaries"))
  {
    Aws::Utils::Array<JsonView> agentKnowledgeBaseSummariesJsonList = jsonValue.GetArray("agentKnowledgeBaseSummaries");
    for(unsigned agentKnowledgeBaseSummariesIndex = 0; agentKnowledgeBaseSummariesIndex < agentKnowledgeBaseSummariesJsonList.GetLength(); ++agentKnowledgeBaseSummariesIndex)
    {
      m_agentKnowledgeBaseSummaries.push_back(agentKnowledgeBaseSummariesJsonList[agentKnowledgeBaseSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
