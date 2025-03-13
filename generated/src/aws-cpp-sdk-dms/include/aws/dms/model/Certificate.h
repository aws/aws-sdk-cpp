/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Array.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>The SSL certificate that can be used to encrypt connections between the
   * endpoints and the replication instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/Certificate">AWS API
   * Reference</a></p>
   */
  class Certificate
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API Certificate() = default;
    AWS_DATABASEMIGRATIONSERVICE_API Certificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A customer-assigned name for the certificate. Identifiers must begin with a
     * letter and must contain only ASCII letters, digits, and hyphens. They can't end
     * with a hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetCertificateIdentifier() const { return m_certificateIdentifier; }
    inline bool CertificateIdentifierHasBeenSet() const { return m_certificateIdentifierHasBeenSet; }
    template<typename CertificateIdentifierT = Aws::String>
    void SetCertificateIdentifier(CertificateIdentifierT&& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = std::forward<CertificateIdentifierT>(value); }
    template<typename CertificateIdentifierT = Aws::String>
    Certificate& WithCertificateIdentifier(CertificateIdentifierT&& value) { SetCertificateIdentifier(std::forward<CertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the certificate was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCertificateCreationDate() const { return m_certificateCreationDate; }
    inline bool CertificateCreationDateHasBeenSet() const { return m_certificateCreationDateHasBeenSet; }
    template<typename CertificateCreationDateT = Aws::Utils::DateTime>
    void SetCertificateCreationDate(CertificateCreationDateT&& value) { m_certificateCreationDateHasBeenSet = true; m_certificateCreationDate = std::forward<CertificateCreationDateT>(value); }
    template<typename CertificateCreationDateT = Aws::Utils::DateTime>
    Certificate& WithCertificateCreationDate(CertificateCreationDateT&& value) { SetCertificateCreationDate(std::forward<CertificateCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of a <code>.pem</code> file, which contains an X.509
     * certificate.</p>
     */
    inline const Aws::String& GetCertificatePem() const { return m_certificatePem; }
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }
    template<typename CertificatePemT = Aws::String>
    void SetCertificatePem(CertificatePemT&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::forward<CertificatePemT>(value); }
    template<typename CertificatePemT = Aws::String>
    Certificate& WithCertificatePem(CertificatePemT&& value) { SetCertificatePem(std::forward<CertificatePemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of an imported Oracle Wallet certificate for use with SSL.
     * Example: <code>filebase64("${path.root}/rds-ca-2019-root.sso")</code> </p>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificateWallet() const { return m_certificateWallet; }
    inline bool CertificateWalletHasBeenSet() const { return m_certificateWalletHasBeenSet; }
    template<typename CertificateWalletT = Aws::Utils::ByteBuffer>
    void SetCertificateWallet(CertificateWalletT&& value) { m_certificateWalletHasBeenSet = true; m_certificateWallet = std::forward<CertificateWalletT>(value); }
    template<typename CertificateWalletT = Aws::Utils::ByteBuffer>
    Certificate& WithCertificateWallet(CertificateWalletT&& value) { SetCertificateWallet(std::forward<CertificateWalletT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    Certificate& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the certificate.</p>
     */
    inline const Aws::String& GetCertificateOwner() const { return m_certificateOwner; }
    inline bool CertificateOwnerHasBeenSet() const { return m_certificateOwnerHasBeenSet; }
    template<typename CertificateOwnerT = Aws::String>
    void SetCertificateOwner(CertificateOwnerT&& value) { m_certificateOwnerHasBeenSet = true; m_certificateOwner = std::forward<CertificateOwnerT>(value); }
    template<typename CertificateOwnerT = Aws::String>
    Certificate& WithCertificateOwner(CertificateOwnerT&& value) { SetCertificateOwner(std::forward<CertificateOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The beginning date that the certificate is valid.</p>
     */
    inline const Aws::Utils::DateTime& GetValidFromDate() const { return m_validFromDate; }
    inline bool ValidFromDateHasBeenSet() const { return m_validFromDateHasBeenSet; }
    template<typename ValidFromDateT = Aws::Utils::DateTime>
    void SetValidFromDate(ValidFromDateT&& value) { m_validFromDateHasBeenSet = true; m_validFromDate = std::forward<ValidFromDateT>(value); }
    template<typename ValidFromDateT = Aws::Utils::DateTime>
    Certificate& WithValidFromDate(ValidFromDateT&& value) { SetValidFromDate(std::forward<ValidFromDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline const Aws::Utils::DateTime& GetValidToDate() const { return m_validToDate; }
    inline bool ValidToDateHasBeenSet() const { return m_validToDateHasBeenSet; }
    template<typename ValidToDateT = Aws::Utils::DateTime>
    void SetValidToDate(ValidToDateT&& value) { m_validToDateHasBeenSet = true; m_validToDate = std::forward<ValidToDateT>(value); }
    template<typename ValidToDateT = Aws::Utils::DateTime>
    Certificate& WithValidToDate(ValidToDateT&& value) { SetValidToDate(std::forward<ValidToDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing algorithm for the certificate.</p>
     */
    inline const Aws::String& GetSigningAlgorithm() const { return m_signingAlgorithm; }
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }
    template<typename SigningAlgorithmT = Aws::String>
    void SetSigningAlgorithm(SigningAlgorithmT&& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = std::forward<SigningAlgorithmT>(value); }
    template<typename SigningAlgorithmT = Aws::String>
    Certificate& WithSigningAlgorithm(SigningAlgorithmT&& value) { SetSigningAlgorithm(std::forward<SigningAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key length of the cryptographic algorithm being used.</p>
     */
    inline int GetKeyLength() const { return m_keyLength; }
    inline bool KeyLengthHasBeenSet() const { return m_keyLengthHasBeenSet; }
    inline void SetKeyLength(int value) { m_keyLengthHasBeenSet = true; m_keyLength = value; }
    inline Certificate& WithKeyLength(int value) { SetKeyLength(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateIdentifier;
    bool m_certificateIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_certificateCreationDate{};
    bool m_certificateCreationDateHasBeenSet = false;

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet = false;

    Aws::Utils::ByteBuffer m_certificateWallet{};
    bool m_certificateWalletHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateOwner;
    bool m_certificateOwnerHasBeenSet = false;

    Aws::Utils::DateTime m_validFromDate{};
    bool m_validFromDateHasBeenSet = false;

    Aws::Utils::DateTime m_validToDate{};
    bool m_validToDateHasBeenSet = false;

    Aws::String m_signingAlgorithm;
    bool m_signingAlgorithmHasBeenSet = false;

    int m_keyLength{0};
    bool m_keyLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
