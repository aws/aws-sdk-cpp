/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ServiceQuotaWarningSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

ServiceQuotaWarningSummary::ServiceQuotaWarningSummary(JsonView jsonValue) { *this = jsonValue; }

ServiceQuotaWarningSummary& ServiceQuotaWarningSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quotaRegion")) {
    m_quotaRegion = jsonValue.GetString("quotaRegion");
    m_quotaRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceCode")) {
    m_serviceCode = jsonValue.GetString("serviceCode");
    m_serviceCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quotaCode")) {
    m_quotaCode = jsonValue.GetString("quotaCode");
    m_quotaCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quotaName")) {
    m_quotaName = jsonValue.GetString("quotaName");
    m_quotaNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ServiceQuotaWarningStatusMapper::GetServiceQuotaWarningStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("planArn")) {
    m_planArn = jsonValue.GetString("planArn");
    m_planArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestId")) {
    m_requestId = jsonValue.GetString("requestId");
    m_requestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("caseId")) {
    m_caseId = jsonValue.GetString("caseId");
    m_caseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("warningMessage")) {
    m_warningMessage = jsonValue.GetString("warningMessage");
    m_warningMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastCheckedAt")) {
    m_lastCheckedAt = jsonValue.GetDouble("lastCheckedAt");
    m_lastCheckedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("warningCreatedAt")) {
    m_warningCreatedAt = jsonValue.GetDouble("warningCreatedAt");
    m_warningCreatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceQuotaWarningSummary::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_quotaRegionHasBeenSet) {
    payload.WithString("quotaRegion", m_quotaRegion);
  }

  if (m_serviceCodeHasBeenSet) {
    payload.WithString("serviceCode", m_serviceCode);
  }

  if (m_quotaCodeHasBeenSet) {
    payload.WithString("quotaCode", m_quotaCode);
  }

  if (m_quotaNameHasBeenSet) {
    payload.WithString("quotaName", m_quotaName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ServiceQuotaWarningStatusMapper::GetNameForServiceQuotaWarningStatus(m_status));
  }

  if (m_planArnHasBeenSet) {
    payload.WithString("planArn", m_planArn);
  }

  if (m_requestIdHasBeenSet) {
    payload.WithString("requestId", m_requestId);
  }

  if (m_caseIdHasBeenSet) {
    payload.WithString("caseId", m_caseId);
  }

  if (m_warningMessageHasBeenSet) {
    payload.WithString("warningMessage", m_warningMessage);
  }

  if (m_lastCheckedAtHasBeenSet) {
    payload.WithDouble("lastCheckedAt", m_lastCheckedAt.SecondsWithMSPrecision());
  }

  if (m_warningCreatedAtHasBeenSet) {
    payload.WithDouble("warningCreatedAt", m_warningCreatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
