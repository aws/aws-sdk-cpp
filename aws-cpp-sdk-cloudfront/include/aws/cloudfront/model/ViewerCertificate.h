/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/SSLSupportMethod.h>
#include <aws/cloudfront/model/MinimumProtocolVersion.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * A complex type that contains information about viewer certificates for this
   * distribution.
   */
  class AWS_CLOUDFRONT_API ViewerCertificate
  {
  public:
    ViewerCertificate();
    ViewerCertificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    ViewerCertificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * If you want viewers to use HTTPS to request your objects and you're using the
     * CloudFront domain name of your distribution in your object URLs (for example,
     * https://d111111abcdef8.cloudfront.net/logo.jpg), set to true. Omit this value if
     * you are setting an ACMCertificateArn or IAMCertificateId.
     */
    inline bool GetCloudFrontDefaultCertificate() const{ return m_cloudFrontDefaultCertificate; }

    /**
     * If you want viewers to use HTTPS to request your objects and you're using the
     * CloudFront domain name of your distribution in your object URLs (for example,
     * https://d111111abcdef8.cloudfront.net/logo.jpg), set to true. Omit this value if
     * you are setting an ACMCertificateArn or IAMCertificateId.
     */
    inline void SetCloudFrontDefaultCertificate(bool value) { m_cloudFrontDefaultCertificateHasBeenSet = true; m_cloudFrontDefaultCertificate = value; }

    /**
     * If you want viewers to use HTTPS to request your objects and you're using the
     * CloudFront domain name of your distribution in your object URLs (for example,
     * https://d111111abcdef8.cloudfront.net/logo.jpg), set to true. Omit this value if
     * you are setting an ACMCertificateArn or IAMCertificateId.
     */
    inline ViewerCertificate& WithCloudFrontDefaultCertificate(bool value) { SetCloudFrontDefaultCertificate(value); return *this;}

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the IAM certificate identifier of the
     * custom viewer certificate for this distribution. Specify either this value,
     * ACMCertificateArn, or CloudFrontDefaultCertificate.
     */
    inline const Aws::String& GetIAMCertificateId() const{ return m_iAMCertificateId; }

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the IAM certificate identifier of the
     * custom viewer certificate for this distribution. Specify either this value,
     * ACMCertificateArn, or CloudFrontDefaultCertificate.
     */
    inline void SetIAMCertificateId(const Aws::String& value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId = value; }

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the IAM certificate identifier of the
     * custom viewer certificate for this distribution. Specify either this value,
     * ACMCertificateArn, or CloudFrontDefaultCertificate.
     */
    inline void SetIAMCertificateId(Aws::String&& value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId = value; }

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the IAM certificate identifier of the
     * custom viewer certificate for this distribution. Specify either this value,
     * ACMCertificateArn, or CloudFrontDefaultCertificate.
     */
    inline void SetIAMCertificateId(const char* value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId.assign(value); }

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the IAM certificate identifier of the
     * custom viewer certificate for this distribution. Specify either this value,
     * ACMCertificateArn, or CloudFrontDefaultCertificate.
     */
    inline ViewerCertificate& WithIAMCertificateId(const Aws::String& value) { SetIAMCertificateId(value); return *this;}

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the IAM certificate identifier of the
     * custom viewer certificate for this distribution. Specify either this value,
     * ACMCertificateArn, or CloudFrontDefaultCertificate.
     */
    inline ViewerCertificate& WithIAMCertificateId(Aws::String&& value) { SetIAMCertificateId(value); return *this;}

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the IAM certificate identifier of the
     * custom viewer certificate for this distribution. Specify either this value,
     * ACMCertificateArn, or CloudFrontDefaultCertificate.
     */
    inline ViewerCertificate& WithIAMCertificateId(const char* value) { SetIAMCertificateId(value); return *this;}

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the ACM certificate ARN of the custom
     * viewer certificate for this distribution. Specify either this value,
     * IAMCertificateId, or CloudFrontDefaultCertificate.
     */
    inline const Aws::String& GetACMCertificateArn() const{ return m_aCMCertificateArn; }

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the ACM certificate ARN of the custom
     * viewer certificate for this distribution. Specify either this value,
     * IAMCertificateId, or CloudFrontDefaultCertificate.
     */
    inline void SetACMCertificateArn(const Aws::String& value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn = value; }

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the ACM certificate ARN of the custom
     * viewer certificate for this distribution. Specify either this value,
     * IAMCertificateId, or CloudFrontDefaultCertificate.
     */
    inline void SetACMCertificateArn(Aws::String&& value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn = value; }

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the ACM certificate ARN of the custom
     * viewer certificate for this distribution. Specify either this value,
     * IAMCertificateId, or CloudFrontDefaultCertificate.
     */
    inline void SetACMCertificateArn(const char* value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn.assign(value); }

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the ACM certificate ARN of the custom
     * viewer certificate for this distribution. Specify either this value,
     * IAMCertificateId, or CloudFrontDefaultCertificate.
     */
    inline ViewerCertificate& WithACMCertificateArn(const Aws::String& value) { SetACMCertificateArn(value); return *this;}

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the ACM certificate ARN of the custom
     * viewer certificate for this distribution. Specify either this value,
     * IAMCertificateId, or CloudFrontDefaultCertificate.
     */
    inline ViewerCertificate& WithACMCertificateArn(Aws::String&& value) { SetACMCertificateArn(value); return *this;}

    /**
     * If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name in your object URLs (for example,
     * https://example.com/logo.jpg), specify the ACM certificate ARN of the custom
     * viewer certificate for this distribution. Specify either this value,
     * IAMCertificateId, or CloudFrontDefaultCertificate.
     */
    inline ViewerCertificate& WithACMCertificateArn(const char* value) { SetACMCertificateArn(value); return *this;}

    /**
     * If you specify a value for IAMCertificateId, you must also specify how you want
     * CloudFront to serve HTTPS requests. Valid values are vip and sni-only. If you
     * specify vip, CloudFront uses dedicated IP addresses for your content and can
     * respond to HTTPS requests from any viewer. However, you must request permission
     * to use this feature, and you incur additional monthly charges. If you specify
     * sni-only, CloudFront can only respond to HTTPS requests from viewers that
     * support Server Name Indication (SNI). All modern browsers support SNI, but some
     * browsers still in use don't support SNI. Do not specify a value for
     * SSLSupportMethod if you specified true for CloudFrontDefaultCertificate.
     */
    inline const SSLSupportMethod& GetSSLSupportMethod() const{ return m_sSLSupportMethod; }

    /**
     * If you specify a value for IAMCertificateId, you must also specify how you want
     * CloudFront to serve HTTPS requests. Valid values are vip and sni-only. If you
     * specify vip, CloudFront uses dedicated IP addresses for your content and can
     * respond to HTTPS requests from any viewer. However, you must request permission
     * to use this feature, and you incur additional monthly charges. If you specify
     * sni-only, CloudFront can only respond to HTTPS requests from viewers that
     * support Server Name Indication (SNI). All modern browsers support SNI, but some
     * browsers still in use don't support SNI. Do not specify a value for
     * SSLSupportMethod if you specified true for CloudFrontDefaultCertificate.
     */
    inline void SetSSLSupportMethod(const SSLSupportMethod& value) { m_sSLSupportMethodHasBeenSet = true; m_sSLSupportMethod = value; }

    /**
     * If you specify a value for IAMCertificateId, you must also specify how you want
     * CloudFront to serve HTTPS requests. Valid values are vip and sni-only. If you
     * specify vip, CloudFront uses dedicated IP addresses for your content and can
     * respond to HTTPS requests from any viewer. However, you must request permission
     * to use this feature, and you incur additional monthly charges. If you specify
     * sni-only, CloudFront can only respond to HTTPS requests from viewers that
     * support Server Name Indication (SNI). All modern browsers support SNI, but some
     * browsers still in use don't support SNI. Do not specify a value for
     * SSLSupportMethod if you specified true for CloudFrontDefaultCertificate.
     */
    inline void SetSSLSupportMethod(SSLSupportMethod&& value) { m_sSLSupportMethodHasBeenSet = true; m_sSLSupportMethod = value; }

    /**
     * If you specify a value for IAMCertificateId, you must also specify how you want
     * CloudFront to serve HTTPS requests. Valid values are vip and sni-only. If you
     * specify vip, CloudFront uses dedicated IP addresses for your content and can
     * respond to HTTPS requests from any viewer. However, you must request permission
     * to use this feature, and you incur additional monthly charges. If you specify
     * sni-only, CloudFront can only respond to HTTPS requests from viewers that
     * support Server Name Indication (SNI). All modern browsers support SNI, but some
     * browsers still in use don't support SNI. Do not specify a value for
     * SSLSupportMethod if you specified true for CloudFrontDefaultCertificate.
     */
    inline ViewerCertificate& WithSSLSupportMethod(const SSLSupportMethod& value) { SetSSLSupportMethod(value); return *this;}

    /**
     * If you specify a value for IAMCertificateId, you must also specify how you want
     * CloudFront to serve HTTPS requests. Valid values are vip and sni-only. If you
     * specify vip, CloudFront uses dedicated IP addresses for your content and can
     * respond to HTTPS requests from any viewer. However, you must request permission
     * to use this feature, and you incur additional monthly charges. If you specify
     * sni-only, CloudFront can only respond to HTTPS requests from viewers that
     * support Server Name Indication (SNI). All modern browsers support SNI, but some
     * browsers still in use don't support SNI. Do not specify a value for
     * SSLSupportMethod if you specified true for CloudFrontDefaultCertificate.
     */
    inline ViewerCertificate& WithSSLSupportMethod(SSLSupportMethod&& value) { SetSSLSupportMethod(value); return *this;}

    /**
     * Specify the minimum version of the SSL protocol that you want CloudFront to use,
     * SSLv3 or TLSv1, for HTTPS connections. CloudFront will serve your objects only
     * to browsers or devices that support at least the SSL version that you specify.
     * The TLSv1 protocol is more secure, so we recommend that you specify SSLv3 only
     * if your users are using browsers or devices that don't support TLSv1. If you're
     * using a custom certificate (if you specify a value for IAMCertificateId) and if
     * you're using dedicated IP (if you specify vip for SSLSupportMethod), you can
     * choose SSLv3 or TLSv1 as the MinimumProtocolVersion. If you're using a custom
     * certificate (if you specify a value for IAMCertificateId) and if you're using
     * SNI (if you specify sni-only for SSLSupportMethod), you must specify TLSv1 for
     * MinimumProtocolVersion.
     */
    inline const MinimumProtocolVersion& GetMinimumProtocolVersion() const{ return m_minimumProtocolVersion; }

    /**
     * Specify the minimum version of the SSL protocol that you want CloudFront to use,
     * SSLv3 or TLSv1, for HTTPS connections. CloudFront will serve your objects only
     * to browsers or devices that support at least the SSL version that you specify.
     * The TLSv1 protocol is more secure, so we recommend that you specify SSLv3 only
     * if your users are using browsers or devices that don't support TLSv1. If you're
     * using a custom certificate (if you specify a value for IAMCertificateId) and if
     * you're using dedicated IP (if you specify vip for SSLSupportMethod), you can
     * choose SSLv3 or TLSv1 as the MinimumProtocolVersion. If you're using a custom
     * certificate (if you specify a value for IAMCertificateId) and if you're using
     * SNI (if you specify sni-only for SSLSupportMethod), you must specify TLSv1 for
     * MinimumProtocolVersion.
     */
    inline void SetMinimumProtocolVersion(const MinimumProtocolVersion& value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion = value; }

    /**
     * Specify the minimum version of the SSL protocol that you want CloudFront to use,
     * SSLv3 or TLSv1, for HTTPS connections. CloudFront will serve your objects only
     * to browsers or devices that support at least the SSL version that you specify.
     * The TLSv1 protocol is more secure, so we recommend that you specify SSLv3 only
     * if your users are using browsers or devices that don't support TLSv1. If you're
     * using a custom certificate (if you specify a value for IAMCertificateId) and if
     * you're using dedicated IP (if you specify vip for SSLSupportMethod), you can
     * choose SSLv3 or TLSv1 as the MinimumProtocolVersion. If you're using a custom
     * certificate (if you specify a value for IAMCertificateId) and if you're using
     * SNI (if you specify sni-only for SSLSupportMethod), you must specify TLSv1 for
     * MinimumProtocolVersion.
     */
    inline void SetMinimumProtocolVersion(MinimumProtocolVersion&& value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion = value; }

    /**
     * Specify the minimum version of the SSL protocol that you want CloudFront to use,
     * SSLv3 or TLSv1, for HTTPS connections. CloudFront will serve your objects only
     * to browsers or devices that support at least the SSL version that you specify.
     * The TLSv1 protocol is more secure, so we recommend that you specify SSLv3 only
     * if your users are using browsers or devices that don't support TLSv1. If you're
     * using a custom certificate (if you specify a value for IAMCertificateId) and if
     * you're using dedicated IP (if you specify vip for SSLSupportMethod), you can
     * choose SSLv3 or TLSv1 as the MinimumProtocolVersion. If you're using a custom
     * certificate (if you specify a value for IAMCertificateId) and if you're using
     * SNI (if you specify sni-only for SSLSupportMethod), you must specify TLSv1 for
     * MinimumProtocolVersion.
     */
    inline ViewerCertificate& WithMinimumProtocolVersion(const MinimumProtocolVersion& value) { SetMinimumProtocolVersion(value); return *this;}

    /**
     * Specify the minimum version of the SSL protocol that you want CloudFront to use,
     * SSLv3 or TLSv1, for HTTPS connections. CloudFront will serve your objects only
     * to browsers or devices that support at least the SSL version that you specify.
     * The TLSv1 protocol is more secure, so we recommend that you specify SSLv3 only
     * if your users are using browsers or devices that don't support TLSv1. If you're
     * using a custom certificate (if you specify a value for IAMCertificateId) and if
     * you're using dedicated IP (if you specify vip for SSLSupportMethod), you can
     * choose SSLv3 or TLSv1 as the MinimumProtocolVersion. If you're using a custom
     * certificate (if you specify a value for IAMCertificateId) and if you're using
     * SNI (if you specify sni-only for SSLSupportMethod), you must specify TLSv1 for
     * MinimumProtocolVersion.
     */
    inline ViewerCertificate& WithMinimumProtocolVersion(MinimumProtocolVersion&& value) { SetMinimumProtocolVersion(value); return *this;}

  private:
    bool m_cloudFrontDefaultCertificate;
    bool m_cloudFrontDefaultCertificateHasBeenSet;
    Aws::String m_iAMCertificateId;
    bool m_iAMCertificateIdHasBeenSet;
    Aws::String m_aCMCertificateArn;
    bool m_aCMCertificateArnHasBeenSet;
    SSLSupportMethod m_sSLSupportMethod;
    bool m_sSLSupportMethodHasBeenSet;
    MinimumProtocolVersion m_minimumProtocolVersion;
    bool m_minimumProtocolVersionHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
