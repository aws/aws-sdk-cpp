/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GetEvaluatorResult.h>
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

GetEvaluatorResult::GetEvaluatorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetEvaluatorResult& GetEvaluatorResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("evaluatorArn")) {
    m_evaluatorArn = jsonValue.GetString("evaluatorArn");
    m_evaluatorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatorId")) {
    m_evaluatorId = jsonValue.GetString("evaluatorId");
    m_evaluatorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatorName")) {
    m_evaluatorName = jsonValue.GetString("evaluatorName");
    m_evaluatorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatorConfig")) {
    m_evaluatorConfig = jsonValue.GetObject("evaluatorConfig");
    m_evaluatorConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("level")) {
    m_level = EvaluatorLevelMapper::GetEvaluatorLevelForName(jsonValue.GetString("level"));
    m_levelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EvaluatorStatusMapper::GetEvaluatorStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lockedForModification")) {
    m_lockedForModification = jsonValue.GetBool("lockedForModification");
    m_lockedForModificationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
