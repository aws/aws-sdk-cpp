/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/RateLimiterStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

RateLimiterStatus::RateLimiterStatus(JsonView jsonValue) { *this = jsonValue; }

RateLimiterStatus& RateLimiterStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxAllowed")) {
    m_maxAllowed = jsonValue.GetInteger("maxAllowed");
    m_maxAllowedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inUse")) {
    m_inUse = jsonValue.GetInteger("inUse");
    m_inUseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remaining")) {
    m_remaining = jsonValue.GetInteger("remaining");
    m_remainingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalBandwidth")) {
    m_totalBandwidth = jsonValue.GetString("totalBandwidth");
    m_totalBandwidthHasBeenSet = true;
  }
  return *this;
}

JsonValue RateLimiterStatus::Jsonize() const {
  JsonValue payload;

  if (m_maxAllowedHasBeenSet) {
    payload.WithInteger("maxAllowed", m_maxAllowed);
  }

  if (m_inUseHasBeenSet) {
    payload.WithInteger("inUse", m_inUse);
  }

  if (m_remainingHasBeenSet) {
    payload.WithInteger("remaining", m_remaining);
  }

  if (m_totalBandwidthHasBeenSet) {
    payload.WithString("totalBandwidth", m_totalBandwidth);
  }

  return payload;
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
