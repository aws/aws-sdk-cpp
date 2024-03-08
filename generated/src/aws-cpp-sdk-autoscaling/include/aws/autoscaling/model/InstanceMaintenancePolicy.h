/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>Describes an instance maintenance policy.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-instance-maintenance-policy.html">Set
   * instance maintenance policy</a> in the <i>Amazon EC2 Auto Scaling User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstanceMaintenancePolicy">AWS
   * API Reference</a></p>
   */
  class InstanceMaintenancePolicy
  {
  public:
    AWS_AUTOSCALING_API InstanceMaintenancePolicy();
    AWS_AUTOSCALING_API InstanceMaintenancePolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API InstanceMaintenancePolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies the lower threshold as a percentage of the desired capacity of the
     * Auto Scaling group. It represents the minimum percentage of the group to keep in
     * service, healthy, and ready to use to support your workload when replacing
     * instances. Value range is 0 to 100. To clear a previously set value, specify a
     * value of <code>-1</code>.</p>
     */
    inline int GetMinHealthyPercentage() const{ return m_minHealthyPercentage; }

    /**
     * <p>Specifies the lower threshold as a percentage of the desired capacity of the
     * Auto Scaling group. It represents the minimum percentage of the group to keep in
     * service, healthy, and ready to use to support your workload when replacing
     * instances. Value range is 0 to 100. To clear a previously set value, specify a
     * value of <code>-1</code>.</p>
     */
    inline bool MinHealthyPercentageHasBeenSet() const { return m_minHealthyPercentageHasBeenSet; }

    /**
     * <p>Specifies the lower threshold as a percentage of the desired capacity of the
     * Auto Scaling group. It represents the minimum percentage of the group to keep in
     * service, healthy, and ready to use to support your workload when replacing
     * instances. Value range is 0 to 100. To clear a previously set value, specify a
     * value of <code>-1</code>.</p>
     */
    inline void SetMinHealthyPercentage(int value) { m_minHealthyPercentageHasBeenSet = true; m_minHealthyPercentage = value; }

    /**
     * <p>Specifies the lower threshold as a percentage of the desired capacity of the
     * Auto Scaling group. It represents the minimum percentage of the group to keep in
     * service, healthy, and ready to use to support your workload when replacing
     * instances. Value range is 0 to 100. To clear a previously set value, specify a
     * value of <code>-1</code>.</p>
     */
    inline InstanceMaintenancePolicy& WithMinHealthyPercentage(int value) { SetMinHealthyPercentage(value); return *this;}


    /**
     * <p>Specifies the upper threshold as a percentage of the desired capacity of the
     * Auto Scaling group. It represents the maximum percentage of the group that can
     * be in service and healthy, or pending, to support your workload when replacing
     * instances. Value range is 100 to 200. To clear a previously set value, specify a
     * value of <code>-1</code>.</p> <p>Both <code>MinHealthyPercentage</code> and
     * <code>MaxHealthyPercentage</code> must be specified, and the difference between
     * them cannot be greater than 100. A large range increases the number of instances
     * that can be replaced at the same time.</p>
     */
    inline int GetMaxHealthyPercentage() const{ return m_maxHealthyPercentage; }

    /**
     * <p>Specifies the upper threshold as a percentage of the desired capacity of the
     * Auto Scaling group. It represents the maximum percentage of the group that can
     * be in service and healthy, or pending, to support your workload when replacing
     * instances. Value range is 100 to 200. To clear a previously set value, specify a
     * value of <code>-1</code>.</p> <p>Both <code>MinHealthyPercentage</code> and
     * <code>MaxHealthyPercentage</code> must be specified, and the difference between
     * them cannot be greater than 100. A large range increases the number of instances
     * that can be replaced at the same time.</p>
     */
    inline bool MaxHealthyPercentageHasBeenSet() const { return m_maxHealthyPercentageHasBeenSet; }

    /**
     * <p>Specifies the upper threshold as a percentage of the desired capacity of the
     * Auto Scaling group. It represents the maximum percentage of the group that can
     * be in service and healthy, or pending, to support your workload when replacing
     * instances. Value range is 100 to 200. To clear a previously set value, specify a
     * value of <code>-1</code>.</p> <p>Both <code>MinHealthyPercentage</code> and
     * <code>MaxHealthyPercentage</code> must be specified, and the difference between
     * them cannot be greater than 100. A large range increases the number of instances
     * that can be replaced at the same time.</p>
     */
    inline void SetMaxHealthyPercentage(int value) { m_maxHealthyPercentageHasBeenSet = true; m_maxHealthyPercentage = value; }

    /**
     * <p>Specifies the upper threshold as a percentage of the desired capacity of the
     * Auto Scaling group. It represents the maximum percentage of the group that can
     * be in service and healthy, or pending, to support your workload when replacing
     * instances. Value range is 100 to 200. To clear a previously set value, specify a
     * value of <code>-1</code>.</p> <p>Both <code>MinHealthyPercentage</code> and
     * <code>MaxHealthyPercentage</code> must be specified, and the difference between
     * them cannot be greater than 100. A large range increases the number of instances
     * that can be replaced at the same time.</p>
     */
    inline InstanceMaintenancePolicy& WithMaxHealthyPercentage(int value) { SetMaxHealthyPercentage(value); return *this;}

  private:

    int m_minHealthyPercentage;
    bool m_minHealthyPercentageHasBeenSet = false;

    int m_maxHealthyPercentage;
    bool m_maxHealthyPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
