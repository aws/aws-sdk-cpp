/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Fallback.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

Fallback::Fallback(JsonView jsonValue) { *this = jsonValue; }

Fallback& Fallback::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("triggerOn")) {
    m_triggerOn = jsonValue.GetObject("triggerOn");
    m_triggerOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firstByteTimeoutMilliseconds")) {
    m_firstByteTimeoutMilliseconds = jsonValue.GetInteger("firstByteTimeoutMilliseconds");
    m_firstByteTimeoutMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("circuitBreaker")) {
    m_circuitBreaker = jsonValue.GetObject("circuitBreaker");
    m_circuitBreakerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetFallback")) {
    Aws::Utils::Array<JsonView> targetFallbackJsonList = jsonValue.GetArray("targetFallback");
    for (unsigned targetFallbackIndex = 0; targetFallbackIndex < targetFallbackJsonList.GetLength(); ++targetFallbackIndex) {
      m_targetFallback.push_back(targetFallbackJsonList[targetFallbackIndex].AsObject());
    }
    m_targetFallbackHasBeenSet = true;
  }
  return *this;
}

JsonValue Fallback::Jsonize() const {
  JsonValue payload;

  if (m_triggerOnHasBeenSet) {
    payload.WithObject("triggerOn", m_triggerOn.Jsonize());
  }

  if (m_firstByteTimeoutMillisecondsHasBeenSet) {
    payload.WithInteger("firstByteTimeoutMilliseconds", m_firstByteTimeoutMilliseconds);
  }

  if (m_circuitBreakerHasBeenSet) {
    payload.WithObject("circuitBreaker", m_circuitBreaker.Jsonize());
  }

  if (m_targetFallbackHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetFallbackJsonList(m_targetFallback.size());
    for (unsigned targetFallbackIndex = 0; targetFallbackIndex < targetFallbackJsonList.GetLength(); ++targetFallbackIndex) {
      targetFallbackJsonList[targetFallbackIndex].AsObject(m_targetFallback[targetFallbackIndex].Jsonize());
    }
    payload.WithArray("targetFallback", std::move(targetFallbackJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
