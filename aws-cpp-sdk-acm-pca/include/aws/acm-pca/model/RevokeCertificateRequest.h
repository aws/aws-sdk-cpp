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
  class AWS_ACMPCA_API RevokeCertificateRequest : public ACMPCARequest
  {
  public:
    RevokeCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeCertificate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline RevokeCertificateRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline RevokeCertificateRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline RevokeCertificateRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>Serial number of the certificate to be revoked. This must be in hexadecimal
     * format. You can retrieve the serial number by calling <a>GetCertificate</a> with
     * the Amazon Resource Name (ARN) of the certificate you want and the ARN of your
     * private CA. The <b>GetCertificate</b> action retrieves the certificate in the
     * PEM format. You can use the following OpenSSL command to list the certificate in
     * text format and copy the hexadecimal serial number. </p> <p> <code>openssl x509
     * -in <i>file_path</i> -text -noout</code> </p> <p>You can also copy the serial
     * number from the console or use the <a
     * href="https://docs.aws.amazon.com/acm/latest/APIReference/API_DescribeCertificate.html">DescribeCertificate</a>
     * action in the <i>AWS Certificate Manager API Reference</i>. </p>
     */
    inline const Aws::String& GetCertificateSerial() const{ return m_certificateSerial; }

    /**
     * <p>Serial number of the certificate to be revoked. This must be in hexadecimal
     * format. You can retrieve the serial number by calling <a>GetCertificate</a> with
     * the Amazon Resource Name (ARN) of the certificate you want and the ARN of your
     * private CA. The <b>GetCertificate</b> action retrieves the certificate in the
     * PEM format. You can use the following OpenSSL command to list the certificate in
     * text format and copy the hexadecimal serial number. </p> <p> <code>openssl x509
     * -in <i>file_path</i> -text -noout</code> </p> <p>You can also copy the serial
     * number from the console or use the <a
     * href="https://docs.aws.amazon.com/acm/latest/APIReference/API_DescribeCertificate.html">DescribeCertificate</a>
     * action in the <i>AWS Certificate Manager API Reference</i>. </p>
     */
    inline bool CertificateSerialHasBeenSet() const { return m_certificateSerialHasBeenSet; }

    /**
     * <p>Serial number of the certificate to be revoked. This must be in hexadecimal
     * format. You can retrieve the serial number by calling <a>GetCertificate</a> with
     * the Amazon Resource Name (ARN) of the certificate you want and the ARN of your
     * private CA. The <b>GetCertificate</b> action retrieves the certificate in the
     * PEM format. You can use the following OpenSSL command to list the certificate in
     * text format and copy the hexadecimal serial number. </p> <p> <code>openssl x509
     * -in <i>file_path</i> -text -noout</code> </p> <p>You can also copy the serial
     * number from the console or use the <a
     * href="https://docs.aws.amazon.com/acm/latest/APIReference/API_DescribeCertificate.html">DescribeCertificate</a>
     * action in the <i>AWS Certificate Manager API Reference</i>. </p>
     */
    inline void SetCertificateSerial(const Aws::String& value) { m_certificateSerialHasBeenSet = true; m_certificateSerial = value; }

    /**
     * <p>Serial number of the certificate to be revoked. This must be in hexadecimal
     * format. You can retrieve the serial number by calling <a>GetCertificate</a> with
     * the Amazon Resource Name (ARN) of the certificate you want and the ARN of your
     * private CA. The <b>GetCertificate</b> action retrieves the certificate in the
     * PEM format. You can use the following OpenSSL command to list the certificate in
     * text format and copy the hexadecimal serial number. </p> <p> <code>openssl x509
     * -in <i>file_path</i> -text -noout</code> </p> <p>You can also copy the serial
     * number from the console or use the <a
     * href="https://docs.aws.amazon.com/acm/latest/APIReference/API_DescribeCertificate.html">DescribeCertificate</a>
     * action in the <i>AWS Certificate Manager API Reference</i>. </p>
     */
    inline void SetCertificateSerial(Aws::String&& value) { m_certificateSerialHasBeenSet = true; m_certificateSerial = std::move(value); }

    /**
     * <p>Serial number of the certificate to be revoked. This must be in hexadecimal
     * format. You can retrieve the serial number by calling <a>GetCertificate</a> with
     * the Amazon Resource Name (ARN) of the certificate you want and the ARN of your
     * private CA. The <b>GetCertificate</b> action retrieves the certificate in the
     * PEM format. You can use the following OpenSSL command to list the certificate in
     * text format and copy the hexadecimal serial number. </p> <p> <code>openssl x509
     * -in <i>file_path</i> -text -noout</code> </p> <p>You can also copy the serial
     * number from the console or use the <a
     * href="https://docs.aws.amazon.com/acm/latest/APIReference/API_DescribeCertificate.html">DescribeCertificate</a>
     * action in the <i>AWS Certificate Manager API Reference</i>. </p>
     */
    inline void SetCertificateSerial(const char* value) { m_certificateSerialHasBeenSet = true; m_certificateSerial.assign(value); }

    /**
     * <p>Serial number of the certificate to be revoked. This must be in hexadecimal
     * format. You can retrieve the serial number by calling <a>GetCertificate</a> with
     * the Amazon Resource Name (ARN) of the certificate you want and the ARN of your
     * private CA. The <b>GetCertificate</b> action retrieves the certificate in the
     * PEM format. You can use the following OpenSSL command to list the certificate in
     * text format and copy the hexadecimal serial number. </p> <p> <code>openssl x509
     * -in <i>file_path</i> -text -noout</code> </p> <p>You can also copy the serial
     * number from the console or use the <a
     * href="https://docs.aws.amazon.com/acm/latest/APIReference/API_DescribeCertificate.html">DescribeCertificate</a>
     * action in the <i>AWS Certificate Manager API Reference</i>. </p>
     */
    inline RevokeCertificateRequest& WithCertificateSerial(const Aws::String& value) { SetCertificateSerial(value); return *this;}

    /**
     * <p>Serial number of the certificate to be revoked. This must be in hexadecimal
     * format. You can retrieve the serial number by calling <a>GetCertificate</a> with
     * the Amazon Resource Name (ARN) of the certificate you want and the ARN of your
     * private CA. The <b>GetCertificate</b> action retrieves the certificate in the
     * PEM format. You can use the following OpenSSL command to list the certificate in
     * text format and copy the hexadecimal serial number. </p> <p> <code>openssl x509
     * -in <i>file_path</i> -text -noout</code> </p> <p>You can also copy the serial
     * number from the console or use the <a
     * href="https://docs.aws.amazon.com/acm/latest/APIReference/API_DescribeCertificate.html">DescribeCertificate</a>
     * action in the <i>AWS Certificate Manager API Reference</i>. </p>
     */
    inline RevokeCertificateRequest& WithCertificateSerial(Aws::String&& value) { SetCertificateSerial(std::move(value)); return *this;}

    /**
     * <p>Serial number of the certificate to be revoked. This must be in hexadecimal
     * format. You can retrieve the serial number by calling <a>GetCertificate</a> with
     * the Amazon Resource Name (ARN) of the certificate you want and the ARN of your
     * private CA. The <b>GetCertificate</b> action retrieves the certificate in the
     * PEM format. You can use the following OpenSSL command to list the certificate in
     * text format and copy the hexadecimal serial number. </p> <p> <code>openssl x509
     * -in <i>file_path</i> -text -noout</code> </p> <p>You can also copy the serial
     * number from the console or use the <a
     * href="https://docs.aws.amazon.com/acm/latest/APIReference/API_DescribeCertificate.html">DescribeCertificate</a>
     * action in the <i>AWS Certificate Manager API Reference</i>. </p>
     */
    inline RevokeCertificateRequest& WithCertificateSerial(const char* value) { SetCertificateSerial(value); return *this;}


    /**
     * <p>Specifies why you revoked the certificate.</p>
     */
    inline const RevocationReason& GetRevocationReason() const{ return m_revocationReason; }

    /**
     * <p>Specifies why you revoked the certificate.</p>
     */
    inline bool RevocationReasonHasBeenSet() const { return m_revocationReasonHasBeenSet; }

    /**
     * <p>Specifies why you revoked the certificate.</p>
     */
    inline void SetRevocationReason(const RevocationReason& value) { m_revocationReasonHasBeenSet = true; m_revocationReason = value; }

    /**
     * <p>Specifies why you revoked the certificate.</p>
     */
    inline void SetRevocationReason(RevocationReason&& value) { m_revocationReasonHasBeenSet = true; m_revocationReason = std::move(value); }

    /**
     * <p>Specifies why you revoked the certificate.</p>
     */
    inline RevokeCertificateRequest& WithRevocationReason(const RevocationReason& value) { SetRevocationReason(value); return *this;}

    /**
     * <p>Specifies why you revoked the certificate.</p>
     */
    inline RevokeCertificateRequest& WithRevocationReason(RevocationReason&& value) { SetRevocationReason(std::move(value)); return *this;}

  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet;

    Aws::String m_certificateSerial;
    bool m_certificateSerialHasBeenSet;

    RevocationReason m_revocationReason;
    bool m_revocationReasonHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
