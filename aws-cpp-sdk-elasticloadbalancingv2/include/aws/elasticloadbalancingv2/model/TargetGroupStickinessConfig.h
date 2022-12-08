/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about the target group stickiness for a rule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/TargetGroupStickinessConfig">AWS
   * API Reference</a></p>
   */
  class TargetGroupStickinessConfig
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API TargetGroupStickinessConfig();
    AWS_ELASTICLOADBALANCINGV2_API TargetGroupStickinessConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API TargetGroupStickinessConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether target group stickiness is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether target group stickiness is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether target group stickiness is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether target group stickiness is enabled.</p>
     */
    inline TargetGroupStickinessConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The time period, in seconds, during which requests from a client should be
     * routed to the same target group. The range is 1-604800 seconds (7 days).</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The time period, in seconds, during which requests from a client should be
     * routed to the same target group. The range is 1-604800 seconds (7 days).</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The time period, in seconds, during which requests from a client should be
     * routed to the same target group. The range is 1-604800 seconds (7 days).</p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The time period, in seconds, during which requests from a client should be
     * routed to the same target group. The range is 1-604800 seconds (7 days).</p>
     */
    inline TargetGroupStickinessConfig& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
