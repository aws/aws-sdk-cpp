/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Use this structure to launch multiple instance types and On-Demand Instances
   * and Spot Instances within a single Auto Scaling group.</p> <p>A mixed instances
   * policy contains information that Amazon EC2 Auto Scaling can use to launch
   * instances and help optimize your costs. For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups.html">Auto
   * Scaling groups with multiple instance types and purchase options</a> in the
   * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/MixedInstancesPolicy">AWS
   * API Reference</a></p>
   */
  class MixedInstancesPolicy
  {
  public:
    AWS_AUTOSCALING_API MixedInstancesPolicy();
    AWS_AUTOSCALING_API MixedInstancesPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API MixedInstancesPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more launch templates and the instance types (overrides) that are used
     * to launch EC2 instances to fulfill On-Demand and Spot capacities.</p>
     */
    inline const LaunchTemplate& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>One or more launch templates and the instance types (overrides) that are used
     * to launch EC2 instances to fulfill On-Demand and Spot capacities.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>One or more launch templates and the instance types (overrides) that are used
     * to launch EC2 instances to fulfill On-Demand and Spot capacities.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplate& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>One or more launch templates and the instance types (overrides) that are used
     * to launch EC2 instances to fulfill On-Demand and Spot capacities.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplate&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>One or more launch templates and the instance types (overrides) that are used
     * to launch EC2 instances to fulfill On-Demand and Spot capacities.</p>
     */
    inline MixedInstancesPolicy& WithLaunchTemplate(const LaunchTemplate& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>One or more launch templates and the instance types (overrides) that are used
     * to launch EC2 instances to fulfill On-Demand and Spot capacities.</p>
     */
    inline MixedInstancesPolicy& WithLaunchTemplate(LaunchTemplate&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>The instances distribution.</p>
     */
    inline const InstancesDistribution& GetInstancesDistribution() const{ return m_instancesDistribution; }

    /**
     * <p>The instances distribution.</p>
     */
    inline bool InstancesDistributionHasBeenSet() const { return m_instancesDistributionHasBeenSet; }

    /**
     * <p>The instances distribution.</p>
     */
    inline void SetInstancesDistribution(const InstancesDistribution& value) { m_instancesDistributionHasBeenSet = true; m_instancesDistribution = value; }

    /**
     * <p>The instances distribution.</p>
     */
    inline void SetInstancesDistribution(InstancesDistribution&& value) { m_instancesDistributionHasBeenSet = true; m_instancesDistribution = std::move(value); }

    /**
     * <p>The instances distribution.</p>
     */
    inline MixedInstancesPolicy& WithInstancesDistribution(const InstancesDistribution& value) { SetInstancesDistribution(value); return *this;}

    /**
     * <p>The instances distribution.</p>
     */
    inline MixedInstancesPolicy& WithInstancesDistribution(InstancesDistribution&& value) { SetInstancesDistribution(std::move(value)); return *this;}

  private:

    LaunchTemplate m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    InstancesDistribution m_instancesDistribution;
    bool m_instancesDistributionHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
