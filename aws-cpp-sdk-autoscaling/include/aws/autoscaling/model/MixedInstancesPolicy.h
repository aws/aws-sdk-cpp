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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/LaunchTemplate.h>
#include <aws/autoscaling/model/InstancesDistribution.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a mixed instances policy for an Auto Scaling group. With mixed
   * instances, your Auto Scaling group can provision a combination of On-Demand
   * Instances and Spot Instances across multiple instance types. Used in combination
   * with <a>CreateAutoScalingGroup</a>. For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-purchase-options.html">Auto
   * Scaling Groups with Multiple Instance Types and Purchase Options</a> in the
   * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>When you create your Auto
   * Scaling group, you can specify a launch configuration or template as a parameter
   * for the top-level object, or you can specify a mixed instances policy, but not
   * both at the same time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/MixedInstancesPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API MixedInstancesPolicy
  {
  public:
    MixedInstancesPolicy();
    MixedInstancesPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    MixedInstancesPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The launch template and overrides.</p> <p>This parameter is required when
     * creating an Auto Scaling group with a mixed instances policy, but is not
     * required when updating the group.</p>
     */
    inline const LaunchTemplate& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>The launch template and overrides.</p> <p>This parameter is required when
     * creating an Auto Scaling group with a mixed instances policy, but is not
     * required when updating the group.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>The launch template and overrides.</p> <p>This parameter is required when
     * creating an Auto Scaling group with a mixed instances policy, but is not
     * required when updating the group.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplate& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>The launch template and overrides.</p> <p>This parameter is required when
     * creating an Auto Scaling group with a mixed instances policy, but is not
     * required when updating the group.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplate&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>The launch template and overrides.</p> <p>This parameter is required when
     * creating an Auto Scaling group with a mixed instances policy, but is not
     * required when updating the group.</p>
     */
    inline MixedInstancesPolicy& WithLaunchTemplate(const LaunchTemplate& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>The launch template and overrides.</p> <p>This parameter is required when
     * creating an Auto Scaling group with a mixed instances policy, but is not
     * required when updating the group.</p>
     */
    inline MixedInstancesPolicy& WithLaunchTemplate(LaunchTemplate&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>The instances distribution to use. </p> <p>If you leave this parameter
     * unspecified when creating the group, the default values are used.</p>
     */
    inline const InstancesDistribution& GetInstancesDistribution() const{ return m_instancesDistribution; }

    /**
     * <p>The instances distribution to use. </p> <p>If you leave this parameter
     * unspecified when creating the group, the default values are used.</p>
     */
    inline bool InstancesDistributionHasBeenSet() const { return m_instancesDistributionHasBeenSet; }

    /**
     * <p>The instances distribution to use. </p> <p>If you leave this parameter
     * unspecified when creating the group, the default values are used.</p>
     */
    inline void SetInstancesDistribution(const InstancesDistribution& value) { m_instancesDistributionHasBeenSet = true; m_instancesDistribution = value; }

    /**
     * <p>The instances distribution to use. </p> <p>If you leave this parameter
     * unspecified when creating the group, the default values are used.</p>
     */
    inline void SetInstancesDistribution(InstancesDistribution&& value) { m_instancesDistributionHasBeenSet = true; m_instancesDistribution = std::move(value); }

    /**
     * <p>The instances distribution to use. </p> <p>If you leave this parameter
     * unspecified when creating the group, the default values are used.</p>
     */
    inline MixedInstancesPolicy& WithInstancesDistribution(const InstancesDistribution& value) { SetInstancesDistribution(value); return *this;}

    /**
     * <p>The instances distribution to use. </p> <p>If you leave this parameter
     * unspecified when creating the group, the default values are used.</p>
     */
    inline MixedInstancesPolicy& WithInstancesDistribution(InstancesDistribution&& value) { SetInstancesDistribution(std::move(value)); return *this;}

  private:

    LaunchTemplate m_launchTemplate;
    bool m_launchTemplateHasBeenSet;

    InstancesDistribution m_instancesDistribution;
    bool m_instancesDistributionHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
