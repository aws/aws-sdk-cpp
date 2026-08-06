/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateGatewayRateLimitResult.h>
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

UpdateGatewayRateLimitResult::UpdateGatewayRateLimitResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateGatewayRateLimitResult& UpdateGatewayRateLimitResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("rateLimitId")) {
    m_rateLimitId = jsonValue.GetString("rateLimitId");
    m_rateLimitIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gatewayIdentifier")) {
    m_gatewayIdentifier = jsonValue.GetString("gatewayIdentifier");
    m_gatewayIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dimensionKeys")) {
    Aws::Utils::Array<JsonView> dimensionKeysJsonList = jsonValue.GetArray("dimensionKeys");
    for (unsigned dimensionKeysIndex = 0; dimensionKeysIndex < dimensionKeysJsonList.GetLength(); ++dimensionKeysIndex) {
      m_dimensionKeys.push_back(dimensionKeysJsonList[dimensionKeysIndex].AsString());
    }
    m_dimensionKeysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entries")) {
    Aws::Utils::Array<JsonView> entriesJsonList = jsonValue.GetArray("entries");
    for (unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex) {
      m_entries.push_back(entriesJsonList[entriesIndex].AsObject());
    }
    m_entriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = GatewayRateLimitStatusMapper::GetGatewayRateLimitStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
