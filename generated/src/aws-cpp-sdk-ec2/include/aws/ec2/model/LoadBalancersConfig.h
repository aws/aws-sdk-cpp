/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ClassicLoadBalancersConfig.h>
#include <aws/ec2/model/TargetGroupsConfig.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the Classic Load Balancers and target groups to attach to a Spot
   * Fleet request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LoadBalancersConfig">AWS
   * API Reference</a></p>
   */
  class LoadBalancersConfig
  {
  public:
    AWS_EC2_API LoadBalancersConfig() = default;
    AWS_EC2_API LoadBalancersConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LoadBalancersConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Classic Load Balancers.</p>
     */
    inline const ClassicLoadBalancersConfig& GetClassicLoadBalancersConfig() const { return m_classicLoadBalancersConfig; }
    inline bool ClassicLoadBalancersConfigHasBeenSet() const { return m_classicLoadBalancersConfigHasBeenSet; }
    template<typename ClassicLoadBalancersConfigT = ClassicLoadBalancersConfig>
    void SetClassicLoadBalancersConfig(ClassicLoadBalancersConfigT&& value) { m_classicLoadBalancersConfigHasBeenSet = true; m_classicLoadBalancersConfig = std::forward<ClassicLoadBalancersConfigT>(value); }
    template<typename ClassicLoadBalancersConfigT = ClassicLoadBalancersConfig>
    LoadBalancersConfig& WithClassicLoadBalancersConfig(ClassicLoadBalancersConfigT&& value) { SetClassicLoadBalancersConfig(std::forward<ClassicLoadBalancersConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target groups.</p>
     */
    inline const TargetGroupsConfig& GetTargetGroupsConfig() const { return m_targetGroupsConfig; }
    inline bool TargetGroupsConfigHasBeenSet() const { return m_targetGroupsConfigHasBeenSet; }
    template<typename TargetGroupsConfigT = TargetGroupsConfig>
    void SetTargetGroupsConfig(TargetGroupsConfigT&& value) { m_targetGroupsConfigHasBeenSet = true; m_targetGroupsConfig = std::forward<TargetGroupsConfigT>(value); }
    template<typename TargetGroupsConfigT = TargetGroupsConfig>
    LoadBalancersConfig& WithTargetGroupsConfig(TargetGroupsConfigT&& value) { SetTargetGroupsConfig(std::forward<TargetGroupsConfigT>(value)); return *this;}
    ///@}
  private:

    ClassicLoadBalancersConfig m_classicLoadBalancersConfig;
    bool m_classicLoadBalancersConfigHasBeenSet = false;

    TargetGroupsConfig m_targetGroupsConfig;
    bool m_targetGroupsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
