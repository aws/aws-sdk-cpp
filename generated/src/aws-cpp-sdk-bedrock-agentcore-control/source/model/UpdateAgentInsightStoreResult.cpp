/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateAgentInsightStoreResult.h>
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

UpdateAgentInsightStoreResult::UpdateAgentInsightStoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateAgentInsightStoreResult& UpdateAgentInsightStoreResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("agentInsightStoreArn")) {
    m_agentInsightStoreArn = jsonValue.GetString("agentInsightStoreArn");
    m_agentInsightStoreArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentInsightStoreId")) {
    m_agentInsightStoreId = jsonValue.GetString("agentInsightStoreId");
    m_agentInsightStoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AgentInsightStoreStatusMapper::GetAgentInsightStoreStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enablementStatus")) {
    m_enablementStatus =
        AgentInsightStoreEnablementStatusMapper::GetAgentInsightStoreEnablementStatusForName(jsonValue.GetString("enablementStatus"));
    m_enablementStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
