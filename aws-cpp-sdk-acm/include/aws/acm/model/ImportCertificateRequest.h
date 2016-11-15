/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class AWS_ACM_API ImportCertificateRequest : public ACMRequest
  {
  public:
    ImportCertificateRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field.</p>
     */
    inline ImportCertificateRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field.</p>
     */
    inline ImportCertificateRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field.</p>
     */
    inline ImportCertificateRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The certificate to import. It must meet the following requirements:</p> <ul>
     * <li> <p>Must be PEM-encoded.</p> </li> <li> <p>Must contain a 1024-bit or
     * 2048-bit RSA public key.</p> </li> <li> <p>Must be valid at the time of import.
     * You cannot import a certificate before its validity period begins (the
     * certificate's <code>NotBefore</code> date) or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> </ul>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The certificate to import. It must meet the following requirements:</p> <ul>
     * <li> <p>Must be PEM-encoded.</p> </li> <li> <p>Must contain a 1024-bit or
     * 2048-bit RSA public key.</p> </li> <li> <p>Must be valid at the time of import.
     * You cannot import a certificate before its validity period begins (the
     * certificate's <code>NotBefore</code> date) or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> </ul>
     */
    inline void SetCertificate(const Aws::Utils::ByteBuffer& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The certificate to import. It must meet the following requirements:</p> <ul>
     * <li> <p>Must be PEM-encoded.</p> </li> <li> <p>Must contain a 1024-bit or
     * 2048-bit RSA public key.</p> </li> <li> <p>Must be valid at the time of import.
     * You cannot import a certificate before its validity period begins (the
     * certificate's <code>NotBefore</code> date) or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> </ul>
     */
    inline void SetCertificate(Aws::Utils::ByteBuffer&& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The certificate to import. It must meet the following requirements:</p> <ul>
     * <li> <p>Must be PEM-encoded.</p> </li> <li> <p>Must contain a 1024-bit or
     * 2048-bit RSA public key.</p> </li> <li> <p>Must be valid at the time of import.
     * You cannot import a certificate before its validity period begins (the
     * certificate's <code>NotBefore</code> date) or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> </ul>
     */
    inline ImportCertificateRequest& WithCertificate(const Aws::Utils::ByteBuffer& value) { SetCertificate(value); return *this;}

    /**
     * <p>The certificate to import. It must meet the following requirements:</p> <ul>
     * <li> <p>Must be PEM-encoded.</p> </li> <li> <p>Must contain a 1024-bit or
     * 2048-bit RSA public key.</p> </li> <li> <p>Must be valid at the time of import.
     * You cannot import a certificate before its validity period begins (the
     * certificate's <code>NotBefore</code> date) or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> </ul>
     */
    inline ImportCertificateRequest& WithCertificate(Aws::Utils::ByteBuffer&& value) { SetCertificate(value); return *this;}

    /**
     * <p>The private key that matches the public key in the certificate. It must meet
     * the following requirements:</p> <ul> <li> <p>Must be PEM-encoded.</p> </li> <li>
     * <p>Must be unencrypted. You cannot import a private key that is protected by a
     * password or passphrase.</p> </li> </ul>
     */
    inline const Aws::Utils::ByteBuffer& GetPrivateKey() const{ return m_privateKey; }

    /**
     * <p>The private key that matches the public key in the certificate. It must meet
     * the following requirements:</p> <ul> <li> <p>Must be PEM-encoded.</p> </li> <li>
     * <p>Must be unencrypted. You cannot import a private key that is protected by a
     * password or passphrase.</p> </li> </ul>
     */
    inline void SetPrivateKey(const Aws::Utils::ByteBuffer& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>The private key that matches the public key in the certificate. It must meet
     * the following requirements:</p> <ul> <li> <p>Must be PEM-encoded.</p> </li> <li>
     * <p>Must be unencrypted. You cannot import a private key that is protected by a
     * password or passphrase.</p> </li> </ul>
     */
    inline void SetPrivateKey(Aws::Utils::ByteBuffer&& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>The private key that matches the public key in the certificate. It must meet
     * the following requirements:</p> <ul> <li> <p>Must be PEM-encoded.</p> </li> <li>
     * <p>Must be unencrypted. You cannot import a private key that is protected by a
     * password or passphrase.</p> </li> </ul>
     */
    inline ImportCertificateRequest& WithPrivateKey(const Aws::Utils::ByteBuffer& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The private key that matches the public key in the certificate. It must meet
     * the following requirements:</p> <ul> <li> <p>Must be PEM-encoded.</p> </li> <li>
     * <p>Must be unencrypted. You cannot import a private key that is protected by a
     * password or passphrase.</p> </li> </ul>
     */
    inline ImportCertificateRequest& WithPrivateKey(Aws::Utils::ByteBuffer&& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The certificate chain. It must be PEM-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The certificate chain. It must be PEM-encoded.</p>
     */
    inline void SetCertificateChain(const Aws::Utils::ByteBuffer& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The certificate chain. It must be PEM-encoded.</p>
     */
    inline void SetCertificateChain(Aws::Utils::ByteBuffer&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The certificate chain. It must be PEM-encoded.</p>
     */
    inline ImportCertificateRequest& WithCertificateChain(const Aws::Utils::ByteBuffer& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The certificate chain. It must be PEM-encoded.</p>
     */
    inline ImportCertificateRequest& WithCertificateChain(Aws::Utils::ByteBuffer&& value) { SetCertificateChain(value); return *this;}

  private:
    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;
    Aws::Utils::ByteBuffer m_certificate;
    bool m_certificateHasBeenSet;
    Aws::Utils::ByteBuffer m_privateKey;
    bool m_privateKeyHasBeenSet;
    Aws::Utils::ByteBuffer m_certificateChain;
    bool m_certificateChainHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
