/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/RepresentativeFinding.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

RepresentativeFinding::RepresentativeFinding(JsonView jsonValue) { *this = jsonValue; }

RepresentativeFinding& RepresentativeFinding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingCount")) {
    m_findingCount = jsonValue.GetInt64("findingCount");
    m_findingCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskLevel")) {
    m_riskLevel = RiskLevelMapper::GetRiskLevelForName(jsonValue.GetString("riskLevel"));
    m_riskLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskRationale")) {
    m_riskRationale = jsonValue.GetString("riskRationale");
    m_riskRationaleHasBeenSet = true;
  }
  return *this;
}

JsonValue RepresentativeFinding::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", m_resourceType);
  }

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_findingCountHasBeenSet) {
    payload.WithInt64("findingCount", m_findingCount);
  }

  if (m_riskLevelHasBeenSet) {
    payload.WithString("riskLevel", RiskLevelMapper::GetNameForRiskLevel(m_riskLevel));
  }

  if (m_riskRationaleHasBeenSet) {
    payload.WithString("riskRationale", m_riskRationale);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
