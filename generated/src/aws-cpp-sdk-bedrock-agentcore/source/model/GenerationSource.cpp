/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GenerationSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GenerationSource::GenerationSource(JsonView jsonValue) { *this = jsonValue; }

GenerationSource& GenerationSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("traceGeneration")) {
    m_traceGeneration = jsonValue.GetObject("traceGeneration");
    m_traceGenerationHasBeenSet = true;
  }
  return *this;
}

JsonValue GenerationSource::Jsonize() const {
  JsonValue payload;

  if (m_traceGenerationHasBeenSet) {
    payload.WithObject("traceGeneration", m_traceGeneration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
