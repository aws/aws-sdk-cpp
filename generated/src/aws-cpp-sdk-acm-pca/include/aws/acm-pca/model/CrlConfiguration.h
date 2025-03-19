/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/S3ObjectAcl.h>
#include <aws/acm-pca/model/CrlDistributionPointExtensionConfiguration.h>
#include <aws/acm-pca/model/CrlType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Contains configuration information for a certificate revocation list (CRL).
   * Your private certificate authority (CA) creates base CRLs. Delta CRLs are not
   * supported. You can enable CRLs for your new or an existing private CA by setting
   * the <b>Enabled</b> parameter to <code>true</code>. Your private CA writes CRLs
   * to an S3 bucket that you specify in the <b>S3BucketName</b> parameter. You can
   * hide the name of your bucket by specifying a value for the <b>CustomCname</b>
   * parameter. Your private CA by default copies the CNAME or the S3 bucket name to
   * the <b>CRL Distribution Points</b> extension of each certificate it issues. If
   * you want to configure this default behavior to be something different, you can
   * set the <b>CrlDistributionPointExtensionConfiguration</b> parameter. Your S3
   * bucket policy must give write permission to Amazon Web Services Private CA. </p>
   * <p>Amazon Web Services Private CA assets that are stored in Amazon S3 can be
   * protected with encryption. For more information, see <a
   * href="https://docs.aws.amazon.com/privateca/latest/userguide/crl-planning.html#crl-encryption">Encrypting
   * Your CRLs</a>.</p> <p>Your private CA uses the value in the
   * <b>ExpirationInDays</b> parameter to calculate the <b>nextUpdate</b> field in
   * the CRL. The CRL is refreshed prior to a certificate's expiration date or when a
   * certificate is revoked. When a certificate is revoked, it appears in the CRL
   * until the certificate expires, and then in one additional CRL after expiration,
   * and it always appears in the audit report.</p> <p>A CRL is typically updated
   * approximately 30 minutes after a certificate is revoked. If for any reason a CRL
   * update fails, Amazon Web Services Private CA makes further attempts every 15
   * minutes.</p> <p>CRLs contain the following fields:</p> <ul> <li> <p>
   * <b>Version</b>: The current version number defined in RFC 5280 is V2. The
   * integer value is 0x1. </p> </li> <li> <p> <b>Signature Algorithm</b>: The name
   * of the algorithm used to sign the CRL.</p> </li> <li> <p> <b>Issuer</b>: The
   * X.500 distinguished name of your private CA that issued the CRL.</p> </li> <li>
   * <p> <b>Last Update</b>: The issue date and time of this CRL.</p> </li> <li> <p>
   * <b>Next Update</b>: The day and time by which the next CRL will be issued.</p>
   * </li> <li> <p> <b>Revoked Certificates</b>: List of revoked certificates. Each
   * list item contains the following information.</p> <ul> <li> <p> <b>Serial
   * Number</b>: The serial number, in hexadecimal format, of the revoked
   * certificate.</p> </li> <li> <p> <b>Revocation Date</b>: Date and time the
   * certificate was revoked.</p> </li> <li> <p> <b>CRL Entry Extensions</b>:
   * Optional extensions for the CRL entry.</p> <ul> <li> <p> <b>X509v3 CRL Reason
   * Code</b>: Reason the certificate was revoked.</p> </li> </ul> </li> </ul> </li>
   * <li> <p> <b>CRL Extensions</b>: Optional extensions for the CRL.</p> <ul> <li>
   * <p> <b>X509v3 Authority Key Identifier</b>: Identifies the public key associated
   * with the private key used to sign the certificate.</p> </li> <li> <p> <b>X509v3
   * CRL Number:</b>: Decimal sequence number for the CRL.</p> </li> </ul> </li> <li>
   * <p> <b>Signature Algorithm</b>: Algorithm used by your private CA to sign the
   * CRL.</p> </li> <li> <p> <b>Signature Value</b>: Signature computed over the
   * CRL.</p> </li> </ul> <p>Certificate revocation lists created by Amazon Web
   * Services Private CA are DER-encoded. You can use the following OpenSSL command
   * to list a CRL.</p> <p> <code>openssl crl -inform DER -text -in <i>crl_path</i>
   * -noout</code> </p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/privateca/latest/userguide/crl-planning.html">Planning
   * a certificate revocation list (CRL)</a> in the <i>Amazon Web Services Private
   * Certificate Authority User Guide</i> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CrlConfiguration">AWS
   * API Reference</a></p>
   */
  class CrlConfiguration
  {
  public:
    AWS_ACMPCA_API CrlConfiguration() = default;
    AWS_ACMPCA_API CrlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API CrlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Boolean value that specifies whether certificate revocation lists (CRLs) are
     * enabled. You can use this value to enable certificate revocation for a new CA
     * when you call the <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>
     * action or for an existing CA when you call the <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_UpdateCertificateAuthority.html">UpdateCertificateAuthority</a>
     * action. </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CrlConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Validity period of the CRL in days.</p>
     */
    inline int GetExpirationInDays() const { return m_expirationInDays; }
    inline bool ExpirationInDaysHasBeenSet() const { return m_expirationInDaysHasBeenSet; }
    inline void SetExpirationInDays(int value) { m_expirationInDaysHasBeenSet = true; m_expirationInDays = value; }
    inline CrlConfiguration& WithExpirationInDays(int value) { SetExpirationInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name inserted into the certificate <b>CRL Distribution Points</b> extension
     * that enables the use of an alias for the CRL distribution point. Use this value
     * if you don't want the name of your S3 bucket to be public.</p>  <p>The
     * content of a Canonical Name (CNAME) record must conform to <a
     * href="https://www.ietf.org/rfc/rfc2396.txt">RFC2396</a> restrictions on the use
     * of special characters in URIs. Additionally, the value of the CNAME must not
     * include a protocol prefix such as "http://" or "https://".</p> 
     */
    inline const Aws::String& GetCustomCname() const { return m_customCname; }
    inline bool CustomCnameHasBeenSet() const { return m_customCnameHasBeenSet; }
    template<typename CustomCnameT = Aws::String>
    void SetCustomCname(CustomCnameT&& value) { m_customCnameHasBeenSet = true; m_customCname = std::forward<CustomCnameT>(value); }
    template<typename CustomCnameT = Aws::String>
    CrlConfiguration& WithCustomCname(CustomCnameT&& value) { SetCustomCname(std::forward<CustomCnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the S3 bucket that contains the CRL. If you do not provide a value
     * for the <b>CustomCname</b> argument, the name of your S3 bucket is placed into
     * the <b>CRL Distribution Points</b> extension of the issued certificate. You can
     * change the name of your bucket by calling the <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_UpdateCertificateAuthority.html">UpdateCertificateAuthority</a>
     * operation. You must specify a <a
     * href="https://docs.aws.amazon.com/privateca/latest/userguide/PcaCreateCa.html#s3-policies">bucket
     * policy</a> that allows Amazon Web Services Private CA to write the CRL to your
     * bucket.</p>  <p>The <code>S3BucketName</code> parameter must conform to
     * the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html">S3
     * bucket naming rules</a>.</p> 
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    CrlConfiguration& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the CRL will be publicly readable or privately held in the
     * CRL Amazon S3 bucket. If you choose PUBLIC_READ, the CRL will be accessible over
     * the public internet. If you choose BUCKET_OWNER_FULL_CONTROL, only the owner of
     * the CRL S3 bucket can access the CRL, and your PKI clients may need an
     * alternative method of access. </p> <p>If no value is specified, the default is
     * <code>PUBLIC_READ</code>.</p> <p> <i>Note:</i> This default can cause CA
     * creation to fail in some circumstances. If you have have enabled the Block
     * Public Access (BPA) feature in your S3 account, then you must specify the value
     * of this parameter as <code>BUCKET_OWNER_FULL_CONTROL</code>, and not doing so
     * results in an error. If you have disabled BPA in S3, then you can specify either
     * <code>BUCKET_OWNER_FULL_CONTROL</code> or <code>PUBLIC_READ</code> as the
     * value.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/privateca/latest/userguide/PcaCreateCa.html#s3-bpa">Blocking
     * public access to the S3 bucket</a>.</p>
     */
    inline S3ObjectAcl GetS3ObjectAcl() const { return m_s3ObjectAcl; }
    inline bool S3ObjectAclHasBeenSet() const { return m_s3ObjectAclHasBeenSet; }
    inline void SetS3ObjectAcl(S3ObjectAcl value) { m_s3ObjectAclHasBeenSet = true; m_s3ObjectAcl = value; }
    inline CrlConfiguration& WithS3ObjectAcl(S3ObjectAcl value) { SetS3ObjectAcl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the behavior of the CRL Distribution Point extension for
     * certificates issued by your certificate authority. If this field is not
     * provided, then the CRl Distribution Point Extension will be present and contain
     * the default CRL URL.</p>
     */
    inline const CrlDistributionPointExtensionConfiguration& GetCrlDistributionPointExtensionConfiguration() const { return m_crlDistributionPointExtensionConfiguration; }
    inline bool CrlDistributionPointExtensionConfigurationHasBeenSet() const { return m_crlDistributionPointExtensionConfigurationHasBeenSet; }
    template<typename CrlDistributionPointExtensionConfigurationT = CrlDistributionPointExtensionConfiguration>
    void SetCrlDistributionPointExtensionConfiguration(CrlDistributionPointExtensionConfigurationT&& value) { m_crlDistributionPointExtensionConfigurationHasBeenSet = true; m_crlDistributionPointExtensionConfiguration = std::forward<CrlDistributionPointExtensionConfigurationT>(value); }
    template<typename CrlDistributionPointExtensionConfigurationT = CrlDistributionPointExtensionConfiguration>
    CrlConfiguration& WithCrlDistributionPointExtensionConfiguration(CrlDistributionPointExtensionConfigurationT&& value) { SetCrlDistributionPointExtensionConfiguration(std::forward<CrlDistributionPointExtensionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to create a complete or partitioned CRL. This setting
     * determines the maximum number of certificates that the certificate authority can
     * issue and revoke. For more information, see <a
     * href="privateca/latest/userguide/pca.html#limits_pca">Amazon Web Services
     * Private CA quotas</a>.</p> <ul> <li> <p> <code>COMPLETE</code> - The default
     * setting. Amazon Web Services Private CA maintains a single CRL ﬁle for all
     * unexpired certiﬁcates issued by a CA that have been revoked for any reason. Each
     * certiﬁcate that Amazon Web Services Private CA issues is bound to a speciﬁc CRL
     * through its CRL distribution point (CDP) extension, deﬁned in <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.2.1.9"> RFC
     * 5280</a>.</p> </li> <li> <p> <code>PARTITIONED</code> - Compared to complete
     * CRLs, partitioned CRLs dramatically increase the number of certiﬁcates your
     * private CA can issue. </p>  <p> When using partitioned CRLs, you must
     * validate that the CRL's associated issuing distribution point (IDP) URI matches
     * the certiﬁcate's CDP URI to ensure the right CRL has been fetched. Amazon Web
     * Services Private CA marks the IDP extension as critical, which your client must
     * be able to process. </p>  </li> </ul>
     */
    inline CrlType GetCrlType() const { return m_crlType; }
    inline bool CrlTypeHasBeenSet() const { return m_crlTypeHasBeenSet; }
    inline void SetCrlType(CrlType value) { m_crlTypeHasBeenSet = true; m_crlType = value; }
    inline CrlConfiguration& WithCrlType(CrlType value) { SetCrlType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Designates a custom ﬁle path in S3 for CRL(s). For example,
     * <code>http://&lt;CustomName&gt;/
     * &lt;CustomPath&gt;/&lt;CrlPartition_GUID&gt;.crl</code>. </p>
     */
    inline const Aws::String& GetCustomPath() const { return m_customPath; }
    inline bool CustomPathHasBeenSet() const { return m_customPathHasBeenSet; }
    template<typename CustomPathT = Aws::String>
    void SetCustomPath(CustomPathT&& value) { m_customPathHasBeenSet = true; m_customPath = std::forward<CustomPathT>(value); }
    template<typename CustomPathT = Aws::String>
    CrlConfiguration& WithCustomPath(CustomPathT&& value) { SetCustomPath(std::forward<CustomPathT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    int m_expirationInDays{0};
    bool m_expirationInDaysHasBeenSet = false;

    Aws::String m_customCname;
    bool m_customCnameHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    S3ObjectAcl m_s3ObjectAcl{S3ObjectAcl::NOT_SET};
    bool m_s3ObjectAclHasBeenSet = false;

    CrlDistributionPointExtensionConfiguration m_crlDistributionPointExtensionConfiguration;
    bool m_crlDistributionPointExtensionConfigurationHasBeenSet = false;

    CrlType m_crlType{CrlType::NOT_SET};
    bool m_crlTypeHasBeenSet = false;

    Aws::String m_customPath;
    bool m_customPathHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
