/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>

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
   * <p>Determines whether CloudFront includes the
   * <code>X-Content-Type-Options</code> HTTP response header with its value set to
   * <code>nosniff</code>.</p> <p>For more information about the
   * <code>X-Content-Type-Options</code> HTTP response header, see <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Content-Type-Options">X-Content-Type-Options</a>
   * in the MDN Web Docs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyContentTypeOptions">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyContentTypeOptions
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyContentTypeOptions();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyContentTypeOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyContentTypeOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>X-Content-Type-Options</code> HTTP response header received from the
     * origin with the one specified in this response headers policy.</p>
     */
    inline bool GetOverride() const{ return m_override; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>X-Content-Type-Options</code> HTTP response header received from the
     * origin with the one specified in this response headers policy.</p>
     */
    inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>X-Content-Type-Options</code> HTTP response header received from the
     * origin with the one specified in this response headers policy.</p>
     */
    inline void SetOverride(bool value) { m_overrideHasBeenSet = true; m_override = value; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>X-Content-Type-Options</code> HTTP response header received from the
     * origin with the one specified in this response headers policy.</p>
     */
    inline ResponseHeadersPolicyContentTypeOptions& WithOverride(bool value) { SetOverride(value); return *this;}

  private:

    bool m_override;
    bool m_overrideHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
