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
   * <p>Session stickiness provides the ability to define multiple requests from a
   * single viewer as a single session. This prevents the potentially inconsistent
   * experience of sending some of a given user's requests to your staging
   * distribution, while others are sent to your primary distribution. Define the
   * session duration using TTL values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/SessionStickinessConfig">AWS
   * API Reference</a></p>
   */
  class SessionStickinessConfig
  {
  public:
    AWS_CLOUDFRONT_API SessionStickinessConfig();
    AWS_CLOUDFRONT_API SessionStickinessConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API SessionStickinessConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The amount of time after which you want sessions to cease if no requests are
     * received. Allowed values are 300–3600 seconds (5–60 minutes).</p> <p>The value
     * must be less than or equal to <code>MaximumTTL</code>.</p>
     */
    inline int GetIdleTTL() const{ return m_idleTTL; }

    /**
     * <p>The amount of time after which you want sessions to cease if no requests are
     * received. Allowed values are 300–3600 seconds (5–60 minutes).</p> <p>The value
     * must be less than or equal to <code>MaximumTTL</code>.</p>
     */
    inline bool IdleTTLHasBeenSet() const { return m_idleTTLHasBeenSet; }

    /**
     * <p>The amount of time after which you want sessions to cease if no requests are
     * received. Allowed values are 300–3600 seconds (5–60 minutes).</p> <p>The value
     * must be less than or equal to <code>MaximumTTL</code>.</p>
     */
    inline void SetIdleTTL(int value) { m_idleTTLHasBeenSet = true; m_idleTTL = value; }

    /**
     * <p>The amount of time after which you want sessions to cease if no requests are
     * received. Allowed values are 300–3600 seconds (5–60 minutes).</p> <p>The value
     * must be less than or equal to <code>MaximumTTL</code>.</p>
     */
    inline SessionStickinessConfig& WithIdleTTL(int value) { SetIdleTTL(value); return *this;}


    /**
     * <p>The maximum amount of time to consider requests from the viewer as being part
     * of the same session. Allowed values are 300–3600 seconds (5–60 minutes).</p>
     * <p>The value must be less than or equal to <code>IdleTTL</code>.</p>
     */
    inline int GetMaximumTTL() const{ return m_maximumTTL; }

    /**
     * <p>The maximum amount of time to consider requests from the viewer as being part
     * of the same session. Allowed values are 300–3600 seconds (5–60 minutes).</p>
     * <p>The value must be less than or equal to <code>IdleTTL</code>.</p>
     */
    inline bool MaximumTTLHasBeenSet() const { return m_maximumTTLHasBeenSet; }

    /**
     * <p>The maximum amount of time to consider requests from the viewer as being part
     * of the same session. Allowed values are 300–3600 seconds (5–60 minutes).</p>
     * <p>The value must be less than or equal to <code>IdleTTL</code>.</p>
     */
    inline void SetMaximumTTL(int value) { m_maximumTTLHasBeenSet = true; m_maximumTTL = value; }

    /**
     * <p>The maximum amount of time to consider requests from the viewer as being part
     * of the same session. Allowed values are 300–3600 seconds (5–60 minutes).</p>
     * <p>The value must be less than or equal to <code>IdleTTL</code>.</p>
     */
    inline SessionStickinessConfig& WithMaximumTTL(int value) { SetMaximumTTL(value); return *this;}

  private:

    int m_idleTTL;
    bool m_idleTTLHasBeenSet = false;

    int m_maximumTTL;
    bool m_maximumTTLHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
