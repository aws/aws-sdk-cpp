/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdatedMcpServerAdditionalDataFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

UpdatedMcpServerAdditionalDataFields::UpdatedMcpServerAdditionalDataFields(JsonView jsonValue) { *this = jsonValue; }

UpdatedMcpServerAdditionalDataFields& UpdatedMcpServerAdditionalDataFields::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tools")) {
    m_tools = jsonValue.GetObject("tools");
    m_toolsHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedMcpServerAdditionalDataFields::Jsonize() const {
  JsonValue payload;

  if (m_toolsHasBeenSet) {
    payload.WithObject("tools", m_tools.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
