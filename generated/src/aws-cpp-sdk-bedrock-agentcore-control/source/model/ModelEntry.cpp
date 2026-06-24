/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ModelEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ModelEntry::ModelEntry(JsonView jsonValue) { *this = jsonValue; }

ModelEntry& ModelEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("model")) {
    m_model = jsonValue.GetString("model");
    m_modelHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelEntry::Jsonize() const {
  JsonValue payload;

  if (m_modelHasBeenSet) {
    payload.WithString("model", m_model);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
