/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveSourceRetriever.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveSourceRetriever::AgenticRetrieveSourceRetriever(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveSourceRetriever& AgenticRetrieveSourceRetriever::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveSourceRetriever::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
