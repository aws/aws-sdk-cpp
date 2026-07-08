/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ConnectorHealth.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ConnectorHealth::ConnectorHealth(JsonView jsonValue) { *this = jsonValue; }

ConnectorHealth& ConnectorHealth::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("connectorStatus")) {
    m_connectorStatus = ConnectorHealthStatusMapper::GetConnectorHealthStatusForName(jsonValue.GetString("connectorStatus"));
    m_connectorStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastCheckedAt")) {
    m_lastCheckedAt = jsonValue.GetString("lastCheckedAt");
    m_lastCheckedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorHealth::Jsonize() const {
  JsonValue payload;

  if (m_connectorStatusHasBeenSet) {
    payload.WithString("connectorStatus", ConnectorHealthStatusMapper::GetNameForConnectorHealthStatus(m_connectorStatus));
  }

  if (m_lastCheckedAtHasBeenSet) {
    payload.WithString("lastCheckedAt", m_lastCheckedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
