/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildResultAssets.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyBuildResultAssets::AutomatedReasoningPolicyBuildResultAssets(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyBuildResultAssets& AutomatedReasoningPolicyBuildResultAssets::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyDefinition")) {
    m_policyDefinition = jsonValue.GetObject("policyDefinition");
    m_policyDefinitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("qualityReport")) {
    m_qualityReport = jsonValue.GetObject("qualityReport");
    m_qualityReportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("buildLog")) {
    m_buildLog = jsonValue.GetObject("buildLog");
    m_buildLogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("generatedTestCases")) {
    m_generatedTestCases = jsonValue.GetObject("generatedTestCases");
    m_generatedTestCasesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyScenarios")) {
    m_policyScenarios = jsonValue.GetObject("policyScenarios");
    m_policyScenariosHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assetManifest")) {
    m_assetManifest = jsonValue.GetObject("assetManifest");
    m_assetManifestHasBeenSet = true;
  }
  if (jsonValue.ValueExists("document")) {
    m_document = jsonValue.GetObject("document");
    m_documentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fidelityReport")) {
    m_fidelityReport = jsonValue.GetObject("fidelityReport");
    m_fidelityReportHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyBuildResultAssets::Jsonize() const {
  JsonValue payload;

  if (m_policyDefinitionHasBeenSet) {
    payload.WithObject("policyDefinition", m_policyDefinition.Jsonize());
  }

  if (m_qualityReportHasBeenSet) {
    payload.WithObject("qualityReport", m_qualityReport.Jsonize());
  }

  if (m_buildLogHasBeenSet) {
    payload.WithObject("buildLog", m_buildLog.Jsonize());
  }

  if (m_generatedTestCasesHasBeenSet) {
    payload.WithObject("generatedTestCases", m_generatedTestCases.Jsonize());
  }

  if (m_policyScenariosHasBeenSet) {
    payload.WithObject("policyScenarios", m_policyScenarios.Jsonize());
  }

  if (m_assetManifestHasBeenSet) {
    payload.WithObject("assetManifest", m_assetManifest.Jsonize());
  }

  if (m_documentHasBeenSet) {
    payload.WithObject("document", m_document.Jsonize());
  }

  if (m_fidelityReportHasBeenSet) {
    payload.WithObject("fidelityReport", m_fidelityReport.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
