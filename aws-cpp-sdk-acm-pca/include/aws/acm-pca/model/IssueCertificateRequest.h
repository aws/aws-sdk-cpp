/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/acm-pca/model/ApiPassthrough.h>
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
  class IssueCertificateRequest : public ACMPCARequest
  {
  public:
    AWS_ACMPCA_API IssueCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "IssueCertificate"; }

    AWS_ACMPCA_API Aws::String SerializePayload() const override;

    AWS_ACMPCA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies X.509 certificate information to be included in the issued
     * certificate. An <code>APIPassthrough</code> or <code>APICSRPassthrough</code>
     * template variant must be selected, or else this parameter is ignored. For more
     * information about using these templates, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p> <p>If conflicting or duplicate certificate
     * information is supplied during certificate issuance, ACM Private CA applies <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html#template-order-of-operations">order
     * of operation rules</a> to determine what information is used.</p>
     */
    inline const ApiPassthrough& GetApiPassthrough() const{ return m_apiPassthrough; }

    /**
     * <p>Specifies X.509 certificate information to be included in the issued
     * certificate. An <code>APIPassthrough</code> or <code>APICSRPassthrough</code>
     * template variant must be selected, or else this parameter is ignored. For more
     * information about using these templates, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p> <p>If conflicting or duplicate certificate
     * information is supplied during certificate issuance, ACM Private CA applies <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html#template-order-of-operations">order
     * of operation rules</a> to determine what information is used.</p>
     */
    inline bool ApiPassthroughHasBeenSet() const { return m_apiPassthroughHasBeenSet; }

    /**
     * <p>Specifies X.509 certificate information to be included in the issued
     * certificate. An <code>APIPassthrough</code> or <code>APICSRPassthrough</code>
     * template variant must be selected, or else this parameter is ignored. For more
     * information about using these templates, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p> <p>If conflicting or duplicate certificate
     * information is supplied during certificate issuance, ACM Private CA applies <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html#template-order-of-operations">order
     * of operation rules</a> to determine what information is used.</p>
     */
    inline void SetApiPassthrough(const ApiPassthrough& value) { m_apiPassthroughHasBeenSet = true; m_apiPassthrough = value; }

    /**
     * <p>Specifies X.509 certificate information to be included in the issued
     * certificate. An <code>APIPassthrough</code> or <code>APICSRPassthrough</code>
     * template variant must be selected, or else this parameter is ignored. For more
     * information about using these templates, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p> <p>If conflicting or duplicate certificate
     * information is supplied during certificate issuance, ACM Private CA applies <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html#template-order-of-operations">order
     * of operation rules</a> to determine what information is used.</p>
     */
    inline void SetApiPassthrough(ApiPassthrough&& value) { m_apiPassthroughHasBeenSet = true; m_apiPassthrough = std::move(value); }

    /**
     * <p>Specifies X.509 certificate information to be included in the issued
     * certificate. An <code>APIPassthrough</code> or <code>APICSRPassthrough</code>
     * template variant must be selected, or else this parameter is ignored. For more
     * information about using these templates, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p> <p>If conflicting or duplicate certificate
     * information is supplied during certificate issuance, ACM Private CA applies <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html#template-order-of-operations">order
     * of operation rules</a> to determine what information is used.</p>
     */
    inline IssueCertificateRequest& WithApiPassthrough(const ApiPassthrough& value) { SetApiPassthrough(value); return *this;}

    /**
     * <p>Specifies X.509 certificate information to be included in the issued
     * certificate. An <code>APIPassthrough</code> or <code>APICSRPassthrough</code>
     * template variant must be selected, or else this parameter is ignored. For more
     * information about using these templates, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p> <p>If conflicting or duplicate certificate
     * information is supplied during certificate issuance, ACM Private CA applies <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html#template-order-of-operations">order
     * of operation rules</a> to determine what information is used.</p>
     */
    inline IssueCertificateRequest& WithApiPassthrough(ApiPassthrough&& value) { SetApiPassthrough(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline IssueCertificateRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline IssueCertificateRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline IssueCertificateRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * As an example, you can use the following OpenSSL command to create the CSR and a
     * 2048 bit RSA private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days
     * 365 -keyout private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     * <p>If you have a configuration file, you can then use the following OpenSSL
     * command. The <code>usr_cert</code> block in the configuration file contains your
     * X509 version 3 extensions. </p> <p> <code>openssl req -new -config
     * openssl_rsa.cnf -extensions usr_cert -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>Note: A
     * CSR must provide either a <i>subject name</i> or a <i>subject alternative
     * name</i> or the request will be rejected. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetCsr() const{ return m_csr; }

    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * As an example, you can use the following OpenSSL command to create the CSR and a
     * 2048 bit RSA private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days
     * 365 -keyout private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     * <p>If you have a configuration file, you can then use the following OpenSSL
     * command. The <code>usr_cert</code> block in the configuration file contains your
     * X509 version 3 extensions. </p> <p> <code>openssl req -new -config
     * openssl_rsa.cnf -extensions usr_cert -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>Note: A
     * CSR must provide either a <i>subject name</i> or a <i>subject alternative
     * name</i> or the request will be rejected. </p>
     */
    inline bool CsrHasBeenSet() const { return m_csrHasBeenSet; }

    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * As an example, you can use the following OpenSSL command to create the CSR and a
     * 2048 bit RSA private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days
     * 365 -keyout private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     * <p>If you have a configuration file, you can then use the following OpenSSL
     * command. The <code>usr_cert</code> block in the configuration file contains your
     * X509 version 3 extensions. </p> <p> <code>openssl req -new -config
     * openssl_rsa.cnf -extensions usr_cert -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>Note: A
     * CSR must provide either a <i>subject name</i> or a <i>subject alternative
     * name</i> or the request will be rejected. </p>
     */
    inline void SetCsr(const Aws::Utils::ByteBuffer& value) { m_csrHasBeenSet = true; m_csr = value; }

    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * As an example, you can use the following OpenSSL command to create the CSR and a
     * 2048 bit RSA private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days
     * 365 -keyout private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     * <p>If you have a configuration file, you can then use the following OpenSSL
     * command. The <code>usr_cert</code> block in the configuration file contains your
     * X509 version 3 extensions. </p> <p> <code>openssl req -new -config
     * openssl_rsa.cnf -extensions usr_cert -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>Note: A
     * CSR must provide either a <i>subject name</i> or a <i>subject alternative
     * name</i> or the request will be rejected. </p>
     */
    inline void SetCsr(Aws::Utils::ByteBuffer&& value) { m_csrHasBeenSet = true; m_csr = std::move(value); }

    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * As an example, you can use the following OpenSSL command to create the CSR and a
     * 2048 bit RSA private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days
     * 365 -keyout private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     * <p>If you have a configuration file, you can then use the following OpenSSL
     * command. The <code>usr_cert</code> block in the configuration file contains your
     * X509 version 3 extensions. </p> <p> <code>openssl req -new -config
     * openssl_rsa.cnf -extensions usr_cert -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>Note: A
     * CSR must provide either a <i>subject name</i> or a <i>subject alternative
     * name</i> or the request will be rejected. </p>
     */
    inline IssueCertificateRequest& WithCsr(const Aws::Utils::ByteBuffer& value) { SetCsr(value); return *this;}

    /**
     * <p>The certificate signing request (CSR) for the certificate you want to issue.
     * As an example, you can use the following OpenSSL command to create the CSR and a
     * 2048 bit RSA private key. </p> <p> <code>openssl req -new -newkey rsa:2048 -days
     * 365 -keyout private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p>
     * <p>If you have a configuration file, you can then use the following OpenSSL
     * command. The <code>usr_cert</code> block in the configuration file contains your
     * X509 version 3 extensions. </p> <p> <code>openssl req -new -config
     * openssl_rsa.cnf -extensions usr_cert -newkey rsa:2048 -days 365 -keyout
     * private/test_cert_priv_key.pem -out csr/test_cert_.csr</code> </p> <p>Note: A
     * CSR must provide either a <i>subject name</i> or a <i>subject alternative
     * name</i> or the request will be rejected. </p>
     */
    inline IssueCertificateRequest& WithCsr(Aws::Utils::ByteBuffer&& value) { SetCsr(std::move(value)); return *this;}


    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued. </p> <p>This parameter should not be confused with the
     * <code>SigningAlgorithm</code> parameter used to sign a CSR in the
     * <code>CreateCertificateAuthority</code> action.</p>  <p>The specified
     * signing algorithm family (RSA or ECDSA) much match the algorithm family of the
     * CA's secret key.</p> 
     */
    inline const SigningAlgorithm& GetSigningAlgorithm() const{ return m_signingAlgorithm; }

    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued. </p> <p>This parameter should not be confused with the
     * <code>SigningAlgorithm</code> parameter used to sign a CSR in the
     * <code>CreateCertificateAuthority</code> action.</p>  <p>The specified
     * signing algorithm family (RSA or ECDSA) much match the algorithm family of the
     * CA's secret key.</p> 
     */
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }

    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued. </p> <p>This parameter should not be confused with the
     * <code>SigningAlgorithm</code> parameter used to sign a CSR in the
     * <code>CreateCertificateAuthority</code> action.</p>  <p>The specified
     * signing algorithm family (RSA or ECDSA) much match the algorithm family of the
     * CA's secret key.</p> 
     */
    inline void SetSigningAlgorithm(const SigningAlgorithm& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }

    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued. </p> <p>This parameter should not be confused with the
     * <code>SigningAlgorithm</code> parameter used to sign a CSR in the
     * <code>CreateCertificateAuthority</code> action.</p>  <p>The specified
     * signing algorithm family (RSA or ECDSA) much match the algorithm family of the
     * CA's secret key.</p> 
     */
    inline void SetSigningAlgorithm(SigningAlgorithm&& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = std::move(value); }

    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued. </p> <p>This parameter should not be confused with the
     * <code>SigningAlgorithm</code> parameter used to sign a CSR in the
     * <code>CreateCertificateAuthority</code> action.</p>  <p>The specified
     * signing algorithm family (RSA or ECDSA) much match the algorithm family of the
     * CA's secret key.</p> 
     */
    inline IssueCertificateRequest& WithSigningAlgorithm(const SigningAlgorithm& value) { SetSigningAlgorithm(value); return *this;}

    /**
     * <p>The name of the algorithm that will be used to sign the certificate to be
     * issued. </p> <p>This parameter should not be confused with the
     * <code>SigningAlgorithm</code> parameter used to sign a CSR in the
     * <code>CreateCertificateAuthority</code> action.</p>  <p>The specified
     * signing algorithm family (RSA or ECDSA) much match the algorithm family of the
     * CA's secret key.</p> 
     */
    inline IssueCertificateRequest& WithSigningAlgorithm(SigningAlgorithm&& value) { SetSigningAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template. For CA certificates, you should
     * choose the shortest path length that meets your needs. The path length is
     * indicated by the PathLen<i>N</i> portion of the ARN, where <i>N</i> is the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaTerms.html#terms-cadepth">CA
     * depth</a>.</p> <p>Note: The CA depth configured on a subordinate CA certificate
     * must not exceed the limit set by its parents in the CA hierarchy.</p> <p>For a
     * list of <code>TemplateArn</code> values supported by ACM Private CA, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template. For CA certificates, you should
     * choose the shortest path length that meets your needs. The path length is
     * indicated by the PathLen<i>N</i> portion of the ARN, where <i>N</i> is the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaTerms.html#terms-cadepth">CA
     * depth</a>.</p> <p>Note: The CA depth configured on a subordinate CA certificate
     * must not exceed the limit set by its parents in the CA hierarchy.</p> <p>For a
     * list of <code>TemplateArn</code> values supported by ACM Private CA, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p>
     */
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template. For CA certificates, you should
     * choose the shortest path length that meets your needs. The path length is
     * indicated by the PathLen<i>N</i> portion of the ARN, where <i>N</i> is the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaTerms.html#terms-cadepth">CA
     * depth</a>.</p> <p>Note: The CA depth configured on a subordinate CA certificate
     * must not exceed the limit set by its parents in the CA hierarchy.</p> <p>For a
     * list of <code>TemplateArn</code> values supported by ACM Private CA, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template. For CA certificates, you should
     * choose the shortest path length that meets your needs. The path length is
     * indicated by the PathLen<i>N</i> portion of the ARN, where <i>N</i> is the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaTerms.html#terms-cadepth">CA
     * depth</a>.</p> <p>Note: The CA depth configured on a subordinate CA certificate
     * must not exceed the limit set by its parents in the CA hierarchy.</p> <p>For a
     * list of <code>TemplateArn</code> values supported by ACM Private CA, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template. For CA certificates, you should
     * choose the shortest path length that meets your needs. The path length is
     * indicated by the PathLen<i>N</i> portion of the ARN, where <i>N</i> is the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaTerms.html#terms-cadepth">CA
     * depth</a>.</p> <p>Note: The CA depth configured on a subordinate CA certificate
     * must not exceed the limit set by its parents in the CA hierarchy.</p> <p>For a
     * list of <code>TemplateArn</code> values supported by ACM Private CA, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template. For CA certificates, you should
     * choose the shortest path length that meets your needs. The path length is
     * indicated by the PathLen<i>N</i> portion of the ARN, where <i>N</i> is the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaTerms.html#terms-cadepth">CA
     * depth</a>.</p> <p>Note: The CA depth configured on a subordinate CA certificate
     * must not exceed the limit set by its parents in the CA hierarchy.</p> <p>For a
     * list of <code>TemplateArn</code> values supported by ACM Private CA, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p>
     */
    inline IssueCertificateRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template. For CA certificates, you should
     * choose the shortest path length that meets your needs. The path length is
     * indicated by the PathLen<i>N</i> portion of the ARN, where <i>N</i> is the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaTerms.html#terms-cadepth">CA
     * depth</a>.</p> <p>Note: The CA depth configured on a subordinate CA certificate
     * must not exceed the limit set by its parents in the CA hierarchy.</p> <p>For a
     * list of <code>TemplateArn</code> values supported by ACM Private CA, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p>
     */
    inline IssueCertificateRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>Specifies a custom configuration template to use when issuing a certificate.
     * If this parameter is not provided, ACM Private CA defaults to the
     * <code>EndEntityCertificate/V1</code> template. For CA certificates, you should
     * choose the shortest path length that meets your needs. The path length is
     * indicated by the PathLen<i>N</i> portion of the ARN, where <i>N</i> is the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaTerms.html#terms-cadepth">CA
     * depth</a>.</p> <p>Note: The CA depth configured on a subordinate CA certificate
     * must not exceed the limit set by its parents in the CA hierarchy.</p> <p>For a
     * list of <code>TemplateArn</code> values supported by ACM Private CA, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/UsingTemplates.html">Understanding
     * Certificate Templates</a>.</p>
     */
    inline IssueCertificateRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate.</p> <p>Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280. </p> <p>This value is unaffected when
     * <code>ValidityNotBefore</code> is also specified. For example, if
     * <code>Validity</code> is set to 20 days in the future, the certificate will
     * expire 20 days from issuance time regardless of the
     * <code>ValidityNotBefore</code> value.</p> <p>The end of the validity period
     * configured on a certificate must not exceed the limit set on its parents in the
     * CA hierarchy.</p>
     */
    inline const Validity& GetValidity() const{ return m_validity; }

    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate.</p> <p>Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280. </p> <p>This value is unaffected when
     * <code>ValidityNotBefore</code> is also specified. For example, if
     * <code>Validity</code> is set to 20 days in the future, the certificate will
     * expire 20 days from issuance time regardless of the
     * <code>ValidityNotBefore</code> value.</p> <p>The end of the validity period
     * configured on a certificate must not exceed the limit set on its parents in the
     * CA hierarchy.</p>
     */
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }

    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate.</p> <p>Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280. </p> <p>This value is unaffected when
     * <code>ValidityNotBefore</code> is also specified. For example, if
     * <code>Validity</code> is set to 20 days in the future, the certificate will
     * expire 20 days from issuance time regardless of the
     * <code>ValidityNotBefore</code> value.</p> <p>The end of the validity period
     * configured on a certificate must not exceed the limit set on its parents in the
     * CA hierarchy.</p>
     */
    inline void SetValidity(const Validity& value) { m_validityHasBeenSet = true; m_validity = value; }

    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate.</p> <p>Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280. </p> <p>This value is unaffected when
     * <code>ValidityNotBefore</code> is also specified. For example, if
     * <code>Validity</code> is set to 20 days in the future, the certificate will
     * expire 20 days from issuance time regardless of the
     * <code>ValidityNotBefore</code> value.</p> <p>The end of the validity period
     * configured on a certificate must not exceed the limit set on its parents in the
     * CA hierarchy.</p>
     */
    inline void SetValidity(Validity&& value) { m_validityHasBeenSet = true; m_validity = std::move(value); }

    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate.</p> <p>Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280. </p> <p>This value is unaffected when
     * <code>ValidityNotBefore</code> is also specified. For example, if
     * <code>Validity</code> is set to 20 days in the future, the certificate will
     * expire 20 days from issuance time regardless of the
     * <code>ValidityNotBefore</code> value.</p> <p>The end of the validity period
     * configured on a certificate must not exceed the limit set on its parents in the
     * CA hierarchy.</p>
     */
    inline IssueCertificateRequest& WithValidity(const Validity& value) { SetValidity(value); return *this;}

    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate.</p> <p>Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280. </p> <p>This value is unaffected when
     * <code>ValidityNotBefore</code> is also specified. For example, if
     * <code>Validity</code> is set to 20 days in the future, the certificate will
     * expire 20 days from issuance time regardless of the
     * <code>ValidityNotBefore</code> value.</p> <p>The end of the validity period
     * configured on a certificate must not exceed the limit set on its parents in the
     * CA hierarchy.</p>
     */
    inline IssueCertificateRequest& WithValidity(Validity&& value) { SetValidity(std::move(value)); return *this;}


    /**
     * <p>Information describing the start of the validity period of the certificate.
     * This parameter sets the “Not Before" date for the certificate.</p> <p>By
     * default, when issuing a certificate, ACM Private CA sets the "Not Before" date
     * to the issuance time minus 60 minutes. This compensates for clock
     * inconsistencies across computer systems. The <code>ValidityNotBefore</code>
     * parameter can be used to customize the “Not Before” value. </p> <p>Unlike the
     * <code>Validity</code> parameter, the <code>ValidityNotBefore</code> parameter is
     * optional.</p> <p>The <code>ValidityNotBefore</code> value is expressed as an
     * explicit date and time, using the <code>Validity</code> type value
     * <code>ABSOLUTE</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_Validity.html">Validity</a>
     * in this API reference and <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280.</p>
     */
    inline const Validity& GetValidityNotBefore() const{ return m_validityNotBefore; }

    /**
     * <p>Information describing the start of the validity period of the certificate.
     * This parameter sets the “Not Before" date for the certificate.</p> <p>By
     * default, when issuing a certificate, ACM Private CA sets the "Not Before" date
     * to the issuance time minus 60 minutes. This compensates for clock
     * inconsistencies across computer systems. The <code>ValidityNotBefore</code>
     * parameter can be used to customize the “Not Before” value. </p> <p>Unlike the
     * <code>Validity</code> parameter, the <code>ValidityNotBefore</code> parameter is
     * optional.</p> <p>The <code>ValidityNotBefore</code> value is expressed as an
     * explicit date and time, using the <code>Validity</code> type value
     * <code>ABSOLUTE</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_Validity.html">Validity</a>
     * in this API reference and <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280.</p>
     */
    inline bool ValidityNotBeforeHasBeenSet() const { return m_validityNotBeforeHasBeenSet; }

    /**
     * <p>Information describing the start of the validity period of the certificate.
     * This parameter sets the “Not Before" date for the certificate.</p> <p>By
     * default, when issuing a certificate, ACM Private CA sets the "Not Before" date
     * to the issuance time minus 60 minutes. This compensates for clock
     * inconsistencies across computer systems. The <code>ValidityNotBefore</code>
     * parameter can be used to customize the “Not Before” value. </p> <p>Unlike the
     * <code>Validity</code> parameter, the <code>ValidityNotBefore</code> parameter is
     * optional.</p> <p>The <code>ValidityNotBefore</code> value is expressed as an
     * explicit date and time, using the <code>Validity</code> type value
     * <code>ABSOLUTE</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_Validity.html">Validity</a>
     * in this API reference and <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280.</p>
     */
    inline void SetValidityNotBefore(const Validity& value) { m_validityNotBeforeHasBeenSet = true; m_validityNotBefore = value; }

    /**
     * <p>Information describing the start of the validity period of the certificate.
     * This parameter sets the “Not Before" date for the certificate.</p> <p>By
     * default, when issuing a certificate, ACM Private CA sets the "Not Before" date
     * to the issuance time minus 60 minutes. This compensates for clock
     * inconsistencies across computer systems. The <code>ValidityNotBefore</code>
     * parameter can be used to customize the “Not Before” value. </p> <p>Unlike the
     * <code>Validity</code> parameter, the <code>ValidityNotBefore</code> parameter is
     * optional.</p> <p>The <code>ValidityNotBefore</code> value is expressed as an
     * explicit date and time, using the <code>Validity</code> type value
     * <code>ABSOLUTE</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_Validity.html">Validity</a>
     * in this API reference and <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280.</p>
     */
    inline void SetValidityNotBefore(Validity&& value) { m_validityNotBeforeHasBeenSet = true; m_validityNotBefore = std::move(value); }

    /**
     * <p>Information describing the start of the validity period of the certificate.
     * This parameter sets the “Not Before" date for the certificate.</p> <p>By
     * default, when issuing a certificate, ACM Private CA sets the "Not Before" date
     * to the issuance time minus 60 minutes. This compensates for clock
     * inconsistencies across computer systems. The <code>ValidityNotBefore</code>
     * parameter can be used to customize the “Not Before” value. </p> <p>Unlike the
     * <code>Validity</code> parameter, the <code>ValidityNotBefore</code> parameter is
     * optional.</p> <p>The <code>ValidityNotBefore</code> value is expressed as an
     * explicit date and time, using the <code>Validity</code> type value
     * <code>ABSOLUTE</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_Validity.html">Validity</a>
     * in this API reference and <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280.</p>
     */
    inline IssueCertificateRequest& WithValidityNotBefore(const Validity& value) { SetValidityNotBefore(value); return *this;}

    /**
     * <p>Information describing the start of the validity period of the certificate.
     * This parameter sets the “Not Before" date for the certificate.</p> <p>By
     * default, when issuing a certificate, ACM Private CA sets the "Not Before" date
     * to the issuance time minus 60 minutes. This compensates for clock
     * inconsistencies across computer systems. The <code>ValidityNotBefore</code>
     * parameter can be used to customize the “Not Before” value. </p> <p>Unlike the
     * <code>Validity</code> parameter, the <code>ValidityNotBefore</code> parameter is
     * optional.</p> <p>The <code>ValidityNotBefore</code> value is expressed as an
     * explicit date and time, using the <code>Validity</code> type value
     * <code>ABSOLUTE</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_Validity.html">Validity</a>
     * in this API reference and <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.1.2.5">Validity</a>
     * in RFC 5280.</p>
     */
    inline IssueCertificateRequest& WithValidityNotBefore(Validity&& value) { SetValidityNotBefore(std::move(value)); return *this;}


    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens for <b>IssueCertificate</b>
     * time out after one minute. Therefore, if you call <b>IssueCertificate</b>
     * multiple times with the same idempotency token within one minute, ACM Private CA
     * recognizes that you are requesting only one certificate and will issue only one.
     * If you change the idempotency token for each call, PCA recognizes that you are
     * requesting multiple certificates.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens for <b>IssueCertificate</b>
     * time out after one minute. Therefore, if you call <b>IssueCertificate</b>
     * multiple times with the same idempotency token within one minute, ACM Private CA
     * recognizes that you are requesting only one certificate and will issue only one.
     * If you change the idempotency token for each call, PCA recognizes that you are
     * requesting multiple certificates.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens for <b>IssueCertificate</b>
     * time out after one minute. Therefore, if you call <b>IssueCertificate</b>
     * multiple times with the same idempotency token within one minute, ACM Private CA
     * recognizes that you are requesting only one certificate and will issue only one.
     * If you change the idempotency token for each call, PCA recognizes that you are
     * requesting multiple certificates.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens for <b>IssueCertificate</b>
     * time out after one minute. Therefore, if you call <b>IssueCertificate</b>
     * multiple times with the same idempotency token within one minute, ACM Private CA
     * recognizes that you are requesting only one certificate and will issue only one.
     * If you change the idempotency token for each call, PCA recognizes that you are
     * requesting multiple certificates.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens for <b>IssueCertificate</b>
     * time out after one minute. Therefore, if you call <b>IssueCertificate</b>
     * multiple times with the same idempotency token within one minute, ACM Private CA
     * recognizes that you are requesting only one certificate and will issue only one.
     * If you change the idempotency token for each call, PCA recognizes that you are
     * requesting multiple certificates.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens for <b>IssueCertificate</b>
     * time out after one minute. Therefore, if you call <b>IssueCertificate</b>
     * multiple times with the same idempotency token within one minute, ACM Private CA
     * recognizes that you are requesting only one certificate and will issue only one.
     * If you change the idempotency token for each call, PCA recognizes that you are
     * requesting multiple certificates.</p>
     */
    inline IssueCertificateRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens for <b>IssueCertificate</b>
     * time out after one minute. Therefore, if you call <b>IssueCertificate</b>
     * multiple times with the same idempotency token within one minute, ACM Private CA
     * recognizes that you are requesting only one certificate and will issue only one.
     * If you change the idempotency token for each call, PCA recognizes that you are
     * requesting multiple certificates.</p>
     */
    inline IssueCertificateRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to the
     * <b>IssueCertificate</b> action. Idempotency tokens for <b>IssueCertificate</b>
     * time out after one minute. Therefore, if you call <b>IssueCertificate</b>
     * multiple times with the same idempotency token within one minute, ACM Private CA
     * recognizes that you are requesting only one certificate and will issue only one.
     * If you change the idempotency token for each call, PCA recognizes that you are
     * requesting multiple certificates.</p>
     */
    inline IssueCertificateRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    ApiPassthrough m_apiPassthrough;
    bool m_apiPassthroughHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::Utils::ByteBuffer m_csr;
    bool m_csrHasBeenSet = false;

    SigningAlgorithm m_signingAlgorithm;
    bool m_signingAlgorithmHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Validity m_validity;
    bool m_validityHasBeenSet = false;

    Validity m_validityNotBefore;
    bool m_validityNotBeforeHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
