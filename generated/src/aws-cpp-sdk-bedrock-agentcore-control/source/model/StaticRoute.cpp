/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StaticRoute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

StaticRoute::StaticRoute(JsonView jsonValue) { *this = jsonValue; }

StaticRoute& StaticRoute::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetName")) {
    m_targetName = jsonValue.GetString("targetName");
    m_targetNameHasBeenSet = true;
  }
  return *this;
}

JsonValue StaticRoute::Jsonize() const {
  JsonValue payload;

  if (m_targetNameHasBeenSet) {
    payload.WithString("targetName", m_targetName);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
