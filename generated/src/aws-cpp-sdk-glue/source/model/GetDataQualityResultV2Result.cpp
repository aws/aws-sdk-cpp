/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/glue/model/GetDataQualityResultV2Result.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataQualityResultV2Result::GetDataQualityResultV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetDataQualityResultV2Result& GetDataQualityResultV2Result::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ResultId")) {
    m_resultId = jsonValue.GetString("ResultId");
    m_resultIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSource")) {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProfileId")) {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Dimensions")) {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("Dimensions").GetAllObjects();
    for (auto& dimensionsItem : dimensionsJsonMap) {
      m_dimensions[dimensionsItem.first] = dimensionsItem.second.AsString();
    }
    m_dimensionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionStartedOn")) {
    m_executionStartedOn = jsonValue.GetDouble("ExecutionStartedOn");
    m_executionStartedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionCompletedOn")) {
    m_executionCompletedOn = jsonValue.GetDouble("ExecutionCompletedOn");
    m_executionCompletedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResultPublishedOn")) {
    m_resultPublishedOn = jsonValue.GetDouble("ResultPublishedOn");
    m_resultPublishedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Score")) {
    m_score = jsonValue.GetDouble("Score");
    m_scoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuleResults")) {
    Aws::Utils::Array<JsonView> ruleResultsJsonList = jsonValue.GetArray("RuleResults");
    for (unsigned ruleResultsIndex = 0; ruleResultsIndex < ruleResultsJsonList.GetLength(); ++ruleResultsIndex) {
      m_ruleResults.push_back(ruleResultsJsonList[ruleResultsIndex].AsObject());
    }
    m_ruleResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AnalyzerResults")) {
    Aws::Utils::Array<JsonView> analyzerResultsJsonList = jsonValue.GetArray("AnalyzerResults");
    for (unsigned analyzerResultsIndex = 0; analyzerResultsIndex < analyzerResultsJsonList.GetLength(); ++analyzerResultsIndex) {
      m_analyzerResults.push_back(analyzerResultsJsonList[analyzerResultsIndex].AsObject());
    }
    m_analyzerResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Observations")) {
    Aws::Utils::Array<JsonView> observationsJsonList = jsonValue.GetArray("Observations");
    for (unsigned observationsIndex = 0; observationsIndex < observationsJsonList.GetLength(); ++observationsIndex) {
      m_observations.push_back(observationsJsonList[observationsIndex].AsObject());
    }
    m_observationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationContext")) {
    m_evaluationContext = jsonValue.GetString("EvaluationContext");
    m_evaluationContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Descriptors")) {
    Aws::Map<Aws::String, JsonView> descriptorsJsonMap = jsonValue.GetObject("Descriptors").GetAllObjects();
    for (auto& descriptorsItem : descriptorsJsonMap) {
      m_descriptors[descriptorsItem.first] = descriptorsItem.second.AsString();
    }
    m_descriptorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AggregatedMetrics")) {
    m_aggregatedMetrics = jsonValue.GetObject("AggregatedMetrics");
    m_aggregatedMetricsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RulesetName")) {
    m_rulesetName = jsonValue.GetString("RulesetName");
    m_rulesetNameHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
