/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/AssociationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

AssociationSummary::AssociationSummary(JsonView jsonValue) { *this = jsonValue; }

AssociationSummary& AssociationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("associationId")) {
    m_associationId = jsonValue.GetString("associationId");
    m_associationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleId")) {
    m_ruleId = jsonValue.GetString("ruleId");
    m_ruleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mode")) {
    m_mode = AssociationModeMapper::GetAssociationModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAt")) {
    m_expiresAt = jsonValue.GetDouble("expiresAt");
    m_expiresAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociationSummary::Jsonize() const {
  JsonValue payload;

  if (m_associationIdHasBeenSet) {
    payload.WithString("associationId", m_associationId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_ruleIdHasBeenSet) {
    payload.WithString("ruleId", m_ruleId);
  }

  if (m_modeHasBeenSet) {
    payload.WithString("mode", AssociationModeMapper::GetNameForAssociationMode(m_mode));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithDouble("expiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
