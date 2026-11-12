/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ActivityWindow.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ActivityWindow::ActivityWindow(JsonView jsonValue) { *this = jsonValue; }

ActivityWindow& ActivityWindow::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("firstSeenAt")) {
    m_firstSeenAt = jsonValue.GetDouble("firstSeenAt");
    m_firstSeenAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastSeenAt")) {
    m_lastSeenAt = jsonValue.GetDouble("lastSeenAt");
    m_lastSeenAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ActivityWindow::Jsonize() const {
  JsonValue payload;

  if (m_firstSeenAtHasBeenSet) {
    payload.WithDouble("firstSeenAt", m_firstSeenAt.SecondsWithMSPrecision());
  }

  if (m_lastSeenAtHasBeenSet) {
    payload.WithDouble("lastSeenAt", m_lastSeenAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
