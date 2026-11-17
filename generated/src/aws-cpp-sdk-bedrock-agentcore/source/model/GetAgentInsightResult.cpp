/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GetAgentInsightResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAgentInsightResult::GetAgentInsightResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAgentInsightResult& GetAgentInsightResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("type")) {
    m_type = InsightTypeMapper::GetInsightTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedSessionCount")) {
    m_affectedSessionCount = jsonValue.GetInteger("affectedSessionCount");
    m_affectedSessionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleSessions")) {
    Aws::Utils::Array<JsonView> sampleSessionsJsonList = jsonValue.GetArray("sampleSessions");
    for (unsigned sampleSessionsIndex = 0; sampleSessionsIndex < sampleSessionsJsonList.GetLength(); ++sampleSessionsIndex) {
      m_sampleSessions.push_back(sampleSessionsJsonList[sampleSessionsIndex].AsObject());
    }
    m_sampleSessionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rootCauses")) {
    Aws::Utils::Array<JsonView> rootCausesJsonList = jsonValue.GetArray("rootCauses");
    for (unsigned rootCausesIndex = 0; rootCausesIndex < rootCausesJsonList.GetLength(); ++rootCausesIndex) {
      m_rootCauses.push_back(rootCausesJsonList[rootCausesIndex].AsObject());
    }
    m_rootCausesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentInsightId")) {
    m_agentInsightId = jsonValue.GetString("agentInsightId");
    m_agentInsightIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationName")) {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("batchEvaluationId")) {
    m_batchEvaluationId = jsonValue.GetString("batchEvaluationId");
    m_batchEvaluationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customerMetadataStatus")) {
    m_customerMetadataStatus = AgentInsightCustomerMetadataStatusMapper::GetAgentInsightCustomerMetadataStatusForName(
        jsonValue.GetString("customerMetadataStatus"));
    m_customerMetadataStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("archiveStatus")) {
    m_archiveStatus = AgentInsightArchiveStatusMapper::GetAgentInsightArchiveStatusForName(jsonValue.GetString("archiveStatus"));
    m_archiveStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastSeenAt")) {
    m_lastSeenAt = jsonValue.GetString("lastSeenAt");
    m_lastSeenAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
