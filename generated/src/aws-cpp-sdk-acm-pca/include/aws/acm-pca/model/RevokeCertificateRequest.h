/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/RevocationReason.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class RevokeCertificateRequest : public ACMPCARequest
  {
  public:
    AWS_ACMPCA_API RevokeCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeCertificate"; }

    AWS_ACMPCA_API Aws::String SerializePayload() const override;

    AWS_ACMPCA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const { return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    template<typename CertificateAuthorityArnT = Aws::String>
    void SetCertificateAuthorityArn(CertificateAuthorityArnT&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::forward<CertificateAuthorityArnT>(value); }
    template<typename CertificateAuthorityArnT = Aws::String>
    RevokeCertificateRequest& WithCertificateAuthorityArn(CertificateAuthorityArnT&& value) { SetCertificateAuthorityArn(std::forward<CertificateAuthorityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Serial number of the certificate to be revoked. This must be in hexadecimal
     * format. You can retrieve the serial number by calling <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_GetCertificate.html">GetCertificate</a>
     * with the Amazon Resource Name (ARN) of the certificate you want and the ARN of
     * your private CA. The <b>GetCertificate</b> action retrieves the certificate in
     * the PEM format. You can use the following OpenSSL command to list the
     * certificate in text format and copy the hexadecimal serial number. </p> <p>
     * <code>openssl x509 -in <i>file_path</i> -text -noout</code> </p> <p>You can also
     * copy the serial number from the console or use the <a
     * href="https://docs.aws.amazon.com/acm/latest/APIReference/API_DescribeCertificate.html">DescribeCertificate</a>
     * action in the <i>Certificate Manager API Reference</i>. </p>
     */
    inline const Aws::String& GetCertificateSerial() const { return m_certificateSerial; }
    inline bool CertificateSerialHasBeenSet() const { return m_certificateSerialHasBeenSet; }
    template<typename CertificateSerialT = Aws::String>
    void SetCertificateSerial(CertificateSerialT&& value) { m_certificateSerialHasBeenSet = true; m_certificateSerial = std::forward<CertificateSerialT>(value); }
    template<typename CertificateSerialT = Aws::String>
    RevokeCertificateRequest& WithCertificateSerial(CertificateSerialT&& value) { SetCertificateSerial(std::forward<CertificateSerialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies why you revoked the certificate.</p>
     */
    inline RevocationReason GetRevocationReason() const { return m_revocationReason; }
    inline bool RevocationReasonHasBeenSet() const { return m_revocationReasonHasBeenSet; }
    inline void SetRevocationReason(RevocationReason value) { m_revocationReasonHasBeenSet = true; m_revocationReason = value; }
    inline RevokeCertificateRequest& WithRevocationReason(RevocationReason value) { SetRevocationReason(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::String m_certificateSerial;
    bool m_certificateSerialHasBeenSet = false;

    RevocationReason m_revocationReason{RevocationReason::NOT_SET};
    bool m_revocationReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
