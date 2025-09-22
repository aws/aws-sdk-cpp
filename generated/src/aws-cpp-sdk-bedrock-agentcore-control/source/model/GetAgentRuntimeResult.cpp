/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GetAgentRuntimeResult.h>
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

GetAgentRuntimeResult::GetAgentRuntimeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAgentRuntimeResult& GetAgentRuntimeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("agentRuntimeArn"))
  {
    m_agentRuntimeArn = jsonValue.GetString("agentRuntimeArn");
    m_agentRuntimeArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workloadIdentityDetails"))
  {
    m_workloadIdentityDetails = jsonValue.GetObject("workloadIdentityDetails");
    m_workloadIdentityDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentRuntimeName"))
  {
    m_agentRuntimeName = jsonValue.GetString("agentRuntimeName");
    m_agentRuntimeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentRuntimeId"))
  {
    m_agentRuntimeId = jsonValue.GetString("agentRuntimeId");
    m_agentRuntimeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentRuntimeVersion"))
  {
    m_agentRuntimeVersion = jsonValue.GetString("agentRuntimeVersion");
    m_agentRuntimeVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentRuntimeArtifact"))
  {
    m_agentRuntimeArtifact = jsonValue.GetObject("agentRuntimeArtifact");
    m_agentRuntimeArtifactHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");
    m_networkConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocolConfiguration"))
  {
    m_protocolConfiguration = jsonValue.GetObject("protocolConfiguration");
    m_protocolConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentVariables"))
  {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("environmentVariables").GetAllObjects();
    for(auto& environmentVariablesItem : environmentVariablesJsonMap)
    {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerConfiguration"))
  {
    m_authorizerConfiguration = jsonValue.GetObject("authorizerConfiguration");
    m_authorizerConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestHeaderConfiguration"))
  {
    m_requestHeaderConfiguration = jsonValue.GetObject("requestHeaderConfiguration");
    m_requestHeaderConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = AgentRuntimeStatusMapper::GetAgentRuntimeStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
