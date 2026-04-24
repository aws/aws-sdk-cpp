/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessSummarizationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessSummarizationConfiguration::HarnessSummarizationConfiguration(JsonView jsonValue) { *this = jsonValue; }

HarnessSummarizationConfiguration& HarnessSummarizationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("summaryRatio")) {
    m_summaryRatio = jsonValue.GetDouble("summaryRatio");
    m_summaryRatioHasBeenSet = true;
  }
  if (jsonValue.ValueExists("preserveRecentMessages")) {
    m_preserveRecentMessages = jsonValue.GetInteger("preserveRecentMessages");
    m_preserveRecentMessagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("summarizationSystemPrompt")) {
    m_summarizationSystemPrompt = jsonValue.GetString("summarizationSystemPrompt");
    m_summarizationSystemPromptHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessSummarizationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_summaryRatioHasBeenSet) {
    payload.WithDouble("summaryRatio", m_summaryRatio);
  }

  if (m_preserveRecentMessagesHasBeenSet) {
    payload.WithInteger("preserveRecentMessages", m_preserveRecentMessages);
  }

  if (m_summarizationSystemPromptHasBeenSet) {
    payload.WithString("summarizationSystemPrompt", m_summarizationSystemPrompt);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
