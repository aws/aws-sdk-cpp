/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GetOnlineEvaluationConfigResult.h>
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

GetOnlineEvaluationConfigResult::GetOnlineEvaluationConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetOnlineEvaluationConfigResult& GetOnlineEvaluationConfigResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("onlineEvaluationConfigArn")) {
    m_onlineEvaluationConfigArn = jsonValue.GetString("onlineEvaluationConfigArn");
    m_onlineEvaluationConfigArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("onlineEvaluationConfigId")) {
    m_onlineEvaluationConfigId = jsonValue.GetString("onlineEvaluationConfigId");
    m_onlineEvaluationConfigIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("onlineEvaluationConfigName")) {
    m_onlineEvaluationConfigName = jsonValue.GetString("onlineEvaluationConfigName");
    m_onlineEvaluationConfigNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rule")) {
    m_rule = jsonValue.GetObject("rule");
    m_ruleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataSourceConfig")) {
    m_dataSourceConfig = jsonValue.GetObject("dataSourceConfig");
    m_dataSourceConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluators")) {
    Aws::Utils::Array<JsonView> evaluatorsJsonList = jsonValue.GetArray("evaluators");
    for (unsigned evaluatorsIndex = 0; evaluatorsIndex < evaluatorsJsonList.GetLength(); ++evaluatorsIndex) {
      m_evaluators.push_back(evaluatorsJsonList[evaluatorsIndex].AsObject());
    }
    m_evaluatorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputConfig")) {
    m_outputConfig = jsonValue.GetObject("outputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluationExecutionRoleArn")) {
    m_evaluationExecutionRoleArn = jsonValue.GetString("evaluationExecutionRoleArn");
    m_evaluationExecutionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = OnlineEvaluationConfigStatusMapper::GetOnlineEvaluationConfigStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionStatus")) {
    m_executionStatus =
        OnlineEvaluationExecutionStatusMapper::GetOnlineEvaluationExecutionStatusForName(jsonValue.GetString("executionStatus"));
    m_executionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
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
