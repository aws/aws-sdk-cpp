﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/acm-pca/model/CertificateAuthorityType.h>
#include <aws/acm-pca/model/CertificateAuthorityStatus.h>
#include <aws/acm-pca/model/FailureReason.h>
#include <aws/acm-pca/model/CertificateAuthorityConfiguration.h>
#include <aws/acm-pca/model/RevocationConfiguration.h>
#include <aws/acm-pca/model/KeyStorageSecurityStandard.h>
#include <aws/acm-pca/model/CertificateAuthorityUsageMode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Contains information about your private certificate authority (CA). Your
   * private CA can issue and revoke X.509 digital certificates. Digital certificates
   * verify that the entity named in the certificate <b>Subject</b> field owns or
   * controls the public key contained in the <b>Subject Public Key Info</b> field.
   * Call the <a
   * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>
   * action to create your private CA. You must then call the <a
   * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_GetCertificateAuthorityCertificate.html">GetCertificateAuthorityCertificate</a>
   * action to retrieve a private CA certificate signing request (CSR). Sign the CSR
   * with your Amazon Web Services Private CA-hosted or on-premises root or
   * subordinate CA certificate. Call the <a
   * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_ImportCertificateAuthorityCertificate.html">ImportCertificateAuthorityCertificate</a>
   * action to import the signed certificate into Certificate Manager (ACM).
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CertificateAuthority">AWS
   * API Reference</a></p>
   */
  class CertificateAuthority
  {
  public:
    AWS_ACMPCA_API CertificateAuthority();
    AWS_ACMPCA_API CertificateAuthority(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API CertificateAuthority& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for your private certificate authority (CA). The
     * format is <code> <i>12345678-1234-1234-1234-123456789012</i> </code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CertificateAuthority& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CertificateAuthority& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CertificateAuthority& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the certificate authority.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }
    inline CertificateAuthority& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline CertificateAuthority& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline CertificateAuthority& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which your private CA was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline CertificateAuthority& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CertificateAuthority& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which your private CA was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStateChangeAt() const{ return m_lastStateChangeAt; }
    inline bool LastStateChangeAtHasBeenSet() const { return m_lastStateChangeAtHasBeenSet; }
    inline void SetLastStateChangeAt(const Aws::Utils::DateTime& value) { m_lastStateChangeAtHasBeenSet = true; m_lastStateChangeAt = value; }
    inline void SetLastStateChangeAt(Aws::Utils::DateTime&& value) { m_lastStateChangeAtHasBeenSet = true; m_lastStateChangeAt = std::move(value); }
    inline CertificateAuthority& WithLastStateChangeAt(const Aws::Utils::DateTime& value) { SetLastStateChangeAt(value); return *this;}
    inline CertificateAuthority& WithLastStateChangeAt(Aws::Utils::DateTime&& value) { SetLastStateChangeAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of your private CA.</p>
     */
    inline const CertificateAuthorityType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CertificateAuthorityType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CertificateAuthorityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CertificateAuthority& WithType(const CertificateAuthorityType& value) { SetType(value); return *this;}
    inline CertificateAuthority& WithType(CertificateAuthorityType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Serial number of your private CA.</p>
     */
    inline const Aws::String& GetSerial() const{ return m_serial; }
    inline bool SerialHasBeenSet() const { return m_serialHasBeenSet; }
    inline void SetSerial(const Aws::String& value) { m_serialHasBeenSet = true; m_serial = value; }
    inline void SetSerial(Aws::String&& value) { m_serialHasBeenSet = true; m_serial = std::move(value); }
    inline void SetSerial(const char* value) { m_serialHasBeenSet = true; m_serial.assign(value); }
    inline CertificateAuthority& WithSerial(const Aws::String& value) { SetSerial(value); return *this;}
    inline CertificateAuthority& WithSerial(Aws::String&& value) { SetSerial(std::move(value)); return *this;}
    inline CertificateAuthority& WithSerial(const char* value) { SetSerial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of your private CA.</p>
     */
    inline const CertificateAuthorityStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CertificateAuthorityStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CertificateAuthorityStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CertificateAuthority& WithStatus(const CertificateAuthorityStatus& value) { SetStatus(value); return *this;}
    inline CertificateAuthority& WithStatus(CertificateAuthorityStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time before which your private CA certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const{ return m_notBefore; }
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
    inline void SetNotBefore(const Aws::Utils::DateTime& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }
    inline void SetNotBefore(Aws::Utils::DateTime&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::move(value); }
    inline CertificateAuthority& WithNotBefore(const Aws::Utils::DateTime& value) { SetNotBefore(value); return *this;}
    inline CertificateAuthority& WithNotBefore(Aws::Utils::DateTime&& value) { SetNotBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time after which your private CA certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const{ return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    inline void SetNotAfter(const Aws::Utils::DateTime& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }
    inline void SetNotAfter(Aws::Utils::DateTime&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::move(value); }
    inline CertificateAuthority& WithNotAfter(const Aws::Utils::DateTime& value) { SetNotAfter(value); return *this;}
    inline CertificateAuthority& WithNotAfter(Aws::Utils::DateTime&& value) { SetNotAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason the request to create your private CA failed.</p>
     */
    inline const FailureReason& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const FailureReason& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(FailureReason&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline CertificateAuthority& WithFailureReason(const FailureReason& value) { SetFailureReason(value); return *this;}
    inline CertificateAuthority& WithFailureReason(FailureReason&& value) { SetFailureReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your private CA configuration.</p>
     */
    inline const CertificateAuthorityConfiguration& GetCertificateAuthorityConfiguration() const{ return m_certificateAuthorityConfiguration; }
    inline bool CertificateAuthorityConfigurationHasBeenSet() const { return m_certificateAuthorityConfigurationHasBeenSet; }
    inline void SetCertificateAuthorityConfiguration(const CertificateAuthorityConfiguration& value) { m_certificateAuthorityConfigurationHasBeenSet = true; m_certificateAuthorityConfiguration = value; }
    inline void SetCertificateAuthorityConfiguration(CertificateAuthorityConfiguration&& value) { m_certificateAuthorityConfigurationHasBeenSet = true; m_certificateAuthorityConfiguration = std::move(value); }
    inline CertificateAuthority& WithCertificateAuthorityConfiguration(const CertificateAuthorityConfiguration& value) { SetCertificateAuthorityConfiguration(value); return *this;}
    inline CertificateAuthority& WithCertificateAuthorityConfiguration(CertificateAuthorityConfiguration&& value) { SetCertificateAuthorityConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Online Certificate Status Protocol (OCSP) configuration
     * or certificate revocation list (CRL) created and maintained by your private CA.
     * </p>
     */
    inline const RevocationConfiguration& GetRevocationConfiguration() const{ return m_revocationConfiguration; }
    inline bool RevocationConfigurationHasBeenSet() const { return m_revocationConfigurationHasBeenSet; }
    inline void SetRevocationConfiguration(const RevocationConfiguration& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = value; }
    inline void SetRevocationConfiguration(RevocationConfiguration&& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = std::move(value); }
    inline CertificateAuthority& WithRevocationConfiguration(const RevocationConfiguration& value) { SetRevocationConfiguration(value); return *this;}
    inline CertificateAuthority& WithRevocationConfiguration(RevocationConfiguration&& value) { SetRevocationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period during which a deleted CA can be restored. For more information,
     * see the <code>PermanentDeletionTimeInDays</code> parameter of the <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_DeleteCertificateAuthorityRequest.html">DeleteCertificateAuthorityRequest</a>
     * action. </p>
     */
    inline const Aws::Utils::DateTime& GetRestorableUntil() const{ return m_restorableUntil; }
    inline bool RestorableUntilHasBeenSet() const { return m_restorableUntilHasBeenSet; }
    inline void SetRestorableUntil(const Aws::Utils::DateTime& value) { m_restorableUntilHasBeenSet = true; m_restorableUntil = value; }
    inline void SetRestorableUntil(Aws::Utils::DateTime&& value) { m_restorableUntilHasBeenSet = true; m_restorableUntil = std::move(value); }
    inline CertificateAuthority& WithRestorableUntil(const Aws::Utils::DateTime& value) { SetRestorableUntil(value); return *this;}
    inline CertificateAuthority& WithRestorableUntil(Aws::Utils::DateTime&& value) { SetRestorableUntil(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a cryptographic key management compliance standard used for handling
     * CA keys. </p> <p>Default: FIPS_140_2_LEVEL_3_OR_HIGHER</p> <p>Note: Amazon Web
     * Services Region ap-northeast-3 supports only FIPS_140_2_LEVEL_2_OR_HIGHER. You
     * must explicitly specify this parameter and value when creating a CA in that
     * Region. Specifying a different value (or no value) results in an
     * <code>InvalidArgsException</code> with the message "A certificate authority
     * cannot be created in this region with the specified security standard."</p>
     */
    inline const KeyStorageSecurityStandard& GetKeyStorageSecurityStandard() const{ return m_keyStorageSecurityStandard; }
    inline bool KeyStorageSecurityStandardHasBeenSet() const { return m_keyStorageSecurityStandardHasBeenSet; }
    inline void SetKeyStorageSecurityStandard(const KeyStorageSecurityStandard& value) { m_keyStorageSecurityStandardHasBeenSet = true; m_keyStorageSecurityStandard = value; }
    inline void SetKeyStorageSecurityStandard(KeyStorageSecurityStandard&& value) { m_keyStorageSecurityStandardHasBeenSet = true; m_keyStorageSecurityStandard = std::move(value); }
    inline CertificateAuthority& WithKeyStorageSecurityStandard(const KeyStorageSecurityStandard& value) { SetKeyStorageSecurityStandard(value); return *this;}
    inline CertificateAuthority& WithKeyStorageSecurityStandard(KeyStorageSecurityStandard&& value) { SetKeyStorageSecurityStandard(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the CA issues general-purpose certificates that typically
     * require a revocation mechanism, or short-lived certificates that may optionally
     * omit revocation because they expire quickly. Short-lived certificate validity is
     * limited to seven days.</p> <p>The default value is GENERAL_PURPOSE.</p>
     */
    inline const CertificateAuthorityUsageMode& GetUsageMode() const{ return m_usageMode; }
    inline bool UsageModeHasBeenSet() const { return m_usageModeHasBeenSet; }
    inline void SetUsageMode(const CertificateAuthorityUsageMode& value) { m_usageModeHasBeenSet = true; m_usageMode = value; }
    inline void SetUsageMode(CertificateAuthorityUsageMode&& value) { m_usageModeHasBeenSet = true; m_usageMode = std::move(value); }
    inline CertificateAuthority& WithUsageMode(const CertificateAuthorityUsageMode& value) { SetUsageMode(value); return *this;}
    inline CertificateAuthority& WithUsageMode(CertificateAuthorityUsageMode&& value) { SetUsageMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastStateChangeAt;
    bool m_lastStateChangeAtHasBeenSet = false;

    CertificateAuthorityType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_serial;
    bool m_serialHasBeenSet = false;

    CertificateAuthorityStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore;
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter;
    bool m_notAfterHasBeenSet = false;

    FailureReason m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    CertificateAuthorityConfiguration m_certificateAuthorityConfiguration;
    bool m_certificateAuthorityConfigurationHasBeenSet = false;

    RevocationConfiguration m_revocationConfiguration;
    bool m_revocationConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_restorableUntil;
    bool m_restorableUntilHasBeenSet = false;

    KeyStorageSecurityStandard m_keyStorageSecurityStandard;
    bool m_keyStorageSecurityStandardHasBeenSet = false;

    CertificateAuthorityUsageMode m_usageMode;
    bool m_usageModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
