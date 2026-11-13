/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/BuildLifecycleHooks.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

BuildLifecycleHooks::BuildLifecycleHooks(JsonView jsonValue) { *this = jsonValue; }

BuildLifecycleHooks& BuildLifecycleHooks::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("warmup")) {
    m_warmup = jsonValue.GetObject("warmup");
    m_warmupHasBeenSet = true;
  }
  return *this;
}

JsonValue BuildLifecycleHooks::Jsonize() const {
  JsonValue payload;

  if (m_warmupHasBeenSet) {
    payload.WithObject("warmup", m_warmup.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
