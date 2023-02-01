/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex type that contains <code>HeaderName</code> and
   * <code>HeaderValue</code> elements, if any, for this distribution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginCustomHeader">AWS
   * API Reference</a></p>
   */
  class OriginCustomHeader
  {
  public:
    AWS_CLOUDFRONT_API OriginCustomHeader();
    AWS_CLOUDFRONT_API OriginCustomHeader(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginCustomHeader& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The name of a header that you want CloudFront to send to your origin. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/forward-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetHeaderName() const{ return m_headerName; }

    /**
     * <p>The name of a header that you want CloudFront to send to your origin. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/forward-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline bool HeaderNameHasBeenSet() const { return m_headerNameHasBeenSet; }

    /**
     * <p>The name of a header that you want CloudFront to send to your origin. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/forward-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetHeaderName(const Aws::String& value) { m_headerNameHasBeenSet = true; m_headerName = value; }

    /**
     * <p>The name of a header that you want CloudFront to send to your origin. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/forward-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetHeaderName(Aws::String&& value) { m_headerNameHasBeenSet = true; m_headerName = std::move(value); }

    /**
     * <p>The name of a header that you want CloudFront to send to your origin. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/forward-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetHeaderName(const char* value) { m_headerNameHasBeenSet = true; m_headerName.assign(value); }

    /**
     * <p>The name of a header that you want CloudFront to send to your origin. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/forward-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline OriginCustomHeader& WithHeaderName(const Aws::String& value) { SetHeaderName(value); return *this;}

    /**
     * <p>The name of a header that you want CloudFront to send to your origin. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/forward-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline OriginCustomHeader& WithHeaderName(Aws::String&& value) { SetHeaderName(std::move(value)); return *this;}

    /**
     * <p>The name of a header that you want CloudFront to send to your origin. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/forward-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline OriginCustomHeader& WithHeaderName(const char* value) { SetHeaderName(value); return *this;}


    /**
     * <p>The value for the header that you specified in the <code>HeaderName</code>
     * field.</p>
     */
    inline const Aws::String& GetHeaderValue() const{ return m_headerValue; }

    /**
     * <p>The value for the header that you specified in the <code>HeaderName</code>
     * field.</p>
     */
    inline bool HeaderValueHasBeenSet() const { return m_headerValueHasBeenSet; }

    /**
     * <p>The value for the header that you specified in the <code>HeaderName</code>
     * field.</p>
     */
    inline void SetHeaderValue(const Aws::String& value) { m_headerValueHasBeenSet = true; m_headerValue = value; }

    /**
     * <p>The value for the header that you specified in the <code>HeaderName</code>
     * field.</p>
     */
    inline void SetHeaderValue(Aws::String&& value) { m_headerValueHasBeenSet = true; m_headerValue = std::move(value); }

    /**
     * <p>The value for the header that you specified in the <code>HeaderName</code>
     * field.</p>
     */
    inline void SetHeaderValue(const char* value) { m_headerValueHasBeenSet = true; m_headerValue.assign(value); }

    /**
     * <p>The value for the header that you specified in the <code>HeaderName</code>
     * field.</p>
     */
    inline OriginCustomHeader& WithHeaderValue(const Aws::String& value) { SetHeaderValue(value); return *this;}

    /**
     * <p>The value for the header that you specified in the <code>HeaderName</code>
     * field.</p>
     */
    inline OriginCustomHeader& WithHeaderValue(Aws::String&& value) { SetHeaderValue(std::move(value)); return *this;}

    /**
     * <p>The value for the header that you specified in the <code>HeaderName</code>
     * field.</p>
     */
    inline OriginCustomHeader& WithHeaderValue(const char* value) { SetHeaderValue(value); return *this;}

  private:

    Aws::String m_headerName;
    bool m_headerNameHasBeenSet = false;

    Aws::String m_headerValue;
    bool m_headerValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
