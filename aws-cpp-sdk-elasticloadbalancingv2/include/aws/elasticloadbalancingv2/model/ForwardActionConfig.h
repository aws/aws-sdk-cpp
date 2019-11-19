/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICLOADBALANCINGV2_API ForwardActionConfig
  {
  public:
    ForwardActionConfig();
    ForwardActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    ForwardActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more target groups. For Network Load Balancers, you can specify a
     * single target group.</p>
     */
    inline const Aws::Vector<TargetGroupTuple>& GetTargetGroups() const{ return m_targetGroups; }

    /**
     * <p>One or more target groups. For Network Load Balancers, you can specify a
     * single target group.</p>
     */
    inline bool TargetGroupsHasBeenSet() const { return m_targetGroupsHasBeenSet; }

    /**
     * <p>One or more target groups. For Network Load Balancers, you can specify a
     * single target group.</p>
     */
    inline void SetTargetGroups(const Aws::Vector<TargetGroupTuple>& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = value; }

    /**
     * <p>One or more target groups. For Network Load Balancers, you can specify a
     * single target group.</p>
     */
    inline void SetTargetGroups(Aws::Vector<TargetGroupTuple>&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = std::move(value); }

    /**
     * <p>One or more target groups. For Network Load Balancers, you can specify a
     * single target group.</p>
     */
    inline ForwardActionConfig& WithTargetGroups(const Aws::Vector<TargetGroupTuple>& value) { SetTargetGroups(value); return *this;}

    /**
     * <p>One or more target groups. For Network Load Balancers, you can specify a
     * single target group.</p>
     */
    inline ForwardActionConfig& WithTargetGroups(Aws::Vector<TargetGroupTuple>&& value) { SetTargetGroups(std::move(value)); return *this;}

    /**
     * <p>One or more target groups. For Network Load Balancers, you can specify a
     * single target group.</p>
     */
    inline ForwardActionConfig& AddTargetGroups(const TargetGroupTuple& value) { m_targetGroupsHasBeenSet = true; m_targetGroups.push_back(value); return *this; }

    /**
     * <p>One or more target groups. For Network Load Balancers, you can specify a
     * single target group.</p>
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
    bool m_targetGroupsHasBeenSet;

    TargetGroupStickinessConfig m_targetGroupStickinessConfig;
    bool m_targetGroupStickinessConfigHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
