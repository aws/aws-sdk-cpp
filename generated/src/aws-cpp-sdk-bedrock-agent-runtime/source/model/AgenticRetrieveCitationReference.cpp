/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveCitationReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveCitationReference::AgenticRetrieveCitationReference(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveCitationReference& AgenticRetrieveCitationReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resultIndex")) {
    m_resultIndex = jsonValue.GetInteger("resultIndex");
    m_resultIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveCitationReference::Jsonize() const {
  JsonValue payload;

  if (m_resultIndexHasBeenSet) {
    payload.WithInteger("resultIndex", m_resultIndex);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
