/**
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
    AWS_ACMPCA_API CertificateAuthority() = default;
    AWS_ACMPCA_API CertificateAuthority(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API CertificateAuthority& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for your private certificate authority (CA). The
     * format is <code> <i>12345678-1234-1234-1234-123456789012</i> </code>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CertificateAuthority& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the certificate authority.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    CertificateAuthority& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which your private CA was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CertificateAuthority& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which your private CA was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStateChangeAt() const { return m_lastStateChangeAt; }
    inline bool LastStateChangeAtHasBeenSet() const { return m_lastStateChangeAtHasBeenSet; }
    template<typename LastStateChangeAtT = Aws::Utils::DateTime>
    void SetLastStateChangeAt(LastStateChangeAtT&& value) { m_lastStateChangeAtHasBeenSet = true; m_lastStateChangeAt = std::forward<LastStateChangeAtT>(value); }
    template<typename LastStateChangeAtT = Aws::Utils::DateTime>
    CertificateAuthority& WithLastStateChangeAt(LastStateChangeAtT&& value) { SetLastStateChangeAt(std::forward<LastStateChangeAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of your private CA.</p>
     */
    inline CertificateAuthorityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CertificateAuthorityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CertificateAuthority& WithType(CertificateAuthorityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Serial number of your private CA.</p>
     */
    inline const Aws::String& GetSerial() const { return m_serial; }
    inline bool SerialHasBeenSet() const { return m_serialHasBeenSet; }
    template<typename SerialT = Aws::String>
    void SetSerial(SerialT&& value) { m_serialHasBeenSet = true; m_serial = std::forward<SerialT>(value); }
    template<typename SerialT = Aws::String>
    CertificateAuthority& WithSerial(SerialT&& value) { SetSerial(std::forward<SerialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of your private CA.</p>
     */
    inline CertificateAuthorityStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CertificateAuthorityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CertificateAuthority& WithStatus(CertificateAuthorityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time before which your private CA certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const { return m_notBefore; }
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    void SetNotBefore(NotBeforeT&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::forward<NotBeforeT>(value); }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    CertificateAuthority& WithNotBefore(NotBeforeT&& value) { SetNotBefore(std::forward<NotBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time after which your private CA certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const { return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    template<typename NotAfterT = Aws::Utils::DateTime>
    void SetNotAfter(NotAfterT&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::forward<NotAfterT>(value); }
    template<typename NotAfterT = Aws::Utils::DateTime>
    CertificateAuthority& WithNotAfter(NotAfterT&& value) { SetNotAfter(std::forward<NotAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason the request to create your private CA failed.</p>
     */
    inline FailureReason GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(FailureReason value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline CertificateAuthority& WithFailureReason(FailureReason value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your private CA configuration.</p>
     */
    inline const CertificateAuthorityConfiguration& GetCertificateAuthorityConfiguration() const { return m_certificateAuthorityConfiguration; }
    inline bool CertificateAuthorityConfigurationHasBeenSet() const { return m_certificateAuthorityConfigurationHasBeenSet; }
    template<typename CertificateAuthorityConfigurationT = CertificateAuthorityConfiguration>
    void SetCertificateAuthorityConfiguration(CertificateAuthorityConfigurationT&& value) { m_certificateAuthorityConfigurationHasBeenSet = true; m_certificateAuthorityConfiguration = std::forward<CertificateAuthorityConfigurationT>(value); }
    template<typename CertificateAuthorityConfigurationT = CertificateAuthorityConfiguration>
    CertificateAuthority& WithCertificateAuthorityConfiguration(CertificateAuthorityConfigurationT&& value) { SetCertificateAuthorityConfiguration(std::forward<CertificateAuthorityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Online Certificate Status Protocol (OCSP) configuration
     * or certificate revocation list (CRL) created and maintained by your private CA.
     * </p>
     */
    inline const RevocationConfiguration& GetRevocationConfiguration() const { return m_revocationConfiguration; }
    inline bool RevocationConfigurationHasBeenSet() const { return m_revocationConfigurationHasBeenSet; }
    template<typename RevocationConfigurationT = RevocationConfiguration>
    void SetRevocationConfiguration(RevocationConfigurationT&& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = std::forward<RevocationConfigurationT>(value); }
    template<typename RevocationConfigurationT = RevocationConfiguration>
    CertificateAuthority& WithRevocationConfiguration(RevocationConfigurationT&& value) { SetRevocationConfiguration(std::forward<RevocationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period during which a deleted CA can be restored. For more information,
     * see the <code>PermanentDeletionTimeInDays</code> parameter of the <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_DeleteCertificateAuthorityRequest.html">DeleteCertificateAuthorityRequest</a>
     * action. </p>
     */
    inline const Aws::Utils::DateTime& GetRestorableUntil() const { return m_restorableUntil; }
    inline bool RestorableUntilHasBeenSet() const { return m_restorableUntilHasBeenSet; }
    template<typename RestorableUntilT = Aws::Utils::DateTime>
    void SetRestorableUntil(RestorableUntilT&& value) { m_restorableUntilHasBeenSet = true; m_restorableUntil = std::forward<RestorableUntilT>(value); }
    template<typename RestorableUntilT = Aws::Utils::DateTime>
    CertificateAuthority& WithRestorableUntil(RestorableUntilT&& value) { SetRestorableUntil(std::forward<RestorableUntilT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a cryptographic key management compliance standard for handling and
     * protecting CA keys.</p> <p>Default: FIPS_140_2_LEVEL_3_OR_HIGHER</p> 
     * <p>Starting January 26, 2023, Amazon Web Services Private CA protects all CA
     * private keys in non-China regions using hardware security modules (HSMs) that
     * comply with FIPS PUB 140-2 Level 3.</p> <p>For information about security
     * standard support in different Amazon Web Services Regions, see <a
     * href="https://docs.aws.amazon.com/privateca/latest/userguide/data-protection.html#private-keys">Storage
     * and security compliance of Amazon Web Services Private CA private keys</a>.</p>
     * 
     */
    inline KeyStorageSecurityStandard GetKeyStorageSecurityStandard() const { return m_keyStorageSecurityStandard; }
    inline bool KeyStorageSecurityStandardHasBeenSet() const { return m_keyStorageSecurityStandardHasBeenSet; }
    inline void SetKeyStorageSecurityStandard(KeyStorageSecurityStandard value) { m_keyStorageSecurityStandardHasBeenSet = true; m_keyStorageSecurityStandard = value; }
    inline CertificateAuthority& WithKeyStorageSecurityStandard(KeyStorageSecurityStandard value) { SetKeyStorageSecurityStandard(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the CA issues general-purpose certificates that typically
     * require a revocation mechanism, or short-lived certificates that may optionally
     * omit revocation because they expire quickly. Short-lived certificate validity is
     * limited to seven days.</p> <p>The default value is GENERAL_PURPOSE.</p>
     */
    inline CertificateAuthorityUsageMode GetUsageMode() const { return m_usageMode; }
    inline bool UsageModeHasBeenSet() const { return m_usageModeHasBeenSet; }
    inline void SetUsageMode(CertificateAuthorityUsageMode value) { m_usageModeHasBeenSet = true; m_usageMode = value; }
    inline CertificateAuthority& WithUsageMode(CertificateAuthorityUsageMode value) { SetUsageMode(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastStateChangeAt{};
    bool m_lastStateChangeAtHasBeenSet = false;

    CertificateAuthorityType m_type{CertificateAuthorityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_serial;
    bool m_serialHasBeenSet = false;

    CertificateAuthorityStatus m_status{CertificateAuthorityStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore{};
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter{};
    bool m_notAfterHasBeenSet = false;

    FailureReason m_failureReason{FailureReason::NOT_SET};
    bool m_failureReasonHasBeenSet = false;

    CertificateAuthorityConfiguration m_certificateAuthorityConfiguration;
    bool m_certificateAuthorityConfigurationHasBeenSet = false;

    RevocationConfiguration m_revocationConfiguration;
    bool m_revocationConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_restorableUntil{};
    bool m_restorableUntilHasBeenSet = false;

    KeyStorageSecurityStandard m_keyStorageSecurityStandard{KeyStorageSecurityStandard::NOT_SET};
    bool m_keyStorageSecurityStandardHasBeenSet = false;

    CertificateAuthorityUsageMode m_usageMode{CertificateAuthorityUsageMode::NOT_SET};
    bool m_usageModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
