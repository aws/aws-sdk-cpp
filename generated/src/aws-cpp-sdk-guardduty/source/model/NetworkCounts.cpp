/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/NetworkCounts.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

NetworkCounts::NetworkCounts(JsonView jsonValue) { *this = jsonValue; }

NetworkCounts& NetworkCounts::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("requestCount")) {
    m_requestCount = jsonValue.GetInt64("requestCount");
    m_requestCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalAttempts")) {
    m_totalAttempts = jsonValue.GetInt64("totalAttempts");
    m_totalAttemptsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("suspiciousAttempts")) {
    m_suspiciousAttempts = jsonValue.GetInt64("suspiciousAttempts");
    m_suspiciousAttemptsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resetAttempts")) {
    m_resetAttempts = jsonValue.GetInt64("resetAttempts");
    m_resetAttemptsHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkCounts::Jsonize() const {
  JsonValue payload;

  if (m_requestCountHasBeenSet) {
    payload.WithInt64("requestCount", m_requestCount);
  }

  if (m_totalAttemptsHasBeenSet) {
    payload.WithInt64("totalAttempts", m_totalAttempts);
  }

  if (m_suspiciousAttemptsHasBeenSet) {
    payload.WithInt64("suspiciousAttempts", m_suspiciousAttempts);
  }

  if (m_resetAttemptsHasBeenSet) {
    payload.WithInt64("resetAttempts", m_resetAttempts);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
