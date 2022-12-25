/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CertificateAuthority.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

CertificateAuthority::CertificateAuthority() : 
    m_arnHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastStateChangeAtHasBeenSet(false),
    m_type(CertificateAuthorityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_status(CertificateAuthorityStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_certificateAuthorityConfigurationHasBeenSet(false),
    m_revocationConfigurationHasBeenSet(false),
    m_restorableUntilHasBeenSet(false),
    m_keyStorageSecurityStandard(KeyStorageSecurityStandard::NOT_SET),
    m_keyStorageSecurityStandardHasBeenSet(false),
    m_usageMode(CertificateAuthorityUsageMode::NOT_SET),
    m_usageModeHasBeenSet(false)
{
}

CertificateAuthority::CertificateAuthority(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastStateChangeAtHasBeenSet(false),
    m_type(CertificateAuthorityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_status(CertificateAuthorityStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_certificateAuthorityConfigurationHasBeenSet(false),
    m_revocationConfigurationHasBeenSet(false),
    m_restorableUntilHasBeenSet(false),
    m_keyStorageSecurityStandard(KeyStorageSecurityStandard::NOT_SET),
    m_keyStorageSecurityStandardHasBeenSet(false),
    m_usageMode(CertificateAuthorityUsageMode::NOT_SET),
    m_usageModeHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateAuthority& CertificateAuthority::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("OwnerAccount");

    m_ownerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStateChangeAt"))
  {
    m_lastStateChangeAt = jsonValue.GetDouble("LastStateChangeAt");

    m_lastStateChangeAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = CertificateAuthorityTypeMapper::GetCertificateAuthorityTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Serial"))
  {
    m_serial = jsonValue.GetString("Serial");

    m_serialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CertificateAuthorityStatusMapper::GetCertificateAuthorityStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotBefore"))
  {
    m_notBefore = jsonValue.GetDouble("NotBefore");

    m_notBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotAfter"))
  {
    m_notAfter = jsonValue.GetDouble("NotAfter");

    m_notAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = FailureReasonMapper::GetFailureReasonForName(jsonValue.GetString("FailureReason"));

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateAuthorityConfiguration"))
  {
    m_certificateAuthorityConfiguration = jsonValue.GetObject("CertificateAuthorityConfiguration");

    m_certificateAuthorityConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevocationConfiguration"))
  {
    m_revocationConfiguration = jsonValue.GetObject("RevocationConfiguration");

    m_revocationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestorableUntil"))
  {
    m_restorableUntil = jsonValue.GetDouble("RestorableUntil");

    m_restorableUntilHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyStorageSecurityStandard"))
  {
    m_keyStorageSecurityStandard = KeyStorageSecurityStandardMapper::GetKeyStorageSecurityStandardForName(jsonValue.GetString("KeyStorageSecurityStandard"));

    m_keyStorageSecurityStandardHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsageMode"))
  {
    m_usageMode = CertificateAuthorityUsageModeMapper::GetCertificateAuthorityUsageModeForName(jsonValue.GetString("UsageMode"));

    m_usageModeHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateAuthority::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("OwnerAccount", m_ownerAccount);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastStateChangeAtHasBeenSet)
  {
   payload.WithDouble("LastStateChangeAt", m_lastStateChangeAt.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CertificateAuthorityTypeMapper::GetNameForCertificateAuthorityType(m_type));
  }

  if(m_serialHasBeenSet)
  {
   payload.WithString("Serial", m_serial);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CertificateAuthorityStatusMapper::GetNameForCertificateAuthorityStatus(m_status));
  }

  if(m_notBeforeHasBeenSet)
  {
   payload.WithDouble("NotBefore", m_notBefore.SecondsWithMSPrecision());
  }

  if(m_notAfterHasBeenSet)
  {
   payload.WithDouble("NotAfter", m_notAfter.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", FailureReasonMapper::GetNameForFailureReason(m_failureReason));
  }

  if(m_certificateAuthorityConfigurationHasBeenSet)
  {
   payload.WithObject("CertificateAuthorityConfiguration", m_certificateAuthorityConfiguration.Jsonize());

  }

  if(m_revocationConfigurationHasBeenSet)
  {
   payload.WithObject("RevocationConfiguration", m_revocationConfiguration.Jsonize());

  }

  if(m_restorableUntilHasBeenSet)
  {
   payload.WithDouble("RestorableUntil", m_restorableUntil.SecondsWithMSPrecision());
  }

  if(m_keyStorageSecurityStandardHasBeenSet)
  {
   payload.WithString("KeyStorageSecurityStandard", KeyStorageSecurityStandardMapper::GetNameForKeyStorageSecurityStandard(m_keyStorageSecurityStandard));
  }

  if(m_usageModeHasBeenSet)
  {
   payload.WithString("UsageMode", CertificateAuthorityUsageModeMapper::GetNameForCertificateAuthorityUsageMode(m_usageMode));
  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
