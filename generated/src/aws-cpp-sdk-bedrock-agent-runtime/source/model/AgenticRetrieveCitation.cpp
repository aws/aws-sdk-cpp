/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveCitation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveCitation::AgenticRetrieveCitation(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveCitation& AgenticRetrieveCitation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endIndex")) {
    m_endIndex = jsonValue.GetInteger("endIndex");
    m_endIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("references")) {
    Aws::Utils::Array<JsonView> referencesJsonList = jsonValue.GetArray("references");
    for (unsigned referencesIndex = 0; referencesIndex < referencesJsonList.GetLength(); ++referencesIndex) {
      m_references.push_back(referencesJsonList[referencesIndex].AsObject());
    }
    m_referencesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startIndex")) {
    m_startIndex = jsonValue.GetInteger("startIndex");
    m_startIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveCitation::Jsonize() const {
  JsonValue payload;

  if (m_endIndexHasBeenSet) {
    payload.WithInteger("endIndex", m_endIndex);
  }

  if (m_referencesHasBeenSet) {
    Aws::Utils::Array<JsonValue> referencesJsonList(m_references.size());
    for (unsigned referencesIndex = 0; referencesIndex < referencesJsonList.GetLength(); ++referencesIndex) {
      referencesJsonList[referencesIndex].AsObject(m_references[referencesIndex].Jsonize());
    }
    payload.WithArray("references", std::move(referencesJsonList));
  }

  if (m_startIndexHasBeenSet) {
    payload.WithInteger("startIndex", m_startIndex);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
