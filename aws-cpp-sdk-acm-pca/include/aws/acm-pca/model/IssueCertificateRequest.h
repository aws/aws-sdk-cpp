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
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/acm-pca/model/SigningAlgorithm.h>
#include <aws/acm-pca/model/Validity.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class AWS_ACMPCA_API IssueCertificateRequest : public ACMPCARequest
  {
  public:
    IssueCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "IssueCertificate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called
     * <a>CreateCertificateAuthority</a>. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called
     * <a>CreateCertificateAuthority</a>. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called
     * <a>CreateCertificateAuthority</a>. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called
     * <a>CreateCertificateAuthority</a>. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called
     * <a>CreateCertificateAuthority</a>. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called
     * <a>CreateCertificateAuthority</a>. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline IssueCertificateRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called
     * <a>CreateCertificateAuthority</a>. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline IssueCertificateRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called
     * <a>CreateCertificateAuthority</a>. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline IssueCertificateRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * You can use the following OpenSSL command to create the CSR and a 2048 bit RSA
     * private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>If you
     * have a configuration file, you can use the following OpenSSL command. The
     * <code>usr_cert</code> block in the configuration file contains your X509 version
     * 3 extensions. </p> <p> <code>openssl req -new -config openssl_rsa.cnf
     * -extensions usr_cert -newkey rsa:2048 -days -365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     */
    inline const Aws::Utils::ByteBuffer& GetCsr() const{ return m_csr; }

    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * You can use the following OpenSSL command to create the CSR and a 2048 bit RSA
     * private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>If you
     * have a configuration file, you can use the following OpenSSL command. The
     * <code>usr_cert</code> block in the configuration file contains your X509 version
     * 3 extensions. </p> <p> <code>openssl req -new -config openssl_rsa.cnf
     * -extensions usr_cert -newkey rsa:2048 -days -365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     */
    inline bool CsrHasBeenSet() const { return m_csrHasBeenSet; }

    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * You can use the following OpenSSL command to create the CSR and a 2048 bit RSA
     * private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>If you
     * have a configuration file, you can use the following OpenSSL command. The
     * <code>usr_cert</code> block in the configuration file contains your X509 version
     * 3 extensions. </p> <p> <code>openssl req -new -config openssl_rsa.cnf
     * -extensions usr_cert -newkey rsa:2048 -days -365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     */
    inline void SetCsr(const Aws::Utils::ByteBuffer& value) { m_csrHasBeenSet = true; m_csr = value; }

    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * You can use the following OpenSSL command to create the CSR and a 2048 bit RSA
     * private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>If you
     * have a configuration file, you can use the following OpenSSL command. The
     * <code>usr_cert</code> block in the configuration file contains your X509 version
     * 3 extensions. </p> <p> <code>openssl req -new -config openssl_rsa.cnf
     * -extensions usr_cert -newkey rsa:2048 -days -365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     */
    inline void SetCsr(Aws::Utils::ByteBuffer&& value) { m_csrHasBeenSet = true; m_csr = std::move(value); }

    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * You can use the following OpenSSL command to create the CSR and a 2048 bit RSA
     * private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>If you
     * have a configuration file, you can use the following OpenSSL command. The
     * <code>usr_cert</code> block in the configuration file contains your X509 version
     * 3 extensions. </p> <p> <code>openssl req -new -config openssl_rsa.cnf
     * -extensions usr_cert -newkey rsa:2048 -days -365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     */
    inline IssueCertificateRequest& WithCsr(const Aws::Utils::ByteBuffer& value) { SetCsr(value); return *this;}

    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * You can use the following OpenSSL command to create the CSR and a 2048 bit RSA
     * private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>If you
     * have a configuration file, you can use the following OpenSSL command. The
     * <code>usr_cert</code> block in the configuration file contains your X509 version
     * 3 extensions. </p> <p> <code>openssl req -new -config openssl_rsa.cnf
     * -extensions usr_cert -newkey rsa:2048 -days -365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     */
    inline IssueCertificateRequest& WithCsr(Aws::Utils::ByteBuffer&& value) { SetCsr(std::move(value)); return *this;}


    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued.</p>
     */
    inline const SigningAlgorithm& GetSigningAlgorithm() const{ return m_signingAlgorithm; }

    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued.</p>
     */
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }

    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued.</p>
     */
    inline void SetSigningAlgorithm(const SigningAlgorithm& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }

    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued.</p>
     */
    inline void SetSigningAlgorithm(SigningAlgorithm&& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = std::move(value); }

    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued.</p>
     */
    inline IssueCertificateRequest& WithSigningAlgorithm(const SigningAlgorithm& value) { SetSigningAlgorithm(value); return *this;}

    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued.</p>
     */
    inline IssueCertificateRequest& WithSigningAlgorithm(SigningAlgorithm&& value) { SetSigningAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template.</p> <p>The following
     * service-owned <code>TemplateArn</code> values are supported by ACM Private CA:
     * </p> <ul> <li> <p>arn:aws:acm-pca:::template/EndEntityCertificate/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen0/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen1/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen2/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen3/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/RootCACertificate/V1</p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Using
     * Templates</a>.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template.</p> <p>The following
     * service-owned <code>TemplateArn</code> values are supported by ACM Private CA:
     * </p> <ul> <li> <p>arn:aws:acm-pca:::template/EndEntityCertificate/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen0/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen1/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen2/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen3/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/RootCACertificate/V1</p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Using
     * Templates</a>.</p>
     */
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template.</p> <p>The following
     * service-owned <code>TemplateArn</code> values are supported by ACM Private CA:
     * </p> <ul> <li> <p>arn:aws:acm-pca:::template/EndEntityCertificate/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen0/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen1/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen2/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen3/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/RootCACertificate/V1</p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Using
     * Templates</a>.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template.</p> <p>The following
     * service-owned <code>TemplateArn</code> values are supported by ACM Private CA:
     * </p> <ul> <li> <p>arn:aws:acm-pca:::template/EndEntityCertificate/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen0/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen1/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen2/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen3/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/RootCACertificate/V1</p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Using
     * Templates</a>.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template.</p> <p>The following
     * service-owned <code>TemplateArn</code> values are supported by ACM Private CA:
     * </p> <ul> <li> <p>arn:aws:acm-pca:::template/EndEntityCertificate/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen0/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen1/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen2/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen3/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/RootCACertificate/V1</p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Using
     * Templates</a>.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template.</p> <p>The following
     * service-owned <code>TemplateArn</code> values are supported by ACM Private CA:
     * </p> <ul> <li> <p>arn:aws:acm-pca:::template/EndEntityCertificate/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen0/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen1/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen2/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen3/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/RootCACertificate/V1</p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Using
     * Templates</a>.</p>
     */
    inline IssueCertificateRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template.</p> <p>The following
     * service-owned <code>TemplateArn</code> values are supported by ACM Private CA:
     * </p> <ul> <li> <p>arn:aws:acm-pca:::template/EndEntityCertificate/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen0/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen1/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen2/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen3/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/RootCACertificate/V1</p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Using
     * Templates</a>.</p>
     */
    inline IssueCertificateRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template.</p> <p>The following
     * service-owned <code>TemplateArn</code> values are supported by ACM Private CA:
     * </p> <ul> <li> <p>arn:aws:acm-pca:::template/EndEntityCertificate/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen0/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen1/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen2/V1</p>
     * </li> <li>
     * <p>arn:aws:acm-pca:::template/SubordinateCACertificate_PathLen3/V1</p> </li>
     * <li> <p>arn:aws:acm-pca:::template/RootCACertificate/V1</p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Using
     * Templates</a>.</p>
     */
    inline IssueCertificateRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>The type of the validity period.</p>
     */
    inline const Validity& GetValidity() const{ return m_validity; }

    /**
     * <p>The type of the validity period.</p>
     */
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }

    /**
     * <p>The type of the validity period.</p>
     */
    inline void SetValidity(const Validity& value) { m_validityHasBeenSet = true; m_validity = value; }

    /**
     * <p>The type of the validity period.</p>
     */
    inline void SetValidity(Validity&& value) { m_validityHasBeenSet = true; m_validity = std::move(value); }

    /**
     * <p>The type of the validity period.</p>
     */
    inline IssueCertificateRequest& WithValidity(const Validity& value) { SetValidity(value); return *this;}

    /**
     * <p>The type of the validity period.</p>
     */
    inline IssueCertificateRequest& WithValidity(Validity&& value) { SetValidity(std::move(value)); return *this;}


    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens time out after one hour.
     * Therefore, if you call <b>IssueCertificate</b> multiple times with the same
     * idempotency token within 5 minutes, ACM Private CA recognizes that you are
     * requesting only one certificate and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens time out after one hour.
     * Therefore, if you call <b>IssueCertificate</b> multiple times with the same
     * idempotency token within 5 minutes, ACM Private CA recognizes that you are
     * requesting only one certificate and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens time out after one hour.
     * Therefore, if you call <b>IssueCertificate</b> multiple times with the same
     * idempotency token within 5 minutes, ACM Private CA recognizes that you are
     * requesting only one certificate and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens time out after one hour.
     * Therefore, if you call <b>IssueCertificate</b> multiple times with the same
     * idempotency token within 5 minutes, ACM Private CA recognizes that you are
     * requesting only one certificate and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens time out after one hour.
     * Therefore, if you call <b>IssueCertificate</b> multiple times with the same
     * idempotency token within 5 minutes, ACM Private CA recognizes that you are
     * requesting only one certificate and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens time out after one hour.
     * Therefore, if you call <b>IssueCertificate</b> multiple times with the same
     * idempotency token within 5 minutes, ACM Private CA recognizes that you are
     * requesting only one certificate and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline IssueCertificateRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens time out after one hour.
     * Therefore, if you call <b>IssueCertificate</b> multiple times with the same
     * idempotency token within 5 minutes, ACM Private CA recognizes that you are
     * requesting only one certificate and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline IssueCertificateRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens time out after one hour.
     * Therefore, if you call <b>IssueCertificate</b> multiple times with the same
     * idempotency token within 5 minutes, ACM Private CA recognizes that you are
     * requesting only one certificate and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline IssueCertificateRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet;

    Aws::Utils::ByteBuffer m_csr;
    bool m_csrHasBeenSet;

    SigningAlgorithm m_signingAlgorithm;
    bool m_signingAlgorithmHasBeenSet;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet;

    Validity m_validity;
    bool m_validityHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
