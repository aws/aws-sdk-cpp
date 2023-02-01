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
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedCertificate">AWS
   * API Reference</a></p>
   */
  class ListedCertificate
  {
  public:
    AWS_TRANSFER_API ListedCertificate();
    AWS_TRANSFER_API ListedCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the specified certificate.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified certificate.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified certificate.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified certificate.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified certificate.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified certificate.</p>
     */
    inline ListedCertificate& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified certificate.</p>
     */
    inline ListedCertificate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified certificate.</p>
     */
    inline ListedCertificate& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline ListedCertificate& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline ListedCertificate& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline ListedCertificate& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


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
    inline ListedCertificate& WithUsage(const CertificateUsageType& value) { SetUsage(value); return *this;}

    /**
     * <p>Specifies whether this certificate is used for signing or encryption.</p>
     */
    inline ListedCertificate& WithUsage(CertificateUsageType&& value) { SetUsage(std::move(value)); return *this;}


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
    inline ListedCertificate& WithStatus(const CertificateStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The certificate can be either <code>ACTIVE</code>,
     * <code>PENDING_ROTATION</code>, or <code>INACTIVE</code>.
     * <code>PENDING_ROTATION</code> means that this certificate will replace the
     * current certificate when it expires.</p>
     */
    inline ListedCertificate& WithStatus(CertificateStatusType&& value) { SetStatus(std::move(value)); return *this;}


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
    inline ListedCertificate& WithActiveDate(const Aws::Utils::DateTime& value) { SetActiveDate(value); return *this;}

    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline ListedCertificate& WithActiveDate(Aws::Utils::DateTime&& value) { SetActiveDate(std::move(value)); return *this;}


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
    inline ListedCertificate& WithInactiveDate(const Aws::Utils::DateTime& value) { SetInactiveDate(value); return *this;}

    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline ListedCertificate& WithInactiveDate(Aws::Utils::DateTime&& value) { SetInactiveDate(std::move(value)); return *this;}


    /**
     * <p>The type for the certificate. If a private key has been specified for the
     * certificate, its type is <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is
     * no private key, the type is <code>CERTIFICATE</code>.</p>
     */
    inline const CertificateType& GetType() const{ return m_type; }

    /**
     * <p>The type for the certificate. If a private key has been specified for the
     * certificate, its type is <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is
     * no private key, the type is <code>CERTIFICATE</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type for the certificate. If a private key has been specified for the
     * certificate, its type is <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is
     * no private key, the type is <code>CERTIFICATE</code>.</p>
     */
    inline void SetType(const CertificateType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type for the certificate. If a private key has been specified for the
     * certificate, its type is <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is
     * no private key, the type is <code>CERTIFICATE</code>.</p>
     */
    inline void SetType(CertificateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type for the certificate. If a private key has been specified for the
     * certificate, its type is <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is
     * no private key, the type is <code>CERTIFICATE</code>.</p>
     */
    inline ListedCertificate& WithType(const CertificateType& value) { SetType(value); return *this;}

    /**
     * <p>The type for the certificate. If a private key has been specified for the
     * certificate, its type is <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is
     * no private key, the type is <code>CERTIFICATE</code>.</p>
     */
    inline ListedCertificate& WithType(CertificateType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name or short description that's used to identify the certificate.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The name or short description that's used to identify the certificate.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The name or short description that's used to identify the certificate.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The name or short description that's used to identify the certificate.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The name or short description that's used to identify the certificate.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The name or short description that's used to identify the certificate.</p>
     */
    inline ListedCertificate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The name or short description that's used to identify the certificate.</p>
     */
    inline ListedCertificate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The name or short description that's used to identify the certificate.</p>
     */
    inline ListedCertificate& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    CertificateUsageType m_usage;
    bool m_usageHasBeenSet = false;

    CertificateStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_activeDate;
    bool m_activeDateHasBeenSet = false;

    Aws::Utils::DateTime m_inactiveDate;
    bool m_inactiveDateHasBeenSet = false;

    CertificateType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
