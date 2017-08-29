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
   * <p>A complex type that specifies the following:</p> <ul> <li> <p>Which SSL/TLS
   * certificate to use when viewers request objects using HTTPS</p> </li> <li>
   * <p>Whether you want CloudFront to use dedicated IP addresses or SNI when you're
   * using alternate domain names in your object names</p> </li> <li> <p>The minimum
   * protocol version that you want CloudFront to use when communicating with
   * viewers</p> </li> </ul> <p>For more information, see <a
   * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html">Using
   * an HTTPS Connection to Access Your Objects</a> in the <i>Amazon Amazon
   * CloudFront Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ViewerCertificate">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ViewerCertificate
  {
  public:
    ViewerCertificate();
    ViewerCertificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    ViewerCertificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    
    inline bool GetCloudFrontDefaultCertificate() const{ return m_cloudFrontDefaultCertificate; }

    
    inline void SetCloudFrontDefaultCertificate(bool value) { m_cloudFrontDefaultCertificateHasBeenSet = true; m_cloudFrontDefaultCertificate = value; }

    
    inline ViewerCertificate& WithCloudFrontDefaultCertificate(bool value) { SetCloudFrontDefaultCertificate(value); return *this;}


    
    inline const Aws::String& GetIAMCertificateId() const{ return m_iAMCertificateId; }

    
    inline void SetIAMCertificateId(const Aws::String& value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId = value; }

    
    inline void SetIAMCertificateId(Aws::String&& value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId = std::move(value); }

    
    inline void SetIAMCertificateId(const char* value) { m_iAMCertificateIdHasBeenSet = true; m_iAMCertificateId.assign(value); }

    
    inline ViewerCertificate& WithIAMCertificateId(const Aws::String& value) { SetIAMCertificateId(value); return *this;}

    
    inline ViewerCertificate& WithIAMCertificateId(Aws::String&& value) { SetIAMCertificateId(std::move(value)); return *this;}

    
    inline ViewerCertificate& WithIAMCertificateId(const char* value) { SetIAMCertificateId(value); return *this;}


    
    inline const Aws::String& GetACMCertificateArn() const{ return m_aCMCertificateArn; }

    
    inline void SetACMCertificateArn(const Aws::String& value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn = value; }

    
    inline void SetACMCertificateArn(Aws::String&& value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn = std::move(value); }

    
    inline void SetACMCertificateArn(const char* value) { m_aCMCertificateArnHasBeenSet = true; m_aCMCertificateArn.assign(value); }

    
    inline ViewerCertificate& WithACMCertificateArn(const Aws::String& value) { SetACMCertificateArn(value); return *this;}

    
    inline ViewerCertificate& WithACMCertificateArn(Aws::String&& value) { SetACMCertificateArn(std::move(value)); return *this;}

    
    inline ViewerCertificate& WithACMCertificateArn(const char* value) { SetACMCertificateArn(value); return *this;}


    /**
     * <p>If you specify a value for <code>ACMCertificateArn</code> or for
     * <code>IAMCertificateId</code>, you must also specify how you want CloudFront to
     * serve HTTPS requests: using a method that works for all clients or one that
     * works for most clients:</p> <ul> <li> <p> <code>vip</code>: CloudFront uses
     * dedicated IP addresses for your content and can respond to HTTPS requests from
     * any viewer. However, you will incur additional monthly charges.</p> </li> <li>
     * <p> <code>sni-only</code>: CloudFront can respond to HTTPS requests from viewers
     * that support Server Name Indication (SNI). All modern browsers support SNI, but
     * some browsers still in use don't support SNI. If some of your users' browsers
     * don't support SNI, we recommend that you do one of the following:</p> <ul> <li>
     * <p>Use the <code>vip</code> option (dedicated IP addresses) instead of
     * <code>sni-only</code>.</p> </li> <li> <p>Use the CloudFront SSL/TLS certificate
     * instead of a custom certificate. This requires that you use the CloudFront
     * domain name of your distribution in the URLs for your objects, for example,
     * <code>https://d111111abcdef8.cloudfront.net/logo.png</code>.</p> </li> <li>
     * <p>If you can control which browser your users use, upgrade the browser to one
     * that supports SNI.</p> </li> <li> <p>Use HTTP instead of HTTPS.</p> </li> </ul>
     * </li> </ul> <p>Do not specify a value for <code>SSLSupportMethod</code> if you
     * specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS.html">Using
     * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const SSLSupportMethod& GetSSLSupportMethod() const{ return m_sSLSupportMethod; }

    /**
     * <p>If you specify a value for <code>ACMCertificateArn</code> or for
     * <code>IAMCertificateId</code>, you must also specify how you want CloudFront to
     * serve HTTPS requests: using a method that works for all clients or one that
     * works for most clients:</p> <ul> <li> <p> <code>vip</code>: CloudFront uses
     * dedicated IP addresses for your content and can respond to HTTPS requests from
     * any viewer. However, you will incur additional monthly charges.</p> </li> <li>
     * <p> <code>sni-only</code>: CloudFront can respond to HTTPS requests from viewers
     * that support Server Name Indication (SNI). All modern browsers support SNI, but
     * some browsers still in use don't support SNI. If some of your users' browsers
     * don't support SNI, we recommend that you do one of the following:</p> <ul> <li>
     * <p>Use the <code>vip</code> option (dedicated IP addresses) instead of
     * <code>sni-only</code>.</p> </li> <li> <p>Use the CloudFront SSL/TLS certificate
     * instead of a custom certificate. This requires that you use the CloudFront
     * domain name of your distribution in the URLs for your objects, for example,
     * <code>https://d111111abcdef8.cloudfront.net/logo.png</code>.</p> </li> <li>
     * <p>If you can control which browser your users use, upgrade the browser to one
     * that supports SNI.</p> </li> <li> <p>Use HTTP instead of HTTPS.</p> </li> </ul>
     * </li> </ul> <p>Do not specify a value for <code>SSLSupportMethod</code> if you
     * specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS.html">Using
     * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetSSLSupportMethod(const SSLSupportMethod& value) { m_sSLSupportMethodHasBeenSet = true; m_sSLSupportMethod = value; }

    /**
     * <p>If you specify a value for <code>ACMCertificateArn</code> or for
     * <code>IAMCertificateId</code>, you must also specify how you want CloudFront to
     * serve HTTPS requests: using a method that works for all clients or one that
     * works for most clients:</p> <ul> <li> <p> <code>vip</code>: CloudFront uses
     * dedicated IP addresses for your content and can respond to HTTPS requests from
     * any viewer. However, you will incur additional monthly charges.</p> </li> <li>
     * <p> <code>sni-only</code>: CloudFront can respond to HTTPS requests from viewers
     * that support Server Name Indication (SNI). All modern browsers support SNI, but
     * some browsers still in use don't support SNI. If some of your users' browsers
     * don't support SNI, we recommend that you do one of the following:</p> <ul> <li>
     * <p>Use the <code>vip</code> option (dedicated IP addresses) instead of
     * <code>sni-only</code>.</p> </li> <li> <p>Use the CloudFront SSL/TLS certificate
     * instead of a custom certificate. This requires that you use the CloudFront
     * domain name of your distribution in the URLs for your objects, for example,
     * <code>https://d111111abcdef8.cloudfront.net/logo.png</code>.</p> </li> <li>
     * <p>If you can control which browser your users use, upgrade the browser to one
     * that supports SNI.</p> </li> <li> <p>Use HTTP instead of HTTPS.</p> </li> </ul>
     * </li> </ul> <p>Do not specify a value for <code>SSLSupportMethod</code> if you
     * specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS.html">Using
     * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetSSLSupportMethod(SSLSupportMethod&& value) { m_sSLSupportMethodHasBeenSet = true; m_sSLSupportMethod = std::move(value); }

    /**
     * <p>If you specify a value for <code>ACMCertificateArn</code> or for
     * <code>IAMCertificateId</code>, you must also specify how you want CloudFront to
     * serve HTTPS requests: using a method that works for all clients or one that
     * works for most clients:</p> <ul> <li> <p> <code>vip</code>: CloudFront uses
     * dedicated IP addresses for your content and can respond to HTTPS requests from
     * any viewer. However, you will incur additional monthly charges.</p> </li> <li>
     * <p> <code>sni-only</code>: CloudFront can respond to HTTPS requests from viewers
     * that support Server Name Indication (SNI). All modern browsers support SNI, but
     * some browsers still in use don't support SNI. If some of your users' browsers
     * don't support SNI, we recommend that you do one of the following:</p> <ul> <li>
     * <p>Use the <code>vip</code> option (dedicated IP addresses) instead of
     * <code>sni-only</code>.</p> </li> <li> <p>Use the CloudFront SSL/TLS certificate
     * instead of a custom certificate. This requires that you use the CloudFront
     * domain name of your distribution in the URLs for your objects, for example,
     * <code>https://d111111abcdef8.cloudfront.net/logo.png</code>.</p> </li> <li>
     * <p>If you can control which browser your users use, upgrade the browser to one
     * that supports SNI.</p> </li> <li> <p>Use HTTP instead of HTTPS.</p> </li> </ul>
     * </li> </ul> <p>Do not specify a value for <code>SSLSupportMethod</code> if you
     * specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS.html">Using
     * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline ViewerCertificate& WithSSLSupportMethod(const SSLSupportMethod& value) { SetSSLSupportMethod(value); return *this;}

    /**
     * <p>If you specify a value for <code>ACMCertificateArn</code> or for
     * <code>IAMCertificateId</code>, you must also specify how you want CloudFront to
     * serve HTTPS requests: using a method that works for all clients or one that
     * works for most clients:</p> <ul> <li> <p> <code>vip</code>: CloudFront uses
     * dedicated IP addresses for your content and can respond to HTTPS requests from
     * any viewer. However, you will incur additional monthly charges.</p> </li> <li>
     * <p> <code>sni-only</code>: CloudFront can respond to HTTPS requests from viewers
     * that support Server Name Indication (SNI). All modern browsers support SNI, but
     * some browsers still in use don't support SNI. If some of your users' browsers
     * don't support SNI, we recommend that you do one of the following:</p> <ul> <li>
     * <p>Use the <code>vip</code> option (dedicated IP addresses) instead of
     * <code>sni-only</code>.</p> </li> <li> <p>Use the CloudFront SSL/TLS certificate
     * instead of a custom certificate. This requires that you use the CloudFront
     * domain name of your distribution in the URLs for your objects, for example,
     * <code>https://d111111abcdef8.cloudfront.net/logo.png</code>.</p> </li> <li>
     * <p>If you can control which browser your users use, upgrade the browser to one
     * that supports SNI.</p> </li> <li> <p>Use HTTP instead of HTTPS.</p> </li> </ul>
     * </li> </ul> <p>Do not specify a value for <code>SSLSupportMethod</code> if you
     * specified
     * <code>&lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html#CNAMEsAndHTTPS.html">Using
     * Alternate Domain Names and HTTPS</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline ViewerCertificate& WithSSLSupportMethod(SSLSupportMethod&& value) { SetSSLSupportMethod(std::move(value)); return *this;}


    /**
     * <p>Specify the minimum version of the SSL/TLS protocol that you want CloudFront
     * to use for HTTPS connections between viewers and CloudFront: <code>SSLv3</code>
     * or <code>TLSv1</code>. CloudFront serves your objects only to viewers that
     * support SSL/TLS version that you specify and later versions. The
     * <code>TLSv1</code> protocol is more secure, so we recommend that you specify
     * <code>SSLv3</code> only if your users are using browsers or devices that don't
     * support <code>TLSv1</code>. Note the following:</p> <ul> <li> <p>If you specify
     * &lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;,
     * the minimum SSL protocol version is <code>TLSv1</code> and can't be changed.</p>
     * </li> <li> <p>If you're using a custom certificate (if you specify a value for
     * <code>ACMCertificateArn</code> or for <code>IAMCertificateId</code>) and if
     * you're using SNI (if you specify <code>sni-only</code> for
     * <code>SSLSupportMethod</code>), you must specify <code>TLSv1</code> for
     * <code>MinimumProtocolVersion</code>.</p> </li> </ul>
     */
    inline const MinimumProtocolVersion& GetMinimumProtocolVersion() const{ return m_minimumProtocolVersion; }

    /**
     * <p>Specify the minimum version of the SSL/TLS protocol that you want CloudFront
     * to use for HTTPS connections between viewers and CloudFront: <code>SSLv3</code>
     * or <code>TLSv1</code>. CloudFront serves your objects only to viewers that
     * support SSL/TLS version that you specify and later versions. The
     * <code>TLSv1</code> protocol is more secure, so we recommend that you specify
     * <code>SSLv3</code> only if your users are using browsers or devices that don't
     * support <code>TLSv1</code>. Note the following:</p> <ul> <li> <p>If you specify
     * &lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;,
     * the minimum SSL protocol version is <code>TLSv1</code> and can't be changed.</p>
     * </li> <li> <p>If you're using a custom certificate (if you specify a value for
     * <code>ACMCertificateArn</code> or for <code>IAMCertificateId</code>) and if
     * you're using SNI (if you specify <code>sni-only</code> for
     * <code>SSLSupportMethod</code>), you must specify <code>TLSv1</code> for
     * <code>MinimumProtocolVersion</code>.</p> </li> </ul>
     */
    inline void SetMinimumProtocolVersion(const MinimumProtocolVersion& value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion = value; }

    /**
     * <p>Specify the minimum version of the SSL/TLS protocol that you want CloudFront
     * to use for HTTPS connections between viewers and CloudFront: <code>SSLv3</code>
     * or <code>TLSv1</code>. CloudFront serves your objects only to viewers that
     * support SSL/TLS version that you specify and later versions. The
     * <code>TLSv1</code> protocol is more secure, so we recommend that you specify
     * <code>SSLv3</code> only if your users are using browsers or devices that don't
     * support <code>TLSv1</code>. Note the following:</p> <ul> <li> <p>If you specify
     * &lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;,
     * the minimum SSL protocol version is <code>TLSv1</code> and can't be changed.</p>
     * </li> <li> <p>If you're using a custom certificate (if you specify a value for
     * <code>ACMCertificateArn</code> or for <code>IAMCertificateId</code>) and if
     * you're using SNI (if you specify <code>sni-only</code> for
     * <code>SSLSupportMethod</code>), you must specify <code>TLSv1</code> for
     * <code>MinimumProtocolVersion</code>.</p> </li> </ul>
     */
    inline void SetMinimumProtocolVersion(MinimumProtocolVersion&& value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion = std::move(value); }

    /**
     * <p>Specify the minimum version of the SSL/TLS protocol that you want CloudFront
     * to use for HTTPS connections between viewers and CloudFront: <code>SSLv3</code>
     * or <code>TLSv1</code>. CloudFront serves your objects only to viewers that
     * support SSL/TLS version that you specify and later versions. The
     * <code>TLSv1</code> protocol is more secure, so we recommend that you specify
     * <code>SSLv3</code> only if your users are using browsers or devices that don't
     * support <code>TLSv1</code>. Note the following:</p> <ul> <li> <p>If you specify
     * &lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;,
     * the minimum SSL protocol version is <code>TLSv1</code> and can't be changed.</p>
     * </li> <li> <p>If you're using a custom certificate (if you specify a value for
     * <code>ACMCertificateArn</code> or for <code>IAMCertificateId</code>) and if
     * you're using SNI (if you specify <code>sni-only</code> for
     * <code>SSLSupportMethod</code>), you must specify <code>TLSv1</code> for
     * <code>MinimumProtocolVersion</code>.</p> </li> </ul>
     */
    inline ViewerCertificate& WithMinimumProtocolVersion(const MinimumProtocolVersion& value) { SetMinimumProtocolVersion(value); return *this;}

    /**
     * <p>Specify the minimum version of the SSL/TLS protocol that you want CloudFront
     * to use for HTTPS connections between viewers and CloudFront: <code>SSLv3</code>
     * or <code>TLSv1</code>. CloudFront serves your objects only to viewers that
     * support SSL/TLS version that you specify and later versions. The
     * <code>TLSv1</code> protocol is more secure, so we recommend that you specify
     * <code>SSLv3</code> only if your users are using browsers or devices that don't
     * support <code>TLSv1</code>. Note the following:</p> <ul> <li> <p>If you specify
     * &lt;CloudFrontDefaultCertificate&gt;true&lt;CloudFrontDefaultCertificate&gt;,
     * the minimum SSL protocol version is <code>TLSv1</code> and can't be changed.</p>
     * </li> <li> <p>If you're using a custom certificate (if you specify a value for
     * <code>ACMCertificateArn</code> or for <code>IAMCertificateId</code>) and if
     * you're using SNI (if you specify <code>sni-only</code> for
     * <code>SSLSupportMethod</code>), you must specify <code>TLSv1</code> for
     * <code>MinimumProtocolVersion</code>.</p> </li> </ul>
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
