/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ProtocolConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ProtocolConfiguration::ProtocolConfiguration(JsonView jsonValue) { *this = jsonValue; }

ProtocolConfiguration& ProtocolConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serverProtocol")) {
    m_serverProtocol = ServerProtocolMapper::GetServerProtocolForName(jsonValue.GetString("serverProtocol"));
    m_serverProtocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtocolConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_serverProtocolHasBeenSet) {
    payload.WithString("serverProtocol", ServerProtocolMapper::GetNameForServerProtocol(m_serverProtocol));
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
