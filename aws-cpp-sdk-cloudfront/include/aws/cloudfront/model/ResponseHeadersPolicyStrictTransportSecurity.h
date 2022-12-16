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
   * <code>Strict-Transport-Security</code> HTTP response header and the header's
   * value.</p> <p>For more information about the
   * <code>Strict-Transport-Security</code> HTTP response header, see <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Strict-Transport-Security">Strict-Transport-Security</a>
   * in the MDN Web Docs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyStrictTransportSecurity">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyStrictTransportSecurity
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyStrictTransportSecurity();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyStrictTransportSecurity(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyStrictTransportSecurity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>Strict-Transport-Security</code> HTTP response header received from the
     * origin with the one specified in this response headers policy.</p>
     */
    inline bool GetOverride() const{ return m_override; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>Strict-Transport-Security</code> HTTP response header received from the
     * origin with the one specified in this response headers policy.</p>
     */
    inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>Strict-Transport-Security</code> HTTP response header received from the
     * origin with the one specified in this response headers policy.</p>
     */
    inline void SetOverride(bool value) { m_overrideHasBeenSet = true; m_override = value; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>Strict-Transport-Security</code> HTTP response header received from the
     * origin with the one specified in this response headers policy.</p>
     */
    inline ResponseHeadersPolicyStrictTransportSecurity& WithOverride(bool value) { SetOverride(value); return *this;}


    /**
     * <p>A Boolean that determines whether CloudFront includes the
     * <code>includeSubDomains</code> directive in the
     * <code>Strict-Transport-Security</code> HTTP response header.</p>
     */
    inline bool GetIncludeSubdomains() const{ return m_includeSubdomains; }

    /**
     * <p>A Boolean that determines whether CloudFront includes the
     * <code>includeSubDomains</code> directive in the
     * <code>Strict-Transport-Security</code> HTTP response header.</p>
     */
    inline bool IncludeSubdomainsHasBeenSet() const { return m_includeSubdomainsHasBeenSet; }

    /**
     * <p>A Boolean that determines whether CloudFront includes the
     * <code>includeSubDomains</code> directive in the
     * <code>Strict-Transport-Security</code> HTTP response header.</p>
     */
    inline void SetIncludeSubdomains(bool value) { m_includeSubdomainsHasBeenSet = true; m_includeSubdomains = value; }

    /**
     * <p>A Boolean that determines whether CloudFront includes the
     * <code>includeSubDomains</code> directive in the
     * <code>Strict-Transport-Security</code> HTTP response header.</p>
     */
    inline ResponseHeadersPolicyStrictTransportSecurity& WithIncludeSubdomains(bool value) { SetIncludeSubdomains(value); return *this;}


    /**
     * <p>A Boolean that determines whether CloudFront includes the
     * <code>preload</code> directive in the <code>Strict-Transport-Security</code>
     * HTTP response header.</p>
     */
    inline bool GetPreload() const{ return m_preload; }

    /**
     * <p>A Boolean that determines whether CloudFront includes the
     * <code>preload</code> directive in the <code>Strict-Transport-Security</code>
     * HTTP response header.</p>
     */
    inline bool PreloadHasBeenSet() const { return m_preloadHasBeenSet; }

    /**
     * <p>A Boolean that determines whether CloudFront includes the
     * <code>preload</code> directive in the <code>Strict-Transport-Security</code>
     * HTTP response header.</p>
     */
    inline void SetPreload(bool value) { m_preloadHasBeenSet = true; m_preload = value; }

    /**
     * <p>A Boolean that determines whether CloudFront includes the
     * <code>preload</code> directive in the <code>Strict-Transport-Security</code>
     * HTTP response header.</p>
     */
    inline ResponseHeadersPolicyStrictTransportSecurity& WithPreload(bool value) { SetPreload(value); return *this;}


    /**
     * <p>A number that CloudFront uses as the value for the <code>max-age</code>
     * directive in the <code>Strict-Transport-Security</code> HTTP response
     * header.</p>
     */
    inline int GetAccessControlMaxAgeSec() const{ return m_accessControlMaxAgeSec; }

    /**
     * <p>A number that CloudFront uses as the value for the <code>max-age</code>
     * directive in the <code>Strict-Transport-Security</code> HTTP response
     * header.</p>
     */
    inline bool AccessControlMaxAgeSecHasBeenSet() const { return m_accessControlMaxAgeSecHasBeenSet; }

    /**
     * <p>A number that CloudFront uses as the value for the <code>max-age</code>
     * directive in the <code>Strict-Transport-Security</code> HTTP response
     * header.</p>
     */
    inline void SetAccessControlMaxAgeSec(int value) { m_accessControlMaxAgeSecHasBeenSet = true; m_accessControlMaxAgeSec = value; }

    /**
     * <p>A number that CloudFront uses as the value for the <code>max-age</code>
     * directive in the <code>Strict-Transport-Security</code> HTTP response
     * header.</p>
     */
    inline ResponseHeadersPolicyStrictTransportSecurity& WithAccessControlMaxAgeSec(int value) { SetAccessControlMaxAgeSec(value); return *this;}

  private:

    bool m_override;
    bool m_overrideHasBeenSet = false;

    bool m_includeSubdomains;
    bool m_includeSubdomainsHasBeenSet = false;

    bool m_preload;
    bool m_preloadHasBeenSet = false;

    int m_accessControlMaxAgeSec;
    bool m_accessControlMaxAgeSecHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
