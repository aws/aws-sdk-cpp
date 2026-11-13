/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/LifecycleHookAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

LifecycleHookAction::LifecycleHookAction(JsonView jsonValue) { *this = jsonValue; }

LifecycleHookAction& LifecycleHookAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("httpPost")) {
    m_httpPost = jsonValue.GetObject("httpPost");
    m_httpPostHasBeenSet = true;
  }
  return *this;
}

JsonValue LifecycleHookAction::Jsonize() const {
  JsonValue payload;

  if (m_httpPostHasBeenSet) {
    payload.WithObject("httpPost", m_httpPost.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
