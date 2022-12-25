/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginRequestPolicyHeaderBehavior.h>
#include <aws/cloudfront/model/Headers.h>
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
   * <p>An object that determines whether any HTTP headers (and if so, which headers)
   * are included in requests that CloudFront sends to the origin.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginRequestPolicyHeadersConfig">AWS
   * API Reference</a></p>
   */
  class OriginRequestPolicyHeadersConfig
  {
  public:
    AWS_CLOUDFRONT_API OriginRequestPolicyHeadersConfig();
    AWS_CLOUDFRONT_API OriginRequestPolicyHeadersConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginRequestPolicyHeadersConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Determines whether any HTTP headers are included in requests that CloudFront
     * sends to the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> –
     * HTTP headers are not included in requests that CloudFront sends to the origin.
     * Even when this field is set to <code>none</code>, any headers that are listed in
     * a <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li>
     * <li> <p> <code>whitelist</code> – The HTTP headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin.</p> </li> <li> <p> <code>allViewer</code> – All HTTP headers in viewer
     * requests are included in requests that CloudFront sends to the origin.</p> </li>
     * <li> <p> <code>allViewerAndWhitelistCloudFront</code> – All HTTP headers in
     * viewer requests and the additional CloudFront headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin. The additional headers are added by CloudFront.</p> </li> </ul>
     */
    inline const OriginRequestPolicyHeaderBehavior& GetHeaderBehavior() const{ return m_headerBehavior; }

    /**
     * <p>Determines whether any HTTP headers are included in requests that CloudFront
     * sends to the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> –
     * HTTP headers are not included in requests that CloudFront sends to the origin.
     * Even when this field is set to <code>none</code>, any headers that are listed in
     * a <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li>
     * <li> <p> <code>whitelist</code> – The HTTP headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin.</p> </li> <li> <p> <code>allViewer</code> – All HTTP headers in viewer
     * requests are included in requests that CloudFront sends to the origin.</p> </li>
     * <li> <p> <code>allViewerAndWhitelistCloudFront</code> – All HTTP headers in
     * viewer requests and the additional CloudFront headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin. The additional headers are added by CloudFront.</p> </li> </ul>
     */
    inline bool HeaderBehaviorHasBeenSet() const { return m_headerBehaviorHasBeenSet; }

    /**
     * <p>Determines whether any HTTP headers are included in requests that CloudFront
     * sends to the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> –
     * HTTP headers are not included in requests that CloudFront sends to the origin.
     * Even when this field is set to <code>none</code>, any headers that are listed in
     * a <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li>
     * <li> <p> <code>whitelist</code> – The HTTP headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin.</p> </li> <li> <p> <code>allViewer</code> – All HTTP headers in viewer
     * requests are included in requests that CloudFront sends to the origin.</p> </li>
     * <li> <p> <code>allViewerAndWhitelistCloudFront</code> – All HTTP headers in
     * viewer requests and the additional CloudFront headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin. The additional headers are added by CloudFront.</p> </li> </ul>
     */
    inline void SetHeaderBehavior(const OriginRequestPolicyHeaderBehavior& value) { m_headerBehaviorHasBeenSet = true; m_headerBehavior = value; }

    /**
     * <p>Determines whether any HTTP headers are included in requests that CloudFront
     * sends to the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> –
     * HTTP headers are not included in requests that CloudFront sends to the origin.
     * Even when this field is set to <code>none</code>, any headers that are listed in
     * a <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li>
     * <li> <p> <code>whitelist</code> – The HTTP headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin.</p> </li> <li> <p> <code>allViewer</code> – All HTTP headers in viewer
     * requests are included in requests that CloudFront sends to the origin.</p> </li>
     * <li> <p> <code>allViewerAndWhitelistCloudFront</code> – All HTTP headers in
     * viewer requests and the additional CloudFront headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin. The additional headers are added by CloudFront.</p> </li> </ul>
     */
    inline void SetHeaderBehavior(OriginRequestPolicyHeaderBehavior&& value) { m_headerBehaviorHasBeenSet = true; m_headerBehavior = std::move(value); }

    /**
     * <p>Determines whether any HTTP headers are included in requests that CloudFront
     * sends to the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> –
     * HTTP headers are not included in requests that CloudFront sends to the origin.
     * Even when this field is set to <code>none</code>, any headers that are listed in
     * a <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li>
     * <li> <p> <code>whitelist</code> – The HTTP headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin.</p> </li> <li> <p> <code>allViewer</code> – All HTTP headers in viewer
     * requests are included in requests that CloudFront sends to the origin.</p> </li>
     * <li> <p> <code>allViewerAndWhitelistCloudFront</code> – All HTTP headers in
     * viewer requests and the additional CloudFront headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin. The additional headers are added by CloudFront.</p> </li> </ul>
     */
    inline OriginRequestPolicyHeadersConfig& WithHeaderBehavior(const OriginRequestPolicyHeaderBehavior& value) { SetHeaderBehavior(value); return *this;}

    /**
     * <p>Determines whether any HTTP headers are included in requests that CloudFront
     * sends to the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> –
     * HTTP headers are not included in requests that CloudFront sends to the origin.
     * Even when this field is set to <code>none</code>, any headers that are listed in
     * a <code>CachePolicy</code> <i>are</i> included in origin requests.</p> </li>
     * <li> <p> <code>whitelist</code> – The HTTP headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin.</p> </li> <li> <p> <code>allViewer</code> – All HTTP headers in viewer
     * requests are included in requests that CloudFront sends to the origin.</p> </li>
     * <li> <p> <code>allViewerAndWhitelistCloudFront</code> – All HTTP headers in
     * viewer requests and the additional CloudFront headers that are listed in the
     * <code>Headers</code> type are included in requests that CloudFront sends to the
     * origin. The additional headers are added by CloudFront.</p> </li> </ul>
     */
    inline OriginRequestPolicyHeadersConfig& WithHeaderBehavior(OriginRequestPolicyHeaderBehavior&& value) { SetHeaderBehavior(std::move(value)); return *this;}


    
    inline const Headers& GetHeaders() const{ return m_headers; }

    
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }

    
    inline void SetHeaders(const Headers& value) { m_headersHasBeenSet = true; m_headers = value; }

    
    inline void SetHeaders(Headers&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }

    
    inline OriginRequestPolicyHeadersConfig& WithHeaders(const Headers& value) { SetHeaders(value); return *this;}

    
    inline OriginRequestPolicyHeadersConfig& WithHeaders(Headers&& value) { SetHeaders(std::move(value)); return *this;}

  private:

    OriginRequestPolicyHeaderBehavior m_headerBehavior;
    bool m_headerBehaviorHasBeenSet = false;

    Headers m_headers;
    bool m_headersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
