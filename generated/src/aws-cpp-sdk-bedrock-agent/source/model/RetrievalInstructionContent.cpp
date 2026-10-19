/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RetrievalInstructionContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

RetrievalInstructionContent::RetrievalInstructionContent(JsonView jsonValue) { *this = jsonValue; }

RetrievalInstructionContent& RetrievalInstructionContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("retrievalGuidance")) {
    m_retrievalGuidance = jsonValue.GetString("retrievalGuidance");
    m_retrievalGuidanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("persona")) {
    m_persona = jsonValue.GetString("persona");
    m_personaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("answerFormat")) {
    m_answerFormat = jsonValue.GetString("answerFormat");
    m_answerFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("answerPolicy")) {
    m_answerPolicy = jsonValue.GetString("answerPolicy");
    m_answerPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalInstructionContent::Jsonize() const {
  JsonValue payload;

  if (m_retrievalGuidanceHasBeenSet) {
    payload.WithString("retrievalGuidance", m_retrievalGuidance);
  }

  if (m_personaHasBeenSet) {
    payload.WithString("persona", m_persona);
  }

  if (m_answerFormatHasBeenSet) {
    payload.WithString("answerFormat", m_answerFormat);
  }

  if (m_answerPolicyHasBeenSet) {
    payload.WithString("answerPolicy", m_answerPolicy);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
