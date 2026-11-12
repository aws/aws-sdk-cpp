/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/NetworkPorts.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

NetworkPorts::NetworkPorts(JsonView jsonValue) { *this = jsonValue; }

NetworkPorts& NetworkPorts::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetPort")) {
    m_targetPort = jsonValue.GetString("targetPort");
    m_targetPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remotePort")) {
    m_remotePort = jsonValue.GetString("remotePort");
    m_remotePortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolverPort")) {
    m_resolverPort = jsonValue.GetString("resolverPort");
    m_resolverPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ports")) {
    m_ports = jsonValue.GetString("ports");
    m_portsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portsUsed")) {
    m_portsUsed = jsonValue.GetString("portsUsed");
    m_portsUsedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portCount")) {
    m_portCount = jsonValue.GetInt64("portCount");
    m_portCountHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkPorts::Jsonize() const {
  JsonValue payload;

  if (m_targetPortHasBeenSet) {
    payload.WithString("targetPort", m_targetPort);
  }

  if (m_remotePortHasBeenSet) {
    payload.WithString("remotePort", m_remotePort);
  }

  if (m_resolverPortHasBeenSet) {
    payload.WithString("resolverPort", m_resolverPort);
  }

  if (m_portsHasBeenSet) {
    payload.WithString("ports", m_ports);
  }

  if (m_portsUsedHasBeenSet) {
    payload.WithString("portsUsed", m_portsUsed);
  }

  if (m_portCountHasBeenSet) {
    payload.WithInt64("portCount", m_portCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
