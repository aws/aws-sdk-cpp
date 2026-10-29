/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AllowedPort.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

AllowedPort::AllowedPort(JsonView jsonValue) { *this = jsonValue; }

AllowedPort& AllowedPort::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portRange")) {
    m_portRange = jsonValue.GetObject("portRange");
    m_portRangeHasBeenSet = true;
  }
  return *this;
}

JsonValue AllowedPort::Jsonize() const {
  JsonValue payload;

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_portRangeHasBeenSet) {
    payload.WithObject("portRange", m_portRange.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
