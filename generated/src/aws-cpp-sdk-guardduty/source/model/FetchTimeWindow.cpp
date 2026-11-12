/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/FetchTimeWindow.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

FetchTimeWindow::FetchTimeWindow(JsonView jsonValue) { *this = jsonValue; }

FetchTimeWindow& FetchTimeWindow::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("durationInMinutes")) {
    m_durationInMinutes = jsonValue.GetInteger("durationInMinutes");
    m_durationInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue FetchTimeWindow::Jsonize() const {
  JsonValue payload;

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_durationInMinutesHasBeenSet) {
    payload.WithInteger("durationInMinutes", m_durationInMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
