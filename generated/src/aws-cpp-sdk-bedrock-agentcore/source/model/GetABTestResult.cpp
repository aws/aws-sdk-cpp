/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GetABTestResult.h>
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

GetABTestResult::GetABTestResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetABTestResult& GetABTestResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("abTestId")) {
    m_abTestId = jsonValue.GetString("abTestId");
    m_abTestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("abTestArn")) {
    m_abTestArn = jsonValue.GetString("abTestArn");
    m_abTestArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ABTestStatusMapper::GetABTestStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionStatus")) {
    m_executionStatus = ABTestExecutionStatusMapper::GetABTestExecutionStatusForName(jsonValue.GetString("executionStatus"));
    m_executionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gatewayArn")) {
    m_gatewayArn = jsonValue.GetString("gatewayArn");
    m_gatewayArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("variants")) {
    Aws::Utils::Array<JsonView> variantsJsonList = jsonValue.GetArray("variants");
    for (unsigned variantsIndex = 0; variantsIndex < variantsJsonList.GetLength(); ++variantsIndex) {
      m_variants.push_back(variantsJsonList[variantsIndex].AsObject());
    }
    m_variantsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gatewayFilter")) {
    m_gatewayFilter = jsonValue.GetObject("gatewayFilter");
    m_gatewayFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluationConfig")) {
    m_evaluationConfig = jsonValue.GetObject("evaluationConfig");
    m_evaluationConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currentRunId")) {
    m_currentRunId = jsonValue.GetString("currentRunId");
    m_currentRunIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetails")) {
    Aws::Utils::Array<JsonView> errorDetailsJsonList = jsonValue.GetArray("errorDetails");
    for (unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex) {
      m_errorDetails.push_back(errorDetailsJsonList[errorDetailsIndex].AsString());
    }
    m_errorDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stoppedAt")) {
    m_stoppedAt = jsonValue.GetDouble("stoppedAt");
    m_stoppedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxDurationExpiresAt")) {
    m_maxDurationExpiresAt = jsonValue.GetDouble("maxDurationExpiresAt");
    m_maxDurationExpiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("results")) {
    m_results = jsonValue.GetObject("results");
    m_resultsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
