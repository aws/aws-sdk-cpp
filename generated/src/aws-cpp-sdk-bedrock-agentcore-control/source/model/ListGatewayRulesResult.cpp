/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListGatewayRulesResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGatewayRulesResult::ListGatewayRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListGatewayRulesResult& ListGatewayRulesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("gatewayRules")) {
    Aws::Utils::Array<JsonView> gatewayRulesJsonList = jsonValue.GetArray("gatewayRules");
    for (unsigned gatewayRulesIndex = 0; gatewayRulesIndex < gatewayRulesJsonList.GetLength(); ++gatewayRulesIndex) {
      m_gatewayRules.push_back(gatewayRulesJsonList[gatewayRulesIndex].AsObject());
    }
    m_gatewayRulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
