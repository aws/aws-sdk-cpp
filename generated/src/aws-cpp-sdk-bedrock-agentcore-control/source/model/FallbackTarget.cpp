/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/FallbackTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

FallbackTarget::FallbackTarget(JsonView jsonValue) { *this = jsonValue; }

FallbackTarget& FallbackTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetName")) {
    m_targetName = jsonValue.GetString("targetName");
    m_targetNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("model")) {
    m_model = jsonValue.GetString("model");
    m_modelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("triggerOn")) {
    m_triggerOn = jsonValue.GetObject("triggerOn");
    m_triggerOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firstByteTimeoutMilliseconds")) {
    m_firstByteTimeoutMilliseconds = jsonValue.GetInteger("firstByteTimeoutMilliseconds");
    m_firstByteTimeoutMillisecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue FallbackTarget::Jsonize() const {
  JsonValue payload;

  if (m_targetNameHasBeenSet) {
    payload.WithString("targetName", m_targetName);
  }

  if (m_modelHasBeenSet) {
    payload.WithString("model", m_model);
  }

  if (m_triggerOnHasBeenSet) {
    payload.WithObject("triggerOn", m_triggerOn.Jsonize());
  }

  if (m_firstByteTimeoutMillisecondsHasBeenSet) {
    payload.WithInteger("firstByteTimeoutMilliseconds", m_firstByteTimeoutMilliseconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
