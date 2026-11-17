/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GetDatasetGenerationResult.h>
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

GetDatasetGenerationResult::GetDatasetGenerationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetDatasetGenerationResult& GetDatasetGenerationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("generationId")) {
    m_generationId = jsonValue.GetString("generationId");
    m_generationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scenarioType")) {
    m_scenarioType = ScenarioTypeMapper::GetScenarioTypeForName(jsonValue.GetString("scenarioType"));
    m_scenarioTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DatasetGenerationStatusMapper::GetDatasetGenerationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetString("completedAt");
    m_completedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("generationResults")) {
    m_generationResults = jsonValue.GetObject("generationResults");
    m_generationResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("redactionSummary")) {
    m_redactionSummary = jsonValue.GetObject("redactionSummary");
    m_redactionSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetails")) {
    Aws::Utils::Array<JsonView> errorDetailsJsonList = jsonValue.GetArray("errorDetails");
    for (unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex) {
      m_errorDetails.push_back(errorDetailsJsonList[errorDetailsIndex].AsObject());
    }
    m_errorDetailsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
