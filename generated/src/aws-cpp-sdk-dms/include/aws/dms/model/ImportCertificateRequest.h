/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/Tag.h>

#include <utility>

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {

/**
 */
class ImportCertificateRequest : public DatabaseMigrationServiceRequest {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API ImportCertificateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ImportCertificate"; }

  AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

  AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A customer-assigned name for the certificate. Identifiers must begin with a
   * letter and must contain only ASCII letters, digits, and hyphens. They can't end
   * with a hyphen or contain two consecutive hyphens.</p>
   */
  inline const Aws::String& GetCertificateIdentifier() const { return m_certificateIdentifier; }
  inline bool CertificateIdentifierHasBeenSet() const { return m_certificateIdentifierHasBeenSet; }
  template <typename CertificateIdentifierT = Aws::String>
  void SetCertificateIdentifier(CertificateIdentifierT&& value) {
    m_certificateIdentifierHasBeenSet = true;
    m_certificateIdentifier = std::forward<CertificateIdentifierT>(value);
  }
  template <typename CertificateIdentifierT = Aws::String>
  ImportCertificateRequest& WithCertificateIdentifier(CertificateIdentifierT&& value) {
    SetCertificateIdentifier(std::forward<CertificateIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contents of a <code>.pem</code> file, which contains an X.509
   * certificate.</p>
   */
  inline const Aws::String& GetCertificatePem() const { return m_certificatePem; }
  inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }
  template <typename CertificatePemT = Aws::String>
  void SetCertificatePem(CertificatePemT&& value) {
    m_certificatePemHasBeenSet = true;
    m_certificatePem = std::forward<CertificatePemT>(value);
  }
  template <typename CertificatePemT = Aws::String>
  ImportCertificateRequest& WithCertificatePem(CertificatePemT&& value) {
    SetCertificatePem(std::forward<CertificatePemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of an imported Oracle Wallet certificate for use with SSL.
   * Provide the name of a <code>.sso</code> file using the <code>fileb://</code>
   * prefix. You can't provide the certificate inline.</p> <p>Example:
   * <code>filebase64("${path.root}/rds-ca-2019-root.sso")</code> </p>
   */
  inline const Aws::Utils::ByteBuffer& GetCertificateWallet() const { return m_certificateWallet; }
  inline bool CertificateWalletHasBeenSet() const { return m_certificateWalletHasBeenSet; }
  template <typename CertificateWalletT = Aws::Utils::ByteBuffer>
  void SetCertificateWallet(CertificateWalletT&& value) {
    m_certificateWalletHasBeenSet = true;
    m_certificateWallet = std::forward<CertificateWalletT>(value);
  }
  template <typename CertificateWalletT = Aws::Utils::ByteBuffer>
  ImportCertificateRequest& WithCertificateWallet(CertificateWalletT&& value) {
    SetCertificateWallet(std::forward<CertificateWalletT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the certificate.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  ImportCertificateRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  ImportCertificateRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An KMS key identifier that is used to encrypt the certificate.</p> <p>If you
   * don't specify a value for the <code>KmsKeyId</code> parameter, then DMS uses
   * your default encryption key.</p> <p>KMS creates the default encryption key for
   * your Amazon Web Services account. Your Amazon Web Services account has a
   * different default encryption key for each Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  ImportCertificateRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_certificateIdentifier;

  Aws::String m_certificatePem;

  Aws::Utils::ByteBuffer m_certificateWallet{};

  Aws::Vector<Tag> m_tags;

  Aws::String m_kmsKeyId;
  bool m_certificateIdentifierHasBeenSet = false;
  bool m_certificatePemHasBeenSet = false;
  bool m_certificateWalletHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
