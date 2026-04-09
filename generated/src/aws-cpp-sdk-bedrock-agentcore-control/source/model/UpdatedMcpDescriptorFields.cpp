/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdatedMcpDescriptorFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

UpdatedMcpDescriptorFields::UpdatedMcpDescriptorFields(JsonView jsonValue) { *this = jsonValue; }

UpdatedMcpDescriptorFields& UpdatedMcpDescriptorFields::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("server")) {
    m_server = jsonValue.GetObject("server");
    m_serverHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tools")) {
    m_tools = jsonValue.GetObject("tools");
    m_toolsHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedMcpDescriptorFields::Jsonize() const {
  JsonValue payload;

  if (m_serverHasBeenSet) {
    payload.WithObject("server", m_server.Jsonize());
  }

  if (m_toolsHasBeenSet) {
    payload.WithObject("tools", m_tools.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
