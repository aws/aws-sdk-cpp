/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/AuditorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

AuditorResult::AuditorResult(JsonView jsonValue) { *this = jsonValue; }

AuditorResult& AuditorResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Auditor")) {
    m_auditor = jsonValue.GetString("Auditor");
    m_auditorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Severity")) {
    m_severity = SeverityMapper::GetSeverityForName(jsonValue.GetString("Severity"));
    m_severityHasBeenSet = true;
  }
  return *this;
}

JsonValue AuditorResult::Jsonize() const {
  JsonValue payload;

  if (m_auditorHasBeenSet) {
    payload.WithString("Auditor", m_auditor);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("Severity", SeverityMapper::GetNameForSeverity(m_severity));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
