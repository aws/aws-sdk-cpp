/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HttpPostLifecycleHookAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HttpPostLifecycleHookAction::HttpPostLifecycleHookAction(JsonView jsonValue) { *this = jsonValue; }

HttpPostLifecycleHookAction& HttpPostLifecycleHookAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  return *this;
}

JsonValue HttpPostLifecycleHookAction::Jsonize() const {
  JsonValue payload;

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
