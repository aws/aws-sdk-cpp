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
    AWS_TRANSFER_API ListedCertificate() = default;
    AWS_TRANSFER_API ListedCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified certificate.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListedCertificate& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of identifiers for the imported certificates. You use this
     * identifier for working with profiles and partner profiles.</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    ListedCertificate& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how this certificate is used. It can be used in the following
     * ways:</p> <ul> <li> <p> <code>SIGNING</code>: For signing AS2 messages</p> </li>
     * <li> <p> <code>ENCRYPTION</code>: For encrypting AS2 messages</p> </li> <li> <p>
     * <code>TLS</code>: For securing AS2 communications sent over HTTPS</p> </li>
     * </ul>
     */
    inline CertificateUsageType GetUsage() const { return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    inline void SetUsage(CertificateUsageType value) { m_usageHasBeenSet = true; m_usage = value; }
    inline ListedCertificate& WithUsage(CertificateUsageType value) { SetUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate can be either <code>ACTIVE</code>,
     * <code>PENDING_ROTATION</code>, or <code>INACTIVE</code>.
     * <code>PENDING_ROTATION</code> means that this certificate will replace the
     * current certificate when it expires.</p>
     */
    inline CertificateStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CertificateStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListedCertificate& WithStatus(CertificateStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional date that specifies when the certificate becomes active. If you
     * do not specify a value, <code>ActiveDate</code> takes the same value as
     * <code>NotBeforeDate</code>, which is specified by the CA. </p>
     */
    inline const Aws::Utils::DateTime& GetActiveDate() const { return m_activeDate; }
    inline bool ActiveDateHasBeenSet() const { return m_activeDateHasBeenSet; }
    template<typename ActiveDateT = Aws::Utils::DateTime>
    void SetActiveDate(ActiveDateT&& value) { m_activeDateHasBeenSet = true; m_activeDate = std::forward<ActiveDateT>(value); }
    template<typename ActiveDateT = Aws::Utils::DateTime>
    ListedCertificate& WithActiveDate(ActiveDateT&& value) { SetActiveDate(std::forward<ActiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional date that specifies when the certificate becomes inactive. If you
     * do not specify a value, <code>InactiveDate</code> takes the same value as
     * <code>NotAfterDate</code>, which is specified by the CA.</p>
     */
    inline const Aws::Utils::DateTime& GetInactiveDate() const { return m_inactiveDate; }
    inline bool InactiveDateHasBeenSet() const { return m_inactiveDateHasBeenSet; }
    template<typename InactiveDateT = Aws::Utils::DateTime>
    void SetInactiveDate(InactiveDateT&& value) { m_inactiveDateHasBeenSet = true; m_inactiveDate = std::forward<InactiveDateT>(value); }
    template<typename InactiveDateT = Aws::Utils::DateTime>
    ListedCertificate& WithInactiveDate(InactiveDateT&& value) { SetInactiveDate(std::forward<InactiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type for the certificate. If a private key has been specified for the
     * certificate, its type is <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is
     * no private key, the type is <code>CERTIFICATE</code>.</p>
     */
    inline CertificateType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CertificateType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListedCertificate& WithType(CertificateType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or short description that's used to identify the certificate.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ListedCertificate& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    CertificateUsageType m_usage{CertificateUsageType::NOT_SET};
    bool m_usageHasBeenSet = false;

    CertificateStatusType m_status{CertificateStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_activeDate{};
    bool m_activeDateHasBeenSet = false;

    Aws::Utils::DateTime m_inactiveDate{};
    bool m_inactiveDateHasBeenSet = false;

    CertificateType m_type{CertificateType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
