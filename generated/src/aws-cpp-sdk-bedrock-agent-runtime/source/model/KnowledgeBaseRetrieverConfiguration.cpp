/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrieverConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

KnowledgeBaseRetrieverConfiguration::KnowledgeBaseRetrieverConfiguration(JsonView jsonValue) { *this = jsonValue; }

KnowledgeBaseRetrieverConfiguration& KnowledgeBaseRetrieverConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("knowledgeBaseId")) {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");
    m_knowledgeBaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retrievalOverrides")) {
    m_retrievalOverrides = jsonValue.GetObject("retrievalOverrides");
    m_retrievalOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseRetrieverConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_knowledgeBaseIdHasBeenSet) {
    payload.WithString("knowledgeBaseId", m_knowledgeBaseId);
  }

  if (m_retrievalOverridesHasBeenSet) {
    payload.WithObject("retrievalOverrides", m_retrievalOverrides.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
