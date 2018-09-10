﻿/*
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
#include <aws/acm-pca/model/CertificateAuthorityConfiguration.h>
#include <aws/acm-pca/model/RevocationConfiguration.h>
#include <aws/acm-pca/model/CertificateAuthorityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class AWS_ACMPCA_API CreateCertificateAuthorityRequest : public ACMPCARequest
  {
  public:
    CreateCertificateAuthorityRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCertificateAuthority"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline const CertificateAuthorityConfiguration& GetCertificateAuthorityConfiguration() const{ return m_certificateAuthorityConfiguration; }

    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline void SetCertificateAuthorityConfiguration(const CertificateAuthorityConfiguration& value) { m_certificateAuthorityConfigurationHasBeenSet = true; m_certificateAuthorityConfiguration = value; }

    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline void SetCertificateAuthorityConfiguration(CertificateAuthorityConfiguration&& value) { m_certificateAuthorityConfigurationHasBeenSet = true; m_certificateAuthorityConfiguration = std::move(value); }

    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline CreateCertificateAuthorityRequest& WithCertificateAuthorityConfiguration(const CertificateAuthorityConfiguration& value) { SetCertificateAuthorityConfiguration(value); return *this;}

    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline CreateCertificateAuthorityRequest& WithCertificateAuthorityConfiguration(CertificateAuthorityConfiguration&& value) { SetCertificateAuthorityConfiguration(std::move(value)); return *this;}


    /**
     * <p>Contains a Boolean value that you can use to enable a certification
     * revocation list (CRL) for the CA, the name of the S3 bucket to which ACM PCA
     * will write the CRL, and an optional CNAME alias that you can use to hide the
     * name of your bucket in the <b>CRL Distribution Points</b> extension of your CA
     * certificate. For more information, see the <a>CrlConfiguration</a> structure.
     * </p>
     */
    inline const RevocationConfiguration& GetRevocationConfiguration() const{ return m_revocationConfiguration; }

    /**
     * <p>Contains a Boolean value that you can use to enable a certification
     * revocation list (CRL) for the CA, the name of the S3 bucket to which ACM PCA
     * will write the CRL, and an optional CNAME alias that you can use to hide the
     * name of your bucket in the <b>CRL Distribution Points</b> extension of your CA
     * certificate. For more information, see the <a>CrlConfiguration</a> structure.
     * </p>
     */
    inline void SetRevocationConfiguration(const RevocationConfiguration& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = value; }

    /**
     * <p>Contains a Boolean value that you can use to enable a certification
     * revocation list (CRL) for the CA, the name of the S3 bucket to which ACM PCA
     * will write the CRL, and an optional CNAME alias that you can use to hide the
     * name of your bucket in the <b>CRL Distribution Points</b> extension of your CA
     * certificate. For more information, see the <a>CrlConfiguration</a> structure.
     * </p>
     */
    inline void SetRevocationConfiguration(RevocationConfiguration&& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = std::move(value); }

    /**
     * <p>Contains a Boolean value that you can use to enable a certification
     * revocation list (CRL) for the CA, the name of the S3 bucket to which ACM PCA
     * will write the CRL, and an optional CNAME alias that you can use to hide the
     * name of your bucket in the <b>CRL Distribution Points</b> extension of your CA
     * certificate. For more information, see the <a>CrlConfiguration</a> structure.
     * </p>
     */
    inline CreateCertificateAuthorityRequest& WithRevocationConfiguration(const RevocationConfiguration& value) { SetRevocationConfiguration(value); return *this;}

    /**
     * <p>Contains a Boolean value that you can use to enable a certification
     * revocation list (CRL) for the CA, the name of the S3 bucket to which ACM PCA
     * will write the CRL, and an optional CNAME alias that you can use to hide the
     * name of your bucket in the <b>CRL Distribution Points</b> extension of your CA
     * certificate. For more information, see the <a>CrlConfiguration</a> structure.
     * </p>
     */
    inline CreateCertificateAuthorityRequest& WithRevocationConfiguration(RevocationConfiguration&& value) { SetRevocationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of the certificate authority. Currently, this must be
     * <b>SUBORDINATE</b>.</p>
     */
    inline const CertificateAuthorityType& GetCertificateAuthorityType() const{ return m_certificateAuthorityType; }

    /**
     * <p>The type of the certificate authority. Currently, this must be
     * <b>SUBORDINATE</b>.</p>
     */
    inline void SetCertificateAuthorityType(const CertificateAuthorityType& value) { m_certificateAuthorityTypeHasBeenSet = true; m_certificateAuthorityType = value; }

    /**
     * <p>The type of the certificate authority. Currently, this must be
     * <b>SUBORDINATE</b>.</p>
     */
    inline void SetCertificateAuthorityType(CertificateAuthorityType&& value) { m_certificateAuthorityTypeHasBeenSet = true; m_certificateAuthorityType = std::move(value); }

    /**
     * <p>The type of the certificate authority. Currently, this must be
     * <b>SUBORDINATE</b>.</p>
     */
    inline CreateCertificateAuthorityRequest& WithCertificateAuthorityType(const CertificateAuthorityType& value) { SetCertificateAuthorityType(value); return *this;}

    /**
     * <p>The type of the certificate authority. Currently, this must be
     * <b>SUBORDINATE</b>.</p>
     */
    inline CreateCertificateAuthorityRequest& WithCertificateAuthorityType(CertificateAuthorityType&& value) { SetCertificateAuthorityType(std::move(value)); return *this;}


    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to
     * <b>CreateCertificateAuthority</b>. Idempotency tokens time out after five
     * minutes. Therefore, if you call <b>CreateCertificateAuthority</b> multiple times
     * with the same idempotency token within a five minute period, ACM PCA recognizes
     * that you are requesting only one certificate. As a result, ACM PCA issues only
     * one. If you change the idempotency token for each call, however, ACM PCA
     * recognizes that you are requesting multiple certificates.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to
     * <b>CreateCertificateAuthority</b>. Idempotency tokens time out after five
     * minutes. Therefore, if you call <b>CreateCertificateAuthority</b> multiple times
     * with the same idempotency token within a five minute period, ACM PCA recognizes
     * that you are requesting only one certificate. As a result, ACM PCA issues only
     * one. If you change the idempotency token for each call, however, ACM PCA
     * recognizes that you are requesting multiple certificates.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to
     * <b>CreateCertificateAuthority</b>. Idempotency tokens time out after five
     * minutes. Therefore, if you call <b>CreateCertificateAuthority</b> multiple times
     * with the same idempotency token within a five minute period, ACM PCA recognizes
     * that you are requesting only one certificate. As a result, ACM PCA issues only
     * one. If you change the idempotency token for each call, however, ACM PCA
     * recognizes that you are requesting multiple certificates.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to
     * <b>CreateCertificateAuthority</b>. Idempotency tokens time out after five
     * minutes. Therefore, if you call <b>CreateCertificateAuthority</b> multiple times
     * with the same idempotency token within a five minute period, ACM PCA recognizes
     * that you are requesting only one certificate. As a result, ACM PCA issues only
     * one. If you change the idempotency token for each call, however, ACM PCA
     * recognizes that you are requesting multiple certificates.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to
     * <b>CreateCertificateAuthority</b>. Idempotency tokens time out after five
     * minutes. Therefore, if you call <b>CreateCertificateAuthority</b> multiple times
     * with the same idempotency token within a five minute period, ACM PCA recognizes
     * that you are requesting only one certificate. As a result, ACM PCA issues only
     * one. If you change the idempotency token for each call, however, ACM PCA
     * recognizes that you are requesting multiple certificates.</p>
     */
    inline CreateCertificateAuthorityRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to
     * <b>CreateCertificateAuthority</b>. Idempotency tokens time out after five
     * minutes. Therefore, if you call <b>CreateCertificateAuthority</b> multiple times
     * with the same idempotency token within a five minute period, ACM PCA recognizes
     * that you are requesting only one certificate. As a result, ACM PCA issues only
     * one. If you change the idempotency token for each call, however, ACM PCA
     * recognizes that you are requesting multiple certificates.</p>
     */
    inline CreateCertificateAuthorityRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>Alphanumeric string that can be used to distinguish between calls to
     * <b>CreateCertificateAuthority</b>. Idempotency tokens time out after five
     * minutes. Therefore, if you call <b>CreateCertificateAuthority</b> multiple times
     * with the same idempotency token within a five minute period, ACM PCA recognizes
     * that you are requesting only one certificate. As a result, ACM PCA issues only
     * one. If you change the idempotency token for each call, however, ACM PCA
     * recognizes that you are requesting multiple certificates.</p>
     */
    inline CreateCertificateAuthorityRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    CertificateAuthorityConfiguration m_certificateAuthorityConfiguration;
    bool m_certificateAuthorityConfigurationHasBeenSet;

    RevocationConfiguration m_revocationConfiguration;
    bool m_revocationConfigurationHasBeenSet;

    CertificateAuthorityType m_certificateAuthorityType;
    bool m_certificateAuthorityTypeHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
