/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class ImportCertificateRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ImportCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportCertificate"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A customer-assigned name for the certificate. Identifiers must begin with a
     * letter and must contain only ASCII letters, digits, and hyphens. They can't end
     * with a hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetCertificateIdentifier() const{ return m_certificateIdentifier; }

    /**
     * <p>A customer-assigned name for the certificate. Identifiers must begin with a
     * letter and must contain only ASCII letters, digits, and hyphens. They can't end
     * with a hyphen or contain two consecutive hyphens.</p>
     */
    inline bool CertificateIdentifierHasBeenSet() const { return m_certificateIdentifierHasBeenSet; }

    /**
     * <p>A customer-assigned name for the certificate. Identifiers must begin with a
     * letter and must contain only ASCII letters, digits, and hyphens. They can't end
     * with a hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetCertificateIdentifier(const Aws::String& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = value; }

    /**
     * <p>A customer-assigned name for the certificate. Identifiers must begin with a
     * letter and must contain only ASCII letters, digits, and hyphens. They can't end
     * with a hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetCertificateIdentifier(Aws::String&& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = std::move(value); }

    /**
     * <p>A customer-assigned name for the certificate. Identifiers must begin with a
     * letter and must contain only ASCII letters, digits, and hyphens. They can't end
     * with a hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetCertificateIdentifier(const char* value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier.assign(value); }

    /**
     * <p>A customer-assigned name for the certificate. Identifiers must begin with a
     * letter and must contain only ASCII letters, digits, and hyphens. They can't end
     * with a hyphen or contain two consecutive hyphens.</p>
     */
    inline ImportCertificateRequest& WithCertificateIdentifier(const Aws::String& value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>A customer-assigned name for the certificate. Identifiers must begin with a
     * letter and must contain only ASCII letters, digits, and hyphens. They can't end
     * with a hyphen or contain two consecutive hyphens.</p>
     */
    inline ImportCertificateRequest& WithCertificateIdentifier(Aws::String&& value) { SetCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>A customer-assigned name for the certificate. Identifiers must begin with a
     * letter and must contain only ASCII letters, digits, and hyphens. They can't end
     * with a hyphen or contain two consecutive hyphens.</p>
     */
    inline ImportCertificateRequest& WithCertificateIdentifier(const char* value) { SetCertificateIdentifier(value); return *this;}


    /**
     * <p>The contents of a <code>.pem</code> file, which contains an X.509
     * certificate.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }

    /**
     * <p>The contents of a <code>.pem</code> file, which contains an X.509
     * certificate.</p>
     */
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }

    /**
     * <p>The contents of a <code>.pem</code> file, which contains an X.509
     * certificate.</p>
     */
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

    /**
     * <p>The contents of a <code>.pem</code> file, which contains an X.509
     * certificate.</p>
     */
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::move(value); }

    /**
     * <p>The contents of a <code>.pem</code> file, which contains an X.509
     * certificate.</p>
     */
    inline void SetCertificatePem(const char* value) { m_certificatePemHasBeenSet = true; m_certificatePem.assign(value); }

    /**
     * <p>The contents of a <code>.pem</code> file, which contains an X.509
     * certificate.</p>
     */
    inline ImportCertificateRequest& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The contents of a <code>.pem</code> file, which contains an X.509
     * certificate.</p>
     */
    inline ImportCertificateRequest& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}

    /**
     * <p>The contents of a <code>.pem</code> file, which contains an X.509
     * certificate.</p>
     */
    inline ImportCertificateRequest& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}


    /**
     * <p>The location of an imported Oracle Wallet certificate for use with SSL.
     * Provide the name of a <code>.sso</code> file using the <code>fileb://</code>
     * prefix. You can't provide the certificate inline.</p> <p>Example:
     * <code>filebase64("${path.root}/rds-ca-2019-root.sso")</code> </p>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificateWallet() const{ return m_certificateWallet; }

    /**
     * <p>The location of an imported Oracle Wallet certificate for use with SSL.
     * Provide the name of a <code>.sso</code> file using the <code>fileb://</code>
     * prefix. You can't provide the certificate inline.</p> <p>Example:
     * <code>filebase64("${path.root}/rds-ca-2019-root.sso")</code> </p>
     */
    inline bool CertificateWalletHasBeenSet() const { return m_certificateWalletHasBeenSet; }

    /**
     * <p>The location of an imported Oracle Wallet certificate for use with SSL.
     * Provide the name of a <code>.sso</code> file using the <code>fileb://</code>
     * prefix. You can't provide the certificate inline.</p> <p>Example:
     * <code>filebase64("${path.root}/rds-ca-2019-root.sso")</code> </p>
     */
    inline void SetCertificateWallet(const Aws::Utils::ByteBuffer& value) { m_certificateWalletHasBeenSet = true; m_certificateWallet = value; }

    /**
     * <p>The location of an imported Oracle Wallet certificate for use with SSL.
     * Provide the name of a <code>.sso</code> file using the <code>fileb://</code>
     * prefix. You can't provide the certificate inline.</p> <p>Example:
     * <code>filebase64("${path.root}/rds-ca-2019-root.sso")</code> </p>
     */
    inline void SetCertificateWallet(Aws::Utils::ByteBuffer&& value) { m_certificateWalletHasBeenSet = true; m_certificateWallet = std::move(value); }

    /**
     * <p>The location of an imported Oracle Wallet certificate for use with SSL.
     * Provide the name of a <code>.sso</code> file using the <code>fileb://</code>
     * prefix. You can't provide the certificate inline.</p> <p>Example:
     * <code>filebase64("${path.root}/rds-ca-2019-root.sso")</code> </p>
     */
    inline ImportCertificateRequest& WithCertificateWallet(const Aws::Utils::ByteBuffer& value) { SetCertificateWallet(value); return *this;}

    /**
     * <p>The location of an imported Oracle Wallet certificate for use with SSL.
     * Provide the name of a <code>.sso</code> file using the <code>fileb://</code>
     * prefix. You can't provide the certificate inline.</p> <p>Example:
     * <code>filebase64("${path.root}/rds-ca-2019-root.sso")</code> </p>
     */
    inline ImportCertificateRequest& WithCertificateWallet(Aws::Utils::ByteBuffer&& value) { SetCertificateWallet(std::move(value)); return *this;}


    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline ImportCertificateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline ImportCertificateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline ImportCertificateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline ImportCertificateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_certificateIdentifier;
    bool m_certificateIdentifierHasBeenSet = false;

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet = false;

    Aws::Utils::ByteBuffer m_certificateWallet;
    bool m_certificateWalletHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
