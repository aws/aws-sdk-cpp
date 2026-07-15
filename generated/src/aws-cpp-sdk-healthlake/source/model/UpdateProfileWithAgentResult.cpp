/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/healthlake/model/UpdateProfileWithAgentResult.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateProfileWithAgentResult::UpdateProfileWithAgentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateProfileWithAgentResult& UpdateProfileWithAgentResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AgentResponse")) {
    m_agentResponse = jsonValue.GetObject("AgentResponse");
    m_agentResponseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConversationId")) {
    m_conversationId = jsonValue.GetString("ConversationId");
    m_conversationIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
