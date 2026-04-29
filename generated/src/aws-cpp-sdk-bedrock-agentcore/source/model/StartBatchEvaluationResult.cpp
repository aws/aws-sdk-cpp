/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/StartBatchEvaluationResult.h>
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

StartBatchEvaluationResult::StartBatchEvaluationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

StartBatchEvaluationResult& StartBatchEvaluationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("batchEvaluationId")) {
    m_batchEvaluationId = jsonValue.GetString("batchEvaluationId");
    m_batchEvaluationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("batchEvaluationArn")) {
    m_batchEvaluationArn = jsonValue.GetString("batchEvaluationArn");
    m_batchEvaluationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("batchEvaluationName")) {
    m_batchEvaluationName = jsonValue.GetString("batchEvaluationName");
    m_batchEvaluationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluators")) {
    Aws::Utils::Array<JsonView> evaluatorsJsonList = jsonValue.GetArray("evaluators");
    for (unsigned evaluatorsIndex = 0; evaluatorsIndex < evaluatorsJsonList.GetLength(); ++evaluatorsIndex) {
      m_evaluators.push_back(evaluatorsJsonList[evaluatorsIndex].AsObject());
    }
    m_evaluatorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = BatchEvaluationStatusMapper::GetBatchEvaluationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputConfig")) {
    m_outputConfig = jsonValue.GetObject("outputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
