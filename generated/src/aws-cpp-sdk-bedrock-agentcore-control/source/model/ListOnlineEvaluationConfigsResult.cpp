/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListOnlineEvaluationConfigsResult.h>
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

ListOnlineEvaluationConfigsResult::ListOnlineEvaluationConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListOnlineEvaluationConfigsResult& ListOnlineEvaluationConfigsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("onlineEvaluationConfigs")) {
    Aws::Utils::Array<JsonView> onlineEvaluationConfigsJsonList = jsonValue.GetArray("onlineEvaluationConfigs");
    for (unsigned onlineEvaluationConfigsIndex = 0; onlineEvaluationConfigsIndex < onlineEvaluationConfigsJsonList.GetLength();
         ++onlineEvaluationConfigsIndex) {
      m_onlineEvaluationConfigs.push_back(onlineEvaluationConfigsJsonList[onlineEvaluationConfigsIndex].AsObject());
    }
    m_onlineEvaluationConfigsHasBeenSet = true;
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
