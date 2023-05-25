/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/CertificateUsageType.h>
#include <aws/awstransfer/model/CertificateStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/awstransfer/model/CertificateType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Describes the properties of a certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedCertificate">AWS
   * API Reference</a></p>
   */
  class DescribedCertificate
  {
  public:
    AWS_TRANSFER_API DescribedCertificate();
    AWS_TRANSFER_API DescribedCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline DescribedCertificate& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline DescribedCertificate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline DescribedCertificate& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline DescribedCertificate& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline DescribedCertificate& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline DescribedCertificate& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>Specifies whether this certificate is used for signing or encryption.</p>
     */
    inline const CertificateUsageType& GetUsage() const{ return m_usage; }

    /**
     * <p>Specifies whether this certificate is used for signing or encryption.</p>
     */
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }

    /**
     * <p>Specifies whether this certificate is used for signing or encryption.</p>
     */
    inline void SetUsage(const CertificateUsageType& value) { m_usageHasBeenSet = true; m_usage = value; }

    /**
     * <p>Specifies whether this certificate is used for signing or encryption.</p>
     */
    inline void SetUsage(CertificateUsageType&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }

    /**
     * <p>Specifies whether this certificate is used for signing or encryption.</p>
     */
    inline DescribedCertificate& WithUsage(const CertificateUsageType& value) { SetUsage(value); return *this;}

    /**
     * <p>Specifies whether this certificate is used for signing or encryption.</p>
     */
    inline DescribedCertificate& WithUsage(CertificateUsageType&& value) { SetUsage(std::move(value)); return *this;}


    /**
     * <p>The certificate can be either <code>ACTIVE</code>,
     * <code>PENDING_ROTATION</code>, or <code>INACTIVE</code>.
     * <code>PENDING_ROTATION</code> means that this certificate will replace the
     * current certificate when it expires.</p>
     */
    inline const CertificateStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The certificate can be either <code>ACTIVE</code>,
     * <code>PENDING_ROTATION</code>, or <code>INACTIVE</code>.
     * <code>PENDING_ROTATION</code> means that this certificate will replace the
     * current certificate when it expires.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The certificate can be either <code>ACTIVE</code>,
     * <code>PENDING_ROTATION</code>, or <code>INACTIVE</code>.
     * <code>PENDING_ROTATION</code> means that this certificate will replace the
     * current certificate when it expires.</p>
     */
    inline void SetStatus(const CertificateStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The certificate can be either <code>ACTIVE</code>,
     * <code>PENDING_ROTATION</code>, or <code>INACTIVE</code>.
     * <code>PENDING_ROTATION</code> means that this certificate will replace the
     * current certificate when it expires.</p>
     */
    inline void SetStatus(CertificateStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The certificate can be either <code>ACTIVE</code>,
     * <code>PENDING_ROTATION</code>, or <code>INACTIVE</code>.
     * <code>PENDING_ROTATION</code> means that this certificate will replace the
     * current certificate when it expires.</p>
     */
    inline DescribedCertificate& WithStatus(const CertificateStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The certificate can be either <code>ACTIVE</code>,
     * <code>PENDING_ROTATION</code>, or <code>INACTIVE</code>.
     * <code>PENDING_ROTATION</code> means that this certificate will replace the
     * current certificate when it expires.</p>
     */
    inline DescribedCertificate& WithStatus(CertificateStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The file name for the certificate.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The file name for the certificate.</p>
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>The file name for the certificate.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The file name for the certificate.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>The file name for the certificate.</p>
     */
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }

    /**
     * <p>The file name for the certificate.</p>
     */
    inline DescribedCertificate& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The file name for the certificate.</p>
     */
    inline DescribedCertificate& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The file name for the certificate.</p>
     */
    inline DescribedCertificate& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>The list of certificates that make up the chain for the certificate.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The list of certificates that make up the chain for the certificate.</p>
     */
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }

    /**
     * <p>The list of certificates that make up the chain for the certificate.</p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The list of certificates that make up the chain for the certificate.</p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }

    /**
     * <p>The list of certificates that make up the chain for the certificate.</p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChainHasBeenSet = true; m_certificateChain.assign(value); }

    /**
     * <p>The list of certificates that make up the chain for the certificate.</p>
     */
    inline DescribedCertificate& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The list of certificates that make up the chain for the certificate.</p>
     */
    inline DescribedCertificate& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The list of certificates that make up the chain for the certificate.</p>
     */
    inline DescribedCertificate& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}


    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline const Aws::Utils::DateTime& GetActiveDate() const{ return m_activeDate; }

    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline bool ActiveDateHasBeenSet() const { return m_activeDateHasBeenSet; }

    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline void SetActiveDate(const Aws::Utils::DateTime& value) { m_activeDateHasBeenSet = true; m_activeDate = value; }

    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline void SetActiveDate(Aws::Utils::DateTime&& value) { m_activeDateHasBeenSet = true; m_activeDate = std::move(value); }

    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline DescribedCertificate& WithActiveDate(const Aws::Utils::DateTime& value) { SetActiveDate(value); return *this;}

    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline DescribedCertificate& WithActiveDate(Aws::Utils::DateTime&& value) { SetActiveDate(std::move(value)); return *this;}


    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline const Aws::Utils::DateTime& GetInactiveDate() const{ return m_inactiveDate; }

    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline bool InactiveDateHasBeenSet() const { return m_inactiveDateHasBeenSet; }

    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline void SetInactiveDate(const Aws::Utils::DateTime& value) { m_inactiveDateHasBeenSet = true; m_inactiveDate = value; }

    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline void SetInactiveDate(Aws::Utils::DateTime&& value) { m_inactiveDateHasBeenSet = true; m_inactiveDate = std::move(value); }

    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline DescribedCertificate& WithInactiveDate(const Aws::Utils::DateTime& value) { SetInactiveDate(value); return *this;}

    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline DescribedCertificate& WithInactiveDate(Aws::Utils::DateTime&& value) { SetInactiveDate(std::move(value)); return *this;}


    /**
     * <p>The serial number for the certificate.</p>
     */
    inline const Aws::String& GetSerial() const{ return m_serial; }

    /**
     * <p>The serial number for the certificate.</p>
     */
    inline bool SerialHasBeenSet() const { return m_serialHasBeenSet; }

    /**
     * <p>The serial number for the certificate.</p>
     */
    inline void SetSerial(const Aws::String& value) { m_serialHasBeenSet = true; m_serial = value; }

    /**
     * <p>The serial number for the certificate.</p>
     */
    inline void SetSerial(Aws::String&& value) { m_serialHasBeenSet = true; m_serial = std::move(value); }

    /**
     * <p>The serial number for the certificate.</p>
     */
    inline void SetSerial(const char* value) { m_serialHasBeenSet = true; m_serial.assign(value); }

    /**
     * <p>The serial number for the certificate.</p>
     */
    inline DescribedCertificate& WithSerial(const Aws::String& value) { SetSerial(value); return *this;}

    /**
     * <p>The serial number for the certificate.</p>
     */
    inline DescribedCertificate& WithSerial(Aws::String&& value) { SetSerial(std::move(value)); return *this;}

    /**
     * <p>The serial number for the certificate.</p>
     */
    inline DescribedCertificate& WithSerial(const char* value) { SetSerial(value); return *this;}


    /**
     * <p>The earliest date that the certificate is valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBeforeDate() const{ return m_notBeforeDate; }

    /**
     * <p>The earliest date that the certificate is valid.</p>
     */
    inline bool NotBeforeDateHasBeenSet() const { return m_notBeforeDateHasBeenSet; }

    /**
     * <p>The earliest date that the certificate is valid.</p>
     */
    inline void SetNotBeforeDate(const Aws::Utils::DateTime& value) { m_notBeforeDateHasBeenSet = true; m_notBeforeDate = value; }

    /**
     * <p>The earliest date that the certificate is valid.</p>
     */
    inline void SetNotBeforeDate(Aws::Utils::DateTime&& value) { m_notBeforeDateHasBeenSet = true; m_notBeforeDate = std::move(value); }

    /**
     * <p>The earliest date that the certificate is valid.</p>
     */
    inline DescribedCertificate& WithNotBeforeDate(const Aws::Utils::DateTime& value) { SetNotBeforeDate(value); return *this;}

    /**
     * <p>The earliest date that the certificate is valid.</p>
     */
    inline DescribedCertificate& WithNotBeforeDate(Aws::Utils::DateTime&& value) { SetNotBeforeDate(std::move(value)); return *this;}


    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfterDate() const{ return m_notAfterDate; }

    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline bool NotAfterDateHasBeenSet() const { return m_notAfterDateHasBeenSet; }

    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline void SetNotAfterDate(const Aws::Utils::DateTime& value) { m_notAfterDateHasBeenSet = true; m_notAfterDate = value; }

    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline void SetNotAfterDate(Aws::Utils::DateTime&& value) { m_notAfterDateHasBeenSet = true; m_notAfterDate = std::move(value); }

    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline DescribedCertificate& WithNotAfterDate(const Aws::Utils::DateTime& value) { SetNotAfterDate(value); return *this;}

    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline DescribedCertificate& WithNotAfterDate(Aws::Utils::DateTime&& value) { SetNotAfterDate(std::move(value)); return *this;}


    /**
     * <p>If a private key has been specified for the certificate, its type is
     * <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is no private key, the type
     * is <code>CERTIFICATE</code>.</p>
     */
    inline const CertificateType& GetType() const{ return m_type; }

    /**
     * <p>If a private key has been specified for the certificate, its type is
     * <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is no private key, the type
     * is <code>CERTIFICATE</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>If a private key has been specified for the certificate, its type is
     * <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is no private key, the type
     * is <code>CERTIFICATE</code>.</p>
     */
    inline void SetType(const CertificateType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>If a private key has been specified for the certificate, its type is
     * <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is no private key, the type
     * is <code>CERTIFICATE</code>.</p>
     */
    inline void SetType(CertificateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>If a private key has been specified for the certificate, its type is
     * <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is no private key, the type
     * is <code>CERTIFICATE</code>.</p>
     */
    inline DescribedCertificate& WithType(const CertificateType& value) { SetType(value); return *this;}

    /**
     * <p>If a private key has been specified for the certificate, its type is
     * <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is no private key, the type
     * is <code>CERTIFICATE</code>.</p>
     */
    inline DescribedCertificate& WithType(CertificateType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name or description that's used to identity the certificate. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The name or description that's used to identity the certificate. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The name or description that's used to identity the certificate. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The name or description that's used to identity the certificate. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The name or description that's used to identity the certificate. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The name or description that's used to identity the certificate. </p>
     */
    inline DescribedCertificate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The name or description that's used to identity the certificate. </p>
     */
    inline DescribedCertificate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The name or description that's used to identity the certificate. </p>
     */
    inline DescribedCertificate& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Key-value pairs that can be used to group and search for certificates.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs that can be used to group and search for certificates.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs that can be used to group and search for certificates.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs that can be used to group and search for certificates.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs that can be used to group and search for certificates.</p>
     */
    inline DescribedCertificate& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for certificates.</p>
     */
    inline DescribedCertificate& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for certificates.</p>
     */
    inline DescribedCertificate& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that can be used to group and search for certificates.</p>
     */
    inline DescribedCertificate& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    CertificateUsageType m_usage;
    bool m_usageHasBeenSet = false;

    CertificateStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet = false;

    Aws::Utils::DateTime m_activeDate;
    bool m_activeDateHasBeenSet = false;

    Aws::Utils::DateTime m_inactiveDate;
    bool m_inactiveDateHasBeenSet = false;

    Aws::String m_serial;
    bool m_serialHasBeenSet = false;

    Aws::Utils::DateTime m_notBeforeDate;
    bool m_notBeforeDateHasBeenSet = false;

    Aws::Utils::DateTime m_notAfterDate;
    bool m_notAfterDateHasBeenSet = false;

    CertificateType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
