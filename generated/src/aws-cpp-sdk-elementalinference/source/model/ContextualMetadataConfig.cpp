/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/ContextualMetadataConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

ContextualMetadataConfig::ContextualMetadataConfig(JsonView jsonValue) { *this = jsonValue; }

ContextualMetadataConfig& ContextualMetadataConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("summaryGeneration")) {
    m_summaryGeneration = SummaryGenerationModeMapper::GetSummaryGenerationModeForName(jsonValue.GetString("summaryGeneration"));
    m_summaryGenerationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("extendedAnalysis")) {
    m_extendedAnalysis = ExtendedAnalysisModeMapper::GetExtendedAnalysisModeForName(jsonValue.GetString("extendedAnalysis"));
    m_extendedAnalysisHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextualMetadataConfig::Jsonize() const {
  JsonValue payload;

  if (m_summaryGenerationHasBeenSet) {
    payload.WithString("summaryGeneration", SummaryGenerationModeMapper::GetNameForSummaryGenerationMode(m_summaryGeneration));
  }

  if (m_extendedAnalysisHasBeenSet) {
    payload.WithString("extendedAnalysis", ExtendedAnalysisModeMapper::GetNameForExtendedAnalysisMode(m_extendedAnalysis));
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
