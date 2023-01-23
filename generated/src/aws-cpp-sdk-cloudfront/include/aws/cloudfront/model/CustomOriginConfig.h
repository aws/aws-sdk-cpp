/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginProtocolPolicy.h>
#include <aws/cloudfront/model/OriginSslProtocols.h>
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
   * <p>A custom origin. A custom origin is any origin that is <i>not</i> an Amazon
   * S3 bucket, with one exception. An Amazon S3 bucket that is <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">configured
   * with static website hosting</a> <i>is</i> a custom origin.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CustomOriginConfig">AWS
   * API Reference</a></p>
   */
  class CustomOriginConfig
  {
  public:
    AWS_CLOUDFRONT_API CustomOriginConfig();
    AWS_CLOUDFRONT_API CustomOriginConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CustomOriginConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The HTTP port that CloudFront uses to connect to the origin. Specify the HTTP
     * port that the origin listens on.</p>
     */
    inline int GetHTTPPort() const{ return m_hTTPPort; }

    /**
     * <p>The HTTP port that CloudFront uses to connect to the origin. Specify the HTTP
     * port that the origin listens on.</p>
     */
    inline bool HTTPPortHasBeenSet() const { return m_hTTPPortHasBeenSet; }

    /**
     * <p>The HTTP port that CloudFront uses to connect to the origin. Specify the HTTP
     * port that the origin listens on.</p>
     */
    inline void SetHTTPPort(int value) { m_hTTPPortHasBeenSet = true; m_hTTPPort = value; }

    /**
     * <p>The HTTP port that CloudFront uses to connect to the origin. Specify the HTTP
     * port that the origin listens on.</p>
     */
    inline CustomOriginConfig& WithHTTPPort(int value) { SetHTTPPort(value); return *this;}


    /**
     * <p>The HTTPS port that CloudFront uses to connect to the origin. Specify the
     * HTTPS port that the origin listens on.</p>
     */
    inline int GetHTTPSPort() const{ return m_hTTPSPort; }

    /**
     * <p>The HTTPS port that CloudFront uses to connect to the origin. Specify the
     * HTTPS port that the origin listens on.</p>
     */
    inline bool HTTPSPortHasBeenSet() const { return m_hTTPSPortHasBeenSet; }

    /**
     * <p>The HTTPS port that CloudFront uses to connect to the origin. Specify the
     * HTTPS port that the origin listens on.</p>
     */
    inline void SetHTTPSPort(int value) { m_hTTPSPortHasBeenSet = true; m_hTTPSPort = value; }

    /**
     * <p>The HTTPS port that CloudFront uses to connect to the origin. Specify the
     * HTTPS port that the origin listens on.</p>
     */
    inline CustomOriginConfig& WithHTTPSPort(int value) { SetHTTPSPort(value); return *this;}


    /**
     * <p>Specifies the protocol (HTTP or HTTPS) that CloudFront uses to connect to the
     * origin. Valid values are:</p> <ul> <li> <p> <code>http-only</code> – CloudFront
     * always uses HTTP to connect to the origin.</p> </li> <li> <p>
     * <code>match-viewer</code> – CloudFront connects to the origin using the same
     * protocol that the viewer used to connect to CloudFront.</p> </li> <li> <p>
     * <code>https-only</code> – CloudFront always uses HTTPS to connect to the
     * origin.</p> </li> </ul>
     */
    inline const OriginProtocolPolicy& GetOriginProtocolPolicy() const{ return m_originProtocolPolicy; }

    /**
     * <p>Specifies the protocol (HTTP or HTTPS) that CloudFront uses to connect to the
     * origin. Valid values are:</p> <ul> <li> <p> <code>http-only</code> – CloudFront
     * always uses HTTP to connect to the origin.</p> </li> <li> <p>
     * <code>match-viewer</code> – CloudFront connects to the origin using the same
     * protocol that the viewer used to connect to CloudFront.</p> </li> <li> <p>
     * <code>https-only</code> – CloudFront always uses HTTPS to connect to the
     * origin.</p> </li> </ul>
     */
    inline bool OriginProtocolPolicyHasBeenSet() const { return m_originProtocolPolicyHasBeenSet; }

    /**
     * <p>Specifies the protocol (HTTP or HTTPS) that CloudFront uses to connect to the
     * origin. Valid values are:</p> <ul> <li> <p> <code>http-only</code> – CloudFront
     * always uses HTTP to connect to the origin.</p> </li> <li> <p>
     * <code>match-viewer</code> – CloudFront connects to the origin using the same
     * protocol that the viewer used to connect to CloudFront.</p> </li> <li> <p>
     * <code>https-only</code> – CloudFront always uses HTTPS to connect to the
     * origin.</p> </li> </ul>
     */
    inline void SetOriginProtocolPolicy(const OriginProtocolPolicy& value) { m_originProtocolPolicyHasBeenSet = true; m_originProtocolPolicy = value; }

    /**
     * <p>Specifies the protocol (HTTP or HTTPS) that CloudFront uses to connect to the
     * origin. Valid values are:</p> <ul> <li> <p> <code>http-only</code> – CloudFront
     * always uses HTTP to connect to the origin.</p> </li> <li> <p>
     * <code>match-viewer</code> – CloudFront connects to the origin using the same
     * protocol that the viewer used to connect to CloudFront.</p> </li> <li> <p>
     * <code>https-only</code> – CloudFront always uses HTTPS to connect to the
     * origin.</p> </li> </ul>
     */
    inline void SetOriginProtocolPolicy(OriginProtocolPolicy&& value) { m_originProtocolPolicyHasBeenSet = true; m_originProtocolPolicy = std::move(value); }

    /**
     * <p>Specifies the protocol (HTTP or HTTPS) that CloudFront uses to connect to the
     * origin. Valid values are:</p> <ul> <li> <p> <code>http-only</code> – CloudFront
     * always uses HTTP to connect to the origin.</p> </li> <li> <p>
     * <code>match-viewer</code> – CloudFront connects to the origin using the same
     * protocol that the viewer used to connect to CloudFront.</p> </li> <li> <p>
     * <code>https-only</code> – CloudFront always uses HTTPS to connect to the
     * origin.</p> </li> </ul>
     */
    inline CustomOriginConfig& WithOriginProtocolPolicy(const OriginProtocolPolicy& value) { SetOriginProtocolPolicy(value); return *this;}

    /**
     * <p>Specifies the protocol (HTTP or HTTPS) that CloudFront uses to connect to the
     * origin. Valid values are:</p> <ul> <li> <p> <code>http-only</code> – CloudFront
     * always uses HTTP to connect to the origin.</p> </li> <li> <p>
     * <code>match-viewer</code> – CloudFront connects to the origin using the same
     * protocol that the viewer used to connect to CloudFront.</p> </li> <li> <p>
     * <code>https-only</code> – CloudFront always uses HTTPS to connect to the
     * origin.</p> </li> </ul>
     */
    inline CustomOriginConfig& WithOriginProtocolPolicy(OriginProtocolPolicy&& value) { SetOriginProtocolPolicy(std::move(value)); return *this;}


    /**
     * <p>Specifies the minimum SSL/TLS protocol that CloudFront uses when connecting
     * to your origin over HTTPS. Valid values include <code>SSLv3</code>,
     * <code>TLSv1</code>, <code>TLSv1.1</code>, and <code>TLSv1.2</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginSSLProtocols">Minimum
     * Origin SSL Protocol</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const OriginSslProtocols& GetOriginSslProtocols() const{ return m_originSslProtocols; }

    /**
     * <p>Specifies the minimum SSL/TLS protocol that CloudFront uses when connecting
     * to your origin over HTTPS. Valid values include <code>SSLv3</code>,
     * <code>TLSv1</code>, <code>TLSv1.1</code>, and <code>TLSv1.2</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginSSLProtocols">Minimum
     * Origin SSL Protocol</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool OriginSslProtocolsHasBeenSet() const { return m_originSslProtocolsHasBeenSet; }

    /**
     * <p>Specifies the minimum SSL/TLS protocol that CloudFront uses when connecting
     * to your origin over HTTPS. Valid values include <code>SSLv3</code>,
     * <code>TLSv1</code>, <code>TLSv1.1</code>, and <code>TLSv1.2</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginSSLProtocols">Minimum
     * Origin SSL Protocol</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetOriginSslProtocols(const OriginSslProtocols& value) { m_originSslProtocolsHasBeenSet = true; m_originSslProtocols = value; }

    /**
     * <p>Specifies the minimum SSL/TLS protocol that CloudFront uses when connecting
     * to your origin over HTTPS. Valid values include <code>SSLv3</code>,
     * <code>TLSv1</code>, <code>TLSv1.1</code>, and <code>TLSv1.2</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginSSLProtocols">Minimum
     * Origin SSL Protocol</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetOriginSslProtocols(OriginSslProtocols&& value) { m_originSslProtocolsHasBeenSet = true; m_originSslProtocols = std::move(value); }

    /**
     * <p>Specifies the minimum SSL/TLS protocol that CloudFront uses when connecting
     * to your origin over HTTPS. Valid values include <code>SSLv3</code>,
     * <code>TLSv1</code>, <code>TLSv1.1</code>, and <code>TLSv1.2</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginSSLProtocols">Minimum
     * Origin SSL Protocol</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline CustomOriginConfig& WithOriginSslProtocols(const OriginSslProtocols& value) { SetOriginSslProtocols(value); return *this;}

    /**
     * <p>Specifies the minimum SSL/TLS protocol that CloudFront uses when connecting
     * to your origin over HTTPS. Valid values include <code>SSLv3</code>,
     * <code>TLSv1</code>, <code>TLSv1.1</code>, and <code>TLSv1.2</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginSSLProtocols">Minimum
     * Origin SSL Protocol</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline CustomOriginConfig& WithOriginSslProtocols(OriginSslProtocols&& value) { SetOriginSslProtocols(std::move(value)); return *this;}


    /**
     * <p>Specifies how long, in seconds, CloudFront waits for a response from the
     * origin. This is also known as the <i>origin response timeout</i>. The minimum
     * timeout is 1 second, the maximum is 60 seconds, and the default (if you don't
     * specify otherwise) is 30 seconds.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginResponseTimeout">Origin
     * Response Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline int GetOriginReadTimeout() const{ return m_originReadTimeout; }

    /**
     * <p>Specifies how long, in seconds, CloudFront waits for a response from the
     * origin. This is also known as the <i>origin response timeout</i>. The minimum
     * timeout is 1 second, the maximum is 60 seconds, and the default (if you don't
     * specify otherwise) is 30 seconds.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginResponseTimeout">Origin
     * Response Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool OriginReadTimeoutHasBeenSet() const { return m_originReadTimeoutHasBeenSet; }

    /**
     * <p>Specifies how long, in seconds, CloudFront waits for a response from the
     * origin. This is also known as the <i>origin response timeout</i>. The minimum
     * timeout is 1 second, the maximum is 60 seconds, and the default (if you don't
     * specify otherwise) is 30 seconds.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginResponseTimeout">Origin
     * Response Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetOriginReadTimeout(int value) { m_originReadTimeoutHasBeenSet = true; m_originReadTimeout = value; }

    /**
     * <p>Specifies how long, in seconds, CloudFront waits for a response from the
     * origin. This is also known as the <i>origin response timeout</i>. The minimum
     * timeout is 1 second, the maximum is 60 seconds, and the default (if you don't
     * specify otherwise) is 30 seconds.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginResponseTimeout">Origin
     * Response Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline CustomOriginConfig& WithOriginReadTimeout(int value) { SetOriginReadTimeout(value); return *this;}


    /**
     * <p>Specifies how long, in seconds, CloudFront persists its connection to the
     * origin. The minimum timeout is 1 second, the maximum is 60 seconds, and the
     * default (if you don't specify otherwise) is 5 seconds.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginKeepaliveTimeout">Origin
     * Keep-alive Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline int GetOriginKeepaliveTimeout() const{ return m_originKeepaliveTimeout; }

    /**
     * <p>Specifies how long, in seconds, CloudFront persists its connection to the
     * origin. The minimum timeout is 1 second, the maximum is 60 seconds, and the
     * default (if you don't specify otherwise) is 5 seconds.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginKeepaliveTimeout">Origin
     * Keep-alive Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool OriginKeepaliveTimeoutHasBeenSet() const { return m_originKeepaliveTimeoutHasBeenSet; }

    /**
     * <p>Specifies how long, in seconds, CloudFront persists its connection to the
     * origin. The minimum timeout is 1 second, the maximum is 60 seconds, and the
     * default (if you don't specify otherwise) is 5 seconds.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginKeepaliveTimeout">Origin
     * Keep-alive Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetOriginKeepaliveTimeout(int value) { m_originKeepaliveTimeoutHasBeenSet = true; m_originKeepaliveTimeout = value; }

    /**
     * <p>Specifies how long, in seconds, CloudFront persists its connection to the
     * origin. The minimum timeout is 1 second, the maximum is 60 seconds, and the
     * default (if you don't specify otherwise) is 5 seconds.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginKeepaliveTimeout">Origin
     * Keep-alive Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline CustomOriginConfig& WithOriginKeepaliveTimeout(int value) { SetOriginKeepaliveTimeout(value); return *this;}

  private:

    int m_hTTPPort;
    bool m_hTTPPortHasBeenSet = false;

    int m_hTTPSPort;
    bool m_hTTPSPortHasBeenSet = false;

    OriginProtocolPolicy m_originProtocolPolicy;
    bool m_originProtocolPolicyHasBeenSet = false;

    OriginSslProtocols m_originSslProtocols;
    bool m_originSslProtocolsHasBeenSet = false;

    int m_originReadTimeout;
    bool m_originReadTimeoutHasBeenSet = false;

    int m_originKeepaliveTimeout;
    bool m_originKeepaliveTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
