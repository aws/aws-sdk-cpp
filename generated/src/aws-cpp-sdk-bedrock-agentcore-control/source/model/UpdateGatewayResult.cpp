/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateGatewayResult.h>
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

UpdateGatewayResult::UpdateGatewayResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateGatewayResult& UpdateGatewayResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("gatewayArn"))
  {
    m_gatewayArn = jsonValue.GetString("gatewayArn");
    m_gatewayArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gatewayId"))
  {
    m_gatewayId = jsonValue.GetString("gatewayId");
    m_gatewayIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gatewayUrl"))
  {
    m_gatewayUrl = jsonValue.GetString("gatewayUrl");
    m_gatewayUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = GatewayStatusMapper::GetGatewayStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReasons"))
  {
    Aws::Utils::Array<JsonView> statusReasonsJsonList = jsonValue.GetArray("statusReasons");
    for(unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex)
    {
      m_statusReasons.push_back(statusReasonsJsonList[statusReasonsIndex].AsString());
    }
    m_statusReasonsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocolType"))
  {
    m_protocolType = GatewayProtocolTypeMapper::GetGatewayProtocolTypeForName(jsonValue.GetString("protocolType"));
    m_protocolTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocolConfiguration"))
  {
    m_protocolConfiguration = jsonValue.GetObject("protocolConfiguration");
    m_protocolConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerType"))
  {
    m_authorizerType = AuthorizerTypeMapper::GetAuthorizerTypeForName(jsonValue.GetString("authorizerType"));
    m_authorizerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerConfiguration"))
  {
    m_authorizerConfiguration = jsonValue.GetObject("authorizerConfiguration");
    m_authorizerConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workloadIdentityDetails"))
  {
    m_workloadIdentityDetails = jsonValue.GetObject("workloadIdentityDetails");
    m_workloadIdentityDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exceptionLevel"))
  {
    m_exceptionLevel = ExceptionLevelMapper::GetExceptionLevelForName(jsonValue.GetString("exceptionLevel"));
    m_exceptionLevelHasBeenSet = true;
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
