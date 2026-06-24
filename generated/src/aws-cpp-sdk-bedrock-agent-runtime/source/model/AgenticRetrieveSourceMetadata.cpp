/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveSourceMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveSourceMetadata::AgenticRetrieveSourceMetadata(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveSourceMetadata& AgenticRetrieveSourceMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retrievalType")) {
    m_retrievalType = AgenticRetrieveTypeMapper::GetAgenticRetrieveTypeForName(jsonValue.GetString("retrievalType"));
    m_retrievalTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveSourceMetadata::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_retrievalTypeHasBeenSet) {
    payload.WithString("retrievalType", AgenticRetrieveTypeMapper::GetNameForAgenticRetrieveType(m_retrievalType));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
