/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/PolicyPreviewConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccessAnalyzer {
namespace Model {

PolicyPreviewConfiguration::PolicyPreviewConfiguration(JsonView jsonValue) { *this = jsonValue; }

PolicyPreviewConfiguration& PolicyPreviewConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scope")) {
    m_scope = PolicyPreviewScopeMapper::GetPolicyPreviewScopeForName(jsonValue.GetString("scope"));
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PolicyPreviewStatusMapper::GetPolicyPreviewStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyPreviewConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_scopeHasBeenSet) {
    payload.WithString("scope", PolicyPreviewScopeMapper::GetNameForPolicyPreviewScope(m_scope));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PolicyPreviewStatusMapper::GetNameForPolicyPreviewStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
