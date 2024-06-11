﻿/**
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified certificate.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ListedCertificate& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ListedCertificate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ListedCertificate& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }
    inline ListedCertificate& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}
    inline ListedCertificate& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}
    inline ListedCertificate& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how this certificate is used. It can be used in the following
     * ways:</p> <ul> <li> <p> <code>SIGNING</code>: For signing AS2 messages</p> </li>
     * <li> <p> <code>ENCRYPTION</code>: For encrypting AS2 messages</p> </li> <li> <p>
     * <code>TLS</code>: For securing AS2 communications sent over HTTPS</p> </li>
     * </ul>
     */
    inline const CertificateUsageType& GetUsage() const{ return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    inline void SetUsage(const CertificateUsageType& value) { m_usageHasBeenSet = true; m_usage = value; }
    inline void SetUsage(CertificateUsageType&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }
    inline ListedCertificate& WithUsage(const CertificateUsageType& value) { SetUsage(value); return *this;}
    inline ListedCertificate& WithUsage(CertificateUsageType&& value) { SetUsage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate can be either <code>ACTIVE</code>,
     * <code>PENDING_ROTATION</code>, or <code>INACTIVE</code>.
     * <code>PENDING_ROTATION</code> means that this certificate will replace the
     * current certificate when it expires.</p>
     */
    inline const CertificateStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CertificateStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CertificateStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListedCertificate& WithStatus(const CertificateStatusType& value) { SetStatus(value); return *this;}
    inline ListedCertificate& WithStatus(CertificateStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline const Aws::Utils::DateTime& GetActiveDate() const{ return m_activeDate; }
    inline bool ActiveDateHasBeenSet() const { return m_activeDateHasBeenSet; }
    inline void SetActiveDate(const Aws::Utils::DateTime& value) { m_activeDateHasBeenSet = true; m_activeDate = value; }
    inline void SetActiveDate(Aws::Utils::DateTime&& value) { m_activeDateHasBeenSet = true; m_activeDate = std::move(value); }
    inline ListedCertificate& WithActiveDate(const Aws::Utils::DateTime& value) { SetActiveDate(value); return *this;}
    inline ListedCertificate& WithActiveDate(Aws::Utils::DateTime&& value) { SetActiveDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline const Aws::Utils::DateTime& GetInactiveDate() const{ return m_inactiveDate; }
    inline bool InactiveDateHasBeenSet() const { return m_inactiveDateHasBeenSet; }
    inline void SetInactiveDate(const Aws::Utils::DateTime& value) { m_inactiveDateHasBeenSet = true; m_inactiveDate = value; }
    inline void SetInactiveDate(Aws::Utils::DateTime&& value) { m_inactiveDateHasBeenSet = true; m_inactiveDate = std::move(value); }
    inline ListedCertificate& WithInactiveDate(const Aws::Utils::DateTime& value) { SetInactiveDate(value); return *this;}
    inline ListedCertificate& WithInactiveDate(Aws::Utils::DateTime&& value) { SetInactiveDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type for the certificate. If a private key has been specified for the
     * certificate, its type is <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is
     * no private key, the type is <code>CERTIFICATE</code>.</p>
     */
    inline const CertificateType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CertificateType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CertificateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ListedCertificate& WithType(const CertificateType& value) { SetType(value); return *this;}
    inline ListedCertificate& WithType(CertificateType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or short description that's used to identify the certificate.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ListedCertificate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ListedCertificate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ListedCertificate& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
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
