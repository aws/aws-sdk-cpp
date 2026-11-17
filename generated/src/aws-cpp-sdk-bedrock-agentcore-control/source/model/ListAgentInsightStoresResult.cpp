/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListAgentInsightStoresResult.h>
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

ListAgentInsightStoresResult::ListAgentInsightStoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAgentInsightStoresResult& ListAgentInsightStoresResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("agentInsightStores")) {
    Aws::Utils::Array<JsonView> agentInsightStoresJsonList = jsonValue.GetArray("agentInsightStores");
    for (unsigned agentInsightStoresIndex = 0; agentInsightStoresIndex < agentInsightStoresJsonList.GetLength();
         ++agentInsightStoresIndex) {
      m_agentInsightStores.push_back(agentInsightStoresJsonList[agentInsightStoresIndex].AsObject());
    }
    m_agentInsightStoresHasBeenSet = true;
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
