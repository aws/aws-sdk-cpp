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
  class AWS_ACMPCA_API UpdateCertificateAuthorityRequest : public ACMPCARequest
  {
  public:
    UpdateCertificateAuthorityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificateAuthority"; }

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
    inline UpdateCertificateAuthorityRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline UpdateCertificateAuthorityRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline UpdateCertificateAuthorityRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>Revocation information for your private CA.</p>
     */
    inline const RevocationConfiguration& GetRevocationConfiguration() const{ return m_revocationConfiguration; }

    /**
     * <p>Revocation information for your private CA.</p>
     */
    inline bool RevocationConfigurationHasBeenSet() const { return m_revocationConfigurationHasBeenSet; }

    /**
     * <p>Revocation information for your private CA.</p>
     */
    inline void SetRevocationConfiguration(const RevocationConfiguration& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = value; }

    /**
     * <p>Revocation information for your private CA.</p>
     */
    inline void SetRevocationConfiguration(RevocationConfiguration&& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = std::move(value); }

    /**
     * <p>Revocation information for your private CA.</p>
     */
    inline UpdateCertificateAuthorityRequest& WithRevocationConfiguration(const RevocationConfiguration& value) { SetRevocationConfiguration(value); return *this;}

    /**
     * <p>Revocation information for your private CA.</p>
     */
    inline UpdateCertificateAuthorityRequest& WithRevocationConfiguration(RevocationConfiguration&& value) { SetRevocationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Status of your private CA.</p>
     */
    inline const CertificateAuthorityStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of your private CA.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of your private CA.</p>
     */
    inline void SetStatus(const CertificateAuthorityStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of your private CA.</p>
     */
    inline void SetStatus(CertificateAuthorityStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of your private CA.</p>
     */
    inline UpdateCertificateAuthorityRequest& WithStatus(const CertificateAuthorityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of your private CA.</p>
     */
    inline UpdateCertificateAuthorityRequest& WithStatus(CertificateAuthorityStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet;

    RevocationConfiguration m_revocationConfiguration;
    bool m_revocationConfigurationHasBeenSet;

    CertificateAuthorityStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
