/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class ImportCertificateAuthorityCertificateRequest : public ACMPCARequest
  {
  public:
    AWS_ACMPCA_API ImportCertificateAuthorityCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportCertificateAuthorityCertificate"; }

    AWS_ACMPCA_API Aws::String SerializePayload() const override;

    AWS_ACMPCA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline ImportCertificateAuthorityCertificateRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline ImportCertificateAuthorityCertificateRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>.
     * This must be of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline ImportCertificateAuthorityCertificateRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>The PEM-encoded certificate for a private CA. This may be a self-signed
     * certificate in the case of a root CA, or it may be signed by another CA that you
     * control.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The PEM-encoded certificate for a private CA. This may be a self-signed
     * certificate in the case of a root CA, or it may be signed by another CA that you
     * control.</p>
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>The PEM-encoded certificate for a private CA. This may be a self-signed
     * certificate in the case of a root CA, or it may be signed by another CA that you
     * control.</p>
     */
    inline void SetCertificate(const Aws::Utils::ByteBuffer& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The PEM-encoded certificate for a private CA. This may be a self-signed
     * certificate in the case of a root CA, or it may be signed by another CA that you
     * control.</p>
     */
    inline void SetCertificate(Aws::Utils::ByteBuffer&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>The PEM-encoded certificate for a private CA. This may be a self-signed
     * certificate in the case of a root CA, or it may be signed by another CA that you
     * control.</p>
     */
    inline ImportCertificateAuthorityCertificateRequest& WithCertificate(const Aws::Utils::ByteBuffer& value) { SetCertificate(value); return *this;}

    /**
     * <p>The PEM-encoded certificate for a private CA. This may be a self-signed
     * certificate in the case of a root CA, or it may be signed by another CA that you
     * control.</p>
     */
    inline ImportCertificateAuthorityCertificateRequest& WithCertificate(Aws::Utils::ByteBuffer&& value) { SetCertificate(std::move(value)); return *this;}


    /**
     * <p>A PEM-encoded file that contains all of your certificates, other than the
     * certificate you're importing, chaining up to your root CA. Your ACM Private
     * CA-hosted or on-premises root certificate is the last in the chain, and each
     * certificate in the chain signs the one preceding. </p> <p>This parameter must be
     * supplied when you import a subordinate CA. When you import a root CA, there is
     * no chain.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>A PEM-encoded file that contains all of your certificates, other than the
     * certificate you're importing, chaining up to your root CA. Your ACM Private
     * CA-hosted or on-premises root certificate is the last in the chain, and each
     * certificate in the chain signs the one preceding. </p> <p>This parameter must be
     * supplied when you import a subordinate CA. When you import a root CA, there is
     * no chain.</p>
     */
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }

    /**
     * <p>A PEM-encoded file that contains all of your certificates, other than the
     * certificate you're importing, chaining up to your root CA. Your ACM Private
     * CA-hosted or on-premises root certificate is the last in the chain, and each
     * certificate in the chain signs the one preceding. </p> <p>This parameter must be
     * supplied when you import a subordinate CA. When you import a root CA, there is
     * no chain.</p>
     */
    inline void SetCertificateChain(const Aws::Utils::ByteBuffer& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>A PEM-encoded file that contains all of your certificates, other than the
     * certificate you're importing, chaining up to your root CA. Your ACM Private
     * CA-hosted or on-premises root certificate is the last in the chain, and each
     * certificate in the chain signs the one preceding. </p> <p>This parameter must be
     * supplied when you import a subordinate CA. When you import a root CA, there is
     * no chain.</p>
     */
    inline void SetCertificateChain(Aws::Utils::ByteBuffer&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }

    /**
     * <p>A PEM-encoded file that contains all of your certificates, other than the
     * certificate you're importing, chaining up to your root CA. Your ACM Private
     * CA-hosted or on-premises root certificate is the last in the chain, and each
     * certificate in the chain signs the one preceding. </p> <p>This parameter must be
     * supplied when you import a subordinate CA. When you import a root CA, there is
     * no chain.</p>
     */
    inline ImportCertificateAuthorityCertificateRequest& WithCertificateChain(const Aws::Utils::ByteBuffer& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>A PEM-encoded file that contains all of your certificates, other than the
     * certificate you're importing, chaining up to your root CA. Your ACM Private
     * CA-hosted or on-premises root certificate is the last in the chain, and each
     * certificate in the chain signs the one preceding. </p> <p>This parameter must be
     * supplied when you import a subordinate CA. When you import a root CA, there is
     * no chain.</p>
     */
    inline ImportCertificateAuthorityCertificateRequest& WithCertificateChain(Aws::Utils::ByteBuffer&& value) { SetCertificateChain(std::move(value)); return *this;}

  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::Utils::ByteBuffer m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::Utils::ByteBuffer m_certificateChain;
    bool m_certificateChainHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
