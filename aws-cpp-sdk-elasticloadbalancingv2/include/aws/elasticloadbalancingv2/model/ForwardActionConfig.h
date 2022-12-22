/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/TargetGroupStickinessConfig.h>
#include <aws/elasticloadbalancingv2/model/TargetGroupTuple.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a forward action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ForwardActionConfig">AWS
   * API Reference</a></p>
   */
  class ForwardActionConfig
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ForwardActionConfig();
    AWS_ELASTICLOADBALANCINGV2_API ForwardActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API ForwardActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The target groups. For Network Load Balancers, you can specify a single
     * target group.</p>
     */
    inline const Aws::Vector<TargetGroupTuple>& GetTargetGroups() const{ return m_targetGroups; }

    /**
     * <p>The target groups. For Network Load Balancers, you can specify a single
     * target group.</p>
     */
    inline bool TargetGroupsHasBeenSet() const { return m_targetGroupsHasBeenSet; }

    /**
     * <p>The target groups. For Network Load Balancers, you can specify a single
     * target group.</p>
     */
    inline void SetTargetGroups(const Aws::Vector<TargetGroupTuple>& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = value; }

    /**
     * <p>The target groups. For Network Load Balancers, you can specify a single
     * target group.</p>
     */
    inline void SetTargetGroups(Aws::Vector<TargetGroupTuple>&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = std::move(value); }

    /**
     * <p>The target groups. For Network Load Balancers, you can specify a single
     * target group.</p>
     */
    inline ForwardActionConfig& WithTargetGroups(const Aws::Vector<TargetGroupTuple>& value) { SetTargetGroups(value); return *this;}

    /**
     * <p>The target groups. For Network Load Balancers, you can specify a single
     * target group.</p>
     */
    inline ForwardActionConfig& WithTargetGroups(Aws::Vector<TargetGroupTuple>&& value) { SetTargetGroups(std::move(value)); return *this;}

    /**
     * <p>The target groups. For Network Load Balancers, you can specify a single
     * target group.</p>
     */
    inline ForwardActionConfig& AddTargetGroups(const TargetGroupTuple& value) { m_targetGroupsHasBeenSet = true; m_targetGroups.push_back(value); return *this; }

    /**
     * <p>The target groups. For Network Load Balancers, you can specify a single
     * target group.</p>
     */
    inline ForwardActionConfig& AddTargetGroups(TargetGroupTuple&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The target group stickiness for the rule.</p>
     */
    inline const TargetGroupStickinessConfig& GetTargetGroupStickinessConfig() const{ return m_targetGroupStickinessConfig; }

    /**
     * <p>The target group stickiness for the rule.</p>
     */
    inline bool TargetGroupStickinessConfigHasBeenSet() const { return m_targetGroupStickinessConfigHasBeenSet; }

    /**
     * <p>The target group stickiness for the rule.</p>
     */
    inline void SetTargetGroupStickinessConfig(const TargetGroupStickinessConfig& value) { m_targetGroupStickinessConfigHasBeenSet = true; m_targetGroupStickinessConfig = value; }

    /**
     * <p>The target group stickiness for the rule.</p>
     */
    inline void SetTargetGroupStickinessConfig(TargetGroupStickinessConfig&& value) { m_targetGroupStickinessConfigHasBeenSet = true; m_targetGroupStickinessConfig = std::move(value); }

    /**
     * <p>The target group stickiness for the rule.</p>
     */
    inline ForwardActionConfig& WithTargetGroupStickinessConfig(const TargetGroupStickinessConfig& value) { SetTargetGroupStickinessConfig(value); return *this;}

    /**
     * <p>The target group stickiness for the rule.</p>
     */
    inline ForwardActionConfig& WithTargetGroupStickinessConfig(TargetGroupStickinessConfig&& value) { SetTargetGroupStickinessConfig(std::move(value)); return *this;}

  private:

    Aws::Vector<TargetGroupTuple> m_targetGroups;
    bool m_targetGroupsHasBeenSet = false;

    TargetGroupStickinessConfig m_targetGroupStickinessConfig;
    bool m_targetGroupStickinessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
