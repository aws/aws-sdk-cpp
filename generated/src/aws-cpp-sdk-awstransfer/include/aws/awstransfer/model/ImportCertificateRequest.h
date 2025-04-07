/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/awstransfer/model/CertificateUsageType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class ImportCertificateRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API ImportCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportCertificate"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline ImportCertificateRequest& WithUsage(CertificateUsageType value) { SetUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <ul> <li> <p>For the CLI, provide a file path for a certificate in URI format.
     * For example, <code>--certificate file://encryption-cert.pem</code>.
     * Alternatively, you can provide the raw content.</p> </li> <li> <p>For the SDK,
     * specify the raw content of a certificate file. For example, <code>--certificate
     * "`cat encryption-cert.pem`"</code>.</p> </li> </ul>  <p>You can provide
     * both the certificate and its chain in this parameter, without needing to use the
     * <code>CertificateChain</code> parameter. If you use this parameter for both the
     * certificate and its chain, do not use the <code>CertificateChain</code>
     * parameter.</p> 
     */
    inline const Aws::String& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = Aws::String>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = Aws::String>
    ImportCertificateRequest& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of certificates that make up the chain for the certificate
     * that's being imported.</p>
     */
    inline const Aws::String& GetCertificateChain() const { return m_certificateChain; }
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }
    template<typename CertificateChainT = Aws::String>
    void SetCertificateChain(CertificateChainT&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::forward<CertificateChainT>(value); }
    template<typename CertificateChainT = Aws::String>
    ImportCertificateRequest& WithCertificateChain(CertificateChainT&& value) { SetCertificateChain(std::forward<CertificateChainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <ul> <li> <p>For the CLI, provide a file path for a private key in URI format.
     * For example, <code>--private-key file://encryption-key.pem</code>.
     * Alternatively, you can provide the raw content of the private key file.</p>
     * </li> <li> <p>For the SDK, specify the raw content of a private key file. For
     * example, <code>--private-key "`cat encryption-key.pem`"</code> </p> </li> </ul>
     */
    inline const Aws::String& GetPrivateKey() const { return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    template<typename PrivateKeyT = Aws::String>
    void SetPrivateKey(PrivateKeyT&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::forward<PrivateKeyT>(value); }
    template<typename PrivateKeyT = Aws::String>
    ImportCertificateRequest& WithPrivateKey(PrivateKeyT&& value) { SetPrivateKey(std::forward<PrivateKeyT>(value)); return *this;}
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
    ImportCertificateRequest& WithActiveDate(ActiveDateT&& value) { SetActiveDate(std::forward<ActiveDateT>(value)); return *this;}
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
    ImportCertificateRequest& WithInactiveDate(InactiveDateT&& value) { SetInactiveDate(std::forward<InactiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description that helps identify the certificate. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImportCertificateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    ImportCertificateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ImportCertificateRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    CertificateUsageType m_usage{CertificateUsageType::NOT_SET};
    bool m_usageHasBeenSet = false;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;

    Aws::Utils::DateTime m_activeDate{};
    bool m_activeDateHasBeenSet = false;

    Aws::Utils::DateTime m_inactiveDate{};
    bool m_inactiveDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
