/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GenerationSourceRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GenerationSourceRecord::GenerationSourceRecord(JsonView jsonValue) { *this = jsonValue; }

GenerationSourceRecord& GenerationSourceRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("traceGeneration")) {
    m_traceGeneration = jsonValue.GetObject("traceGeneration");
    m_traceGenerationHasBeenSet = true;
  }
  return *this;
}

JsonValue GenerationSourceRecord::Jsonize() const {
  JsonValue payload;

  if (m_traceGenerationHasBeenSet) {
    payload.WithObject("traceGeneration", m_traceGeneration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
