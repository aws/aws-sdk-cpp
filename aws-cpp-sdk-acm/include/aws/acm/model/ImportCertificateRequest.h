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
  class AWS_ACM_API ImportCertificateRequest : public ACMRequest
  {
  public:
    ImportCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportCertificate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field. </p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field. </p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field. </p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field. </p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field. </p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field. </p>
     */
    inline ImportCertificateRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field. </p>
     */
    inline ImportCertificateRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an imported certificate to replace. To import a new
     * certificate, omit this field. </p>
     */
    inline ImportCertificateRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The certificate to import.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The certificate to import.</p>
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>The certificate to import.</p>
     */
    inline void SetCertificate(const Aws::Utils::ByteBuffer& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The certificate to import.</p>
     */
    inline void SetCertificate(Aws::Utils::ByteBuffer&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>The certificate to import.</p>
     */
    inline ImportCertificateRequest& WithCertificate(const Aws::Utils::ByteBuffer& value) { SetCertificate(value); return *this;}

    /**
     * <p>The certificate to import.</p>
     */
    inline ImportCertificateRequest& WithCertificate(Aws::Utils::ByteBuffer&& value) { SetCertificate(std::move(value)); return *this;}


    /**
     * <p>The private key that matches the public key in the certificate.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPrivateKey() const{ return m_privateKey; }

    /**
     * <p>The private key that matches the public key in the certificate.</p>
     */
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }

    /**
     * <p>The private key that matches the public key in the certificate.</p>
     */
    inline void SetPrivateKey(const Aws::Utils::CryptoBuffer& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>The private key that matches the public key in the certificate.</p>
     */
    inline void SetPrivateKey(Aws::Utils::CryptoBuffer&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }

    /**
     * <p>The private key that matches the public key in the certificate.</p>
     */
    inline ImportCertificateRequest& WithPrivateKey(const Aws::Utils::CryptoBuffer& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The private key that matches the public key in the certificate.</p>
     */
    inline ImportCertificateRequest& WithPrivateKey(Aws::Utils::CryptoBuffer&& value) { SetPrivateKey(std::move(value)); return *this;}


    /**
     * <p>The PEM encoded certificate chain.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The PEM encoded certificate chain.</p>
     */
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }

    /**
     * <p>The PEM encoded certificate chain.</p>
     */
    inline void SetCertificateChain(const Aws::Utils::ByteBuffer& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The PEM encoded certificate chain.</p>
     */
    inline void SetCertificateChain(Aws::Utils::ByteBuffer&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }

    /**
     * <p>The PEM encoded certificate chain.</p>
     */
    inline ImportCertificateRequest& WithCertificateChain(const Aws::Utils::ByteBuffer& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The PEM encoded certificate chain.</p>
     */
    inline ImportCertificateRequest& WithCertificateChain(Aws::Utils::ByteBuffer&& value) { SetCertificateChain(std::move(value)); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::Utils::ByteBuffer m_certificate;
    bool m_certificateHasBeenSet;

    Aws::Utils::CryptoBuffer m_privateKey;
    bool m_privateKeyHasBeenSet;

    Aws::Utils::ByteBuffer m_certificateChain;
    bool m_certificateChainHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
