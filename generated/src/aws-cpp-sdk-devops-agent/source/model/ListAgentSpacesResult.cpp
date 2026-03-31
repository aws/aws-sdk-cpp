/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/devops-agent/model/ListAgentSpacesResult.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAgentSpacesResult::ListAgentSpacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAgentSpacesResult& ListAgentSpacesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSpaces")) {
    Aws::Utils::Array<JsonView> agentSpacesJsonList = jsonValue.GetArray("agentSpaces");
    for (unsigned agentSpacesIndex = 0; agentSpacesIndex < agentSpacesJsonList.GetLength(); ++agentSpacesIndex) {
      m_agentSpaces.push_back(agentSpacesJsonList[agentSpacesIndex].AsObject());
    }
    m_agentSpacesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
