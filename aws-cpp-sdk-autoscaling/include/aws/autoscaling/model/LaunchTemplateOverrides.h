/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/LaunchTemplateSpecification.h>
#include <aws/autoscaling/model/InstanceRequirements.h>
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
   * <p>Use this structure to let Amazon EC2 Auto Scaling do the following when the
   * Auto Scaling group has a mixed instances policy:</p> <ul> <li> <p>Override the
   * instance type that is specified in the launch template.</p> </li> <li> <p>Use
   * multiple instance types.</p> </li> </ul> <p>Specify the instance types that you
   * want, or define your instance requirements instead and let Amazon EC2 Auto
   * Scaling provision the available instance types that meet your requirements. This
   * can provide Amazon EC2 Auto Scaling with a larger selection of instance types to
   * choose from when fulfilling Spot and On-Demand capacities. You can view which
   * instance types are matched before you apply the instance requirements to your
   * Auto Scaling group.</p> <p>After you define your instance requirements, you
   * don't have to keep updating these settings to get new EC2 instance types
   * automatically. Amazon EC2 Auto Scaling uses the instance requirements of the
   * Auto Scaling group to determine whether a new EC2 instance type can be
   * used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LaunchTemplateOverrides">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateOverrides
  {
  public:
    AWS_AUTOSCALING_API LaunchTemplateOverrides();
    AWS_AUTOSCALING_API LaunchTemplateOverrides(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LaunchTemplateOverrides& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must specify an
     * instance type that is supported in your requested Region and Availability Zones.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>You can
     * specify up to 40 instance types per Auto Scaling group.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must specify an
     * instance type that is supported in your requested Region and Availability Zones.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>You can
     * specify up to 40 instance types per Auto Scaling group.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must specify an
     * instance type that is supported in your requested Region and Availability Zones.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>You can
     * specify up to 40 instance types per Auto Scaling group.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must specify an
     * instance type that is supported in your requested Region and Availability Zones.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>You can
     * specify up to 40 instance types per Auto Scaling group.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must specify an
     * instance type that is supported in your requested Region and Availability Zones.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>You can
     * specify up to 40 instance types per Auto Scaling group.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must specify an
     * instance type that is supported in your requested Region and Availability Zones.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>You can
     * specify up to 40 instance types per Auto Scaling group.</p>
     */
    inline LaunchTemplateOverrides& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must specify an
     * instance type that is supported in your requested Region and Availability Zones.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>You can
     * specify up to 40 instance types per Auto Scaling group.</p>
     */
    inline LaunchTemplateOverrides& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must specify an
     * instance type that is supported in your requested Region and Availability Zones.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>You can
     * specify up to 40 instance types per Auto Scaling group.</p>
     */
    inline LaunchTemplateOverrides& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>If you provide a list of instance types to use, you can specify the number of
     * capacity units provided by each instance type in terms of virtual CPUs, memory,
     * storage, throughput, or other relative performance characteristic. When a Spot
     * or On-Demand Instance is launched, the capacity units count toward the desired
     * capacity. Amazon EC2 Auto Scaling launches instances until the desired capacity
     * is totally fulfilled, even if this results in an overage. For example, if there
     * are two units remaining to fulfill capacity, and Amazon EC2 Auto Scaling can
     * only launch an instance with a <code>WeightedCapacity</code> of five units, the
     * instance is launched, and the desired capacity is exceeded by three units. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-instance-weighting.html">Configuring
     * instance weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. Value must be in the range of 1–999.</p> <p>If you
     * specify a value for <code>WeightedCapacity</code> for one instance type, you
     * must specify a value for <code>WeightedCapacity</code> for all of them.</p>
     *  <p>Every Auto Scaling group has three size parameters
     * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
     * Usually, you set these sizes based on a specific number of instances. However,
     * if you configure a mixed instances policy that defines weights for the instance
     * types, you must specify these sizes with the same units that you use for
     * weighting instances. </p> 
     */
    inline const Aws::String& GetWeightedCapacity() const{ return m_weightedCapacity; }

    /**
     * <p>If you provide a list of instance types to use, you can specify the number of
     * capacity units provided by each instance type in terms of virtual CPUs, memory,
     * storage, throughput, or other relative performance characteristic. When a Spot
     * or On-Demand Instance is launched, the capacity units count toward the desired
     * capacity. Amazon EC2 Auto Scaling launches instances until the desired capacity
     * is totally fulfilled, even if this results in an overage. For example, if there
     * are two units remaining to fulfill capacity, and Amazon EC2 Auto Scaling can
     * only launch an instance with a <code>WeightedCapacity</code> of five units, the
     * instance is launched, and the desired capacity is exceeded by three units. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-instance-weighting.html">Configuring
     * instance weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. Value must be in the range of 1–999.</p> <p>If you
     * specify a value for <code>WeightedCapacity</code> for one instance type, you
     * must specify a value for <code>WeightedCapacity</code> for all of them.</p>
     *  <p>Every Auto Scaling group has three size parameters
     * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
     * Usually, you set these sizes based on a specific number of instances. However,
     * if you configure a mixed instances policy that defines weights for the instance
     * types, you must specify these sizes with the same units that you use for
     * weighting instances. </p> 
     */
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }

    /**
     * <p>If you provide a list of instance types to use, you can specify the number of
     * capacity units provided by each instance type in terms of virtual CPUs, memory,
     * storage, throughput, or other relative performance characteristic. When a Spot
     * or On-Demand Instance is launched, the capacity units count toward the desired
     * capacity. Amazon EC2 Auto Scaling launches instances until the desired capacity
     * is totally fulfilled, even if this results in an overage. For example, if there
     * are two units remaining to fulfill capacity, and Amazon EC2 Auto Scaling can
     * only launch an instance with a <code>WeightedCapacity</code> of five units, the
     * instance is launched, and the desired capacity is exceeded by three units. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-instance-weighting.html">Configuring
     * instance weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. Value must be in the range of 1–999.</p> <p>If you
     * specify a value for <code>WeightedCapacity</code> for one instance type, you
     * must specify a value for <code>WeightedCapacity</code> for all of them.</p>
     *  <p>Every Auto Scaling group has three size parameters
     * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
     * Usually, you set these sizes based on a specific number of instances. However,
     * if you configure a mixed instances policy that defines weights for the instance
     * types, you must specify these sizes with the same units that you use for
     * weighting instances. </p> 
     */
    inline void SetWeightedCapacity(const Aws::String& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }

    /**
     * <p>If you provide a list of instance types to use, you can specify the number of
     * capacity units provided by each instance type in terms of virtual CPUs, memory,
     * storage, throughput, or other relative performance characteristic. When a Spot
     * or On-Demand Instance is launched, the capacity units count toward the desired
     * capacity. Amazon EC2 Auto Scaling launches instances until the desired capacity
     * is totally fulfilled, even if this results in an overage. For example, if there
     * are two units remaining to fulfill capacity, and Amazon EC2 Auto Scaling can
     * only launch an instance with a <code>WeightedCapacity</code> of five units, the
     * instance is launched, and the desired capacity is exceeded by three units. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-instance-weighting.html">Configuring
     * instance weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. Value must be in the range of 1–999.</p> <p>If you
     * specify a value for <code>WeightedCapacity</code> for one instance type, you
     * must specify a value for <code>WeightedCapacity</code> for all of them.</p>
     *  <p>Every Auto Scaling group has three size parameters
     * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
     * Usually, you set these sizes based on a specific number of instances. However,
     * if you configure a mixed instances policy that defines weights for the instance
     * types, you must specify these sizes with the same units that you use for
     * weighting instances. </p> 
     */
    inline void SetWeightedCapacity(Aws::String&& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = std::move(value); }

    /**
     * <p>If you provide a list of instance types to use, you can specify the number of
     * capacity units provided by each instance type in terms of virtual CPUs, memory,
     * storage, throughput, or other relative performance characteristic. When a Spot
     * or On-Demand Instance is launched, the capacity units count toward the desired
     * capacity. Amazon EC2 Auto Scaling launches instances until the desired capacity
     * is totally fulfilled, even if this results in an overage. For example, if there
     * are two units remaining to fulfill capacity, and Amazon EC2 Auto Scaling can
     * only launch an instance with a <code>WeightedCapacity</code> of five units, the
     * instance is launched, and the desired capacity is exceeded by three units. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-instance-weighting.html">Configuring
     * instance weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. Value must be in the range of 1–999.</p> <p>If you
     * specify a value for <code>WeightedCapacity</code> for one instance type, you
     * must specify a value for <code>WeightedCapacity</code> for all of them.</p>
     *  <p>Every Auto Scaling group has three size parameters
     * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
     * Usually, you set these sizes based on a specific number of instances. However,
     * if you configure a mixed instances policy that defines weights for the instance
     * types, you must specify these sizes with the same units that you use for
     * weighting instances. </p> 
     */
    inline void SetWeightedCapacity(const char* value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity.assign(value); }

    /**
     * <p>If you provide a list of instance types to use, you can specify the number of
     * capacity units provided by each instance type in terms of virtual CPUs, memory,
     * storage, throughput, or other relative performance characteristic. When a Spot
     * or On-Demand Instance is launched, the capacity units count toward the desired
     * capacity. Amazon EC2 Auto Scaling launches instances until the desired capacity
     * is totally fulfilled, even if this results in an overage. For example, if there
     * are two units remaining to fulfill capacity, and Amazon EC2 Auto Scaling can
     * only launch an instance with a <code>WeightedCapacity</code> of five units, the
     * instance is launched, and the desired capacity is exceeded by three units. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-instance-weighting.html">Configuring
     * instance weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. Value must be in the range of 1–999.</p> <p>If you
     * specify a value for <code>WeightedCapacity</code> for one instance type, you
     * must specify a value for <code>WeightedCapacity</code> for all of them.</p>
     *  <p>Every Auto Scaling group has three size parameters
     * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
     * Usually, you set these sizes based on a specific number of instances. However,
     * if you configure a mixed instances policy that defines weights for the instance
     * types, you must specify these sizes with the same units that you use for
     * weighting instances. </p> 
     */
    inline LaunchTemplateOverrides& WithWeightedCapacity(const Aws::String& value) { SetWeightedCapacity(value); return *this;}

    /**
     * <p>If you provide a list of instance types to use, you can specify the number of
     * capacity units provided by each instance type in terms of virtual CPUs, memory,
     * storage, throughput, or other relative performance characteristic. When a Spot
     * or On-Demand Instance is launched, the capacity units count toward the desired
     * capacity. Amazon EC2 Auto Scaling launches instances until the desired capacity
     * is totally fulfilled, even if this results in an overage. For example, if there
     * are two units remaining to fulfill capacity, and Amazon EC2 Auto Scaling can
     * only launch an instance with a <code>WeightedCapacity</code> of five units, the
     * instance is launched, and the desired capacity is exceeded by three units. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-instance-weighting.html">Configuring
     * instance weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. Value must be in the range of 1–999.</p> <p>If you
     * specify a value for <code>WeightedCapacity</code> for one instance type, you
     * must specify a value for <code>WeightedCapacity</code> for all of them.</p>
     *  <p>Every Auto Scaling group has three size parameters
     * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
     * Usually, you set these sizes based on a specific number of instances. However,
     * if you configure a mixed instances policy that defines weights for the instance
     * types, you must specify these sizes with the same units that you use for
     * weighting instances. </p> 
     */
    inline LaunchTemplateOverrides& WithWeightedCapacity(Aws::String&& value) { SetWeightedCapacity(std::move(value)); return *this;}

    /**
     * <p>If you provide a list of instance types to use, you can specify the number of
     * capacity units provided by each instance type in terms of virtual CPUs, memory,
     * storage, throughput, or other relative performance characteristic. When a Spot
     * or On-Demand Instance is launched, the capacity units count toward the desired
     * capacity. Amazon EC2 Auto Scaling launches instances until the desired capacity
     * is totally fulfilled, even if this results in an overage. For example, if there
     * are two units remaining to fulfill capacity, and Amazon EC2 Auto Scaling can
     * only launch an instance with a <code>WeightedCapacity</code> of five units, the
     * instance is launched, and the desired capacity is exceeded by three units. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-instance-weighting.html">Configuring
     * instance weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. Value must be in the range of 1–999.</p> <p>If you
     * specify a value for <code>WeightedCapacity</code> for one instance type, you
     * must specify a value for <code>WeightedCapacity</code> for all of them.</p>
     *  <p>Every Auto Scaling group has three size parameters
     * (<code>DesiredCapacity</code>, <code>MaxSize</code>, and <code>MinSize</code>).
     * Usually, you set these sizes based on a specific number of instances. However,
     * if you configure a mixed instances policy that defines weights for the instance
     * types, you must specify these sizes with the same units that you use for
     * weighting instances. </p> 
     */
    inline LaunchTemplateOverrides& WithWeightedCapacity(const char* value) { SetWeightedCapacity(value); return *this;}


    /**
     * <p>Provides a launch template for the specified instance type or set of instance
     * requirements. For example, some instance types might require a launch template
     * with a different AMI. If not provided, Amazon EC2 Auto Scaling uses the launch
     * template that's specified in the <code>LaunchTemplate</code> definition. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p> <p>You can specify up to 20 launch templates per
     * Auto Scaling group. The launch templates specified in the overrides and in the
     * <code>LaunchTemplate</code> definition count towards this limit.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplateSpecification() const{ return m_launchTemplateSpecification; }

    /**
     * <p>Provides a launch template for the specified instance type or set of instance
     * requirements. For example, some instance types might require a launch template
     * with a different AMI. If not provided, Amazon EC2 Auto Scaling uses the launch
     * template that's specified in the <code>LaunchTemplate</code> definition. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p> <p>You can specify up to 20 launch templates per
     * Auto Scaling group. The launch templates specified in the overrides and in the
     * <code>LaunchTemplate</code> definition count towards this limit.</p>
     */
    inline bool LaunchTemplateSpecificationHasBeenSet() const { return m_launchTemplateSpecificationHasBeenSet; }

    /**
     * <p>Provides a launch template for the specified instance type or set of instance
     * requirements. For example, some instance types might require a launch template
     * with a different AMI. If not provided, Amazon EC2 Auto Scaling uses the launch
     * template that's specified in the <code>LaunchTemplate</code> definition. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p> <p>You can specify up to 20 launch templates per
     * Auto Scaling group. The launch templates specified in the overrides and in the
     * <code>LaunchTemplate</code> definition count towards this limit.</p>
     */
    inline void SetLaunchTemplateSpecification(const LaunchTemplateSpecification& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = value; }

    /**
     * <p>Provides a launch template for the specified instance type or set of instance
     * requirements. For example, some instance types might require a launch template
     * with a different AMI. If not provided, Amazon EC2 Auto Scaling uses the launch
     * template that's specified in the <code>LaunchTemplate</code> definition. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p> <p>You can specify up to 20 launch templates per
     * Auto Scaling group. The launch templates specified in the overrides and in the
     * <code>LaunchTemplate</code> definition count towards this limit.</p>
     */
    inline void SetLaunchTemplateSpecification(LaunchTemplateSpecification&& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = std::move(value); }

    /**
     * <p>Provides a launch template for the specified instance type or set of instance
     * requirements. For example, some instance types might require a launch template
     * with a different AMI. If not provided, Amazon EC2 Auto Scaling uses the launch
     * template that's specified in the <code>LaunchTemplate</code> definition. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p> <p>You can specify up to 20 launch templates per
     * Auto Scaling group. The launch templates specified in the overrides and in the
     * <code>LaunchTemplate</code> definition count towards this limit.</p>
     */
    inline LaunchTemplateOverrides& WithLaunchTemplateSpecification(const LaunchTemplateSpecification& value) { SetLaunchTemplateSpecification(value); return *this;}

    /**
     * <p>Provides a launch template for the specified instance type or set of instance
     * requirements. For example, some instance types might require a launch template
     * with a different AMI. If not provided, Amazon EC2 Auto Scaling uses the launch
     * template that's specified in the <code>LaunchTemplate</code> definition. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p> <p>You can specify up to 20 launch templates per
     * Auto Scaling group. The launch templates specified in the overrides and in the
     * <code>LaunchTemplate</code> definition count towards this limit.</p>
     */
    inline LaunchTemplateOverrides& WithLaunchTemplateSpecification(LaunchTemplateSpecification&& value) { SetLaunchTemplateSpecification(std::move(value)); return *this;}


    /**
     * <p>The instance requirements. Amazon EC2 Auto Scaling uses your specified
     * requirements to identify instance types. Then, it uses your On-Demand and Spot
     * allocation strategies to launch instances from these instance types.</p> <p>You
     * can specify up to four separate sets of instance requirements per Auto Scaling
     * group. This is useful for provisioning instances from different Amazon Machine
     * Images (AMIs) in the same Auto Scaling group. To do this, create the AMIs and
     * create a new launch template for each AMI. Then, create a compatible set of
     * instance requirements for each launch template. </p>  <p>If you specify
     * <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p> 
     */
    inline const InstanceRequirements& GetInstanceRequirements() const{ return m_instanceRequirements; }

    /**
     * <p>The instance requirements. Amazon EC2 Auto Scaling uses your specified
     * requirements to identify instance types. Then, it uses your On-Demand and Spot
     * allocation strategies to launch instances from these instance types.</p> <p>You
     * can specify up to four separate sets of instance requirements per Auto Scaling
     * group. This is useful for provisioning instances from different Amazon Machine
     * Images (AMIs) in the same Auto Scaling group. To do this, create the AMIs and
     * create a new launch template for each AMI. Then, create a compatible set of
     * instance requirements for each launch template. </p>  <p>If you specify
     * <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p> 
     */
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }

    /**
     * <p>The instance requirements. Amazon EC2 Auto Scaling uses your specified
     * requirements to identify instance types. Then, it uses your On-Demand and Spot
     * allocation strategies to launch instances from these instance types.</p> <p>You
     * can specify up to four separate sets of instance requirements per Auto Scaling
     * group. This is useful for provisioning instances from different Amazon Machine
     * Images (AMIs) in the same Auto Scaling group. To do this, create the AMIs and
     * create a new launch template for each AMI. Then, create a compatible set of
     * instance requirements for each launch template. </p>  <p>If you specify
     * <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p> 
     */
    inline void SetInstanceRequirements(const InstanceRequirements& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = value; }

    /**
     * <p>The instance requirements. Amazon EC2 Auto Scaling uses your specified
     * requirements to identify instance types. Then, it uses your On-Demand and Spot
     * allocation strategies to launch instances from these instance types.</p> <p>You
     * can specify up to four separate sets of instance requirements per Auto Scaling
     * group. This is useful for provisioning instances from different Amazon Machine
     * Images (AMIs) in the same Auto Scaling group. To do this, create the AMIs and
     * create a new launch template for each AMI. Then, create a compatible set of
     * instance requirements for each launch template. </p>  <p>If you specify
     * <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p> 
     */
    inline void SetInstanceRequirements(InstanceRequirements&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::move(value); }

    /**
     * <p>The instance requirements. Amazon EC2 Auto Scaling uses your specified
     * requirements to identify instance types. Then, it uses your On-Demand and Spot
     * allocation strategies to launch instances from these instance types.</p> <p>You
     * can specify up to four separate sets of instance requirements per Auto Scaling
     * group. This is useful for provisioning instances from different Amazon Machine
     * Images (AMIs) in the same Auto Scaling group. To do this, create the AMIs and
     * create a new launch template for each AMI. Then, create a compatible set of
     * instance requirements for each launch template. </p>  <p>If you specify
     * <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p> 
     */
    inline LaunchTemplateOverrides& WithInstanceRequirements(const InstanceRequirements& value) { SetInstanceRequirements(value); return *this;}

    /**
     * <p>The instance requirements. Amazon EC2 Auto Scaling uses your specified
     * requirements to identify instance types. Then, it uses your On-Demand and Spot
     * allocation strategies to launch instances from these instance types.</p> <p>You
     * can specify up to four separate sets of instance requirements per Auto Scaling
     * group. This is useful for provisioning instances from different Amazon Machine
     * Images (AMIs) in the same Auto Scaling group. To do this, create the AMIs and
     * create a new launch template for each AMI. Then, create a compatible set of
     * instance requirements for each launch template. </p>  <p>If you specify
     * <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p> 
     */
    inline LaunchTemplateOverrides& WithInstanceRequirements(InstanceRequirements&& value) { SetInstanceRequirements(std::move(value)); return *this;}

  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplateSpecification;
    bool m_launchTemplateSpecificationHasBeenSet = false;

    InstanceRequirements m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
