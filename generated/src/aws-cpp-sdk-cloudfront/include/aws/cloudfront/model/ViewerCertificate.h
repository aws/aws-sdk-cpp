/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/SSLSupportMethod.h>
#include <aws/cloudfront/model/MinimumProtocolVersion.h>
#include <utility>

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
   * <p>A complex type that determines the distribution's SSL/TLS configuration for
   * communicating with viewers.</p> <p>If the distribution doesn't use
   * <code>Aliases</code> (also known as alternate domain names or CNAMEs)—that is,
   * if the distribution uses the CloudFront domain name such as
   * <code>d111111abcdef8.cloudfront.net</code>—set
   * <code>CloudFrontDefaultCertificate</code> to <code>true</code> and leave all
   * other fields empty.</p> <p>If the distribution uses <code>Aliases</code>
   * (alternate domain names or CNAMEs), use the fields in this type to specify the
   * following settings:</p> <ul> <li> <p>Which viewers the distribution accepts
   * HTTPS connections from: only viewers that support <a
   * href="https://en.wikipedia.org/wiki/Server_Name_Indication">server name
   * indication (SNI)</a> (recommended), or all viewers including those that don't
   * support SNI.</p> <ul> <li> <p>To accept HTTPS connections from only viewers that
   * support SNI, set <code>SSLSupportMethod</code> to <code>sni-only</code>. This is
   * recommended. Most browsers and clients support SNI. </p> </li> <li> <p>To accept
   * HTTPS connections from all viewers, including those that don't support SNI, set
   * <code>SSLSupportMethod</code> to <code>vip</code>. This is not recommended, and
   * results in additional monthly charges from CloudFront.</p> </li> </ul> </li>
   * <li> <p>The minimum SSL/TLS protocol version that the distribution can use to
   * communicate with viewers. To specify a minimum version, choose a value for
   * <code>MinimumProtocolVersion</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValues-security-policy">Security
   * Policy</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> </li> <li>
   * <p>The location of the SSL/TLS certificate, <a
   * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-overview.html">Certificate
   * Manager (ACM)</a> (recommended) or <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Identity
   * and Access Management (IAM)</a>. You specify the location by setting a value in
   * one of the following fields (not both):</p> <ul> <li> <p>
   * <code>ACMCertificateArn</code> </p> </li> <li> <p> <code>IAMCertificateId</code>
   * </p> </li> </ul> </li> </ul> <p>All distributions support HTTPS connections from
   * viewers. To require viewers to use HTTPS only, or to redirect them from HTTP to
   * HTTPS, use <code>ViewerProtocolPolicy</code> in the <code>CacheBehavior</code>
   * or <code>DefaultCacheBehavior</code>. To specify how CloudFront should use
   * SSL/TLS to communicate with your custom origin, use
   * <code>CustomOriginConfig</code>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-https.html">Using
   * HTTPS with CloudFront</a> and <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-https-alternate-domain-names.html">
   * Using Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ViewerCertificate">AWS
   * API Reference</a></p>
   */
  class ViewerCertificate
  {
  public:
    AWS_CLOUDFRONT_API ViewerCertificate();
    AWS_CLOUDFRONT_API ViewerCertificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ViewerCertificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>If the distribution uses the CloudFront domain name such as
     * <code>d111111abcdef8.cloudfront.net</code>, set this field to
     * <code>true</code>.</p> <p>If the distribution uses <code>Aliases</code>
     * (alternate domain names or CNAMEs), set this field to <code>false</code> and
     * specify values for the following fields:</p> <ul> <li> <p>
     * <code>ACMCertificateArn</code> or <code>IAMCertificateId</code> (specify a value
     * for one, not both)</p> </li> <li> <p> <code>MinimumProtocolVersion</code> </p>
     * </li> <li> <p> <code>SSLSupportMethod</code> </p> </li> </ul>
     */
    inline bool GetCloudFrontDefaultCertificate() const{ return m_cloudFrontDefaultCertificate; }

    /**
     * <p>If the distribution uses the CloudFront domain name such as
     * <code>d111111abcdef8.cloudfront.net</code>, set this field to
     * <code>true</code>.</p> <p>If the distribution uses <code>Aliases</code>
     * (alternate domain names or CNAMEs), set this field to <code>false</code> and
     * specify values for the following fields:</p> <ul> <li> <p>
     * <code>ACMCertificateArn</code> or <code>IAMCertificateId</code> (specify a value
     * for one, not both)</p> </li> <li> <p> <code>MinimumProtocolVersion</code> </p>
     * </li> <li> <p> <code>SSLSupportMethod</code> </p> </li> </ul>
     */
    inline bool CloudFrontDefaultCertificateHasBeenSet() const { return m_cloudFrontDefaultCertificateHasBeenSet; }

    /**
     * <p>If the distribution uses the CloudFront domain name such as
     * <code>d111111abcdef8.cloudfront.net</code>, set this field to
     * <code>true</code>.</p> <p>If the distribution uses <code>Aliases</code>
     * (alternate domain names or CNAMEs), set this field to <code>false</code> and
     * specify values for the following fields:</p> <ul> <li> <p>
     * <code>ACMCertificateArn</code> or <code>IAMCertificateId</code> (specify a value
     * for one, not both)</p> </li> <li> <p> <code>MinimumProtocolVersion</code> </p>
     * </li> <li> <p> <code>SSLSupportMethod</code> </p> </li> </ul>
     */
    inline void SetCloudFrontDefaultCertificate(bool value) { m_cloudFrontDefaultCertificateHasBeenSet = true; m_cloudFrontDefaultCertificate = value; }

    /**
     * <p>If the distribution uses the CloudFront domain name such as
     * <code>d111111abcdef8.cloudfront.net</code>, set this field to
     * <code>true</code>.</p> <p>If the distribution uses <code>Aliases</code>
     * (alternate domain names or CNAMEs), set this field to <code>false</code> and
     * specify values for the following fields:</p> <ul> <li> <p>
     * <code>ACMCertificateArn</code> or <code>IAMCertificateId</code> (specify a value
     * for one, not both)</p> </li> <li> <p> <code>MinimumProtocolVersion</code> </p>
     * </li> <li> <p> <code>SSLSupportMethod</code> </p> </li> </ul>
     */
    inline ViewerCertificate& WithCloudFrontDefaultCertificate(bool value) { SetCloudFrontDefaultCertificate(value); return *this;}


    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Identity
     * and Access Management (IAM)</a>, provide the ID of the IAM certificate.</p>
     * <p>If you specify an IAM certificate ID, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>. </p>
     */
    inline const Aws::String& GetIAMCertificateId() const{ return m_iAMCertificateId; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Identity
     * and Access Management (IAM)</a>, provide the ID of the IAM certificate.</p>
     * <p>If you specify an IAM certificate ID, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>. </p>
     */
    inline bool IAMCertificateIdHasBeenSet() const { return m_iAMCertificateIdHasBeenSet; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Identity
     * and Access Management (IAM)</a>, provide the ID of the IAM certificate.</p>
     * <p>If you specify an IAM certificate ID, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>. </p>
     */
    inline void SetIAMCertificateId(const Aws::String& value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId = value; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Identity
     * and Access Management (IAM)</a>, provide the ID of the IAM certificate.</p>
     * <p>If you specify an IAM certificate ID, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>. </p>
     */
    inline void SetIAMCertificateId(Aws::String&& value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId = std::move(value); }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Identity
     * and Access Management (IAM)</a>, provide the ID of the IAM certificate.</p>
     * <p>If you specify an IAM certificate ID, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>. </p>
     */
    inline void SetIAMCertificateId(const char* value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId.assign(value); }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Identity
     * and Access Management (IAM)</a>, provide the ID of the IAM certificate.</p>
     * <p>If you specify an IAM certificate ID, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>. </p>
     */
    inline ViewerCertificate& WithIAMCertificateId(const Aws::String& value) { SetIAMCertificateId(value); return *this;}

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Identity
     * and Access Management (IAM)</a>, provide the ID of the IAM certificate.</p>
     * <p>If you specify an IAM certificate ID, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>. </p>
     */
    inline ViewerCertificate& WithIAMCertificateId(Aws::String&& value) { SetIAMCertificateId(std::move(value)); return *this;}

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Identity
     * and Access Management (IAM)</a>, provide the ID of the IAM certificate.</p>
     * <p>If you specify an IAM certificate ID, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>. </p>
     */
    inline ViewerCertificate& WithIAMCertificateId(const char* value) { SetIAMCertificateId(value); return *this;}


    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-overview.html">Certificate
     * Manager (ACM)</a>, provide the Amazon Resource Name (ARN) of the ACM
     * certificate. CloudFront only supports ACM certificates in the US East (N.
     * Virginia) Region (<code>us-east-1</code>).</p> <p>If you specify an ACM
     * certificate ARN, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>.</p>
     */
    inline const Aws::String& GetACMCertificateArn() const{ return m_aCMCertificateArn; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-overview.html">Certificate
     * Manager (ACM)</a>, provide the Amazon Resource Name (ARN) of the ACM
     * certificate. CloudFront only supports ACM certificates in the US East (N.
     * Virginia) Region (<code>us-east-1</code>).</p> <p>If you specify an ACM
     * certificate ARN, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>.</p>
     */
    inline bool ACMCertificateArnHasBeenSet() const { return m_aCMCertificateArnHasBeenSet; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-overview.html">Certificate
     * Manager (ACM)</a>, provide the Amazon Resource Name (ARN) of the ACM
     * certificate. CloudFront only supports ACM certificates in the US East (N.
     * Virginia) Region (<code>us-east-1</code>).</p> <p>If you specify an ACM
     * certificate ARN, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>.</p>
     */
    inline void SetACMCertificateArn(const Aws::String& value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn = value; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-overview.html">Certificate
     * Manager (ACM)</a>, provide the Amazon Resource Name (ARN) of the ACM
     * certificate. CloudFront only supports ACM certificates in the US East (N.
     * Virginia) Region (<code>us-east-1</code>).</p> <p>If you specify an ACM
     * certificate ARN, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>.</p>
     */
    inline void SetACMCertificateArn(Aws::String&& value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn = std::move(value); }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-overview.html">Certificate
     * Manager (ACM)</a>, provide the Amazon Resource Name (ARN) of the ACM
     * certificate. CloudFront only supports ACM certificates in the US East (N.
     * Virginia) Region (<code>us-east-1</code>).</p> <p>If you specify an ACM
     * certificate ARN, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>.</p>
     */
    inline void SetACMCertificateArn(const char* value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn.assign(value); }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-overview.html">Certificate
     * Manager (ACM)</a>, provide the Amazon Resource Name (ARN) of the ACM
     * certificate. CloudFront only supports ACM certificates in the US East (N.
     * Virginia) Region (<code>us-east-1</code>).</p> <p>If you specify an ACM
     * certificate ARN, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>.</p>
     */
    inline ViewerCertificate& WithACMCertificateArn(const Aws::String& value) { SetACMCertificateArn(value); return *this;}

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-overview.html">Certificate
     * Manager (ACM)</a>, provide the Amazon Resource Name (ARN) of the ACM
     * certificate. CloudFront only supports ACM certificates in the US East (N.
     * Virginia) Region (<code>us-east-1</code>).</p> <p>If you specify an ACM
     * certificate ARN, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>.</p>
     */
    inline ViewerCertificate& WithACMCertificateArn(Aws::String&& value) { SetACMCertificateArn(std::move(value)); return *this;}

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs) and the SSL/TLS certificate is stored in <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-overview.html">Certificate
     * Manager (ACM)</a>, provide the Amazon Resource Name (ARN) of the ACM
     * certificate. CloudFront only supports ACM certificates in the US East (N.
     * Virginia) Region (<code>us-east-1</code>).</p> <p>If you specify an ACM
     * certificate ARN, you must also specify values for
     * <code>MinimumProtocolVersion</code> and <code>SSLSupportMethod</code>.</p>
     */
    inline ViewerCertificate& WithACMCertificateArn(const char* value) { SetACMCertificateArn(value); return *this;}


    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify which viewers the distribution accepts HTTPS connections
     * from.</p> <ul> <li> <p> <code>sni-only</code> – The distribution accepts HTTPS
     * connections from only viewers that support <a
     * href="https://en.wikipedia.org/wiki/Server_Name_Indication">server name
     * indication (SNI)</a>. This is recommended. Most browsers and clients support
     * SNI.</p> </li> <li> <p> <code>vip</code> – The distribution accepts HTTPS
     * connections from all viewers including those that don't support SNI. This is not
     * recommended, and results in additional monthly charges from CloudFront.</p>
     * </li> <li> <p> <code>static-ip</code> - Do not specify this value unless your
     * distribution has been enabled for this feature by the CloudFront team. If you
     * have a use case that requires static IP addresses for a distribution, contact
     * CloudFront through the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a>.</p> </li> </ul> <p>If the distribution uses the CloudFront domain
     * name such as <code>d111111abcdef8.cloudfront.net</code>, don't set a value for
     * this field.</p>
     */
    inline const SSLSupportMethod& GetSSLSupportMethod() const{ return m_sSLSupportMethod; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify which viewers the distribution accepts HTTPS connections
     * from.</p> <ul> <li> <p> <code>sni-only</code> – The distribution accepts HTTPS
     * connections from only viewers that support <a
     * href="https://en.wikipedia.org/wiki/Server_Name_Indication">server name
     * indication (SNI)</a>. This is recommended. Most browsers and clients support
     * SNI.</p> </li> <li> <p> <code>vip</code> – The distribution accepts HTTPS
     * connections from all viewers including those that don't support SNI. This is not
     * recommended, and results in additional monthly charges from CloudFront.</p>
     * </li> <li> <p> <code>static-ip</code> - Do not specify this value unless your
     * distribution has been enabled for this feature by the CloudFront team. If you
     * have a use case that requires static IP addresses for a distribution, contact
     * CloudFront through the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a>.</p> </li> </ul> <p>If the distribution uses the CloudFront domain
     * name such as <code>d111111abcdef8.cloudfront.net</code>, don't set a value for
     * this field.</p>
     */
    inline bool SSLSupportMethodHasBeenSet() const { return m_sSLSupportMethodHasBeenSet; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify which viewers the distribution accepts HTTPS connections
     * from.</p> <ul> <li> <p> <code>sni-only</code> – The distribution accepts HTTPS
     * connections from only viewers that support <a
     * href="https://en.wikipedia.org/wiki/Server_Name_Indication">server name
     * indication (SNI)</a>. This is recommended. Most browsers and clients support
     * SNI.</p> </li> <li> <p> <code>vip</code> – The distribution accepts HTTPS
     * connections from all viewers including those that don't support SNI. This is not
     * recommended, and results in additional monthly charges from CloudFront.</p>
     * </li> <li> <p> <code>static-ip</code> - Do not specify this value unless your
     * distribution has been enabled for this feature by the CloudFront team. If you
     * have a use case that requires static IP addresses for a distribution, contact
     * CloudFront through the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a>.</p> </li> </ul> <p>If the distribution uses the CloudFront domain
     * name such as <code>d111111abcdef8.cloudfront.net</code>, don't set a value for
     * this field.</p>
     */
    inline void SetSSLSupportMethod(const SSLSupportMethod& value) { m_sSLSupportMethodHasBeenSet = true; m_sSLSupportMethod = value; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify which viewers the distribution accepts HTTPS connections
     * from.</p> <ul> <li> <p> <code>sni-only</code> – The distribution accepts HTTPS
     * connections from only viewers that support <a
     * href="https://en.wikipedia.org/wiki/Server_Name_Indication">server name
     * indication (SNI)</a>. This is recommended. Most browsers and clients support
     * SNI.</p> </li> <li> <p> <code>vip</code> – The distribution accepts HTTPS
     * connections from all viewers including those that don't support SNI. This is not
     * recommended, and results in additional monthly charges from CloudFront.</p>
     * </li> <li> <p> <code>static-ip</code> - Do not specify this value unless your
     * distribution has been enabled for this feature by the CloudFront team. If you
     * have a use case that requires static IP addresses for a distribution, contact
     * CloudFront through the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a>.</p> </li> </ul> <p>If the distribution uses the CloudFront domain
     * name such as <code>d111111abcdef8.cloudfront.net</code>, don't set a value for
     * this field.</p>
     */
    inline void SetSSLSupportMethod(SSLSupportMethod&& value) { m_sSLSupportMethodHasBeenSet = true; m_sSLSupportMethod = std::move(value); }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify which viewers the distribution accepts HTTPS connections
     * from.</p> <ul> <li> <p> <code>sni-only</code> – The distribution accepts HTTPS
     * connections from only viewers that support <a
     * href="https://en.wikipedia.org/wiki/Server_Name_Indication">server name
     * indication (SNI)</a>. This is recommended. Most browsers and clients support
     * SNI.</p> </li> <li> <p> <code>vip</code> – The distribution accepts HTTPS
     * connections from all viewers including those that don't support SNI. This is not
     * recommended, and results in additional monthly charges from CloudFront.</p>
     * </li> <li> <p> <code>static-ip</code> - Do not specify this value unless your
     * distribution has been enabled for this feature by the CloudFront team. If you
     * have a use case that requires static IP addresses for a distribution, contact
     * CloudFront through the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a>.</p> </li> </ul> <p>If the distribution uses the CloudFront domain
     * name such as <code>d111111abcdef8.cloudfront.net</code>, don't set a value for
     * this field.</p>
     */
    inline ViewerCertificate& WithSSLSupportMethod(const SSLSupportMethod& value) { SetSSLSupportMethod(value); return *this;}

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify which viewers the distribution accepts HTTPS connections
     * from.</p> <ul> <li> <p> <code>sni-only</code> – The distribution accepts HTTPS
     * connections from only viewers that support <a
     * href="https://en.wikipedia.org/wiki/Server_Name_Indication">server name
     * indication (SNI)</a>. This is recommended. Most browsers and clients support
     * SNI.</p> </li> <li> <p> <code>vip</code> – The distribution accepts HTTPS
     * connections from all viewers including those that don't support SNI. This is not
     * recommended, and results in additional monthly charges from CloudFront.</p>
     * </li> <li> <p> <code>static-ip</code> - Do not specify this value unless your
     * distribution has been enabled for this feature by the CloudFront team. If you
     * have a use case that requires static IP addresses for a distribution, contact
     * CloudFront through the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a>.</p> </li> </ul> <p>If the distribution uses the CloudFront domain
     * name such as <code>d111111abcdef8.cloudfront.net</code>, don't set a value for
     * this field.</p>
     */
    inline ViewerCertificate& WithSSLSupportMethod(SSLSupportMethod&& value) { SetSSLSupportMethod(std::move(value)); return *this;}


    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify the security policy that you want CloudFront to use for HTTPS
     * connections with viewers. The security policy determines two settings:</p> <ul>
     * <li> <p>The minimum SSL/TLS protocol that CloudFront can use to communicate with
     * viewers.</p> </li> <li> <p>The ciphers that CloudFront can use to encrypt the
     * content that it returns to viewers.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValues-security-policy">Security
     * Policy</a> and <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">Supported
     * Protocols and Ciphers Between Viewers and CloudFront</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>  <p>On the CloudFront console, this
     * setting is called <b>Security Policy</b>.</p>  <p>When you're using SNI
     * only (you set <code>SSLSupportMethod</code> to <code>sni-only</code>), you must
     * specify <code>TLSv1</code> or higher.</p> <p>If the distribution uses the
     * CloudFront domain name such as <code>d111111abcdef8.cloudfront.net</code> (you
     * set <code>CloudFrontDefaultCertificate</code> to <code>true</code>), CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you set here.</p>
     */
    inline const MinimumProtocolVersion& GetMinimumProtocolVersion() const{ return m_minimumProtocolVersion; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify the security policy that you want CloudFront to use for HTTPS
     * connections with viewers. The security policy determines two settings:</p> <ul>
     * <li> <p>The minimum SSL/TLS protocol that CloudFront can use to communicate with
     * viewers.</p> </li> <li> <p>The ciphers that CloudFront can use to encrypt the
     * content that it returns to viewers.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValues-security-policy">Security
     * Policy</a> and <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">Supported
     * Protocols and Ciphers Between Viewers and CloudFront</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>  <p>On the CloudFront console, this
     * setting is called <b>Security Policy</b>.</p>  <p>When you're using SNI
     * only (you set <code>SSLSupportMethod</code> to <code>sni-only</code>), you must
     * specify <code>TLSv1</code> or higher.</p> <p>If the distribution uses the
     * CloudFront domain name such as <code>d111111abcdef8.cloudfront.net</code> (you
     * set <code>CloudFrontDefaultCertificate</code> to <code>true</code>), CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you set here.</p>
     */
    inline bool MinimumProtocolVersionHasBeenSet() const { return m_minimumProtocolVersionHasBeenSet; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify the security policy that you want CloudFront to use for HTTPS
     * connections with viewers. The security policy determines two settings:</p> <ul>
     * <li> <p>The minimum SSL/TLS protocol that CloudFront can use to communicate with
     * viewers.</p> </li> <li> <p>The ciphers that CloudFront can use to encrypt the
     * content that it returns to viewers.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValues-security-policy">Security
     * Policy</a> and <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">Supported
     * Protocols and Ciphers Between Viewers and CloudFront</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>  <p>On the CloudFront console, this
     * setting is called <b>Security Policy</b>.</p>  <p>When you're using SNI
     * only (you set <code>SSLSupportMethod</code> to <code>sni-only</code>), you must
     * specify <code>TLSv1</code> or higher.</p> <p>If the distribution uses the
     * CloudFront domain name such as <code>d111111abcdef8.cloudfront.net</code> (you
     * set <code>CloudFrontDefaultCertificate</code> to <code>true</code>), CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you set here.</p>
     */
    inline void SetMinimumProtocolVersion(const MinimumProtocolVersion& value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion = value; }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify the security policy that you want CloudFront to use for HTTPS
     * connections with viewers. The security policy determines two settings:</p> <ul>
     * <li> <p>The minimum SSL/TLS protocol that CloudFront can use to communicate with
     * viewers.</p> </li> <li> <p>The ciphers that CloudFront can use to encrypt the
     * content that it returns to viewers.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValues-security-policy">Security
     * Policy</a> and <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">Supported
     * Protocols and Ciphers Between Viewers and CloudFront</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>  <p>On the CloudFront console, this
     * setting is called <b>Security Policy</b>.</p>  <p>When you're using SNI
     * only (you set <code>SSLSupportMethod</code> to <code>sni-only</code>), you must
     * specify <code>TLSv1</code> or higher.</p> <p>If the distribution uses the
     * CloudFront domain name such as <code>d111111abcdef8.cloudfront.net</code> (you
     * set <code>CloudFrontDefaultCertificate</code> to <code>true</code>), CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you set here.</p>
     */
    inline void SetMinimumProtocolVersion(MinimumProtocolVersion&& value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion = std::move(value); }

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify the security policy that you want CloudFront to use for HTTPS
     * connections with viewers. The security policy determines two settings:</p> <ul>
     * <li> <p>The minimum SSL/TLS protocol that CloudFront can use to communicate with
     * viewers.</p> </li> <li> <p>The ciphers that CloudFront can use to encrypt the
     * content that it returns to viewers.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValues-security-policy">Security
     * Policy</a> and <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">Supported
     * Protocols and Ciphers Between Viewers and CloudFront</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>  <p>On the CloudFront console, this
     * setting is called <b>Security Policy</b>.</p>  <p>When you're using SNI
     * only (you set <code>SSLSupportMethod</code> to <code>sni-only</code>), you must
     * specify <code>TLSv1</code> or higher.</p> <p>If the distribution uses the
     * CloudFront domain name such as <code>d111111abcdef8.cloudfront.net</code> (you
     * set <code>CloudFrontDefaultCertificate</code> to <code>true</code>), CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you set here.</p>
     */
    inline ViewerCertificate& WithMinimumProtocolVersion(const MinimumProtocolVersion& value) { SetMinimumProtocolVersion(value); return *this;}

    /**
     * <p>If the distribution uses <code>Aliases</code> (alternate domain names or
     * CNAMEs), specify the security policy that you want CloudFront to use for HTTPS
     * connections with viewers. The security policy determines two settings:</p> <ul>
     * <li> <p>The minimum SSL/TLS protocol that CloudFront can use to communicate with
     * viewers.</p> </li> <li> <p>The ciphers that CloudFront can use to encrypt the
     * content that it returns to viewers.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValues-security-policy">Security
     * Policy</a> and <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">Supported
     * Protocols and Ciphers Between Viewers and CloudFront</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>  <p>On the CloudFront console, this
     * setting is called <b>Security Policy</b>.</p>  <p>When you're using SNI
     * only (you set <code>SSLSupportMethod</code> to <code>sni-only</code>), you must
     * specify <code>TLSv1</code> or higher.</p> <p>If the distribution uses the
     * CloudFront domain name such as <code>d111111abcdef8.cloudfront.net</code> (you
     * set <code>CloudFrontDefaultCertificate</code> to <code>true</code>), CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you set here.</p>
     */
    inline ViewerCertificate& WithMinimumProtocolVersion(MinimumProtocolVersion&& value) { SetMinimumProtocolVersion(std::move(value)); return *this;}

  private:

    bool m_cloudFrontDefaultCertificate;
    bool m_cloudFrontDefaultCertificateHasBeenSet = false;

    Aws::String m_iAMCertificateId;
    bool m_iAMCertificateIdHasBeenSet = false;

    Aws::String m_aCMCertificateArn;
    bool m_aCMCertificateArnHasBeenSet = false;

    SSLSupportMethod m_sSLSupportMethod;
    bool m_sSLSupportMethodHasBeenSet = false;

    MinimumProtocolVersion m_minimumProtocolVersion;
    bool m_minimumProtocolVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
