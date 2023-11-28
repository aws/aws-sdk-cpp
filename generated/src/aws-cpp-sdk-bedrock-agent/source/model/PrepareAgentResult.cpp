/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PrepareAgentResult.h>
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

PrepareAgentResult::PrepareAgentResult() : 
    m_agentStatus(AgentStatus::NOT_SET)
{
}

PrepareAgentResult::PrepareAgentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_agentStatus(AgentStatus::NOT_SET)
{
  *this = result;
}

PrepareAgentResult& PrepareAgentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

  }

  if(jsonValue.ValueExists("agentStatus"))
  {
    m_agentStatus = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("agentStatus"));

  }

  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");

  }

  if(jsonValue.ValueExists("preparedAt"))
  {
    m_preparedAt = jsonValue.GetString("preparedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
