/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/ScheduledExecutions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

ScheduledExecutions::ScheduledExecutions(JsonView jsonValue) { *this = jsonValue; }

ScheduledExecutions& ScheduledExecutions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NextExecutedAt")) {
    m_nextExecutedAt = jsonValue.GetDouble("NextExecutedAt");
    m_nextExecutedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastExecutedAt")) {
    m_lastExecutedAt = jsonValue.GetDouble("LastExecutedAt");
    m_lastExecutedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledExecutions::Jsonize() const {
  JsonValue payload;

  if (m_nextExecutedAtHasBeenSet) {
    payload.WithDouble("NextExecutedAt", m_nextExecutedAt.SecondsWithMSPrecision());
  }

  if (m_lastExecutedAtHasBeenSet) {
    payload.WithDouble("LastExecutedAt", m_lastExecutedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
