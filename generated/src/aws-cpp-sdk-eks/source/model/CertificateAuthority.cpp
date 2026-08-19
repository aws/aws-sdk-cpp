/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/CertificateAuthority.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

CertificateAuthority::CertificateAuthority(JsonView jsonValue) { *this = jsonValue; }

CertificateAuthority& CertificateAuthority::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = CertificateAuthorityCreatedByMapper::GetCertificateAuthorityCreatedByForName(jsonValue.GetString("createdBy"));
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activatedAt")) {
    m_activatedAt = jsonValue.GetDouble("activatedAt");
    m_activatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activatedBy")) {
    m_activatedBy = CertificateAuthorityActivatedByMapper::GetCertificateAuthorityActivatedByForName(jsonValue.GetString("activatedBy"));
    m_activatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("signingStatus")) {
    m_signingStatus =
        CertificateAuthoritySigningStatusMapper::GetCertificateAuthoritySigningStatusForName(jsonValue.GetString("signingStatus"));
    m_signingStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("distributionStatus")) {
    m_distributionStatus = CertificateAuthorityDistributionStatusMapper::GetCertificateAuthorityDistributionStatusForName(
        jsonValue.GetString("distributionStatus"));
    m_distributionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("validity")) {
    m_validity = jsonValue.GetObject("validity");
    m_validityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduledEvents")) {
    m_scheduledEvents = jsonValue.GetObject("scheduledEvents");
    m_scheduledEventsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rollbackAvailable")) {
    m_rollbackAvailable = jsonValue.GetBool("rollbackAvailable");
    m_rollbackAvailableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetString("data");
    m_dataHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateAuthority::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("createdBy", CertificateAuthorityCreatedByMapper::GetNameForCertificateAuthorityCreatedBy(m_createdBy));
  }

  if (m_activatedAtHasBeenSet) {
    payload.WithDouble("activatedAt", m_activatedAt.SecondsWithMSPrecision());
  }

  if (m_activatedByHasBeenSet) {
    payload.WithString("activatedBy", CertificateAuthorityActivatedByMapper::GetNameForCertificateAuthorityActivatedBy(m_activatedBy));
  }

  if (m_signingStatusHasBeenSet) {
    payload.WithString("signingStatus",
                       CertificateAuthoritySigningStatusMapper::GetNameForCertificateAuthoritySigningStatus(m_signingStatus));
  }

  if (m_distributionStatusHasBeenSet) {
    payload.WithString("distributionStatus", CertificateAuthorityDistributionStatusMapper::GetNameForCertificateAuthorityDistributionStatus(
                                                 m_distributionStatus));
  }

  if (m_validityHasBeenSet) {
    payload.WithObject("validity", m_validity.Jsonize());
  }

  if (m_scheduledEventsHasBeenSet) {
    payload.WithObject("scheduledEvents", m_scheduledEvents.Jsonize());
  }

  if (m_rollbackAvailableHasBeenSet) {
    payload.WithBool("rollbackAvailable", m_rollbackAvailable);
  }

  if (m_dataHasBeenSet) {
    payload.WithString("data", m_data);
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
