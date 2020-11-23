/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/LaunchTemplateSpecification.h>
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
   * <p>Describes an override for a launch template. The maximum number of instance
   * types that can be associated with an Auto Scaling group is 20. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-override-options.html">Configuring
   * overrides</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LaunchTemplateOverrides">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API LaunchTemplateOverrides
  {
  public:
    LaunchTemplateOverrides();
    LaunchTemplateOverrides(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateOverrides& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must use an instance
     * type that is supported in your requested Region and Availability Zones. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must use an instance
     * type that is supported in your requested Region and Availability Zones. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must use an instance
     * type that is supported in your requested Region and Availability Zones. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must use an instance
     * type that is supported in your requested Region and Availability Zones. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must use an instance
     * type that is supported in your requested Region and Availability Zones. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must use an instance
     * type that is supported in your requested Region and Availability Zones. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline LaunchTemplateOverrides& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must use an instance
     * type that is supported in your requested Region and Availability Zones. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline LaunchTemplateOverrides& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type, such as <code>m3.xlarge</code>. You must use an instance
     * type that is supported in your requested Region and Availability Zones. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline LaunchTemplateOverrides& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic. When a Spot or On-Demand Instance is provisioned, the capacity
     * units count toward the desired capacity. Amazon EC2 Auto Scaling provisions
     * instances until the desired capacity is totally fulfilled, even if this results
     * in an overage. For example, if there are 2 units remaining to fulfill capacity,
     * and Amazon EC2 Auto Scaling can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * desired capacity is exceeded by 3 units. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>. Value must be in the range of 1 to 999.</p>
     */
    inline const Aws::String& GetWeightedCapacity() const{ return m_weightedCapacity; }

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic. When a Spot or On-Demand Instance is provisioned, the capacity
     * units count toward the desired capacity. Amazon EC2 Auto Scaling provisions
     * instances until the desired capacity is totally fulfilled, even if this results
     * in an overage. For example, if there are 2 units remaining to fulfill capacity,
     * and Amazon EC2 Auto Scaling can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * desired capacity is exceeded by 3 units. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>. Value must be in the range of 1 to 999.</p>
     */
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic. When a Spot or On-Demand Instance is provisioned, the capacity
     * units count toward the desired capacity. Amazon EC2 Auto Scaling provisions
     * instances until the desired capacity is totally fulfilled, even if this results
     * in an overage. For example, if there are 2 units remaining to fulfill capacity,
     * and Amazon EC2 Auto Scaling can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * desired capacity is exceeded by 3 units. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>. Value must be in the range of 1 to 999.</p>
     */
    inline void SetWeightedCapacity(const Aws::String& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic. When a Spot or On-Demand Instance is provisioned, the capacity
     * units count toward the desired capacity. Amazon EC2 Auto Scaling provisions
     * instances until the desired capacity is totally fulfilled, even if this results
     * in an overage. For example, if there are 2 units remaining to fulfill capacity,
     * and Amazon EC2 Auto Scaling can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * desired capacity is exceeded by 3 units. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>. Value must be in the range of 1 to 999.</p>
     */
    inline void SetWeightedCapacity(Aws::String&& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = std::move(value); }

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic. When a Spot or On-Demand Instance is provisioned, the capacity
     * units count toward the desired capacity. Amazon EC2 Auto Scaling provisions
     * instances until the desired capacity is totally fulfilled, even if this results
     * in an overage. For example, if there are 2 units remaining to fulfill capacity,
     * and Amazon EC2 Auto Scaling can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * desired capacity is exceeded by 3 units. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>. Value must be in the range of 1 to 999.</p>
     */
    inline void SetWeightedCapacity(const char* value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity.assign(value); }

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic. When a Spot or On-Demand Instance is provisioned, the capacity
     * units count toward the desired capacity. Amazon EC2 Auto Scaling provisions
     * instances until the desired capacity is totally fulfilled, even if this results
     * in an overage. For example, if there are 2 units remaining to fulfill capacity,
     * and Amazon EC2 Auto Scaling can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * desired capacity is exceeded by 3 units. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>. Value must be in the range of 1 to 999.</p>
     */
    inline LaunchTemplateOverrides& WithWeightedCapacity(const Aws::String& value) { SetWeightedCapacity(value); return *this;}

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic. When a Spot or On-Demand Instance is provisioned, the capacity
     * units count toward the desired capacity. Amazon EC2 Auto Scaling provisions
     * instances until the desired capacity is totally fulfilled, even if this results
     * in an overage. For example, if there are 2 units remaining to fulfill capacity,
     * and Amazon EC2 Auto Scaling can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * desired capacity is exceeded by 3 units. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>. Value must be in the range of 1 to 999.</p>
     */
    inline LaunchTemplateOverrides& WithWeightedCapacity(Aws::String&& value) { SetWeightedCapacity(std::move(value)); return *this;}

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic. When a Spot or On-Demand Instance is provisioned, the capacity
     * units count toward the desired capacity. Amazon EC2 Auto Scaling provisions
     * instances until the desired capacity is totally fulfilled, even if this results
     * in an overage. For example, if there are 2 units remaining to fulfill capacity,
     * and Amazon EC2 Auto Scaling can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * desired capacity is exceeded by 3 units. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>. Value must be in the range of 1 to 999.</p>
     */
    inline LaunchTemplateOverrides& WithWeightedCapacity(const char* value) { SetWeightedCapacity(value); return *this;}


    /**
     * <p>Provides the launch template to be used when launching the instance type. For
     * example, some instance types might require a launch template with a different
     * AMI. If not provided, Amazon EC2 Auto Scaling uses the launch template that's
     * defined for your mixed instances policy. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplateSpecification() const{ return m_launchTemplateSpecification; }

    /**
     * <p>Provides the launch template to be used when launching the instance type. For
     * example, some instance types might require a launch template with a different
     * AMI. If not provided, Amazon EC2 Auto Scaling uses the launch template that's
     * defined for your mixed instances policy. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p>
     */
    inline bool LaunchTemplateSpecificationHasBeenSet() const { return m_launchTemplateSpecificationHasBeenSet; }

    /**
     * <p>Provides the launch template to be used when launching the instance type. For
     * example, some instance types might require a launch template with a different
     * AMI. If not provided, Amazon EC2 Auto Scaling uses the launch template that's
     * defined for your mixed instances policy. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p>
     */
    inline void SetLaunchTemplateSpecification(const LaunchTemplateSpecification& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = value; }

    /**
     * <p>Provides the launch template to be used when launching the instance type. For
     * example, some instance types might require a launch template with a different
     * AMI. If not provided, Amazon EC2 Auto Scaling uses the launch template that's
     * defined for your mixed instances policy. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p>
     */
    inline void SetLaunchTemplateSpecification(LaunchTemplateSpecification&& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = std::move(value); }

    /**
     * <p>Provides the launch template to be used when launching the instance type. For
     * example, some instance types might require a launch template with a different
     * AMI. If not provided, Amazon EC2 Auto Scaling uses the launch template that's
     * defined for your mixed instances policy. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p>
     */
    inline LaunchTemplateOverrides& WithLaunchTemplateSpecification(const LaunchTemplateSpecification& value) { SetLaunchTemplateSpecification(value); return *this;}

    /**
     * <p>Provides the launch template to be used when launching the instance type. For
     * example, some instance types might require a launch template with a different
     * AMI. If not provided, Amazon EC2 Auto Scaling uses the launch template that's
     * defined for your mixed instances policy. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-template-overrides.html">Specifying
     * a different launch template for an instance type</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>. </p>
     */
    inline LaunchTemplateOverrides& WithLaunchTemplateSpecification(LaunchTemplateSpecification&& value) { SetLaunchTemplateSpecification(std::move(value)); return *this;}

  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet;

    LaunchTemplateSpecification m_launchTemplateSpecification;
    bool m_launchTemplateSpecificationHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
