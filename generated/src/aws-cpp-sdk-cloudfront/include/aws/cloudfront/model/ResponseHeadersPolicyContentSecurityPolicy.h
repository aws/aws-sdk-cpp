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
   * <p>The policy directives and their values that CloudFront includes as values for
   * the <code>Content-Security-Policy</code> HTTP response header.</p> <p>For more
   * information about the <code>Content-Security-Policy</code> HTTP response header,
   * see <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Security-Policy">Content-Security-Policy</a>
   * in the MDN Web Docs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyContentSecurityPolicy">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyContentSecurityPolicy
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyContentSecurityPolicy() = default;
    AWS_CLOUDFRONT_API ResponseHeadersPolicyContentSecurityPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyContentSecurityPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>Content-Security-Policy</code> HTTP response header received from the
     * origin with the one specified in this response headers policy.</p>
     */
    inline bool GetOverride() const { return m_override; }
    inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }
    inline void SetOverride(bool value) { m_overrideHasBeenSet = true; m_override = value; }
    inline ResponseHeadersPolicyContentSecurityPolicy& WithOverride(bool value) { SetOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy directives and their values that CloudFront includes as values for
     * the <code>Content-Security-Policy</code> HTTP response header.</p>
     */
    inline const Aws::String& GetContentSecurityPolicy() const { return m_contentSecurityPolicy; }
    inline bool ContentSecurityPolicyHasBeenSet() const { return m_contentSecurityPolicyHasBeenSet; }
    template<typename ContentSecurityPolicyT = Aws::String>
    void SetContentSecurityPolicy(ContentSecurityPolicyT&& value) { m_contentSecurityPolicyHasBeenSet = true; m_contentSecurityPolicy = std::forward<ContentSecurityPolicyT>(value); }
    template<typename ContentSecurityPolicyT = Aws::String>
    ResponseHeadersPolicyContentSecurityPolicy& WithContentSecurityPolicy(ContentSecurityPolicyT&& value) { SetContentSecurityPolicy(std::forward<ContentSecurityPolicyT>(value)); return *this;}
    ///@}
  private:

    bool m_override{false};
    bool m_overrideHasBeenSet = false;

    Aws::String m_contentSecurityPolicy;
    bool m_contentSecurityPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
