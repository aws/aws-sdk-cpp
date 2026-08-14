/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/UpdateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

UpdateSummary::UpdateSummary(JsonView jsonValue) { *this = jsonValue; }

UpdateSummary& UpdateSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = UpdateStatusMapper::GetUpdateStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = UpdateTypeMapper::GetUpdateTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DomainValidationMethodUpdateSummary")) {
    m_domainValidationMethodUpdateSummary = jsonValue.GetObject("DomainValidationMethodUpdateSummary");
    m_domainValidationMethodUpdateSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestedAt")) {
    m_requestedAt = jsonValue.GetDouble("RequestedAt");
    m_requestedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateSummary::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", UpdateStatusMapper::GetNameForUpdateStatus(m_status));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", UpdateTypeMapper::GetNameForUpdateType(m_type));
  }

  if (m_domainValidationMethodUpdateSummaryHasBeenSet) {
    payload.WithObject("DomainValidationMethodUpdateSummary", m_domainValidationMethodUpdateSummary.Jsonize());
  }

  if (m_requestedAtHasBeenSet) {
    payload.WithDouble("RequestedAt", m_requestedAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
