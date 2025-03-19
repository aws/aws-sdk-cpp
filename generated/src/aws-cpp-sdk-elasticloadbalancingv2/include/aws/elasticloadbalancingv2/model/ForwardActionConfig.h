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
    AWS_ELASTICLOADBALANCINGV2_API ForwardActionConfig() = default;
    AWS_ELASTICLOADBALANCINGV2_API ForwardActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API ForwardActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The target groups. For Network Load Balancers, you can specify a single
     * target group.</p>
     */
    inline const Aws::Vector<TargetGroupTuple>& GetTargetGroups() const { return m_targetGroups; }
    inline bool TargetGroupsHasBeenSet() const { return m_targetGroupsHasBeenSet; }
    template<typename TargetGroupsT = Aws::Vector<TargetGroupTuple>>
    void SetTargetGroups(TargetGroupsT&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = std::forward<TargetGroupsT>(value); }
    template<typename TargetGroupsT = Aws::Vector<TargetGroupTuple>>
    ForwardActionConfig& WithTargetGroups(TargetGroupsT&& value) { SetTargetGroups(std::forward<TargetGroupsT>(value)); return *this;}
    template<typename TargetGroupsT = TargetGroupTuple>
    ForwardActionConfig& AddTargetGroups(TargetGroupsT&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups.emplace_back(std::forward<TargetGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target group stickiness for the rule.</p>
     */
    inline const TargetGroupStickinessConfig& GetTargetGroupStickinessConfig() const { return m_targetGroupStickinessConfig; }
    inline bool TargetGroupStickinessConfigHasBeenSet() const { return m_targetGroupStickinessConfigHasBeenSet; }
    template<typename TargetGroupStickinessConfigT = TargetGroupStickinessConfig>
    void SetTargetGroupStickinessConfig(TargetGroupStickinessConfigT&& value) { m_targetGroupStickinessConfigHasBeenSet = true; m_targetGroupStickinessConfig = std::forward<TargetGroupStickinessConfigT>(value); }
    template<typename TargetGroupStickinessConfigT = TargetGroupStickinessConfig>
    ForwardActionConfig& WithTargetGroupStickinessConfig(TargetGroupStickinessConfigT&& value) { SetTargetGroupStickinessConfig(std::forward<TargetGroupStickinessConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TargetGroupTuple> m_targetGroups;
    bool m_targetGroupsHasBeenSet = false;

    TargetGroupStickinessConfig m_targetGroupStickinessConfig;
    bool m_targetGroupStickinessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
