/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/RevocationConfiguration.h>
#include <aws/acm-pca/model/CertificateAuthorityStatus.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class UpdateCertificateAuthorityRequest : public ACMPCARequest
  {
  public:
    AWS_ACMPCA_API UpdateCertificateAuthorityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificateAuthority"; }

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
    UpdateCertificateAuthorityRequest& WithCertificateAuthorityArn(CertificateAuthorityArnT&& value) { SetCertificateAuthorityArn(std::forward<CertificateAuthorityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information to enable support for Online Certificate Status Protocol
     * (OCSP), certificate revocation list (CRL), both protocols, or neither. If you
     * don't supply this parameter, existing capibilites remain unchanged. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_OcspConfiguration.html">OcspConfiguration</a>
     * and <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CrlConfiguration.html">CrlConfiguration</a>
     * types.</p> <p>The following requirements apply to revocation configurations.</p>
     * <ul> <li> <p>A configuration disabling CRLs or OCSP must contain only the
     * <code>Enabled=False</code> parameter, and will fail if other parameters such as
     * <code>CustomCname</code> or <code>ExpirationInDays</code> are included.</p>
     * </li> <li> <p>In a CRL configuration, the <code>S3BucketName</code> parameter
     * must conform to <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html">Amazon
     * S3 bucket naming rules</a>.</p> </li> <li> <p>A configuration containing a
     * custom Canonical Name (CNAME) parameter for CRLs or OCSP must conform to <a
     * href="https://www.ietf.org/rfc/rfc2396.txt">RFC2396</a> restrictions on the use
     * of special characters in a CNAME. </p> </li> <li> <p>In a CRL or OCSP
     * configuration, the value of a CNAME parameter must not include a protocol prefix
     * such as "http://" or "https://".</p> </li> </ul>  <p> If you update
     * the <code>S3BucketName</code> of <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CrlConfiguration.html">CrlConfiguration</a>,
     * you can break revocation for existing certificates. In other words, if you call
     * <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_UpdateCertificateAuthority.html">UpdateCertificateAuthority</a>
     * to update the CRL configuration's S3 bucket name, Amazon Web Services Private CA
     * only writes CRLs to the new S3 bucket. Certificates issued prior to this point
     * will have the old S3 bucket name in your CRL Distribution Point (CDP) extension,
     * essentially breaking revocation. If you must update the S3 bucket, you'll need
     * to reissue old certificates to keep the revocation working. Alternatively, you
     * can use a <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CrlConfiguration.html#privateca-Type-CrlConfiguration-CustomCname">CustomCname</a>
     * in your CRL configuration if you might need to change the S3 bucket name in the
     * future.</p> 
     */
    inline const RevocationConfiguration& GetRevocationConfiguration() const { return m_revocationConfiguration; }
    inline bool RevocationConfigurationHasBeenSet() const { return m_revocationConfigurationHasBeenSet; }
    template<typename RevocationConfigurationT = RevocationConfiguration>
    void SetRevocationConfiguration(RevocationConfigurationT&& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = std::forward<RevocationConfigurationT>(value); }
    template<typename RevocationConfigurationT = RevocationConfiguration>
    UpdateCertificateAuthorityRequest& WithRevocationConfiguration(RevocationConfigurationT&& value) { SetRevocationConfiguration(std::forward<RevocationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of your private CA.</p>
     */
    inline CertificateAuthorityStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CertificateAuthorityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateCertificateAuthorityRequest& WithStatus(CertificateAuthorityStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    RevocationConfiguration m_revocationConfiguration;
    bool m_revocationConfigurationHasBeenSet = false;

    CertificateAuthorityStatus m_status{CertificateAuthorityStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
