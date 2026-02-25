/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyFidelityReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyFidelityReport::AutomatedReasoningPolicyFidelityReport(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyFidelityReport& AutomatedReasoningPolicyFidelityReport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("coverageScore")) {
    m_coverageScore = jsonValue.GetDouble("coverageScore");
    m_coverageScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accuracyScore")) {
    m_accuracyScore = jsonValue.GetDouble("accuracyScore");
    m_accuracyScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleReports")) {
    Aws::Map<Aws::String, JsonView> ruleReportsJsonMap = jsonValue.GetObject("ruleReports").GetAllObjects();
    for (auto& ruleReportsItem : ruleReportsJsonMap) {
      m_ruleReports[ruleReportsItem.first] = ruleReportsItem.second.AsObject();
    }
    m_ruleReportsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("variableReports")) {
    Aws::Map<Aws::String, JsonView> variableReportsJsonMap = jsonValue.GetObject("variableReports").GetAllObjects();
    for (auto& variableReportsItem : variableReportsJsonMap) {
      m_variableReports[variableReportsItem.first] = variableReportsItem.second.AsObject();
    }
    m_variableReportsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documentSources")) {
    Aws::Utils::Array<JsonView> documentSourcesJsonList = jsonValue.GetArray("documentSources");
    for (unsigned documentSourcesIndex = 0; documentSourcesIndex < documentSourcesJsonList.GetLength(); ++documentSourcesIndex) {
      m_documentSources.push_back(documentSourcesJsonList[documentSourcesIndex].AsObject());
    }
    m_documentSourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyFidelityReport::Jsonize() const {
  JsonValue payload;

  if (m_coverageScoreHasBeenSet) {
    payload.WithDouble("coverageScore", m_coverageScore);
  }

  if (m_accuracyScoreHasBeenSet) {
    payload.WithDouble("accuracyScore", m_accuracyScore);
  }

  if (m_ruleReportsHasBeenSet) {
    JsonValue ruleReportsJsonMap;
    for (auto& ruleReportsItem : m_ruleReports) {
      ruleReportsJsonMap.WithObject(ruleReportsItem.first, ruleReportsItem.second.Jsonize());
    }
    payload.WithObject("ruleReports", std::move(ruleReportsJsonMap));
  }

  if (m_variableReportsHasBeenSet) {
    JsonValue variableReportsJsonMap;
    for (auto& variableReportsItem : m_variableReports) {
      variableReportsJsonMap.WithObject(variableReportsItem.first, variableReportsItem.second.Jsonize());
    }
    payload.WithObject("variableReports", std::move(variableReportsJsonMap));
  }

  if (m_documentSourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> documentSourcesJsonList(m_documentSources.size());
    for (unsigned documentSourcesIndex = 0; documentSourcesIndex < documentSourcesJsonList.GetLength(); ++documentSourcesIndex) {
      documentSourcesJsonList[documentSourcesIndex].AsObject(m_documentSources[documentSourcesIndex].Jsonize());
    }
    payload.WithArray("documentSources", std::move(documentSourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
