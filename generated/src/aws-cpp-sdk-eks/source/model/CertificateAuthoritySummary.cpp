/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/CertificateAuthoritySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

CertificateAuthoritySummary::CertificateAuthoritySummary(JsonView jsonValue) { *this = jsonValue; }

CertificateAuthoritySummary& CertificateAuthoritySummary::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue CertificateAuthoritySummary::Jsonize() const {
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

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
