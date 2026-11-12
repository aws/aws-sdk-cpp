/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/SeverityBreakdown.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

SeverityBreakdown::SeverityBreakdown(JsonView jsonValue) { *this = jsonValue; }

SeverityBreakdown& SeverityBreakdown::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("critical")) {
    m_critical = jsonValue.GetInteger("critical");
    m_criticalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("high")) {
    m_high = jsonValue.GetInteger("high");
    m_highHasBeenSet = true;
  }
  if (jsonValue.ValueExists("medium")) {
    m_medium = jsonValue.GetInteger("medium");
    m_mediumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("low")) {
    m_low = jsonValue.GetInteger("low");
    m_lowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("info")) {
    m_info = jsonValue.GetInteger("info");
    m_infoHasBeenSet = true;
  }
  return *this;
}

JsonValue SeverityBreakdown::Jsonize() const {
  JsonValue payload;

  if (m_criticalHasBeenSet) {
    payload.WithInteger("critical", m_critical);
  }

  if (m_highHasBeenSet) {
    payload.WithInteger("high", m_high);
  }

  if (m_mediumHasBeenSet) {
    payload.WithInteger("medium", m_medium);
  }

  if (m_lowHasBeenSet) {
    payload.WithInteger("low", m_low);
  }

  if (m_infoHasBeenSet) {
    payload.WithInteger("info", m_info);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
