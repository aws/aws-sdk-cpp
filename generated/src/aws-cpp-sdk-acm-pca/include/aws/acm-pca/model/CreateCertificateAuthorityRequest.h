/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/acm-pca/model/CertificateAuthorityConfiguration.h>
#include <aws/acm-pca/model/RevocationConfiguration.h>
#include <aws/acm-pca/model/CertificateAuthorityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/KeyStorageSecurityStandard.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm-pca/model/CertificateAuthorityUsageMode.h>
#include <aws/acm-pca/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class CreateCertificateAuthorityRequest : public ACMPCARequest
  {
  public:
    AWS_ACMPCA_API CreateCertificateAuthorityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCertificateAuthority"; }

    AWS_ACMPCA_API Aws::String SerializePayload() const override;

    AWS_ACMPCA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline const CertificateAuthorityConfiguration& GetCertificateAuthorityConfiguration() const { return m_certificateAuthorityConfiguration; }
    inline bool CertificateAuthorityConfigurationHasBeenSet() const { return m_certificateAuthorityConfigurationHasBeenSet; }
    template<typename CertificateAuthorityConfigurationT = CertificateAuthorityConfiguration>
    void SetCertificateAuthorityConfiguration(CertificateAuthorityConfigurationT&& value) { m_certificateAuthorityConfigurationHasBeenSet = true; m_certificateAuthorityConfiguration = std::forward<CertificateAuthorityConfigurationT>(value); }
    template<typename CertificateAuthorityConfigurationT = CertificateAuthorityConfiguration>
    CreateCertificateAuthorityRequest& WithCertificateAuthorityConfiguration(CertificateAuthorityConfigurationT&& value) { SetCertificateAuthorityConfiguration(std::forward<CertificateAuthorityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information to enable support for Online Certificate Status Protocol
     * (OCSP), certificate revocation list (CRL), both protocols, or neither. By
     * default, both certificate validation mechanisms are disabled.</p> <p>The
     * following requirements apply to revocation configurations.</p> <ul> <li> <p>A
     * configuration disabling CRLs or OCSP must contain only the
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
     * such as "http://" or "https://".</p> </li> </ul> <p> For more information, see
     * the <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_OcspConfiguration.html">OcspConfiguration</a>
     * and <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CrlConfiguration.html">CrlConfiguration</a>
     * types.</p>
     */
    inline const RevocationConfiguration& GetRevocationConfiguration() const { return m_revocationConfiguration; }
    inline bool RevocationConfigurationHasBeenSet() const { return m_revocationConfigurationHasBeenSet; }
    template<typename RevocationConfigurationT = RevocationConfiguration>
    void SetRevocationConfiguration(RevocationConfigurationT&& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = std::forward<RevocationConfigurationT>(value); }
    template<typename RevocationConfigurationT = RevocationConfiguration>
    CreateCertificateAuthorityRequest& WithRevocationConfiguration(RevocationConfigurationT&& value) { SetRevocationConfiguration(std::forward<RevocationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the certificate authority.</p>
     */
    inline CertificateAuthorityType GetCertificateAuthorityType() const { return m_certificateAuthorityType; }
    inline bool CertificateAuthorityTypeHasBeenSet() const { return m_certificateAuthorityTypeHasBeenSet; }
    inline void SetCertificateAuthorityType(CertificateAuthorityType value) { m_certificateAuthorityTypeHasBeenSet = true; m_certificateAuthorityType = value; }
    inline CreateCertificateAuthorityRequest& WithCertificateAuthorityType(CertificateAuthorityType value) { SetCertificateAuthorityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>CreateCertificateAuthority</b> action. Idempotency tokens for
     * <b>CreateCertificateAuthority</b> time out after five minutes. Therefore, if you
     * call <b>CreateCertificateAuthority</b> multiple times with the same idempotency
     * token within five minutes, Amazon Web Services Private CA recognizes that you
     * are requesting only certificate authority and will issue only one. If you change
     * the idempotency token for each call, Amazon Web Services Private CA recognizes
     * that you are requesting multiple certificate authorities.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    CreateCertificateAuthorityRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a cryptographic key management compliance standard for handling and
     * protecting CA keys.</p> <p>Default: FIPS_140_2_LEVEL_3_OR_HIGHER</p> 
     * <p>Some Amazon Web Services Regions don't support the default value. When you
     * create a CA in these Regions, you must use <code>CCPC_LEVEL_1_OR_HIGHER</code>
     * for the <code>KeyStorageSecurityStandard</code> parameter. If you don't, the
     * operation returns an <code>InvalidArgsException</code> with this message: "A
     * certificate authority cannot be created in this region with the specified
     * security standard."</p> <p>For information about security standard support in
     * different Amazon Web Services Regions, see <a
     * href="https://docs.aws.amazon.com/privateca/latest/userguide/data-protection.html#private-keys">Storage
     * and security compliance of Amazon Web Services Private CA private keys</a>.</p>
     * 
     */
    inline KeyStorageSecurityStandard GetKeyStorageSecurityStandard() const { return m_keyStorageSecurityStandard; }
    inline bool KeyStorageSecurityStandardHasBeenSet() const { return m_keyStorageSecurityStandardHasBeenSet; }
    inline void SetKeyStorageSecurityStandard(KeyStorageSecurityStandard value) { m_keyStorageSecurityStandardHasBeenSet = true; m_keyStorageSecurityStandard = value; }
    inline CreateCertificateAuthorityRequest& WithKeyStorageSecurityStandard(KeyStorageSecurityStandard value) { SetKeyStorageSecurityStandard(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that will be attached to the new private CA. You can
     * associate up to 50 tags with a private CA. For information using tags with IAM
     * to manage permissions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCertificateAuthorityRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCertificateAuthorityRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the CA issues general-purpose certificates that typically
     * require a revocation mechanism, or short-lived certificates that may optionally
     * omit revocation because they expire quickly. Short-lived certificate validity is
     * limited to seven days.</p> <p>The default value is GENERAL_PURPOSE.</p>
     */
    inline CertificateAuthorityUsageMode GetUsageMode() const { return m_usageMode; }
    inline bool UsageModeHasBeenSet() const { return m_usageModeHasBeenSet; }
    inline void SetUsageMode(CertificateAuthorityUsageMode value) { m_usageModeHasBeenSet = true; m_usageMode = value; }
    inline CreateCertificateAuthorityRequest& WithUsageMode(CertificateAuthorityUsageMode value) { SetUsageMode(value); return *this;}
    ///@}
  private:

    CertificateAuthorityConfiguration m_certificateAuthorityConfiguration;
    bool m_certificateAuthorityConfigurationHasBeenSet = false;

    RevocationConfiguration m_revocationConfiguration;
    bool m_revocationConfigurationHasBeenSet = false;

    CertificateAuthorityType m_certificateAuthorityType{CertificateAuthorityType::NOT_SET};
    bool m_certificateAuthorityTypeHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    KeyStorageSecurityStandard m_keyStorageSecurityStandard{KeyStorageSecurityStandard::NOT_SET};
    bool m_keyStorageSecurityStandardHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    CertificateAuthorityUsageMode m_usageMode{CertificateAuthorityUsageMode::NOT_SET};
    bool m_usageModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
