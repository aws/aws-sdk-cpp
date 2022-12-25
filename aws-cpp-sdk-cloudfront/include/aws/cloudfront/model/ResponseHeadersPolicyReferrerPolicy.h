/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ReferrerPolicyList.h>
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
   * <p>Determines whether CloudFront includes the <code>Referrer-Policy</code> HTTP
   * response header and the header's value.</p> <p>For more information about the
   * <code>Referrer-Policy</code> HTTP response header, see <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
   * in the MDN Web Docs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyReferrerPolicy">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyReferrerPolicy
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyReferrerPolicy();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyReferrerPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyReferrerPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>Referrer-Policy</code> HTTP response header received from the origin with
     * the one specified in this response headers policy.</p>
     */
    inline bool GetOverride() const{ return m_override; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>Referrer-Policy</code> HTTP response header received from the origin with
     * the one specified in this response headers policy.</p>
     */
    inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>Referrer-Policy</code> HTTP response header received from the origin with
     * the one specified in this response headers policy.</p>
     */
    inline void SetOverride(bool value) { m_overrideHasBeenSet = true; m_override = value; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>Referrer-Policy</code> HTTP response header received from the origin with
     * the one specified in this response headers policy.</p>
     */
    inline ResponseHeadersPolicyReferrerPolicy& WithOverride(bool value) { SetOverride(value); return *this;}


    /**
     * <p>The value of the <code>Referrer-Policy</code> HTTP response header. Valid
     * values are:</p> <ul> <li> <p> <code>no-referrer</code> </p> </li> <li> <p>
     * <code>no-referrer-when-downgrade</code> </p> </li> <li> <p> <code>origin</code>
     * </p> </li> <li> <p> <code>origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>same-origin</code> </p> </li> <li> <p> <code>strict-origin</code> </p>
     * </li> <li> <p> <code>strict-origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>unsafe-url</code> </p> </li> </ul> <p>For more information about these
     * values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline const ReferrerPolicyList& GetReferrerPolicy() const{ return m_referrerPolicy; }

    /**
     * <p>The value of the <code>Referrer-Policy</code> HTTP response header. Valid
     * values are:</p> <ul> <li> <p> <code>no-referrer</code> </p> </li> <li> <p>
     * <code>no-referrer-when-downgrade</code> </p> </li> <li> <p> <code>origin</code>
     * </p> </li> <li> <p> <code>origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>same-origin</code> </p> </li> <li> <p> <code>strict-origin</code> </p>
     * </li> <li> <p> <code>strict-origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>unsafe-url</code> </p> </li> </ul> <p>For more information about these
     * values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline bool ReferrerPolicyHasBeenSet() const { return m_referrerPolicyHasBeenSet; }

    /**
     * <p>The value of the <code>Referrer-Policy</code> HTTP response header. Valid
     * values are:</p> <ul> <li> <p> <code>no-referrer</code> </p> </li> <li> <p>
     * <code>no-referrer-when-downgrade</code> </p> </li> <li> <p> <code>origin</code>
     * </p> </li> <li> <p> <code>origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>same-origin</code> </p> </li> <li> <p> <code>strict-origin</code> </p>
     * </li> <li> <p> <code>strict-origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>unsafe-url</code> </p> </li> </ul> <p>For more information about these
     * values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetReferrerPolicy(const ReferrerPolicyList& value) { m_referrerPolicyHasBeenSet = true; m_referrerPolicy = value; }

    /**
     * <p>The value of the <code>Referrer-Policy</code> HTTP response header. Valid
     * values are:</p> <ul> <li> <p> <code>no-referrer</code> </p> </li> <li> <p>
     * <code>no-referrer-when-downgrade</code> </p> </li> <li> <p> <code>origin</code>
     * </p> </li> <li> <p> <code>origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>same-origin</code> </p> </li> <li> <p> <code>strict-origin</code> </p>
     * </li> <li> <p> <code>strict-origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>unsafe-url</code> </p> </li> </ul> <p>For more information about these
     * values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetReferrerPolicy(ReferrerPolicyList&& value) { m_referrerPolicyHasBeenSet = true; m_referrerPolicy = std::move(value); }

    /**
     * <p>The value of the <code>Referrer-Policy</code> HTTP response header. Valid
     * values are:</p> <ul> <li> <p> <code>no-referrer</code> </p> </li> <li> <p>
     * <code>no-referrer-when-downgrade</code> </p> </li> <li> <p> <code>origin</code>
     * </p> </li> <li> <p> <code>origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>same-origin</code> </p> </li> <li> <p> <code>strict-origin</code> </p>
     * </li> <li> <p> <code>strict-origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>unsafe-url</code> </p> </li> </ul> <p>For more information about these
     * values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyReferrerPolicy& WithReferrerPolicy(const ReferrerPolicyList& value) { SetReferrerPolicy(value); return *this;}

    /**
     * <p>The value of the <code>Referrer-Policy</code> HTTP response header. Valid
     * values are:</p> <ul> <li> <p> <code>no-referrer</code> </p> </li> <li> <p>
     * <code>no-referrer-when-downgrade</code> </p> </li> <li> <p> <code>origin</code>
     * </p> </li> <li> <p> <code>origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>same-origin</code> </p> </li> <li> <p> <code>strict-origin</code> </p>
     * </li> <li> <p> <code>strict-origin-when-cross-origin</code> </p> </li> <li> <p>
     * <code>unsafe-url</code> </p> </li> </ul> <p>For more information about these
     * values, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyReferrerPolicy& WithReferrerPolicy(ReferrerPolicyList&& value) { SetReferrerPolicy(std::move(value)); return *this;}

  private:

    bool m_override;
    bool m_overrideHasBeenSet = false;

    ReferrerPolicyList m_referrerPolicy;
    bool m_referrerPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
