/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/TrustedAccessProgramSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

TrustedAccessProgramSummary::TrustedAccessProgramSummary(JsonView jsonValue) { *this = jsonValue; }

TrustedAccessProgramSummary& TrustedAccessProgramSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("programId")) {
    m_programId = jsonValue.GetString("programId");
    m_programIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerName")) {
    m_providerName = jsonValue.GetString("providerName");
    m_providerNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("detailsUrl")) {
    m_detailsUrl = jsonValue.GetString("detailsUrl");
    m_detailsUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enrollmentUrl")) {
    m_enrollmentUrl = jsonValue.GetString("enrollmentUrl");
    m_enrollmentUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = TrustedAccessProgramStatusMapper::GetTrustedAccessProgramStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = TrustedAccessProgramScopeMapper::GetTrustedAccessProgramScopeForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eligibilityScope")) {
    m_eligibilityScope = TrustedAccessProgramScopeMapper::GetTrustedAccessProgramScopeForName(jsonValue.GetString("eligibilityScope"));
    m_eligibilityScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolvedFor")) {
    m_resolvedFor = jsonValue.GetObject("resolvedFor");
    m_resolvedForHasBeenSet = true;
  }
  if (jsonValue.ValueExists("optIn")) {
    m_optIn = TrustedAccessProgramOptInMapper::GetTrustedAccessProgramOptInForName(jsonValue.GetString("optIn"));
    m_optInHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustedAccessProgramSummary::Jsonize() const {
  JsonValue payload;

  if (m_programIdHasBeenSet) {
    payload.WithString("programId", m_programId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_providerNameHasBeenSet) {
    payload.WithString("providerName", m_providerName);
  }

  if (m_detailsUrlHasBeenSet) {
    payload.WithString("detailsUrl", m_detailsUrl);
  }

  if (m_enrollmentUrlHasBeenSet) {
    payload.WithString("enrollmentUrl", m_enrollmentUrl);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", TrustedAccessProgramStatusMapper::GetNameForTrustedAccessProgramStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", TrustedAccessProgramScopeMapper::GetNameForTrustedAccessProgramScope(m_source));
  }

  if (m_eligibilityScopeHasBeenSet) {
    payload.WithString("eligibilityScope", TrustedAccessProgramScopeMapper::GetNameForTrustedAccessProgramScope(m_eligibilityScope));
  }

  if (m_resolvedForHasBeenSet) {
    payload.WithObject("resolvedFor", m_resolvedFor.Jsonize());
  }

  if (m_optInHasBeenSet) {
    payload.WithString("optIn", TrustedAccessProgramOptInMapper::GetNameForTrustedAccessProgramOptIn(m_optIn));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
