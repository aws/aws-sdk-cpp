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
    AWS_TRANSFER_API DescribedCertificate() = default;
    AWS_TRANSFER_API DescribedCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribedCertificate& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    DescribedCertificate& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
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
    inline DescribedCertificate& WithUsage(CertificateUsageType value) { SetUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A certificate's status can be either <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p> <p>You can set <code>ActiveDate</code> and
     * <code>InactiveDate</code> in the <code>UpdateCertificate</code> call. If you set
     * values for these parameters, those values are used to determine whether the
     * certificate has a status of <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     * <p>If you don't set values for <code>ActiveDate</code> and
     * <code>InactiveDate</code>, we use the <code>NotBefore</code> and
     * <code>NotAfter</code> date as specified on the X509 certificate to determine
     * when a certificate is active and when it is inactive.</p>
     */
    inline CertificateStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CertificateStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribedCertificate& WithStatus(CertificateStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file name for the certificate.</p>
     */
    inline const Aws::String& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = Aws::String>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = Aws::String>
    DescribedCertificate& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of certificates that make up the chain for the certificate.</p>
     */
    inline const Aws::String& GetCertificateChain() const { return m_certificateChain; }
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }
    template<typename CertificateChainT = Aws::String>
    void SetCertificateChain(CertificateChainT&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::forward<CertificateChainT>(value); }
    template<typename CertificateChainT = Aws::String>
    DescribedCertificate& WithCertificateChain(CertificateChainT&& value) { SetCertificateChain(std::forward<CertificateChainT>(value)); return *this;}
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
    DescribedCertificate& WithActiveDate(ActiveDateT&& value) { SetActiveDate(std::forward<ActiveDateT>(value)); return *this;}
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
    DescribedCertificate& WithInactiveDate(InactiveDateT&& value) { SetInactiveDate(std::forward<InactiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number for the certificate.</p>
     */
    inline const Aws::String& GetSerial() const { return m_serial; }
    inline bool SerialHasBeenSet() const { return m_serialHasBeenSet; }
    template<typename SerialT = Aws::String>
    void SetSerial(SerialT&& value) { m_serialHasBeenSet = true; m_serial = std::forward<SerialT>(value); }
    template<typename SerialT = Aws::String>
    DescribedCertificate& WithSerial(SerialT&& value) { SetSerial(std::forward<SerialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest date that the certificate is valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBeforeDate() const { return m_notBeforeDate; }
    inline bool NotBeforeDateHasBeenSet() const { return m_notBeforeDateHasBeenSet; }
    template<typename NotBeforeDateT = Aws::Utils::DateTime>
    void SetNotBeforeDate(NotBeforeDateT&& value) { m_notBeforeDateHasBeenSet = true; m_notBeforeDate = std::forward<NotBeforeDateT>(value); }
    template<typename NotBeforeDateT = Aws::Utils::DateTime>
    DescribedCertificate& WithNotBeforeDate(NotBeforeDateT&& value) { SetNotBeforeDate(std::forward<NotBeforeDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfterDate() const { return m_notAfterDate; }
    inline bool NotAfterDateHasBeenSet() const { return m_notAfterDateHasBeenSet; }
    template<typename NotAfterDateT = Aws::Utils::DateTime>
    void SetNotAfterDate(NotAfterDateT&& value) { m_notAfterDateHasBeenSet = true; m_notAfterDate = std::forward<NotAfterDateT>(value); }
    template<typename NotAfterDateT = Aws::Utils::DateTime>
    DescribedCertificate& WithNotAfterDate(NotAfterDateT&& value) { SetNotAfterDate(std::forward<NotAfterDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a private key has been specified for the certificate, its type is
     * <code>CERTIFICATE_WITH_PRIVATE_KEY</code>. If there is no private key, the type
     * is <code>CERTIFICATE</code>.</p>
     */
    inline CertificateType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CertificateType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribedCertificate& WithType(CertificateType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or description that's used to identity the certificate. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribedCertificate& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for certificates.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DescribedCertificate& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DescribedCertificate& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet = false;

    Aws::Utils::DateTime m_activeDate{};
    bool m_activeDateHasBeenSet = false;

    Aws::Utils::DateTime m_inactiveDate{};
    bool m_inactiveDateHasBeenSet = false;

    Aws::String m_serial;
    bool m_serialHasBeenSet = false;

    Aws::Utils::DateTime m_notBeforeDate{};
    bool m_notBeforeDateHasBeenSet = false;

    Aws::Utils::DateTime m_notAfterDate{};
    bool m_notAfterDateHasBeenSet = false;

    CertificateType m_type{CertificateType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
