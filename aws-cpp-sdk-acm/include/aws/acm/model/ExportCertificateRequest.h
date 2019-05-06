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
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/ACMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class AWS_ACM_API ExportCertificateRequest : public ACMRequest
  {
  public:
    ExportCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportCertificate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An Amazon Resource Name (ARN) of the issued certificate. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm:region:account:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>An Amazon Resource Name (ARN) of the issued certificate. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm:region:account:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) of the issued certificate. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm:region:account:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) of the issued certificate. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm:region:account:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) of the issued certificate. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm:region:account:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) of the issued certificate. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm:region:account:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline ExportCertificateRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) of the issued certificate. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm:region:account:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline ExportCertificateRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) of the issued certificate. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm:region:account:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline ExportCertificateRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>Passphrase to associate with the encrypted exported private key. If you want
     * to later decrypt the private key, you must have the passphrase. You can use the
     * following OpenSSL command to decrypt a private key: </p> <p> <code>openssl rsa
     * -in encrypted_key.pem -out decrypted_key.pem</code> </p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPassphrase() const{ return m_passphrase; }

    /**
     * <p>Passphrase to associate with the encrypted exported private key. If you want
     * to later decrypt the private key, you must have the passphrase. You can use the
     * following OpenSSL command to decrypt a private key: </p> <p> <code>openssl rsa
     * -in encrypted_key.pem -out decrypted_key.pem</code> </p>
     */
    inline bool PassphraseHasBeenSet() const { return m_passphraseHasBeenSet; }

    /**
     * <p>Passphrase to associate with the encrypted exported private key. If you want
     * to later decrypt the private key, you must have the passphrase. You can use the
     * following OpenSSL command to decrypt a private key: </p> <p> <code>openssl rsa
     * -in encrypted_key.pem -out decrypted_key.pem</code> </p>
     */
    inline void SetPassphrase(const Aws::Utils::CryptoBuffer& value) { m_passphraseHasBeenSet = true; m_passphrase = value; }

    /**
     * <p>Passphrase to associate with the encrypted exported private key. If you want
     * to later decrypt the private key, you must have the passphrase. You can use the
     * following OpenSSL command to decrypt a private key: </p> <p> <code>openssl rsa
     * -in encrypted_key.pem -out decrypted_key.pem</code> </p>
     */
    inline void SetPassphrase(Aws::Utils::CryptoBuffer&& value) { m_passphraseHasBeenSet = true; m_passphrase = std::move(value); }

    /**
     * <p>Passphrase to associate with the encrypted exported private key. If you want
     * to later decrypt the private key, you must have the passphrase. You can use the
     * following OpenSSL command to decrypt a private key: </p> <p> <code>openssl rsa
     * -in encrypted_key.pem -out decrypted_key.pem</code> </p>
     */
    inline ExportCertificateRequest& WithPassphrase(const Aws::Utils::CryptoBuffer& value) { SetPassphrase(value); return *this;}

    /**
     * <p>Passphrase to associate with the encrypted exported private key. If you want
     * to later decrypt the private key, you must have the passphrase. You can use the
     * following OpenSSL command to decrypt a private key: </p> <p> <code>openssl rsa
     * -in encrypted_key.pem -out decrypted_key.pem</code> </p>
     */
    inline ExportCertificateRequest& WithPassphrase(Aws::Utils::CryptoBuffer&& value) { SetPassphrase(std::move(value)); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::Utils::CryptoBuffer m_passphrase;
    bool m_passphraseHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
