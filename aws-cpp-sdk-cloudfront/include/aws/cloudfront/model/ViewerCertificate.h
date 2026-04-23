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
   * IAM certificate store.</p> </li> </ul> <p>You must specify only one of the
   * following values: </p> <ul> <li> <p> <a>ViewerCertificate$ACMCertificateArn</a>
   * </p> </li> <li> <p> <a>ViewerCertificate$IAMCertificateId</a> </p> </li> <li>
   * <p> <a>ViewerCertificate$CloudFrontDefaultCertificate</a> </p> </li> </ul>
   * <p>Don't specify <code>false</code> for
   * <code>CloudFrontDefaultCertificate</code>.</p> <p> <b>If you want viewers to use
   * HTTP instead of HTTPS to request your objects</b>: Specify the following
   * value:</p> <p>
   * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>
   * </p> <p>In addition, specify <code>allow-all</code> for
   * <code>ViewerProtocolPolicy</code> for all of your cache behaviors.</p> <p> <b>If
   * you want viewers to use HTTPS to request your objects</b>: Choose the type of
   * certificate that you want to use based on whether you're using an alternate
   * domain name for your objects or the CloudFront domain name:</p> <ul> <li> <p>
   * <b>If you're using an alternate domain name, such as example.com</b>: Specify
   * one of the following values, depending on whether ACM provided your certificate
   * or you purchased your certificate from third-party certificate authority:</p>
   * <ul> <li> <p> <code>&lt;ACMCertificateArn&gt;<i>ARN for ACM SSL/TLS
   * certificate</i>&lt;ACMCertificateArn&gt;</code> where <code> <i>ARN for ACM
   * SSL/TLS certificate</i> </code> is the ARN for the ACM SSL/TLS certificate that
   * you want to use for this distribution.</p> </li> <li> <p>
   * <code>&lt;IAMCertificateId&gt;<i>IAM certificate
   * ID</i>&lt;IAMCertificateId&gt;</code> where <code> <i>IAM certificate ID</i>
   * </code> is the ID that IAM returned when you added the certificate to the IAM
   * certificate store.</p> </li> </ul> <p>If you specify
   * <code>ACMCertificateArn</code> or <code>IAMCertificateId</code>, you must also
   * specify a value for <code>SSLSupportMethod</code>.</p> <p>If you choose to use
   * an ACM certificate or a certificate in the IAM certificate store, we recommend
   * that you use only an alternate domain name in your object URLs
   * (<code>https://example.com/logo.jpg</code>). If you use the domain name that is
   * associated with your CloudFront distribution (such as
   * <code>https://d111111abcdef8.cloudfront.net/logo.jpg</code>) and the viewer
   * supports <code>SNI</code>, then CloudFront behaves normally. However, if the
   * browser does not support SNI, the user's experience depends on the value that
   * you choose for <code>SSLSupportMethod</code>:</p> <ul> <li> <p>
   * <code>vip</code>: The viewer displays a warning because there is a mismatch
   * between the CloudFront domain name and the domain name in your SSL/TLS
   * certificate.</p> </li> <li> <p> <code>sni-only</code>: CloudFront drops the
   * connection with the browser without returning the object.</p> </li> </ul> </li>
   * <li> <p> <b>If you're using the CloudFront domain name for your distribution,
   * such as <code>d111111abcdef8.cloudfront.net</code> </b>: Specify the following
   * value:</p> <p>
   * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;
   * </code> </p> </li> </ul> <p>If you want viewers to use HTTPS, you must also
   * specify one of the following values in your cache behaviors:</p> <ul> <li> <p>
   * <code> &lt;ViewerProtocolPolicy&gt;https-only&lt;ViewerProtocolPolicy&gt;</code>
   * </p> </li> <li> <p>
   * <code>&lt;ViewerProtocolPolicy&gt;redirect-to-https&lt;ViewerProtocolPolicy&gt;</code>
   * </p> </li> </ul> <p>You can also optionally require that CloudFront use HTTPS to
   * communicate with your origin by specifying one of the following values for the
   * applicable origins:</p> <ul> <li> <p>
   * <code>&lt;OriginProtocolPolicy&gt;https-only&lt;OriginProtocolPolicy&gt; </code>
   * </p> </li> <li> <p>
   * <code>&lt;OriginProtocolPolicy&gt;match-viewer&lt;OriginProtocolPolicy&gt;
   * </code> </p> </li> </ul> <p>For more information, see <a
   * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS">Using
   * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-11-05/ViewerCertificate">AWS
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
     * <p>For information about how and when to use
     * <code>CloudFrontDefaultCertificate</code>, see <a>ViewerCertificate</a>.</p>
     */
    inline bool GetCloudFrontDefaultCertificate() const{ return m_cloudFrontDefaultCertificate; }

    /**
     * <p>For information about how and when to use
     * <code>CloudFrontDefaultCertificate</code>, see <a>ViewerCertificate</a>.</p>
     */
    inline bool CloudFrontDefaultCertificateHasBeenSet() const { return m_cloudFrontDefaultCertificateHasBeenSet; }

    /**
     * <p>For information about how and when to use
     * <code>CloudFrontDefaultCertificate</code>, see <a>ViewerCertificate</a>.</p>
     */
    inline void SetCloudFrontDefaultCertificate(bool value) { m_cloudFrontDefaultCertificateHasBeenSet = true; m_cloudFrontDefaultCertificate = value; }

    /**
     * <p>For information about how and when to use
     * <code>CloudFrontDefaultCertificate</code>, see <a>ViewerCertificate</a>.</p>
     */
    inline ViewerCertificate& WithCloudFrontDefaultCertificate(bool value) { SetCloudFrontDefaultCertificate(value); return *this;}


    /**
     * <p>For information about how and when to use <code>IAMCertificateId</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline const Aws::String& GetIAMCertificateId() const{ return m_iAMCertificateId; }

    /**
     * <p>For information about how and when to use <code>IAMCertificateId</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline bool IAMCertificateIdHasBeenSet() const { return m_iAMCertificateIdHasBeenSet; }

    /**
     * <p>For information about how and when to use <code>IAMCertificateId</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline void SetIAMCertificateId(const Aws::String& value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId = value; }

    /**
     * <p>For information about how and when to use <code>IAMCertificateId</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline void SetIAMCertificateId(Aws::String&& value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId = std::move(value); }

    /**
     * <p>For information about how and when to use <code>IAMCertificateId</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline void SetIAMCertificateId(const char* value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId.assign(value); }

    /**
     * <p>For information about how and when to use <code>IAMCertificateId</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline ViewerCertificate& WithIAMCertificateId(const Aws::String& value) { SetIAMCertificateId(value); return *this;}

    /**
     * <p>For information about how and when to use <code>IAMCertificateId</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline ViewerCertificate& WithIAMCertificateId(Aws::String&& value) { SetIAMCertificateId(std::move(value)); return *this;}

    /**
     * <p>For information about how and when to use <code>IAMCertificateId</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline ViewerCertificate& WithIAMCertificateId(const char* value) { SetIAMCertificateId(value); return *this;}


    /**
     * <p>For information about how and when to use <code>ACMCertificateArn</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline const Aws::String& GetACMCertificateArn() const{ return m_aCMCertificateArn; }

    /**
     * <p>For information about how and when to use <code>ACMCertificateArn</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline bool ACMCertificateArnHasBeenSet() const { return m_aCMCertificateArnHasBeenSet; }

    /**
     * <p>For information about how and when to use <code>ACMCertificateArn</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline void SetACMCertificateArn(const Aws::String& value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn = value; }

    /**
     * <p>For information about how and when to use <code>ACMCertificateArn</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline void SetACMCertificateArn(Aws::String&& value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn = std::move(value); }

    /**
     * <p>For information about how and when to use <code>ACMCertificateArn</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline void SetACMCertificateArn(const char* value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn.assign(value); }

    /**
     * <p>For information about how and when to use <code>ACMCertificateArn</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline ViewerCertificate& WithACMCertificateArn(const Aws::String& value) { SetACMCertificateArn(value); return *this;}

    /**
     * <p>For information about how and when to use <code>ACMCertificateArn</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline ViewerCertificate& WithACMCertificateArn(Aws::String&& value) { SetACMCertificateArn(std::move(value)); return *this;}

    /**
     * <p>For information about how and when to use <code>ACMCertificateArn</code>, see
     * <a>ViewerCertificate</a>.</p>
     */
    inline ViewerCertificate& WithACMCertificateArn(const char* value) { SetACMCertificateArn(value); return *this;}


    /**
     * <p>If you specify a value for <a>ViewerCertificate$ACMCertificateArn</a> or for
     * <a>ViewerCertificate$IAMCertificateId</a>, you must also specify how you want
     * CloudFront to serve HTTPS requests: using a method that works for all clients or
     * one that works for most clients:</p> <ul> <li> <p> <code>vip</code>: CloudFront
     * uses dedicated IP addresses for your content and can respond to HTTPS requests
     * from any viewer. However, you will incur additional monthly charges.</p> </li>
     * <li> <p> <code>sni-only</code>: CloudFront can respond to HTTPS requests from
     * viewers that support Server Name Indication (SNI). All modern browsers support
     * SNI, but some browsers still in use don't support SNI. If some of your users'
     * browsers don't support SNI, we recommend that you do one of the following:</p>
     * <ul> <li> <p>Use the <code>vip</code> option (dedicated IP addresses) instead of
     * <code>sni-only</code>.</p> </li> <li> <p>Use the CloudFront SSL/TLS certificate
     * instead of a custom certificate. This requires that you use the CloudFront
     * domain name of your distribution in the URLs for your objects, for example,
     * <code>https://d111111abcdef8.cloudfront.net/logo.png</code>.</p> </li> <li>
     * <p>If you can control which browser your users use, upgrade the browser to one
     * that supports SNI.</p> </li> <li> <p>Use HTTP instead of HTTPS.</p> </li> </ul>
     * </li> </ul> <p>Don't specify a value for <code>SSLSupportMethod</code> if you
     * specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS.html">Using
     * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const SSLSupportMethod& GetSSLSupportMethod() const{ return m_sSLSupportMethod; }

    /**
     * <p>If you specify a value for <a>ViewerCertificate$ACMCertificateArn</a> or for
     * <a>ViewerCertificate$IAMCertificateId</a>, you must also specify how you want
     * CloudFront to serve HTTPS requests: using a method that works for all clients or
     * one that works for most clients:</p> <ul> <li> <p> <code>vip</code>: CloudFront
     * uses dedicated IP addresses for your content and can respond to HTTPS requests
     * from any viewer. However, you will incur additional monthly charges.</p> </li>
     * <li> <p> <code>sni-only</code>: CloudFront can respond to HTTPS requests from
     * viewers that support Server Name Indication (SNI). All modern browsers support
     * SNI, but some browsers still in use don't support SNI. If some of your users'
     * browsers don't support SNI, we recommend that you do one of the following:</p>
     * <ul> <li> <p>Use the <code>vip</code> option (dedicated IP addresses) instead of
     * <code>sni-only</code>.</p> </li> <li> <p>Use the CloudFront SSL/TLS certificate
     * instead of a custom certificate. This requires that you use the CloudFront
     * domain name of your distribution in the URLs for your objects, for example,
     * <code>https://d111111abcdef8.cloudfront.net/logo.png</code>.</p> </li> <li>
     * <p>If you can control which browser your users use, upgrade the browser to one
     * that supports SNI.</p> </li> <li> <p>Use HTTP instead of HTTPS.</p> </li> </ul>
     * </li> </ul> <p>Don't specify a value for <code>SSLSupportMethod</code> if you
     * specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS.html">Using
     * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline bool SSLSupportMethodHasBeenSet() const { return m_sSLSupportMethodHasBeenSet; }

    /**
     * <p>If you specify a value for <a>ViewerCertificate$ACMCertificateArn</a> or for
     * <a>ViewerCertificate$IAMCertificateId</a>, you must also specify how you want
     * CloudFront to serve HTTPS requests: using a method that works for all clients or
     * one that works for most clients:</p> <ul> <li> <p> <code>vip</code>: CloudFront
     * uses dedicated IP addresses for your content and can respond to HTTPS requests
     * from any viewer. However, you will incur additional monthly charges.</p> </li>
     * <li> <p> <code>sni-only</code>: CloudFront can respond to HTTPS requests from
     * viewers that support Server Name Indication (SNI). All modern browsers support
     * SNI, but some browsers still in use don't support SNI. If some of your users'
     * browsers don't support SNI, we recommend that you do one of the following:</p>
     * <ul> <li> <p>Use the <code>vip</code> option (dedicated IP addresses) instead of
     * <code>sni-only</code>.</p> </li> <li> <p>Use the CloudFront SSL/TLS certificate
     * instead of a custom certificate. This requires that you use the CloudFront
     * domain name of your distribution in the URLs for your objects, for example,
     * <code>https://d111111abcdef8.cloudfront.net/logo.png</code>.</p> </li> <li>
     * <p>If you can control which browser your users use, upgrade the browser to one
     * that supports SNI.</p> </li> <li> <p>Use HTTP instead of HTTPS.</p> </li> </ul>
     * </li> </ul> <p>Don't specify a value for <code>SSLSupportMethod</code> if you
     * specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS.html">Using
     * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetSSLSupportMethod(const SSLSupportMethod& value) { m_sSLSupportMethodHasBeenSet = true; m_sSLSupportMethod = value; }

    /**
     * <p>If you specify a value for <a>ViewerCertificate$ACMCertificateArn</a> or for
     * <a>ViewerCertificate$IAMCertificateId</a>, you must also specify how you want
     * CloudFront to serve HTTPS requests: using a method that works for all clients or
     * one that works for most clients:</p> <ul> <li> <p> <code>vip</code>: CloudFront
     * uses dedicated IP addresses for your content and can respond to HTTPS requests
     * from any viewer. However, you will incur additional monthly charges.</p> </li>
     * <li> <p> <code>sni-only</code>: CloudFront can respond to HTTPS requests from
     * viewers that support Server Name Indication (SNI). All modern browsers support
     * SNI, but some browsers still in use don't support SNI. If some of your users'
     * browsers don't support SNI, we recommend that you do one of the following:</p>
     * <ul> <li> <p>Use the <code>vip</code> option (dedicated IP addresses) instead of
     * <code>sni-only</code>.</p> </li> <li> <p>Use the CloudFront SSL/TLS certificate
     * instead of a custom certificate. This requires that you use the CloudFront
     * domain name of your distribution in the URLs for your objects, for example,
     * <code>https://d111111abcdef8.cloudfront.net/logo.png</code>.</p> </li> <li>
     * <p>If you can control which browser your users use, upgrade the browser to one
     * that supports SNI.</p> </li> <li> <p>Use HTTP instead of HTTPS.</p> </li> </ul>
     * </li> </ul> <p>Don't specify a value for <code>SSLSupportMethod</code> if you
     * specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS.html">Using
     * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetSSLSupportMethod(SSLSupportMethod&& value) { m_sSLSupportMethodHasBeenSet = true; m_sSLSupportMethod = std::move(value); }

    /**
     * <p>If you specify a value for <a>ViewerCertificate$ACMCertificateArn</a> or for
     * <a>ViewerCertificate$IAMCertificateId</a>, you must also specify how you want
     * CloudFront to serve HTTPS requests: using a method that works for all clients or
     * one that works for most clients:</p> <ul> <li> <p> <code>vip</code>: CloudFront
     * uses dedicated IP addresses for your content and can respond to HTTPS requests
     * from any viewer. However, you will incur additional monthly charges.</p> </li>
     * <li> <p> <code>sni-only</code>: CloudFront can respond to HTTPS requests from
     * viewers that support Server Name Indication (SNI). All modern browsers support
     * SNI, but some browsers still in use don't support SNI. If some of your users'
     * browsers don't support SNI, we recommend that you do one of the following:</p>
     * <ul> <li> <p>Use the <code>vip</code> option (dedicated IP addresses) instead of
     * <code>sni-only</code>.</p> </li> <li> <p>Use the CloudFront SSL/TLS certificate
     * instead of a custom certificate. This requires that you use the CloudFront
     * domain name of your distribution in the URLs for your objects, for example,
     * <code>https://d111111abcdef8.cloudfront.net/logo.png</code>.</p> </li> <li>
     * <p>If you can control which browser your users use, upgrade the browser to one
     * that supports SNI.</p> </li> <li> <p>Use HTTP instead of HTTPS.</p> </li> </ul>
     * </li> </ul> <p>Don't specify a value for <code>SSLSupportMethod</code> if you
     * specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS.html">Using
     * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline ViewerCertificate& WithSSLSupportMethod(const SSLSupportMethod& value) { SetSSLSupportMethod(value); return *this;}

    /**
     * <p>If you specify a value for <a>ViewerCertificate$ACMCertificateArn</a> or for
     * <a>ViewerCertificate$IAMCertificateId</a>, you must also specify how you want
     * CloudFront to serve HTTPS requests: using a method that works for all clients or
     * one that works for most clients:</p> <ul> <li> <p> <code>vip</code>: CloudFront
     * uses dedicated IP addresses for your content and can respond to HTTPS requests
     * from any viewer. However, you will incur additional monthly charges.</p> </li>
     * <li> <p> <code>sni-only</code>: CloudFront can respond to HTTPS requests from
     * viewers that support Server Name Indication (SNI). All modern browsers support
     * SNI, but some browsers still in use don't support SNI. If some of your users'
     * browsers don't support SNI, we recommend that you do one of the following:</p>
     * <ul> <li> <p>Use the <code>vip</code> option (dedicated IP addresses) instead of
     * <code>sni-only</code>.</p> </li> <li> <p>Use the CloudFront SSL/TLS certificate
     * instead of a custom certificate. This requires that you use the CloudFront
     * domain name of your distribution in the URLs for your objects, for example,
     * <code>https://d111111abcdef8.cloudfront.net/logo.png</code>.</p> </li> <li>
     * <p>If you can control which browser your users use, upgrade the browser to one
     * that supports SNI.</p> </li> <li> <p>Use HTTP instead of HTTPS.</p> </li> </ul>
     * </li> </ul> <p>Don't specify a value for <code>SSLSupportMethod</code> if you
     * specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS.html">Using
     * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
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
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
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
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
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
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
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
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
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
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
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
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html#secure-connections-supported-ciphers">
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
