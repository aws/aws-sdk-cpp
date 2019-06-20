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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * parameter. Your private CA copies the CNAME or the S3 bucket name to the <b>CRL
   * Distribution Points</b> extension of each certificate it issues. Your S3 bucket
   * policy must give write permission to ACM Private CA. </p> <p>Your private CA
   * uses the value in the <b>ExpirationInDays</b> parameter to calculate the
   * <b>nextUpdate</b> field in the CRL. The CRL is refreshed at 1/2 the age of next
   * update or when a certificate is revoked. When a certificate is revoked, it is
   * recorded in the next CRL that is generated and in the next audit report. Only
   * time valid certificates are listed in the CRL. Expired certificates are not
   * included. </p> <p>CRLs contain the following fields:</p> <ul> <li> <p>
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
   * CRL.</p> </li> </ul> <p>Certificate revocation lists created by ACM Private CA
   * are DER-encoded. You can use the following OpenSSL command to list a CRL.</p>
   * <p> <code>openssl crl -inform DER -text -in <i>crl_path</i> -noout</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CrlConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ACMPCA_API CrlConfiguration
  {
  public:
    CrlConfiguration();
    CrlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CrlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Boolean value that specifies whether certificate revocation lists (CRLs) are
     * enabled. You can use this value to enable certificate revocation for a new CA
     * when you call the <a>CreateCertificateAuthority</a> action or for an existing CA
     * when you call the <a>UpdateCertificateAuthority</a> action. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Boolean value that specifies whether certificate revocation lists (CRLs) are
     * enabled. You can use this value to enable certificate revocation for a new CA
     * when you call the <a>CreateCertificateAuthority</a> action or for an existing CA
     * when you call the <a>UpdateCertificateAuthority</a> action. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Boolean value that specifies whether certificate revocation lists (CRLs) are
     * enabled. You can use this value to enable certificate revocation for a new CA
     * when you call the <a>CreateCertificateAuthority</a> action or for an existing CA
     * when you call the <a>UpdateCertificateAuthority</a> action. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Boolean value that specifies whether certificate revocation lists (CRLs) are
     * enabled. You can use this value to enable certificate revocation for a new CA
     * when you call the <a>CreateCertificateAuthority</a> action or for an existing CA
     * when you call the <a>UpdateCertificateAuthority</a> action. </p>
     */
    inline CrlConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Number of days until a certificate expires.</p>
     */
    inline int GetExpirationInDays() const{ return m_expirationInDays; }

    /**
     * <p>Number of days until a certificate expires.</p>
     */
    inline bool ExpirationInDaysHasBeenSet() const { return m_expirationInDaysHasBeenSet; }

    /**
     * <p>Number of days until a certificate expires.</p>
     */
    inline void SetExpirationInDays(int value) { m_expirationInDaysHasBeenSet = true; m_expirationInDays = value; }

    /**
     * <p>Number of days until a certificate expires.</p>
     */
    inline CrlConfiguration& WithExpirationInDays(int value) { SetExpirationInDays(value); return *this;}


    /**
     * <p>Name inserted into the certificate <b>CRL Distribution Points</b> extension
     * that enables the use of an alias for the CRL distribution point. Use this value
     * if you don't want the name of your S3 bucket to be public.</p>
     */
    inline const Aws::String& GetCustomCname() const{ return m_customCname; }

    /**
     * <p>Name inserted into the certificate <b>CRL Distribution Points</b> extension
     * that enables the use of an alias for the CRL distribution point. Use this value
     * if you don't want the name of your S3 bucket to be public.</p>
     */
    inline bool CustomCnameHasBeenSet() const { return m_customCnameHasBeenSet; }

    /**
     * <p>Name inserted into the certificate <b>CRL Distribution Points</b> extension
     * that enables the use of an alias for the CRL distribution point. Use this value
     * if you don't want the name of your S3 bucket to be public.</p>
     */
    inline void SetCustomCname(const Aws::String& value) { m_customCnameHasBeenSet = true; m_customCname = value; }

    /**
     * <p>Name inserted into the certificate <b>CRL Distribution Points</b> extension
     * that enables the use of an alias for the CRL distribution point. Use this value
     * if you don't want the name of your S3 bucket to be public.</p>
     */
    inline void SetCustomCname(Aws::String&& value) { m_customCnameHasBeenSet = true; m_customCname = std::move(value); }

    /**
     * <p>Name inserted into the certificate <b>CRL Distribution Points</b> extension
     * that enables the use of an alias for the CRL distribution point. Use this value
     * if you don't want the name of your S3 bucket to be public.</p>
     */
    inline void SetCustomCname(const char* value) { m_customCnameHasBeenSet = true; m_customCname.assign(value); }

    /**
     * <p>Name inserted into the certificate <b>CRL Distribution Points</b> extension
     * that enables the use of an alias for the CRL distribution point. Use this value
     * if you don't want the name of your S3 bucket to be public.</p>
     */
    inline CrlConfiguration& WithCustomCname(const Aws::String& value) { SetCustomCname(value); return *this;}

    /**
     * <p>Name inserted into the certificate <b>CRL Distribution Points</b> extension
     * that enables the use of an alias for the CRL distribution point. Use this value
     * if you don't want the name of your S3 bucket to be public.</p>
     */
    inline CrlConfiguration& WithCustomCname(Aws::String&& value) { SetCustomCname(std::move(value)); return *this;}

    /**
     * <p>Name inserted into the certificate <b>CRL Distribution Points</b> extension
     * that enables the use of an alias for the CRL distribution point. Use this value
     * if you don't want the name of your S3 bucket to be public.</p>
     */
    inline CrlConfiguration& WithCustomCname(const char* value) { SetCustomCname(value); return *this;}


    /**
     * <p>Name of the S3 bucket that contains the CRL. If you do not provide a value
     * for the <b>CustomCname</b> argument, the name of your S3 bucket is placed into
     * the <b>CRL Distribution Points</b> extension of the issued certificate. You can
     * change the name of your bucket by calling the <a>UpdateCertificateAuthority</a>
     * action. You must specify a bucket policy that allows ACM Private CA to write the
     * CRL to your bucket.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>Name of the S3 bucket that contains the CRL. If you do not provide a value
     * for the <b>CustomCname</b> argument, the name of your S3 bucket is placed into
     * the <b>CRL Distribution Points</b> extension of the issued certificate. You can
     * change the name of your bucket by calling the <a>UpdateCertificateAuthority</a>
     * action. You must specify a bucket policy that allows ACM Private CA to write the
     * CRL to your bucket.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>Name of the S3 bucket that contains the CRL. If you do not provide a value
     * for the <b>CustomCname</b> argument, the name of your S3 bucket is placed into
     * the <b>CRL Distribution Points</b> extension of the issued certificate. You can
     * change the name of your bucket by calling the <a>UpdateCertificateAuthority</a>
     * action. You must specify a bucket policy that allows ACM Private CA to write the
     * CRL to your bucket.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>Name of the S3 bucket that contains the CRL. If you do not provide a value
     * for the <b>CustomCname</b> argument, the name of your S3 bucket is placed into
     * the <b>CRL Distribution Points</b> extension of the issued certificate. You can
     * change the name of your bucket by calling the <a>UpdateCertificateAuthority</a>
     * action. You must specify a bucket policy that allows ACM Private CA to write the
     * CRL to your bucket.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>Name of the S3 bucket that contains the CRL. If you do not provide a value
     * for the <b>CustomCname</b> argument, the name of your S3 bucket is placed into
     * the <b>CRL Distribution Points</b> extension of the issued certificate. You can
     * change the name of your bucket by calling the <a>UpdateCertificateAuthority</a>
     * action. You must specify a bucket policy that allows ACM Private CA to write the
     * CRL to your bucket.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>Name of the S3 bucket that contains the CRL. If you do not provide a value
     * for the <b>CustomCname</b> argument, the name of your S3 bucket is placed into
     * the <b>CRL Distribution Points</b> extension of the issued certificate. You can
     * change the name of your bucket by calling the <a>UpdateCertificateAuthority</a>
     * action. You must specify a bucket policy that allows ACM Private CA to write the
     * CRL to your bucket.</p>
     */
    inline CrlConfiguration& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>Name of the S3 bucket that contains the CRL. If you do not provide a value
     * for the <b>CustomCname</b> argument, the name of your S3 bucket is placed into
     * the <b>CRL Distribution Points</b> extension of the issued certificate. You can
     * change the name of your bucket by calling the <a>UpdateCertificateAuthority</a>
     * action. You must specify a bucket policy that allows ACM Private CA to write the
     * CRL to your bucket.</p>
     */
    inline CrlConfiguration& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>Name of the S3 bucket that contains the CRL. If you do not provide a value
     * for the <b>CustomCname</b> argument, the name of your S3 bucket is placed into
     * the <b>CRL Distribution Points</b> extension of the issued certificate. You can
     * change the name of your bucket by calling the <a>UpdateCertificateAuthority</a>
     * action. You must specify a bucket policy that allows ACM Private CA to write the
     * CRL to your bucket.</p>
     */
    inline CrlConfiguration& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    int m_expirationInDays;
    bool m_expirationInDaysHasBeenSet;

    Aws::String m_customCname;
    bool m_customCnameHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
