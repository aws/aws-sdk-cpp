/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveAction::AgenticRetrieveAction(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveAction& AgenticRetrieveAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fullDocumentExpansion")) {
    m_fullDocumentExpansion = jsonValue.GetObject("fullDocumentExpansion");
    m_fullDocumentExpansionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retrieve")) {
    m_retrieve = jsonValue.GetObject("retrieve");
    m_retrieveHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveAction::Jsonize() const {
  JsonValue payload;

  if (m_fullDocumentExpansionHasBeenSet) {
    payload.WithObject("fullDocumentExpansion", m_fullDocumentExpansion.Jsonize());
  }

  if (m_retrieveHasBeenSet) {
    payload.WithObject("retrieve", m_retrieve.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
