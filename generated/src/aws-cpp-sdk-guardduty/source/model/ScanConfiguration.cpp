/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ScanConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ScanConfiguration::ScanConfiguration(JsonView jsonValue) { *this = jsonValue; }

ScanConfiguration& ScanConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("role")) {
    m_role = jsonValue.GetString("role");
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("triggerDetails")) {
    m_triggerDetails = jsonValue.GetObject("triggerDetails");
    m_triggerDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("incrementalScanDetails")) {
    m_incrementalScanDetails = jsonValue.GetObject("incrementalScanDetails");
    m_incrementalScanDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recoveryPoint")) {
    m_recoveryPoint = jsonValue.GetObject("recoveryPoint");
    m_recoveryPointHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_roleHasBeenSet) {
    payload.WithString("role", m_role);
  }

  if (m_triggerDetailsHasBeenSet) {
    payload.WithObject("triggerDetails", m_triggerDetails.Jsonize());
  }

  if (m_incrementalScanDetailsHasBeenSet) {
    payload.WithObject("incrementalScanDetails", m_incrementalScanDetails.Jsonize());
  }

  if (m_recoveryPointHasBeenSet) {
    payload.WithObject("recoveryPoint", m_recoveryPoint.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
