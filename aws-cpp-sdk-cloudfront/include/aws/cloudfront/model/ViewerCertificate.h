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
   * <p>A complex type that specifies the following:</p> <ul> <li> <p>Whether you
   * want viewers to use HTTP or HTTPS to request your objects.</p> </li> <li> <p>If
   * you want viewers to use HTTPS, whether you're using an alternate domain name
   * such as <code>example.com</code> or the CloudFront domain name for your
   * distribution, such as <code>d111111abcdef8.cloudfront.net</code>.</p> </li> <li>
   * <p>If you're using an alternate domain name, whether AWS Certificate Manager
   * (ACM) provided the certificate, or you purchased a certificate from a
   * third-party certificate authority and imported it into ACM or uploaded it to the
   * IAM certificate store.</p> </li> </ul> <p>Specify only one of the following
   * values: </p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-ACMCertificateArn">ACMCertificateArn</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-IAMCertificateId">IAMCertificateId</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-CloudFrontDefaultCertificate">CloudFrontDefaultCertificate</a>
   * </p> </li> </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS">
   * Using Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ViewerCertificate">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ViewerCertificate
  {
  public:
    ViewerCertificate();
    ViewerCertificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    ViewerCertificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>If you're using the CloudFront domain name for your distribution, such as
     * <code>d111111abcdef8.cloudfront.net</code>, specify the following value:</p>
     * <ul> <li> <p>
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;
     * </code> </p> </li> </ul>
     */
    inline bool GetCloudFrontDefaultCertificate() const{ return m_cloudFrontDefaultCertificate; }

    /**
     * <p>If you're using the CloudFront domain name for your distribution, such as
     * <code>d111111abcdef8.cloudfront.net</code>, specify the following value:</p>
     * <ul> <li> <p>
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;
     * </code> </p> </li> </ul>
     */
    inline bool CloudFrontDefaultCertificateHasBeenSet() const { return m_cloudFrontDefaultCertificateHasBeenSet; }

    /**
     * <p>If you're using the CloudFront domain name for your distribution, such as
     * <code>d111111abcdef8.cloudfront.net</code>, specify the following value:</p>
     * <ul> <li> <p>
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;
     * </code> </p> </li> </ul>
     */
    inline void SetCloudFrontDefaultCertificate(bool value) { m_cloudFrontDefaultCertificateHasBeenSet = true; m_cloudFrontDefaultCertificate = value; }

    /**
     * <p>If you're using the CloudFront domain name for your distribution, such as
     * <code>d111111abcdef8.cloudfront.net</code>, specify the following value:</p>
     * <ul> <li> <p>
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;
     * </code> </p> </li> </ul>
     */
    inline ViewerCertificate& WithCloudFrontDefaultCertificate(bool value) { SetCloudFrontDefaultCertificate(value); return *this;}


    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if you purchased your certificate from a
     * third-party certificate authority:</p> <ul> <li> <p>
     * <code>&lt;IAMCertificateId&gt;<i>IAM certificate
     * ID</i>&lt;IAMCertificateId&gt;</code> where <code> <i>IAM certificate ID</i>
     * </code> is the ID that IAM returned when you added the certificate to the IAM
     * certificate store.</p> </li> </ul> <p>If you specify
     * <code>IAMCertificateId</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline const Aws::String& GetIAMCertificateId() const{ return m_iAMCertificateId; }

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if you purchased your certificate from a
     * third-party certificate authority:</p> <ul> <li> <p>
     * <code>&lt;IAMCertificateId&gt;<i>IAM certificate
     * ID</i>&lt;IAMCertificateId&gt;</code> where <code> <i>IAM certificate ID</i>
     * </code> is the ID that IAM returned when you added the certificate to the IAM
     * certificate store.</p> </li> </ul> <p>If you specify
     * <code>IAMCertificateId</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline bool IAMCertificateIdHasBeenSet() const { return m_iAMCertificateIdHasBeenSet; }

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if you purchased your certificate from a
     * third-party certificate authority:</p> <ul> <li> <p>
     * <code>&lt;IAMCertificateId&gt;<i>IAM certificate
     * ID</i>&lt;IAMCertificateId&gt;</code> where <code> <i>IAM certificate ID</i>
     * </code> is the ID that IAM returned when you added the certificate to the IAM
     * certificate store.</p> </li> </ul> <p>If you specify
     * <code>IAMCertificateId</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline void SetIAMCertificateId(const Aws::String& value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId = value; }

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if you purchased your certificate from a
     * third-party certificate authority:</p> <ul> <li> <p>
     * <code>&lt;IAMCertificateId&gt;<i>IAM certificate
     * ID</i>&lt;IAMCertificateId&gt;</code> where <code> <i>IAM certificate ID</i>
     * </code> is the ID that IAM returned when you added the certificate to the IAM
     * certificate store.</p> </li> </ul> <p>If you specify
     * <code>IAMCertificateId</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline void SetIAMCertificateId(Aws::String&& value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId = std::move(value); }

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if you purchased your certificate from a
     * third-party certificate authority:</p> <ul> <li> <p>
     * <code>&lt;IAMCertificateId&gt;<i>IAM certificate
     * ID</i>&lt;IAMCertificateId&gt;</code> where <code> <i>IAM certificate ID</i>
     * </code> is the ID that IAM returned when you added the certificate to the IAM
     * certificate store.</p> </li> </ul> <p>If you specify
     * <code>IAMCertificateId</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline void SetIAMCertificateId(const char* value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId.assign(value); }

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if you purchased your certificate from a
     * third-party certificate authority:</p> <ul> <li> <p>
     * <code>&lt;IAMCertificateId&gt;<i>IAM certificate
     * ID</i>&lt;IAMCertificateId&gt;</code> where <code> <i>IAM certificate ID</i>
     * </code> is the ID that IAM returned when you added the certificate to the IAM
     * certificate store.</p> </li> </ul> <p>If you specify
     * <code>IAMCertificateId</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline ViewerCertificate& WithIAMCertificateId(const Aws::String& value) { SetIAMCertificateId(value); return *this;}

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if you purchased your certificate from a
     * third-party certificate authority:</p> <ul> <li> <p>
     * <code>&lt;IAMCertificateId&gt;<i>IAM certificate
     * ID</i>&lt;IAMCertificateId&gt;</code> where <code> <i>IAM certificate ID</i>
     * </code> is the ID that IAM returned when you added the certificate to the IAM
     * certificate store.</p> </li> </ul> <p>If you specify
     * <code>IAMCertificateId</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline ViewerCertificate& WithIAMCertificateId(Aws::String&& value) { SetIAMCertificateId(std::move(value)); return *this;}

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if you purchased your certificate from a
     * third-party certificate authority:</p> <ul> <li> <p>
     * <code>&lt;IAMCertificateId&gt;<i>IAM certificate
     * ID</i>&lt;IAMCertificateId&gt;</code> where <code> <i>IAM certificate ID</i>
     * </code> is the ID that IAM returned when you added the certificate to the IAM
     * certificate store.</p> </li> </ul> <p>If you specify
     * <code>IAMCertificateId</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline ViewerCertificate& WithIAMCertificateId(const char* value) { SetIAMCertificateId(value); return *this;}


    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if ACM provided your certificate:</p> <ul> <li>
     * <p> <code>&lt;ACMCertificateArn&gt;<i>ARN for ACM SSL/TLS
     * certificate</i>&lt;ACMCertificateArn&gt;</code> where <code> <i>ARN for ACM
     * SSL/TLS certificate</i> </code> is the ARN for the ACM SSL/TLS certificate that
     * you want to use for this distribution.</p> </li> </ul> <p>If you specify
     * <code>ACMCertificateArn</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline const Aws::String& GetACMCertificateArn() const{ return m_aCMCertificateArn; }

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if ACM provided your certificate:</p> <ul> <li>
     * <p> <code>&lt;ACMCertificateArn&gt;<i>ARN for ACM SSL/TLS
     * certificate</i>&lt;ACMCertificateArn&gt;</code> where <code> <i>ARN for ACM
     * SSL/TLS certificate</i> </code> is the ARN for the ACM SSL/TLS certificate that
     * you want to use for this distribution.</p> </li> </ul> <p>If you specify
     * <code>ACMCertificateArn</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline bool ACMCertificateArnHasBeenSet() const { return m_aCMCertificateArnHasBeenSet; }

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if ACM provided your certificate:</p> <ul> <li>
     * <p> <code>&lt;ACMCertificateArn&gt;<i>ARN for ACM SSL/TLS
     * certificate</i>&lt;ACMCertificateArn&gt;</code> where <code> <i>ARN for ACM
     * SSL/TLS certificate</i> </code> is the ARN for the ACM SSL/TLS certificate that
     * you want to use for this distribution.</p> </li> </ul> <p>If you specify
     * <code>ACMCertificateArn</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline void SetACMCertificateArn(const Aws::String& value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn = value; }

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if ACM provided your certificate:</p> <ul> <li>
     * <p> <code>&lt;ACMCertificateArn&gt;<i>ARN for ACM SSL/TLS
     * certificate</i>&lt;ACMCertificateArn&gt;</code> where <code> <i>ARN for ACM
     * SSL/TLS certificate</i> </code> is the ARN for the ACM SSL/TLS certificate that
     * you want to use for this distribution.</p> </li> </ul> <p>If you specify
     * <code>ACMCertificateArn</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline void SetACMCertificateArn(Aws::String&& value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn = std::move(value); }

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if ACM provided your certificate:</p> <ul> <li>
     * <p> <code>&lt;ACMCertificateArn&gt;<i>ARN for ACM SSL/TLS
     * certificate</i>&lt;ACMCertificateArn&gt;</code> where <code> <i>ARN for ACM
     * SSL/TLS certificate</i> </code> is the ARN for the ACM SSL/TLS certificate that
     * you want to use for this distribution.</p> </li> </ul> <p>If you specify
     * <code>ACMCertificateArn</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline void SetACMCertificateArn(const char* value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn.assign(value); }

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if ACM provided your certificate:</p> <ul> <li>
     * <p> <code>&lt;ACMCertificateArn&gt;<i>ARN for ACM SSL/TLS
     * certificate</i>&lt;ACMCertificateArn&gt;</code> where <code> <i>ARN for ACM
     * SSL/TLS certificate</i> </code> is the ARN for the ACM SSL/TLS certificate that
     * you want to use for this distribution.</p> </li> </ul> <p>If you specify
     * <code>ACMCertificateArn</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline ViewerCertificate& WithACMCertificateArn(const Aws::String& value) { SetACMCertificateArn(value); return *this;}

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if ACM provided your certificate:</p> <ul> <li>
     * <p> <code>&lt;ACMCertificateArn&gt;<i>ARN for ACM SSL/TLS
     * certificate</i>&lt;ACMCertificateArn&gt;</code> where <code> <i>ARN for ACM
     * SSL/TLS certificate</i> </code> is the ARN for the ACM SSL/TLS certificate that
     * you want to use for this distribution.</p> </li> </ul> <p>If you specify
     * <code>ACMCertificateArn</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline ViewerCertificate& WithACMCertificateArn(Aws::String&& value) { SetACMCertificateArn(std::move(value)); return *this;}

    /**
     * <p>If you want viewers to use HTTPS to request your objects and you're using an
     * alternate domain name, you must choose the type of certificate that you want to
     * use. Specify the following value if ACM provided your certificate:</p> <ul> <li>
     * <p> <code>&lt;ACMCertificateArn&gt;<i>ARN for ACM SSL/TLS
     * certificate</i>&lt;ACMCertificateArn&gt;</code> where <code> <i>ARN for ACM
     * SSL/TLS certificate</i> </code> is the ARN for the ACM SSL/TLS certificate that
     * you want to use for this distribution.</p> </li> </ul> <p>If you specify
     * <code>ACMCertificateArn</code>, you must also specify a value for
     * <code>SSLSupportMethod</code>.</p>
     */
    inline ViewerCertificate& WithACMCertificateArn(const char* value) { SetACMCertificateArn(value); return *this;}


    /**
     * <p>If you specify a value for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-ACMCertificateArn">ACMCertificateArn</a>
     * or for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-IAMCertificateId">IAMCertificateId</a>,
     * you must also specify how you want CloudFront to serve HTTPS requests: using a
     * method that works for browsers and clients released after 2010 or one that works
     * for all clients.</p> <ul> <li> <p> <code>sni-only</code>: CloudFront can respond
     * to HTTPS requests from viewers that support Server Name Indication (SNI). All
     * modern browsers support SNI, but there are a few that don't. For a current list
     * of the browsers that support SNI, see the <a
     * href="http://en.wikipedia.org/wiki/Server_Name_Indication">Wikipedia entry
     * Server Name Indication</a>. To learn about options to explore if you have users
     * with browsers that don't include SNI support, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> </li> <li> <p> <code>vip</code>: CloudFront uses dedicated IP
     * addresses for your content and can respond to HTTPS requests from any viewer.
     * However, there are additional monthly charges. For details, including specific
     * pricing information, see <a
     * href="http://aws.amazon.com/cloudfront/custom-ssl-domains/">Custom SSL options
     * for Amazon CloudFront</a> on the AWS marketing site.</p> </li> </ul> <p>Don't
     * specify a value for <code>SSLSupportMethod</code> if you specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const SSLSupportMethod& GetSSLSupportMethod() const{ return m_sSLSupportMethod; }

    /**
     * <p>If you specify a value for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-ACMCertificateArn">ACMCertificateArn</a>
     * or for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-IAMCertificateId">IAMCertificateId</a>,
     * you must also specify how you want CloudFront to serve HTTPS requests: using a
     * method that works for browsers and clients released after 2010 or one that works
     * for all clients.</p> <ul> <li> <p> <code>sni-only</code>: CloudFront can respond
     * to HTTPS requests from viewers that support Server Name Indication (SNI). All
     * modern browsers support SNI, but there are a few that don't. For a current list
     * of the browsers that support SNI, see the <a
     * href="http://en.wikipedia.org/wiki/Server_Name_Indication">Wikipedia entry
     * Server Name Indication</a>. To learn about options to explore if you have users
     * with browsers that don't include SNI support, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> </li> <li> <p> <code>vip</code>: CloudFront uses dedicated IP
     * addresses for your content and can respond to HTTPS requests from any viewer.
     * However, there are additional monthly charges. For details, including specific
     * pricing information, see <a
     * href="http://aws.amazon.com/cloudfront/custom-ssl-domains/">Custom SSL options
     * for Amazon CloudFront</a> on the AWS marketing site.</p> </li> </ul> <p>Don't
     * specify a value for <code>SSLSupportMethod</code> if you specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline bool SSLSupportMethodHasBeenSet() const { return m_sSLSupportMethodHasBeenSet; }

    /**
     * <p>If you specify a value for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-ACMCertificateArn">ACMCertificateArn</a>
     * or for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-IAMCertificateId">IAMCertificateId</a>,
     * you must also specify how you want CloudFront to serve HTTPS requests: using a
     * method that works for browsers and clients released after 2010 or one that works
     * for all clients.</p> <ul> <li> <p> <code>sni-only</code>: CloudFront can respond
     * to HTTPS requests from viewers that support Server Name Indication (SNI). All
     * modern browsers support SNI, but there are a few that don't. For a current list
     * of the browsers that support SNI, see the <a
     * href="http://en.wikipedia.org/wiki/Server_Name_Indication">Wikipedia entry
     * Server Name Indication</a>. To learn about options to explore if you have users
     * with browsers that don't include SNI support, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> </li> <li> <p> <code>vip</code>: CloudFront uses dedicated IP
     * addresses for your content and can respond to HTTPS requests from any viewer.
     * However, there are additional monthly charges. For details, including specific
     * pricing information, see <a
     * href="http://aws.amazon.com/cloudfront/custom-ssl-domains/">Custom SSL options
     * for Amazon CloudFront</a> on the AWS marketing site.</p> </li> </ul> <p>Don't
     * specify a value for <code>SSLSupportMethod</code> if you specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetSSLSupportMethod(const SSLSupportMethod& value) { m_sSLSupportMethodHasBeenSet = true; m_sSLSupportMethod = value; }

    /**
     * <p>If you specify a value for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-ACMCertificateArn">ACMCertificateArn</a>
     * or for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-IAMCertificateId">IAMCertificateId</a>,
     * you must also specify how you want CloudFront to serve HTTPS requests: using a
     * method that works for browsers and clients released after 2010 or one that works
     * for all clients.</p> <ul> <li> <p> <code>sni-only</code>: CloudFront can respond
     * to HTTPS requests from viewers that support Server Name Indication (SNI). All
     * modern browsers support SNI, but there are a few that don't. For a current list
     * of the browsers that support SNI, see the <a
     * href="http://en.wikipedia.org/wiki/Server_Name_Indication">Wikipedia entry
     * Server Name Indication</a>. To learn about options to explore if you have users
     * with browsers that don't include SNI support, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> </li> <li> <p> <code>vip</code>: CloudFront uses dedicated IP
     * addresses for your content and can respond to HTTPS requests from any viewer.
     * However, there are additional monthly charges. For details, including specific
     * pricing information, see <a
     * href="http://aws.amazon.com/cloudfront/custom-ssl-domains/">Custom SSL options
     * for Amazon CloudFront</a> on the AWS marketing site.</p> </li> </ul> <p>Don't
     * specify a value for <code>SSLSupportMethod</code> if you specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetSSLSupportMethod(SSLSupportMethod&& value) { m_sSLSupportMethodHasBeenSet = true; m_sSLSupportMethod = std::move(value); }

    /**
     * <p>If you specify a value for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-ACMCertificateArn">ACMCertificateArn</a>
     * or for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-IAMCertificateId">IAMCertificateId</a>,
     * you must also specify how you want CloudFront to serve HTTPS requests: using a
     * method that works for browsers and clients released after 2010 or one that works
     * for all clients.</p> <ul> <li> <p> <code>sni-only</code>: CloudFront can respond
     * to HTTPS requests from viewers that support Server Name Indication (SNI). All
     * modern browsers support SNI, but there are a few that don't. For a current list
     * of the browsers that support SNI, see the <a
     * href="http://en.wikipedia.org/wiki/Server_Name_Indication">Wikipedia entry
     * Server Name Indication</a>. To learn about options to explore if you have users
     * with browsers that don't include SNI support, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> </li> <li> <p> <code>vip</code>: CloudFront uses dedicated IP
     * addresses for your content and can respond to HTTPS requests from any viewer.
     * However, there are additional monthly charges. For details, including specific
     * pricing information, see <a
     * href="http://aws.amazon.com/cloudfront/custom-ssl-domains/">Custom SSL options
     * for Amazon CloudFront</a> on the AWS marketing site.</p> </li> </ul> <p>Don't
     * specify a value for <code>SSLSupportMethod</code> if you specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline ViewerCertificate& WithSSLSupportMethod(const SSLSupportMethod& value) { SetSSLSupportMethod(value); return *this;}

    /**
     * <p>If you specify a value for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-ACMCertificateArn">ACMCertificateArn</a>
     * or for <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ViewerCertificate.html#cloudfront-Type-ViewerCertificate-IAMCertificateId">IAMCertificateId</a>,
     * you must also specify how you want CloudFront to serve HTTPS requests: using a
     * method that works for browsers and clients released after 2010 or one that works
     * for all clients.</p> <ul> <li> <p> <code>sni-only</code>: CloudFront can respond
     * to HTTPS requests from viewers that support Server Name Indication (SNI). All
     * modern browsers support SNI, but there are a few that don't. For a current list
     * of the browsers that support SNI, see the <a
     * href="http://en.wikipedia.org/wiki/Server_Name_Indication">Wikipedia entry
     * Server Name Indication</a>. To learn about options to explore if you have users
     * with browsers that don't include SNI support, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> </li> <li> <p> <code>vip</code>: CloudFront uses dedicated IP
     * addresses for your content and can respond to HTTPS requests from any viewer.
     * However, there are additional monthly charges. For details, including specific
     * pricing information, see <a
     * href="http://aws.amazon.com/cloudfront/custom-ssl-domains/">Custom SSL options
     * for Amazon CloudFront</a> on the AWS marketing site.</p> </li> </ul> <p>Don't
     * specify a value for <code>SSLSupportMethod</code> if you specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cnames-https-dedicated-ip-or-sni.html">Choosing
     * How CloudFront Serves HTTPS Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline ViewerCertificate& WithSSLSupportMethod(SSLSupportMethod&& value) { SetSSLSupportMethod(std::move(value)); return *this;}


    /**
     * <p>Specify the security policy that you want CloudFront to use for HTTPS
     * connections. A security policy determines two settings:</p> <ul> <li> <p>The
     * minimum SSL/TLS protocol that CloudFront uses to communicate with viewers</p>
     * </li> <li> <p>The cipher that CloudFront uses to encrypt the content that it
     * returns to viewers</p> </li> </ul> <note> <p>On the CloudFront console, this
     * setting is called <b>Security policy</b>.</p> </note> <p>We recommend that you
     * specify <code>TLSv1.1_2016</code> unless your users are using browsers or
     * devices that do not support TLSv1.1 or later.</p> <p>When both of the following
     * are true, you must specify <code>TLSv1</code> or later for the security policy:
     * </p> <ul> <li> <p>You're using a custom certificate: you specified a value for
     * <code>ACMCertificateArn</code> or for <code>IAMCertificateId</code> </p> </li>
     * <li> <p>You're using SNI: you specified <code>sni-only</code> for
     * <code>SSLSupportMethod</code> </p> </li> </ul> <p>If you specify
     * <code>true</code> for <code>CloudFrontDefaultCertificate</code>, CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you specify for <code>MinimumProtocolVersion</code>.</p> <p>For
     * information about the relationship between the security policy that you choose
     * and the protocols and ciphers that CloudFront uses to communicate with viewers,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
     * Supported SSL/TLS Protocols and Ciphers for Communication Between Viewers and
     * CloudFront</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const MinimumProtocolVersion& GetMinimumProtocolVersion() const{ return m_minimumProtocolVersion; }

    /**
     * <p>Specify the security policy that you want CloudFront to use for HTTPS
     * connections. A security policy determines two settings:</p> <ul> <li> <p>The
     * minimum SSL/TLS protocol that CloudFront uses to communicate with viewers</p>
     * </li> <li> <p>The cipher that CloudFront uses to encrypt the content that it
     * returns to viewers</p> </li> </ul> <note> <p>On the CloudFront console, this
     * setting is called <b>Security policy</b>.</p> </note> <p>We recommend that you
     * specify <code>TLSv1.1_2016</code> unless your users are using browsers or
     * devices that do not support TLSv1.1 or later.</p> <p>When both of the following
     * are true, you must specify <code>TLSv1</code> or later for the security policy:
     * </p> <ul> <li> <p>You're using a custom certificate: you specified a value for
     * <code>ACMCertificateArn</code> or for <code>IAMCertificateId</code> </p> </li>
     * <li> <p>You're using SNI: you specified <code>sni-only</code> for
     * <code>SSLSupportMethod</code> </p> </li> </ul> <p>If you specify
     * <code>true</code> for <code>CloudFrontDefaultCertificate</code>, CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you specify for <code>MinimumProtocolVersion</code>.</p> <p>For
     * information about the relationship between the security policy that you choose
     * and the protocols and ciphers that CloudFront uses to communicate with viewers,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
     * Supported SSL/TLS Protocols and Ciphers for Communication Between Viewers and
     * CloudFront</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool MinimumProtocolVersionHasBeenSet() const { return m_minimumProtocolVersionHasBeenSet; }

    /**
     * <p>Specify the security policy that you want CloudFront to use for HTTPS
     * connections. A security policy determines two settings:</p> <ul> <li> <p>The
     * minimum SSL/TLS protocol that CloudFront uses to communicate with viewers</p>
     * </li> <li> <p>The cipher that CloudFront uses to encrypt the content that it
     * returns to viewers</p> </li> </ul> <note> <p>On the CloudFront console, this
     * setting is called <b>Security policy</b>.</p> </note> <p>We recommend that you
     * specify <code>TLSv1.1_2016</code> unless your users are using browsers or
     * devices that do not support TLSv1.1 or later.</p> <p>When both of the following
     * are true, you must specify <code>TLSv1</code> or later for the security policy:
     * </p> <ul> <li> <p>You're using a custom certificate: you specified a value for
     * <code>ACMCertificateArn</code> or for <code>IAMCertificateId</code> </p> </li>
     * <li> <p>You're using SNI: you specified <code>sni-only</code> for
     * <code>SSLSupportMethod</code> </p> </li> </ul> <p>If you specify
     * <code>true</code> for <code>CloudFrontDefaultCertificate</code>, CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you specify for <code>MinimumProtocolVersion</code>.</p> <p>For
     * information about the relationship between the security policy that you choose
     * and the protocols and ciphers that CloudFront uses to communicate with viewers,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
     * Supported SSL/TLS Protocols and Ciphers for Communication Between Viewers and
     * CloudFront</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetMinimumProtocolVersion(const MinimumProtocolVersion& value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion = value; }

    /**
     * <p>Specify the security policy that you want CloudFront to use for HTTPS
     * connections. A security policy determines two settings:</p> <ul> <li> <p>The
     * minimum SSL/TLS protocol that CloudFront uses to communicate with viewers</p>
     * </li> <li> <p>The cipher that CloudFront uses to encrypt the content that it
     * returns to viewers</p> </li> </ul> <note> <p>On the CloudFront console, this
     * setting is called <b>Security policy</b>.</p> </note> <p>We recommend that you
     * specify <code>TLSv1.1_2016</code> unless your users are using browsers or
     * devices that do not support TLSv1.1 or later.</p> <p>When both of the following
     * are true, you must specify <code>TLSv1</code> or later for the security policy:
     * </p> <ul> <li> <p>You're using a custom certificate: you specified a value for
     * <code>ACMCertificateArn</code> or for <code>IAMCertificateId</code> </p> </li>
     * <li> <p>You're using SNI: you specified <code>sni-only</code> for
     * <code>SSLSupportMethod</code> </p> </li> </ul> <p>If you specify
     * <code>true</code> for <code>CloudFrontDefaultCertificate</code>, CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you specify for <code>MinimumProtocolVersion</code>.</p> <p>For
     * information about the relationship between the security policy that you choose
     * and the protocols and ciphers that CloudFront uses to communicate with viewers,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
     * Supported SSL/TLS Protocols and Ciphers for Communication Between Viewers and
     * CloudFront</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetMinimumProtocolVersion(MinimumProtocolVersion&& value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion = std::move(value); }

    /**
     * <p>Specify the security policy that you want CloudFront to use for HTTPS
     * connections. A security policy determines two settings:</p> <ul> <li> <p>The
     * minimum SSL/TLS protocol that CloudFront uses to communicate with viewers</p>
     * </li> <li> <p>The cipher that CloudFront uses to encrypt the content that it
     * returns to viewers</p> </li> </ul> <note> <p>On the CloudFront console, this
     * setting is called <b>Security policy</b>.</p> </note> <p>We recommend that you
     * specify <code>TLSv1.1_2016</code> unless your users are using browsers or
     * devices that do not support TLSv1.1 or later.</p> <p>When both of the following
     * are true, you must specify <code>TLSv1</code> or later for the security policy:
     * </p> <ul> <li> <p>You're using a custom certificate: you specified a value for
     * <code>ACMCertificateArn</code> or for <code>IAMCertificateId</code> </p> </li>
     * <li> <p>You're using SNI: you specified <code>sni-only</code> for
     * <code>SSLSupportMethod</code> </p> </li> </ul> <p>If you specify
     * <code>true</code> for <code>CloudFrontDefaultCertificate</code>, CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you specify for <code>MinimumProtocolVersion</code>.</p> <p>For
     * information about the relationship between the security policy that you choose
     * and the protocols and ciphers that CloudFront uses to communicate with viewers,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
     * Supported SSL/TLS Protocols and Ciphers for Communication Between Viewers and
     * CloudFront</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline ViewerCertificate& WithMinimumProtocolVersion(const MinimumProtocolVersion& value) { SetMinimumProtocolVersion(value); return *this;}

    /**
     * <p>Specify the security policy that you want CloudFront to use for HTTPS
     * connections. A security policy determines two settings:</p> <ul> <li> <p>The
     * minimum SSL/TLS protocol that CloudFront uses to communicate with viewers</p>
     * </li> <li> <p>The cipher that CloudFront uses to encrypt the content that it
     * returns to viewers</p> </li> </ul> <note> <p>On the CloudFront console, this
     * setting is called <b>Security policy</b>.</p> </note> <p>We recommend that you
     * specify <code>TLSv1.1_2016</code> unless your users are using browsers or
     * devices that do not support TLSv1.1 or later.</p> <p>When both of the following
     * are true, you must specify <code>TLSv1</code> or later for the security policy:
     * </p> <ul> <li> <p>You're using a custom certificate: you specified a value for
     * <code>ACMCertificateArn</code> or for <code>IAMCertificateId</code> </p> </li>
     * <li> <p>You're using SNI: you specified <code>sni-only</code> for
     * <code>SSLSupportMethod</code> </p> </li> </ul> <p>If you specify
     * <code>true</code> for <code>CloudFrontDefaultCertificate</code>, CloudFront
     * automatically sets the security policy to <code>TLSv1</code> regardless of the
     * value that you specify for <code>MinimumProtocolVersion</code>.</p> <p>For
     * information about the relationship between the security policy that you choose
     * and the protocols and ciphers that CloudFront uses to communicate with viewers,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
     * Supported SSL/TLS Protocols and Ciphers for Communication Between Viewers and
     * CloudFront</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline ViewerCertificate& WithMinimumProtocolVersion(MinimumProtocolVersion&& value) { SetMinimumProtocolVersion(std::move(value)); return *this;}

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
