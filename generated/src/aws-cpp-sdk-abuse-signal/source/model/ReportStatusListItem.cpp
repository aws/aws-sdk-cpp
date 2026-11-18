/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/model/ReportStatusListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AbuseSignal {
namespace Model {

ReportStatusListItem::ReportStatusListItem(JsonView jsonValue) { *this = jsonValue; }

ReportStatusListItem& ReportStatusListItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reportId")) {
    m_reportId = jsonValue.GetString("reportId");
    m_reportIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("correlationId")) {
    m_correlationId = jsonValue.GetString("correlationId");
    m_correlationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ReportSubmissionStatusMapper::GetReportSubmissionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reasonCode")) {
    m_reasonCode = ReasonCodeMapper::GetReasonCodeForName(jsonValue.GetString("reasonCode"));
    m_reasonCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ReportStatusListItem::Jsonize() const {
  JsonValue payload;

  if (m_reportIdHasBeenSet) {
    payload.WithString("reportId", m_reportId);
  }

  if (m_correlationIdHasBeenSet) {
    payload.WithString("correlationId", m_correlationId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ReportSubmissionStatusMapper::GetNameForReportSubmissionStatus(m_status));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_reasonCodeHasBeenSet) {
    payload.WithString("reasonCode", ReasonCodeMapper::GetNameForReasonCode(m_reasonCode));
  }

  return payload;
}

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
