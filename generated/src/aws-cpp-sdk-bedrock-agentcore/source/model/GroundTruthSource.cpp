/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GroundTruthSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GroundTruthSource::GroundTruthSource(JsonView jsonValue) { *this = jsonValue; }

GroundTruthSource& GroundTruthSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inline")) {
    m_inline = jsonValue.GetObject("inline");
    m_inlineHasBeenSet = true;
  }
  return *this;
}

JsonValue GroundTruthSource::Jsonize() const {
  JsonValue payload;

  if (m_inlineHasBeenSet) {
    payload.WithObject("inline", m_inline.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
