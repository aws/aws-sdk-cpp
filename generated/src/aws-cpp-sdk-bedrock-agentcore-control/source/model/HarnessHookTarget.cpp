/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessHookTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessHookTarget::HarnessHookTarget(JsonView jsonValue) { *this = jsonValue; }

HarnessHookTarget& HarnessHookTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lambda")) {
    m_lambda = jsonValue.GetObject("lambda");
    m_lambdaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sns")) {
    m_sns = jsonValue.GetObject("sns");
    m_snsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventBridge")) {
    m_eventBridge = jsonValue.GetObject("eventBridge");
    m_eventBridgeHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessHookTarget::Jsonize() const {
  JsonValue payload;

  if (m_lambdaHasBeenSet) {
    payload.WithObject("lambda", m_lambda.Jsonize());
  }

  if (m_snsHasBeenSet) {
    payload.WithObject("sns", m_sns.Jsonize());
  }

  if (m_eventBridgeHasBeenSet) {
    payload.WithObject("eventBridge", m_eventBridge.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
