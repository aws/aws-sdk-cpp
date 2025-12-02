/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListEvaluatorsResult.h>
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

ListEvaluatorsResult::ListEvaluatorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListEvaluatorsResult& ListEvaluatorsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("evaluators")) {
    Aws::Utils::Array<JsonView> evaluatorsJsonList = jsonValue.GetArray("evaluators");
    for (unsigned evaluatorsIndex = 0; evaluatorsIndex < evaluatorsJsonList.GetLength(); ++evaluatorsIndex) {
      m_evaluators.push_back(evaluatorsJsonList[evaluatorsIndex].AsObject());
    }
    m_evaluatorsHasBeenSet = true;
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
