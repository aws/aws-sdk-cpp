/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InsightsFailureSignal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

InsightsFailureSignal::InsightsFailureSignal(JsonView jsonValue) { *this = jsonValue; }

InsightsFailureSignal& InsightsFailureSignal::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("category")) {
    m_category = InsightsFailureCategoryMapper::GetInsightsFailureCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evidence")) {
    m_evidence = jsonValue.GetString("evidence");
    m_evidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = jsonValue.GetDouble("confidence");
    m_confidenceHasBeenSet = true;
  }
  return *this;
}

JsonValue InsightsFailureSignal::Jsonize() const {
  JsonValue payload;

  if (m_categoryHasBeenSet) {
    payload.WithString("category", InsightsFailureCategoryMapper::GetNameForInsightsFailureCategory(m_category));
  }

  if (m_evidenceHasBeenSet) {
    payload.WithString("evidence", m_evidence);
  }

  if (m_confidenceHasBeenSet) {
    payload.WithDouble("confidence", m_confidence);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
