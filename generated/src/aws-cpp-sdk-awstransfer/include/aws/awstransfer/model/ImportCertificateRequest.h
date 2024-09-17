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
    AWS_TRANSFER_API ImportCertificateRequest();

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
    inline const CertificateUsageType& GetUsage() const{ return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    inline void SetUsage(const CertificateUsageType& value) { m_usageHasBeenSet = true; m_usage = value; }
    inline void SetUsage(CertificateUsageType&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }
    inline ImportCertificateRequest& WithUsage(const CertificateUsageType& value) { SetUsage(value); return *this;}
    inline ImportCertificateRequest& WithUsage(CertificateUsageType&& value) { SetUsage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <ul> <li> <p>For the CLI, provide a file path for a certificate in URI format.
     * For example, <code>--certificate file://encryption-cert.pem</code>.
     * Alternatively, you can provide the raw content.</p> </li> <li> <p>For the SDK,
     * specify the raw content of a certificate file. For example, <code>--certificate
     * "`cat encryption-cert.pem`"</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }
    inline ImportCertificateRequest& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}
    inline ImportCertificateRequest& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}
    inline ImportCertificateRequest& WithCertificate(const char* value) { SetCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of certificates that make up the chain for the certificate
     * that's being imported.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }
    inline void SetCertificateChain(const char* value) { m_certificateChainHasBeenSet = true; m_certificateChain.assign(value); }
    inline ImportCertificateRequest& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}
    inline ImportCertificateRequest& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}
    inline ImportCertificateRequest& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}
    ///@}

    ///@{
    /**
     * <ul> <li> <p>For the CLI, provide a file path for a private key in URI
     * format.For example, <code>--private-key file://encryption-key.pem</code>.
     * Alternatively, you can provide the raw content of the private key file.</p>
     * </li> <li> <p>For the SDK, specify the raw content of a private key file. For
     * example, <code>--private-key "`cat encryption-key.pem`"</code> </p> </li> </ul>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }
    inline ImportCertificateRequest& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}
    inline ImportCertificateRequest& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}
    inline ImportCertificateRequest& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional date that specifies when the certificate becomes active.</p>
     */
    inline const Aws::Utils::DateTime& GetActiveDate() const{ return m_activeDate; }
    inline bool ActiveDateHasBeenSet() const { return m_activeDateHasBeenSet; }
    inline void SetActiveDate(const Aws::Utils::DateTime& value) { m_activeDateHasBeenSet = true; m_activeDate = value; }
    inline void SetActiveDate(Aws::Utils::DateTime&& value) { m_activeDateHasBeenSet = true; m_activeDate = std::move(value); }
    inline ImportCertificateRequest& WithActiveDate(const Aws::Utils::DateTime& value) { SetActiveDate(value); return *this;}
    inline ImportCertificateRequest& WithActiveDate(Aws::Utils::DateTime&& value) { SetActiveDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional date that specifies when the certificate becomes inactive.</p>
     */
    inline const Aws::Utils::DateTime& GetInactiveDate() const{ return m_inactiveDate; }
    inline bool InactiveDateHasBeenSet() const { return m_inactiveDateHasBeenSet; }
    inline void SetInactiveDate(const Aws::Utils::DateTime& value) { m_inactiveDateHasBeenSet = true; m_inactiveDate = value; }
    inline void SetInactiveDate(Aws::Utils::DateTime&& value) { m_inactiveDateHasBeenSet = true; m_inactiveDate = std::move(value); }
    inline ImportCertificateRequest& WithInactiveDate(const Aws::Utils::DateTime& value) { SetInactiveDate(value); return *this;}
    inline ImportCertificateRequest& WithInactiveDate(Aws::Utils::DateTime&& value) { SetInactiveDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description that helps identify the certificate. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImportCertificateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImportCertificateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImportCertificateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for certificates.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ImportCertificateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ImportCertificateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ImportCertificateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ImportCertificateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    CertificateUsageType m_usage;
    bool m_usageHasBeenSet = false;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;

    Aws::Utils::DateTime m_activeDate;
    bool m_activeDateHasBeenSet = false;

    Aws::Utils::DateTime m_inactiveDate;
    bool m_inactiveDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
