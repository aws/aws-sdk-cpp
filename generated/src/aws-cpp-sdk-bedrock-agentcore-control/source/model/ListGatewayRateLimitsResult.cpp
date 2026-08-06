/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListGatewayRateLimitsResult.h>
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

ListGatewayRateLimitsResult::ListGatewayRateLimitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListGatewayRateLimitsResult& ListGatewayRateLimitsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("rateLimits")) {
    Aws::Utils::Array<JsonView> rateLimitsJsonList = jsonValue.GetArray("rateLimits");
    for (unsigned rateLimitsIndex = 0; rateLimitsIndex < rateLimitsJsonList.GetLength(); ++rateLimitsIndex) {
      m_rateLimits.push_back(rateLimitsJsonList[rateLimitsIndex].AsObject());
    }
    m_rateLimitsHasBeenSet = true;
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
