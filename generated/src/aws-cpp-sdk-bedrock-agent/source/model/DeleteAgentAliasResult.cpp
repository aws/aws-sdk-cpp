/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DeleteAgentAliasResult.h>
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

DeleteAgentAliasResult::DeleteAgentAliasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteAgentAliasResult& DeleteAgentAliasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");
    m_agentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentAliasId"))
  {
    m_agentAliasId = jsonValue.GetString("agentAliasId");
    m_agentAliasIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentAliasStatus"))
  {
    m_agentAliasStatus = AgentAliasStatusMapper::GetAgentAliasStatusForName(jsonValue.GetString("agentAliasStatus"));
    m_agentAliasStatusHasBeenSet = true;
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
