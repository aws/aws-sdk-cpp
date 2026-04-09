/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ServerDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ServerDefinition::ServerDefinition(JsonView jsonValue) { *this = jsonValue; }

ServerDefinition& ServerDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("schemaVersion")) {
    m_schemaVersion = jsonValue.GetString("schemaVersion");
    m_schemaVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inlineContent")) {
    m_inlineContent = jsonValue.GetString("inlineContent");
    m_inlineContentHasBeenSet = true;
  }
  return *this;
}

JsonValue ServerDefinition::Jsonize() const {
  JsonValue payload;

  if (m_schemaVersionHasBeenSet) {
    payload.WithString("schemaVersion", m_schemaVersion);
  }

  if (m_inlineContentHasBeenSet) {
    payload.WithString("inlineContent", m_inlineContent);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
