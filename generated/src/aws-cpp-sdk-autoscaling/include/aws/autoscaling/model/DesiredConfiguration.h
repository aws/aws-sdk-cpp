/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/LaunchTemplateSpecification.h>
#include <aws/autoscaling/model/MixedInstancesPolicy.h>
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
   * <p>Describes the desired configuration for an instance refresh. </p> <p>If you
   * specify a desired configuration, you must specify either a
   * <code>LaunchTemplate</code> or a <code>MixedInstancesPolicy</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DesiredConfiguration">AWS
   * API Reference</a></p>
   */
  class DesiredConfiguration
  {
  public:
    AWS_AUTOSCALING_API DesiredConfiguration();
    AWS_AUTOSCALING_API DesiredConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API DesiredConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes the launch template and the version of the launch template that
     * Amazon EC2 Auto Scaling uses to launch Amazon EC2 instances. For more
     * information about launch templates, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchTemplates.html">Launch
     * templates</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>Describes the launch template and the version of the launch template that
     * Amazon EC2 Auto Scaling uses to launch Amazon EC2 instances. For more
     * information about launch templates, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchTemplates.html">Launch
     * templates</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>Describes the launch template and the version of the launch template that
     * Amazon EC2 Auto Scaling uses to launch Amazon EC2 instances. For more
     * information about launch templates, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchTemplates.html">Launch
     * templates</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>Describes the launch template and the version of the launch template that
     * Amazon EC2 Auto Scaling uses to launch Amazon EC2 instances. For more
     * information about launch templates, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchTemplates.html">Launch
     * templates</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>Describes the launch template and the version of the launch template that
     * Amazon EC2 Auto Scaling uses to launch Amazon EC2 instances. For more
     * information about launch templates, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchTemplates.html">Launch
     * templates</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline DesiredConfiguration& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>Describes the launch template and the version of the launch template that
     * Amazon EC2 Auto Scaling uses to launch Amazon EC2 instances. For more
     * information about launch templates, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchTemplates.html">Launch
     * templates</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline DesiredConfiguration& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>Use this structure to launch multiple instance types and On-Demand Instances
     * and Spot Instances within a single Auto Scaling group.</p> <p>A mixed instances
     * policy contains information that Amazon EC2 Auto Scaling can use to launch
     * instances and help optimize your costs. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups.html">Auto
     * Scaling groups with multiple instance types and purchase options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline const MixedInstancesPolicy& GetMixedInstancesPolicy() const{ return m_mixedInstancesPolicy; }

    /**
     * <p>Use this structure to launch multiple instance types and On-Demand Instances
     * and Spot Instances within a single Auto Scaling group.</p> <p>A mixed instances
     * policy contains information that Amazon EC2 Auto Scaling can use to launch
     * instances and help optimize your costs. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups.html">Auto
     * Scaling groups with multiple instance types and purchase options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline bool MixedInstancesPolicyHasBeenSet() const { return m_mixedInstancesPolicyHasBeenSet; }

    /**
     * <p>Use this structure to launch multiple instance types and On-Demand Instances
     * and Spot Instances within a single Auto Scaling group.</p> <p>A mixed instances
     * policy contains information that Amazon EC2 Auto Scaling can use to launch
     * instances and help optimize your costs. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups.html">Auto
     * Scaling groups with multiple instance types and purchase options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetMixedInstancesPolicy(const MixedInstancesPolicy& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = value; }

    /**
     * <p>Use this structure to launch multiple instance types and On-Demand Instances
     * and Spot Instances within a single Auto Scaling group.</p> <p>A mixed instances
     * policy contains information that Amazon EC2 Auto Scaling can use to launch
     * instances and help optimize your costs. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups.html">Auto
     * Scaling groups with multiple instance types and purchase options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetMixedInstancesPolicy(MixedInstancesPolicy&& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = std::move(value); }

    /**
     * <p>Use this structure to launch multiple instance types and On-Demand Instances
     * and Spot Instances within a single Auto Scaling group.</p> <p>A mixed instances
     * policy contains information that Amazon EC2 Auto Scaling can use to launch
     * instances and help optimize your costs. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups.html">Auto
     * Scaling groups with multiple instance types and purchase options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline DesiredConfiguration& WithMixedInstancesPolicy(const MixedInstancesPolicy& value) { SetMixedInstancesPolicy(value); return *this;}

    /**
     * <p>Use this structure to launch multiple instance types and On-Demand Instances
     * and Spot Instances within a single Auto Scaling group.</p> <p>A mixed instances
     * policy contains information that Amazon EC2 Auto Scaling can use to launch
     * instances and help optimize your costs. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups.html">Auto
     * Scaling groups with multiple instance types and purchase options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline DesiredConfiguration& WithMixedInstancesPolicy(MixedInstancesPolicy&& value) { SetMixedInstancesPolicy(std::move(value)); return *this;}

  private:

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    MixedInstancesPolicy m_mixedInstancesPolicy;
    bool m_mixedInstancesPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
