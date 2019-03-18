/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DATABASEMIGRATIONSERVICE_API Certificate
  {
  public:
    Certificate();
    Certificate(Aws::Utils::Json::JsonView jsonValue);
    Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline const Aws::String& GetCertificateIdentifier() const{ return m_certificateIdentifier; }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline bool CertificateIdentifierHasBeenSet() const { return m_certificateIdentifierHasBeenSet; }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline void SetCertificateIdentifier(const Aws::String& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = value; }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline void SetCertificateIdentifier(Aws::String&& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = std::move(value); }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline void SetCertificateIdentifier(const char* value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier.assign(value); }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline Certificate& WithCertificateIdentifier(const Aws::String& value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline Certificate& WithCertificateIdentifier(Aws::String&& value) { SetCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline Certificate& WithCertificateIdentifier(const char* value) { SetCertificateIdentifier(value); return *this;}


    /**
     * <p>The date that the certificate was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCertificateCreationDate() const{ return m_certificateCreationDate; }

    /**
     * <p>The date that the certificate was created.</p>
     */
    inline bool CertificateCreationDateHasBeenSet() const { return m_certificateCreationDateHasBeenSet; }

    /**
     * <p>The date that the certificate was created.</p>
     */
    inline void SetCertificateCreationDate(const Aws::Utils::DateTime& value) { m_certificateCreationDateHasBeenSet = true; m_certificateCreationDate = value; }

    /**
     * <p>The date that the certificate was created.</p>
     */
    inline void SetCertificateCreationDate(Aws::Utils::DateTime&& value) { m_certificateCreationDateHasBeenSet = true; m_certificateCreationDate = std::move(value); }

    /**
     * <p>The date that the certificate was created.</p>
     */
    inline Certificate& WithCertificateCreationDate(const Aws::Utils::DateTime& value) { SetCertificateCreationDate(value); return *this;}

    /**
     * <p>The date that the certificate was created.</p>
     */
    inline Certificate& WithCertificateCreationDate(Aws::Utils::DateTime&& value) { SetCertificateCreationDate(std::move(value)); return *this;}


    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::move(value); }

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline void SetCertificatePem(const char* value) { m_certificatePemHasBeenSet = true; m_certificatePem.assign(value); }

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline Certificate& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline Certificate& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline Certificate& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}


    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificateWallet() const{ return m_certificateWallet; }

    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline bool CertificateWalletHasBeenSet() const { return m_certificateWalletHasBeenSet; }

    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline void SetCertificateWallet(const Aws::Utils::ByteBuffer& value) { m_certificateWalletHasBeenSet = true; m_certificateWallet = value; }

    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline void SetCertificateWallet(Aws::Utils::ByteBuffer&& value) { m_certificateWalletHasBeenSet = true; m_certificateWallet = std::move(value); }

    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline Certificate& WithCertificateWallet(const Aws::Utils::ByteBuffer& value) { SetCertificateWallet(value); return *this;}

    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline Certificate& WithCertificateWallet(Aws::Utils::ByteBuffer&& value) { SetCertificateWallet(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline Certificate& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline Certificate& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline Certificate& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The owner of the certificate.</p>
     */
    inline const Aws::String& GetCertificateOwner() const{ return m_certificateOwner; }

    /**
     * <p>The owner of the certificate.</p>
     */
    inline bool CertificateOwnerHasBeenSet() const { return m_certificateOwnerHasBeenSet; }

    /**
     * <p>The owner of the certificate.</p>
     */
    inline void SetCertificateOwner(const Aws::String& value) { m_certificateOwnerHasBeenSet = true; m_certificateOwner = value; }

    /**
     * <p>The owner of the certificate.</p>
     */
    inline void SetCertificateOwner(Aws::String&& value) { m_certificateOwnerHasBeenSet = true; m_certificateOwner = std::move(value); }

    /**
     * <p>The owner of the certificate.</p>
     */
    inline void SetCertificateOwner(const char* value) { m_certificateOwnerHasBeenSet = true; m_certificateOwner.assign(value); }

    /**
     * <p>The owner of the certificate.</p>
     */
    inline Certificate& WithCertificateOwner(const Aws::String& value) { SetCertificateOwner(value); return *this;}

    /**
     * <p>The owner of the certificate.</p>
     */
    inline Certificate& WithCertificateOwner(Aws::String&& value) { SetCertificateOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the certificate.</p>
     */
    inline Certificate& WithCertificateOwner(const char* value) { SetCertificateOwner(value); return *this;}


    /**
     * <p>The beginning date that the certificate is valid.</p>
     */
    inline const Aws::Utils::DateTime& GetValidFromDate() const{ return m_validFromDate; }

    /**
     * <p>The beginning date that the certificate is valid.</p>
     */
    inline bool ValidFromDateHasBeenSet() const { return m_validFromDateHasBeenSet; }

    /**
     * <p>The beginning date that the certificate is valid.</p>
     */
    inline void SetValidFromDate(const Aws::Utils::DateTime& value) { m_validFromDateHasBeenSet = true; m_validFromDate = value; }

    /**
     * <p>The beginning date that the certificate is valid.</p>
     */
    inline void SetValidFromDate(Aws::Utils::DateTime&& value) { m_validFromDateHasBeenSet = true; m_validFromDate = std::move(value); }

    /**
     * <p>The beginning date that the certificate is valid.</p>
     */
    inline Certificate& WithValidFromDate(const Aws::Utils::DateTime& value) { SetValidFromDate(value); return *this;}

    /**
     * <p>The beginning date that the certificate is valid.</p>
     */
    inline Certificate& WithValidFromDate(Aws::Utils::DateTime&& value) { SetValidFromDate(std::move(value)); return *this;}


    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline const Aws::Utils::DateTime& GetValidToDate() const{ return m_validToDate; }

    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline bool ValidToDateHasBeenSet() const { return m_validToDateHasBeenSet; }

    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline void SetValidToDate(const Aws::Utils::DateTime& value) { m_validToDateHasBeenSet = true; m_validToDate = value; }

    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline void SetValidToDate(Aws::Utils::DateTime&& value) { m_validToDateHasBeenSet = true; m_validToDate = std::move(value); }

    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline Certificate& WithValidToDate(const Aws::Utils::DateTime& value) { SetValidToDate(value); return *this;}

    /**
     * <p>The final date that the certificate is valid.</p>
     */
    inline Certificate& WithValidToDate(Aws::Utils::DateTime&& value) { SetValidToDate(std::move(value)); return *this;}


    /**
     * <p>The signing algorithm for the certificate.</p>
     */
    inline const Aws::String& GetSigningAlgorithm() const{ return m_signingAlgorithm; }

    /**
     * <p>The signing algorithm for the certificate.</p>
     */
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }

    /**
     * <p>The signing algorithm for the certificate.</p>
     */
    inline void SetSigningAlgorithm(const Aws::String& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }

    /**
     * <p>The signing algorithm for the certificate.</p>
     */
    inline void SetSigningAlgorithm(Aws::String&& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = std::move(value); }

    /**
     * <p>The signing algorithm for the certificate.</p>
     */
    inline void SetSigningAlgorithm(const char* value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm.assign(value); }

    /**
     * <p>The signing algorithm for the certificate.</p>
     */
    inline Certificate& WithSigningAlgorithm(const Aws::String& value) { SetSigningAlgorithm(value); return *this;}

    /**
     * <p>The signing algorithm for the certificate.</p>
     */
    inline Certificate& WithSigningAlgorithm(Aws::String&& value) { SetSigningAlgorithm(std::move(value)); return *this;}

    /**
     * <p>The signing algorithm for the certificate.</p>
     */
    inline Certificate& WithSigningAlgorithm(const char* value) { SetSigningAlgorithm(value); return *this;}


    /**
     * <p>The key length of the cryptographic algorithm being used.</p>
     */
    inline int GetKeyLength() const{ return m_keyLength; }

    /**
     * <p>The key length of the cryptographic algorithm being used.</p>
     */
    inline bool KeyLengthHasBeenSet() const { return m_keyLengthHasBeenSet; }

    /**
     * <p>The key length of the cryptographic algorithm being used.</p>
     */
    inline void SetKeyLength(int value) { m_keyLengthHasBeenSet = true; m_keyLength = value; }

    /**
     * <p>The key length of the cryptographic algorithm being used.</p>
     */
    inline Certificate& WithKeyLength(int value) { SetKeyLength(value); return *this;}

  private:

    Aws::String m_certificateIdentifier;
    bool m_certificateIdentifierHasBeenSet;

    Aws::Utils::DateTime m_certificateCreationDate;
    bool m_certificateCreationDateHasBeenSet;

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet;

    Aws::Utils::ByteBuffer m_certificateWallet;
    bool m_certificateWalletHasBeenSet;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::String m_certificateOwner;
    bool m_certificateOwnerHasBeenSet;

    Aws::Utils::DateTime m_validFromDate;
    bool m_validFromDateHasBeenSet;

    Aws::Utils::DateTime m_validToDate;
    bool m_validToDateHasBeenSet;

    Aws::String m_signingAlgorithm;
    bool m_signingAlgorithmHasBeenSet;

    int m_keyLength;
    bool m_keyLengthHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
