/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * Call the <a>CreateCertificateAuthority</a> action to create your private CA. You
   * must then call the <a>GetCertificateAuthorityCertificate</a> action to retrieve
   * a private CA certificate signing request (CSR). Sign the CSR with your ACM
   * Private CA-hosted or on-premises root or subordinate CA certificate. Call the
   * <a>ImportCertificateAuthorityCertificate</a> action to import the signed
   * certificate into AWS Certificate Manager (ACM). </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CertificateAuthority">AWS
   * API Reference</a></p>
   */
  class AWS_ACMPCA_API CertificateAuthority
  {
  public:
    CertificateAuthority();
    CertificateAuthority(Aws::Utils::Json::JsonView jsonValue);
    CertificateAuthority& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) for your private certificate authority (CA). The
     * format is <code> <i>12345678-1234-1234-1234-123456789012</i> </code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Amazon Resource Name (ARN) for your private certificate authority (CA). The
     * format is <code> <i>12345678-1234-1234-1234-123456789012</i> </code>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) for your private certificate authority (CA). The
     * format is <code> <i>12345678-1234-1234-1234-123456789012</i> </code>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Amazon Resource Name (ARN) for your private certificate authority (CA). The
     * format is <code> <i>12345678-1234-1234-1234-123456789012</i> </code>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) for your private certificate authority (CA). The
     * format is <code> <i>12345678-1234-1234-1234-123456789012</i> </code>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) for your private certificate authority (CA). The
     * format is <code> <i>12345678-1234-1234-1234-123456789012</i> </code>.</p>
     */
    inline CertificateAuthority& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) for your private certificate authority (CA). The
     * format is <code> <i>12345678-1234-1234-1234-123456789012</i> </code>.</p>
     */
    inline CertificateAuthority& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) for your private certificate authority (CA). The
     * format is <code> <i>12345678-1234-1234-1234-123456789012</i> </code>.</p>
     */
    inline CertificateAuthority& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Date and time at which your private CA was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Date and time at which your private CA was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Date and time at which your private CA was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Date and time at which your private CA was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Date and time at which your private CA was created.</p>
     */
    inline CertificateAuthority& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Date and time at which your private CA was created.</p>
     */
    inline CertificateAuthority& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Date and time at which your private CA was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStateChangeAt() const{ return m_lastStateChangeAt; }

    /**
     * <p>Date and time at which your private CA was last updated.</p>
     */
    inline bool LastStateChangeAtHasBeenSet() const { return m_lastStateChangeAtHasBeenSet; }

    /**
     * <p>Date and time at which your private CA was last updated.</p>
     */
    inline void SetLastStateChangeAt(const Aws::Utils::DateTime& value) { m_lastStateChangeAtHasBeenSet = true; m_lastStateChangeAt = value; }

    /**
     * <p>Date and time at which your private CA was last updated.</p>
     */
    inline void SetLastStateChangeAt(Aws::Utils::DateTime&& value) { m_lastStateChangeAtHasBeenSet = true; m_lastStateChangeAt = std::move(value); }

    /**
     * <p>Date and time at which your private CA was last updated.</p>
     */
    inline CertificateAuthority& WithLastStateChangeAt(const Aws::Utils::DateTime& value) { SetLastStateChangeAt(value); return *this;}

    /**
     * <p>Date and time at which your private CA was last updated.</p>
     */
    inline CertificateAuthority& WithLastStateChangeAt(Aws::Utils::DateTime&& value) { SetLastStateChangeAt(std::move(value)); return *this;}


    /**
     * <p>Type of your private CA.</p>
     */
    inline const CertificateAuthorityType& GetType() const{ return m_type; }

    /**
     * <p>Type of your private CA.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of your private CA.</p>
     */
    inline void SetType(const CertificateAuthorityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of your private CA.</p>
     */
    inline void SetType(CertificateAuthorityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of your private CA.</p>
     */
    inline CertificateAuthority& WithType(const CertificateAuthorityType& value) { SetType(value); return *this;}

    /**
     * <p>Type of your private CA.</p>
     */
    inline CertificateAuthority& WithType(CertificateAuthorityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Serial number of your private CA.</p>
     */
    inline const Aws::String& GetSerial() const{ return m_serial; }

    /**
     * <p>Serial number of your private CA.</p>
     */
    inline bool SerialHasBeenSet() const { return m_serialHasBeenSet; }

    /**
     * <p>Serial number of your private CA.</p>
     */
    inline void SetSerial(const Aws::String& value) { m_serialHasBeenSet = true; m_serial = value; }

    /**
     * <p>Serial number of your private CA.</p>
     */
    inline void SetSerial(Aws::String&& value) { m_serialHasBeenSet = true; m_serial = std::move(value); }

    /**
     * <p>Serial number of your private CA.</p>
     */
    inline void SetSerial(const char* value) { m_serialHasBeenSet = true; m_serial.assign(value); }

    /**
     * <p>Serial number of your private CA.</p>
     */
    inline CertificateAuthority& WithSerial(const Aws::String& value) { SetSerial(value); return *this;}

    /**
     * <p>Serial number of your private CA.</p>
     */
    inline CertificateAuthority& WithSerial(Aws::String&& value) { SetSerial(std::move(value)); return *this;}

    /**
     * <p>Serial number of your private CA.</p>
     */
    inline CertificateAuthority& WithSerial(const char* value) { SetSerial(value); return *this;}


    /**
     * <p>Status of your private CA.</p>
     */
    inline const CertificateAuthorityStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of your private CA.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of your private CA.</p>
     */
    inline void SetStatus(const CertificateAuthorityStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of your private CA.</p>
     */
    inline void SetStatus(CertificateAuthorityStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of your private CA.</p>
     */
    inline CertificateAuthority& WithStatus(const CertificateAuthorityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of your private CA.</p>
     */
    inline CertificateAuthority& WithStatus(CertificateAuthorityStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Date and time before which your private CA certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const{ return m_notBefore; }

    /**
     * <p>Date and time before which your private CA certificate is not valid.</p>
     */
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }

    /**
     * <p>Date and time before which your private CA certificate is not valid.</p>
     */
    inline void SetNotBefore(const Aws::Utils::DateTime& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }

    /**
     * <p>Date and time before which your private CA certificate is not valid.</p>
     */
    inline void SetNotBefore(Aws::Utils::DateTime&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::move(value); }

    /**
     * <p>Date and time before which your private CA certificate is not valid.</p>
     */
    inline CertificateAuthority& WithNotBefore(const Aws::Utils::DateTime& value) { SetNotBefore(value); return *this;}

    /**
     * <p>Date and time before which your private CA certificate is not valid.</p>
     */
    inline CertificateAuthority& WithNotBefore(Aws::Utils::DateTime&& value) { SetNotBefore(std::move(value)); return *this;}


    /**
     * <p>Date and time after which your private CA certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const{ return m_notAfter; }

    /**
     * <p>Date and time after which your private CA certificate is not valid.</p>
     */
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }

    /**
     * <p>Date and time after which your private CA certificate is not valid.</p>
     */
    inline void SetNotAfter(const Aws::Utils::DateTime& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }

    /**
     * <p>Date and time after which your private CA certificate is not valid.</p>
     */
    inline void SetNotAfter(Aws::Utils::DateTime&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::move(value); }

    /**
     * <p>Date and time after which your private CA certificate is not valid.</p>
     */
    inline CertificateAuthority& WithNotAfter(const Aws::Utils::DateTime& value) { SetNotAfter(value); return *this;}

    /**
     * <p>Date and time after which your private CA certificate is not valid.</p>
     */
    inline CertificateAuthority& WithNotAfter(Aws::Utils::DateTime&& value) { SetNotAfter(std::move(value)); return *this;}


    /**
     * <p>Reason the request to create your private CA failed.</p>
     */
    inline const FailureReason& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>Reason the request to create your private CA failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>Reason the request to create your private CA failed.</p>
     */
    inline void SetFailureReason(const FailureReason& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>Reason the request to create your private CA failed.</p>
     */
    inline void SetFailureReason(FailureReason&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>Reason the request to create your private CA failed.</p>
     */
    inline CertificateAuthority& WithFailureReason(const FailureReason& value) { SetFailureReason(value); return *this;}

    /**
     * <p>Reason the request to create your private CA failed.</p>
     */
    inline CertificateAuthority& WithFailureReason(FailureReason&& value) { SetFailureReason(std::move(value)); return *this;}


    /**
     * <p>Your private CA configuration.</p>
     */
    inline const CertificateAuthorityConfiguration& GetCertificateAuthorityConfiguration() const{ return m_certificateAuthorityConfiguration; }

    /**
     * <p>Your private CA configuration.</p>
     */
    inline bool CertificateAuthorityConfigurationHasBeenSet() const { return m_certificateAuthorityConfigurationHasBeenSet; }

    /**
     * <p>Your private CA configuration.</p>
     */
    inline void SetCertificateAuthorityConfiguration(const CertificateAuthorityConfiguration& value) { m_certificateAuthorityConfigurationHasBeenSet = true; m_certificateAuthorityConfiguration = value; }

    /**
     * <p>Your private CA configuration.</p>
     */
    inline void SetCertificateAuthorityConfiguration(CertificateAuthorityConfiguration&& value) { m_certificateAuthorityConfigurationHasBeenSet = true; m_certificateAuthorityConfiguration = std::move(value); }

    /**
     * <p>Your private CA configuration.</p>
     */
    inline CertificateAuthority& WithCertificateAuthorityConfiguration(const CertificateAuthorityConfiguration& value) { SetCertificateAuthorityConfiguration(value); return *this;}

    /**
     * <p>Your private CA configuration.</p>
     */
    inline CertificateAuthority& WithCertificateAuthorityConfiguration(CertificateAuthorityConfiguration&& value) { SetCertificateAuthorityConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about the certificate revocation list (CRL) created and
     * maintained by your private CA. </p>
     */
    inline const RevocationConfiguration& GetRevocationConfiguration() const{ return m_revocationConfiguration; }

    /**
     * <p>Information about the certificate revocation list (CRL) created and
     * maintained by your private CA. </p>
     */
    inline bool RevocationConfigurationHasBeenSet() const { return m_revocationConfigurationHasBeenSet; }

    /**
     * <p>Information about the certificate revocation list (CRL) created and
     * maintained by your private CA. </p>
     */
    inline void SetRevocationConfiguration(const RevocationConfiguration& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = value; }

    /**
     * <p>Information about the certificate revocation list (CRL) created and
     * maintained by your private CA. </p>
     */
    inline void SetRevocationConfiguration(RevocationConfiguration&& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = std::move(value); }

    /**
     * <p>Information about the certificate revocation list (CRL) created and
     * maintained by your private CA. </p>
     */
    inline CertificateAuthority& WithRevocationConfiguration(const RevocationConfiguration& value) { SetRevocationConfiguration(value); return *this;}

    /**
     * <p>Information about the certificate revocation list (CRL) created and
     * maintained by your private CA. </p>
     */
    inline CertificateAuthority& WithRevocationConfiguration(RevocationConfiguration&& value) { SetRevocationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The period during which a deleted CA can be restored. For more information,
     * see the <code>PermanentDeletionTimeInDays</code> parameter of the
     * <a>DeleteCertificateAuthorityRequest</a> action. </p>
     */
    inline const Aws::Utils::DateTime& GetRestorableUntil() const{ return m_restorableUntil; }

    /**
     * <p>The period during which a deleted CA can be restored. For more information,
     * see the <code>PermanentDeletionTimeInDays</code> parameter of the
     * <a>DeleteCertificateAuthorityRequest</a> action. </p>
     */
    inline bool RestorableUntilHasBeenSet() const { return m_restorableUntilHasBeenSet; }

    /**
     * <p>The period during which a deleted CA can be restored. For more information,
     * see the <code>PermanentDeletionTimeInDays</code> parameter of the
     * <a>DeleteCertificateAuthorityRequest</a> action. </p>
     */
    inline void SetRestorableUntil(const Aws::Utils::DateTime& value) { m_restorableUntilHasBeenSet = true; m_restorableUntil = value; }

    /**
     * <p>The period during which a deleted CA can be restored. For more information,
     * see the <code>PermanentDeletionTimeInDays</code> parameter of the
     * <a>DeleteCertificateAuthorityRequest</a> action. </p>
     */
    inline void SetRestorableUntil(Aws::Utils::DateTime&& value) { m_restorableUntilHasBeenSet = true; m_restorableUntil = std::move(value); }

    /**
     * <p>The period during which a deleted CA can be restored. For more information,
     * see the <code>PermanentDeletionTimeInDays</code> parameter of the
     * <a>DeleteCertificateAuthorityRequest</a> action. </p>
     */
    inline CertificateAuthority& WithRestorableUntil(const Aws::Utils::DateTime& value) { SetRestorableUntil(value); return *this;}

    /**
     * <p>The period during which a deleted CA can be restored. For more information,
     * see the <code>PermanentDeletionTimeInDays</code> parameter of the
     * <a>DeleteCertificateAuthorityRequest</a> action. </p>
     */
    inline CertificateAuthority& WithRestorableUntil(Aws::Utils::DateTime&& value) { SetRestorableUntil(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_lastStateChangeAt;
    bool m_lastStateChangeAtHasBeenSet;

    CertificateAuthorityType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_serial;
    bool m_serialHasBeenSet;

    CertificateAuthorityStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_notBefore;
    bool m_notBeforeHasBeenSet;

    Aws::Utils::DateTime m_notAfter;
    bool m_notAfterHasBeenSet;

    FailureReason m_failureReason;
    bool m_failureReasonHasBeenSet;

    CertificateAuthorityConfiguration m_certificateAuthorityConfiguration;
    bool m_certificateAuthorityConfigurationHasBeenSet;

    RevocationConfiguration m_revocationConfiguration;
    bool m_revocationConfigurationHasBeenSet;

    Aws::Utils::DateTime m_restorableUntil;
    bool m_restorableUntilHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
