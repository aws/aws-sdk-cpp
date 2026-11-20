/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/DiscoveryStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

DiscoveryStatus::DiscoveryStatus(JsonView jsonValue) { *this = jsonValue; }

DiscoveryStatus& DiscoveryStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discoverySource")) {
    m_discoverySource = DiscoverySourceMapper::GetDiscoverySourceForName(jsonValue.GetString("discoverySource"));
    m_discoverySourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DiscoveryStatusValueMapper::GetDiscoveryStatusValueForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = DiscoveryFailureReasonMapper::GetDiscoveryFailureReasonForName(jsonValue.GetString("failureReason"));
    m_failureReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue DiscoveryStatus::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_discoverySourceHasBeenSet) {
    payload.WithString("discoverySource", DiscoverySourceMapper::GetNameForDiscoverySource(m_discoverySource));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DiscoveryStatusValueMapper::GetNameForDiscoveryStatusValue(m_status));
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("failureReason", DiscoveryFailureReasonMapper::GetNameForDiscoveryFailureReason(m_failureReason));
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
