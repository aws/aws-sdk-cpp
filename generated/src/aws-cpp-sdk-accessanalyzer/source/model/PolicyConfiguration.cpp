/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/PolicyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccessAnalyzer {
namespace Model {

PolicyConfiguration::PolicyConfiguration(JsonView jsonValue) { *this = jsonValue; }

PolicyConfiguration& PolicyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobType")) {
    m_jobType = ImpactAnalysisJobTypeMapper::GetImpactAnalysisJobTypeForName(jsonValue.GetString("jobType"));
    m_jobTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetId")) {
    m_targetId = jsonValue.GetString("targetId");
    m_targetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyDocumentsList")) {
    Aws::Utils::Array<JsonView> policyDocumentsListJsonList = jsonValue.GetArray("policyDocumentsList");
    for (unsigned policyDocumentsListIndex = 0; policyDocumentsListIndex < policyDocumentsListJsonList.GetLength();
         ++policyDocumentsListIndex) {
      m_policyDocumentsList.push_back(policyDocumentsListJsonList[policyDocumentsListIndex].AsString());
    }
    m_policyDocumentsListHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_jobTypeHasBeenSet) {
    payload.WithString("jobType", ImpactAnalysisJobTypeMapper::GetNameForImpactAnalysisJobType(m_jobType));
  }

  if (m_targetIdHasBeenSet) {
    payload.WithString("targetId", m_targetId);
  }

  if (m_policyDocumentsListHasBeenSet) {
    Aws::Utils::Array<JsonValue> policyDocumentsListJsonList(m_policyDocumentsList.size());
    for (unsigned policyDocumentsListIndex = 0; policyDocumentsListIndex < policyDocumentsListJsonList.GetLength();
         ++policyDocumentsListIndex) {
      policyDocumentsListJsonList[policyDocumentsListIndex].AsString(m_policyDocumentsList[policyDocumentsListIndex]);
    }
    payload.WithArray("policyDocumentsList", std::move(policyDocumentsListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
