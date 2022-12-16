/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FrameOptionsList.h>
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
   * <p>Determines whether CloudFront includes the <code>X-Frame-Options</code> HTTP
   * response header and the header's value.</p> <p>For more information about the
   * <code>X-Frame-Options</code> HTTP response header, see <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
   * in the MDN Web Docs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyFrameOptions">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyFrameOptions
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyFrameOptions();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyFrameOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyFrameOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>X-Frame-Options</code> HTTP response header received from the origin with
     * the one specified in this response headers policy.</p>
     */
    inline bool GetOverride() const{ return m_override; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>X-Frame-Options</code> HTTP response header received from the origin with
     * the one specified in this response headers policy.</p>
     */
    inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>X-Frame-Options</code> HTTP response header received from the origin with
     * the one specified in this response headers policy.</p>
     */
    inline void SetOverride(bool value) { m_overrideHasBeenSet = true; m_override = value; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>X-Frame-Options</code> HTTP response header received from the origin with
     * the one specified in this response headers policy.</p>
     */
    inline ResponseHeadersPolicyFrameOptions& WithOverride(bool value) { SetOverride(value); return *this;}


    /**
     * <p>The value of the <code>X-Frame-Options</code> HTTP response header. Valid
     * values are <code>DENY</code> and <code>SAMEORIGIN</code>.</p> <p>For more
     * information about these values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline const FrameOptionsList& GetFrameOption() const{ return m_frameOption; }

    /**
     * <p>The value of the <code>X-Frame-Options</code> HTTP response header. Valid
     * values are <code>DENY</code> and <code>SAMEORIGIN</code>.</p> <p>For more
     * information about these values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline bool FrameOptionHasBeenSet() const { return m_frameOptionHasBeenSet; }

    /**
     * <p>The value of the <code>X-Frame-Options</code> HTTP response header. Valid
     * values are <code>DENY</code> and <code>SAMEORIGIN</code>.</p> <p>For more
     * information about these values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetFrameOption(const FrameOptionsList& value) { m_frameOptionHasBeenSet = true; m_frameOption = value; }

    /**
     * <p>The value of the <code>X-Frame-Options</code> HTTP response header. Valid
     * values are <code>DENY</code> and <code>SAMEORIGIN</code>.</p> <p>For more
     * information about these values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetFrameOption(FrameOptionsList&& value) { m_frameOptionHasBeenSet = true; m_frameOption = std::move(value); }

    /**
     * <p>The value of the <code>X-Frame-Options</code> HTTP response header. Valid
     * values are <code>DENY</code> and <code>SAMEORIGIN</code>.</p> <p>For more
     * information about these values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyFrameOptions& WithFrameOption(const FrameOptionsList& value) { SetFrameOption(value); return *this;}

    /**
     * <p>The value of the <code>X-Frame-Options</code> HTTP response header. Valid
     * values are <code>DENY</code> and <code>SAMEORIGIN</code>.</p> <p>For more
     * information about these values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyFrameOptions& WithFrameOption(FrameOptionsList&& value) { SetFrameOption(std::move(value)); return *this;}

  private:

    bool m_override;
    bool m_overrideHasBeenSet = false;

    FrameOptionsList m_frameOption;
    bool m_frameOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
