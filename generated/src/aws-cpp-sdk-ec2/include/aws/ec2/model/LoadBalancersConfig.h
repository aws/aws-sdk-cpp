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
    AWS_EC2_API LoadBalancersConfig();
    AWS_EC2_API LoadBalancersConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LoadBalancersConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Classic Load Balancers.</p>
     */
    inline const ClassicLoadBalancersConfig& GetClassicLoadBalancersConfig() const{ return m_classicLoadBalancersConfig; }

    /**
     * <p>The Classic Load Balancers.</p>
     */
    inline bool ClassicLoadBalancersConfigHasBeenSet() const { return m_classicLoadBalancersConfigHasBeenSet; }

    /**
     * <p>The Classic Load Balancers.</p>
     */
    inline void SetClassicLoadBalancersConfig(const ClassicLoadBalancersConfig& value) { m_classicLoadBalancersConfigHasBeenSet = true; m_classicLoadBalancersConfig = value; }

    /**
     * <p>The Classic Load Balancers.</p>
     */
    inline void SetClassicLoadBalancersConfig(ClassicLoadBalancersConfig&& value) { m_classicLoadBalancersConfigHasBeenSet = true; m_classicLoadBalancersConfig = std::move(value); }

    /**
     * <p>The Classic Load Balancers.</p>
     */
    inline LoadBalancersConfig& WithClassicLoadBalancersConfig(const ClassicLoadBalancersConfig& value) { SetClassicLoadBalancersConfig(value); return *this;}

    /**
     * <p>The Classic Load Balancers.</p>
     */
    inline LoadBalancersConfig& WithClassicLoadBalancersConfig(ClassicLoadBalancersConfig&& value) { SetClassicLoadBalancersConfig(std::move(value)); return *this;}


    /**
     * <p>The target groups.</p>
     */
    inline const TargetGroupsConfig& GetTargetGroupsConfig() const{ return m_targetGroupsConfig; }

    /**
     * <p>The target groups.</p>
     */
    inline bool TargetGroupsConfigHasBeenSet() const { return m_targetGroupsConfigHasBeenSet; }

    /**
     * <p>The target groups.</p>
     */
    inline void SetTargetGroupsConfig(const TargetGroupsConfig& value) { m_targetGroupsConfigHasBeenSet = true; m_targetGroupsConfig = value; }

    /**
     * <p>The target groups.</p>
     */
    inline void SetTargetGroupsConfig(TargetGroupsConfig&& value) { m_targetGroupsConfigHasBeenSet = true; m_targetGroupsConfig = std::move(value); }

    /**
     * <p>The target groups.</p>
     */
    inline LoadBalancersConfig& WithTargetGroupsConfig(const TargetGroupsConfig& value) { SetTargetGroupsConfig(value); return *this;}

    /**
     * <p>The target groups.</p>
     */
    inline LoadBalancersConfig& WithTargetGroupsConfig(TargetGroupsConfig&& value) { SetTargetGroupsConfig(std::move(value)); return *this;}

  private:

    ClassicLoadBalancersConfig m_classicLoadBalancersConfig;
    bool m_classicLoadBalancersConfigHasBeenSet = false;

    TargetGroupsConfig m_targetGroupsConfig;
    bool m_targetGroupsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
