/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/customer-profiles/model/GetRecommenderResult.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecommenderResult::GetRecommenderResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetRecommenderResult& GetRecommenderResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("RecommenderName")) {
    m_recommenderName = jsonValue.GetString("RecommenderName");
    m_recommenderNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecommenderRecipeName")) {
    m_recommenderRecipeName = RecommenderRecipeNameMapper::GetRecommenderRecipeNameForName(jsonValue.GetString("RecommenderRecipeName"));
    m_recommenderRecipeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecommenderConfig")) {
    m_recommenderConfig = jsonValue.GetObject("RecommenderConfig");
    m_recommenderConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RecommenderStatusMapper::GetRecommenderStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LatestRecommenderUpdate")) {
    m_latestRecommenderUpdate = jsonValue.GetObject("LatestRecommenderUpdate");
    m_latestRecommenderUpdateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrainingMetrics")) {
    Aws::Utils::Array<JsonView> trainingMetricsJsonList = jsonValue.GetArray("TrainingMetrics");
    for (unsigned trainingMetricsIndex = 0; trainingMetricsIndex < trainingMetricsJsonList.GetLength(); ++trainingMetricsIndex) {
      m_trainingMetrics.push_back(trainingMetricsJsonList[trainingMetricsIndex].AsObject());
    }
    m_trainingMetricsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
