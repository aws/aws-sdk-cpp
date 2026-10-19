/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveInstructionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveInstructionConfiguration::AgenticRetrieveInstructionConfiguration(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveInstructionConfiguration& AgenticRetrieveInstructionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("retrievalInstructionId")) {
    m_retrievalInstructionId = jsonValue.GetString("retrievalInstructionId");
    m_retrievalInstructionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveInstructionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_retrievalInstructionIdHasBeenSet) {
    payload.WithString("retrievalInstructionId", m_retrievalInstructionId);
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
