/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrieverConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

RetrieverConfiguration::RetrieverConfiguration(JsonView jsonValue) { *this = jsonValue; }

RetrieverConfiguration& RetrieverConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("knowledgeBase")) {
    m_knowledgeBase = jsonValue.GetObject("knowledgeBase");
    m_knowledgeBaseHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrieverConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_knowledgeBaseHasBeenSet) {
    payload.WithObject("knowledgeBase", m_knowledgeBase.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
