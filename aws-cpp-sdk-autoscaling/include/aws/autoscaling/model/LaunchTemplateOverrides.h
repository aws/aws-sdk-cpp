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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes an override for a launch template.</p><p><h3>See Also:</h3>   <a
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
     * <p>The instance type.</p> <p>For information about available instance types, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p> <p>For information about available instance types, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type.</p> <p>For information about available instance types, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> </p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p> <p>For information about available instance types, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> </p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type.</p> <p>For information about available instance types, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> </p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type.</p> <p>For information about available instance types, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> </p>
     */
    inline LaunchTemplateOverrides& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p> <p>For information about available instance types, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> </p>
     */
    inline LaunchTemplateOverrides& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type.</p> <p>For information about available instance types, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> </p>
     */
    inline LaunchTemplateOverrides& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The number of capacity units, which gives the instance type a proportional
     * weight to other instance types. For example, larger instance types are generally
     * weighted more than smaller instance types. These are the same units that you
     * chose to set the desired capacity in terms of instances, or a performance
     * attribute such as vCPUs, memory, or I/O.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline const Aws::String& GetWeightedCapacity() const{ return m_weightedCapacity; }

    /**
     * <p>The number of capacity units, which gives the instance type a proportional
     * weight to other instance types. For example, larger instance types are generally
     * weighted more than smaller instance types. These are the same units that you
     * chose to set the desired capacity in terms of instances, or a performance
     * attribute such as vCPUs, memory, or I/O.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }

    /**
     * <p>The number of capacity units, which gives the instance type a proportional
     * weight to other instance types. For example, larger instance types are generally
     * weighted more than smaller instance types. These are the same units that you
     * chose to set the desired capacity in terms of instances, or a performance
     * attribute such as vCPUs, memory, or I/O.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline void SetWeightedCapacity(const Aws::String& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }

    /**
     * <p>The number of capacity units, which gives the instance type a proportional
     * weight to other instance types. For example, larger instance types are generally
     * weighted more than smaller instance types. These are the same units that you
     * chose to set the desired capacity in terms of instances, or a performance
     * attribute such as vCPUs, memory, or I/O.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline void SetWeightedCapacity(Aws::String&& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = std::move(value); }

    /**
     * <p>The number of capacity units, which gives the instance type a proportional
     * weight to other instance types. For example, larger instance types are generally
     * weighted more than smaller instance types. These are the same units that you
     * chose to set the desired capacity in terms of instances, or a performance
     * attribute such as vCPUs, memory, or I/O.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline void SetWeightedCapacity(const char* value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity.assign(value); }

    /**
     * <p>The number of capacity units, which gives the instance type a proportional
     * weight to other instance types. For example, larger instance types are generally
     * weighted more than smaller instance types. These are the same units that you
     * chose to set the desired capacity in terms of instances, or a performance
     * attribute such as vCPUs, memory, or I/O.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline LaunchTemplateOverrides& WithWeightedCapacity(const Aws::String& value) { SetWeightedCapacity(value); return *this;}

    /**
     * <p>The number of capacity units, which gives the instance type a proportional
     * weight to other instance types. For example, larger instance types are generally
     * weighted more than smaller instance types. These are the same units that you
     * chose to set the desired capacity in terms of instances, or a performance
     * attribute such as vCPUs, memory, or I/O.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline LaunchTemplateOverrides& WithWeightedCapacity(Aws::String&& value) { SetWeightedCapacity(std::move(value)); return *this;}

    /**
     * <p>The number of capacity units, which gives the instance type a proportional
     * weight to other instance types. For example, larger instance types are generally
     * weighted more than smaller instance types. These are the same units that you
     * chose to set the desired capacity in terms of instances, or a performance
     * attribute such as vCPUs, memory, or I/O.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline LaunchTemplateOverrides& WithWeightedCapacity(const char* value) { SetWeightedCapacity(value); return *this;}

  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
