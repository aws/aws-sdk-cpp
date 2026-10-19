/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InsightResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

InsightResult::InsightResult(JsonView jsonValue) { *this = jsonValue; }

InsightResult& InsightResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = InsightTypeMapper::GetInsightTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedSessionCount")) {
    m_affectedSessionCount = jsonValue.GetInteger("affectedSessionCount");
    m_affectedSessionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleSessions")) {
    Aws::Utils::Array<JsonView> sampleSessionsJsonList = jsonValue.GetArray("sampleSessions");
    for (unsigned sampleSessionsIndex = 0; sampleSessionsIndex < sampleSessionsJsonList.GetLength(); ++sampleSessionsIndex) {
      m_sampleSessions.push_back(sampleSessionsJsonList[sampleSessionsIndex].AsObject());
    }
    m_sampleSessionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rootCauses")) {
    Aws::Utils::Array<JsonView> rootCausesJsonList = jsonValue.GetArray("rootCauses");
    for (unsigned rootCausesIndex = 0; rootCausesIndex < rootCausesJsonList.GetLength(); ++rootCausesIndex) {
      m_rootCauses.push_back(rootCausesJsonList[rootCausesIndex].AsObject());
    }
    m_rootCausesHasBeenSet = true;
  }
  return *this;
}

JsonValue InsightResult::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", InsightTypeMapper::GetNameForInsightType(m_type));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_affectedSessionCountHasBeenSet) {
    payload.WithInteger("affectedSessionCount", m_affectedSessionCount);
  }

  if (m_sampleSessionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sampleSessionsJsonList(m_sampleSessions.size());
    for (unsigned sampleSessionsIndex = 0; sampleSessionsIndex < sampleSessionsJsonList.GetLength(); ++sampleSessionsIndex) {
      sampleSessionsJsonList[sampleSessionsIndex].AsObject(m_sampleSessions[sampleSessionsIndex].Jsonize());
    }
    payload.WithArray("sampleSessions", std::move(sampleSessionsJsonList));
  }

  if (m_rootCausesHasBeenSet) {
    Aws::Utils::Array<JsonValue> rootCausesJsonList(m_rootCauses.size());
    for (unsigned rootCausesIndex = 0; rootCausesIndex < rootCausesJsonList.GetLength(); ++rootCausesIndex) {
      rootCausesJsonList[rootCausesIndex].AsObject(m_rootCauses[rootCausesIndex].Jsonize());
    }
    payload.WithArray("rootCauses", std::move(rootCausesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
