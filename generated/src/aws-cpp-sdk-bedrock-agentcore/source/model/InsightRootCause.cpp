/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InsightRootCause.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

InsightRootCause::InsightRootCause(JsonView jsonValue) { *this = jsonValue; }

InsightRootCause& InsightRootCause::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("explanation")) {
    m_explanation = jsonValue.GetString("explanation");
    m_explanationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedSessionCount")) {
    m_affectedSessionCount = jsonValue.GetInteger("affectedSessionCount");
    m_affectedSessionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("suggestedFix")) {
    m_suggestedFix = jsonValue.GetString("suggestedFix");
    m_suggestedFixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleSessions")) {
    Aws::Utils::Array<JsonView> sampleSessionsJsonList = jsonValue.GetArray("sampleSessions");
    for (unsigned sampleSessionsIndex = 0; sampleSessionsIndex < sampleSessionsJsonList.GetLength(); ++sampleSessionsIndex) {
      m_sampleSessions.push_back(sampleSessionsJsonList[sampleSessionsIndex].AsObject());
    }
    m_sampleSessionsHasBeenSet = true;
  }
  return *this;
}

JsonValue InsightRootCause::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_explanationHasBeenSet) {
    payload.WithString("explanation", m_explanation);
  }

  if (m_affectedSessionCountHasBeenSet) {
    payload.WithInteger("affectedSessionCount", m_affectedSessionCount);
  }

  if (m_suggestedFixHasBeenSet) {
    payload.WithString("suggestedFix", m_suggestedFix);
  }

  if (m_sampleSessionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sampleSessionsJsonList(m_sampleSessions.size());
    for (unsigned sampleSessionsIndex = 0; sampleSessionsIndex < sampleSessionsJsonList.GetLength(); ++sampleSessionsIndex) {
      sampleSessionsJsonList[sampleSessionsIndex].AsObject(m_sampleSessions[sampleSessionsIndex].Jsonize());
    }
    payload.WithArray("sampleSessions", std::move(sampleSessionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
