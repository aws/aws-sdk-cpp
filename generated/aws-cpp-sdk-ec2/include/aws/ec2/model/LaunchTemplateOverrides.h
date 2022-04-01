﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceRequirements.h>
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
   * <p>Describes overrides for a launch template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateOverrides">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplateOverrides
  {
  public:
    LaunchTemplateOverrides();
    LaunchTemplateOverrides(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateOverrides& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The instance type.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type.</p>
     */
    inline LaunchTemplateOverrides& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline LaunchTemplateOverrides& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::move(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline LaunchTemplateOverrides& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline LaunchTemplateOverrides& WithSpotPrice(Aws::String&& value) { SetSpotPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline LaunchTemplateOverrides& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}


    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline LaunchTemplateOverrides& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline LaunchTemplateOverrides& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline LaunchTemplateOverrides& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The Availability Zone in which to launch the instances.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which to launch the instances.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which to launch the instances.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which to launch the instances.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which to launch the instances.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which to launch the instances.</p>
     */
    inline LaunchTemplateOverrides& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to launch the instances.</p>
     */
    inline LaunchTemplateOverrides& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which to launch the instances.</p>
     */
    inline LaunchTemplateOverrides& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The number of units provided by the specified instance type.</p>
     */
    inline double GetWeightedCapacity() const{ return m_weightedCapacity; }

    /**
     * <p>The number of units provided by the specified instance type.</p>
     */
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }

    /**
     * <p>The number of units provided by the specified instance type.</p>
     */
    inline void SetWeightedCapacity(double value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }

    /**
     * <p>The number of units provided by the specified instance type.</p>
     */
    inline LaunchTemplateOverrides& WithWeightedCapacity(double value) { SetWeightedCapacity(value); return *this;}


    /**
     * <p>The priority for the launch template override. The highest priority is
     * launched first.</p> <p>If <code>OnDemandAllocationStrategy</code> is set to
     * <code>prioritized</code>, Spot Fleet uses priority to determine which launch
     * template override to use first in fulfilling On-Demand capacity.</p> <p>If the
     * Spot <code>AllocationStrategy</code> is set to
     * <code>capacityOptimizedPrioritized</code>, Spot Fleet uses priority on a
     * best-effort basis to determine which launch template override to use in
     * fulfilling Spot capacity, but optimizes for capacity first.</p> <p>Valid values
     * are whole numbers starting at <code>0</code>. The lower the number, the higher
     * the priority. If no number is set, the launch template override has the lowest
     * priority. You can set the same priority for different launch template
     * overrides.</p>
     */
    inline double GetPriority() const{ return m_priority; }

    /**
     * <p>The priority for the launch template override. The highest priority is
     * launched first.</p> <p>If <code>OnDemandAllocationStrategy</code> is set to
     * <code>prioritized</code>, Spot Fleet uses priority to determine which launch
     * template override to use first in fulfilling On-Demand capacity.</p> <p>If the
     * Spot <code>AllocationStrategy</code> is set to
     * <code>capacityOptimizedPrioritized</code>, Spot Fleet uses priority on a
     * best-effort basis to determine which launch template override to use in
     * fulfilling Spot capacity, but optimizes for capacity first.</p> <p>Valid values
     * are whole numbers starting at <code>0</code>. The lower the number, the higher
     * the priority. If no number is set, the launch template override has the lowest
     * priority. You can set the same priority for different launch template
     * overrides.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority for the launch template override. The highest priority is
     * launched first.</p> <p>If <code>OnDemandAllocationStrategy</code> is set to
     * <code>prioritized</code>, Spot Fleet uses priority to determine which launch
     * template override to use first in fulfilling On-Demand capacity.</p> <p>If the
     * Spot <code>AllocationStrategy</code> is set to
     * <code>capacityOptimizedPrioritized</code>, Spot Fleet uses priority on a
     * best-effort basis to determine which launch template override to use in
     * fulfilling Spot capacity, but optimizes for capacity first.</p> <p>Valid values
     * are whole numbers starting at <code>0</code>. The lower the number, the higher
     * the priority. If no number is set, the launch template override has the lowest
     * priority. You can set the same priority for different launch template
     * overrides.</p>
     */
    inline void SetPriority(double value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority for the launch template override. The highest priority is
     * launched first.</p> <p>If <code>OnDemandAllocationStrategy</code> is set to
     * <code>prioritized</code>, Spot Fleet uses priority to determine which launch
     * template override to use first in fulfilling On-Demand capacity.</p> <p>If the
     * Spot <code>AllocationStrategy</code> is set to
     * <code>capacityOptimizedPrioritized</code>, Spot Fleet uses priority on a
     * best-effort basis to determine which launch template override to use in
     * fulfilling Spot capacity, but optimizes for capacity first.</p> <p>Valid values
     * are whole numbers starting at <code>0</code>. The lower the number, the higher
     * the priority. If no number is set, the launch template override has the lowest
     * priority. You can set the same priority for different launch template
     * overrides.</p>
     */
    inline LaunchTemplateOverrides& WithPriority(double value) { SetPriority(value); return *this;}


    /**
     * <p>The instance requirements. When you specify instance requirements, Amazon EC2
     * will identify instance types with the provided requirements, and then use your
     * On-Demand and Spot allocation strategies to launch instances from these instance
     * types, in the same way as when you specify a list of instance types.</p> 
     * <p>If you specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceTypes</code>.</p> 
     */
    inline const InstanceRequirements& GetInstanceRequirements() const{ return m_instanceRequirements; }

    /**
     * <p>The instance requirements. When you specify instance requirements, Amazon EC2
     * will identify instance types with the provided requirements, and then use your
     * On-Demand and Spot allocation strategies to launch instances from these instance
     * types, in the same way as when you specify a list of instance types.</p> 
     * <p>If you specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceTypes</code>.</p> 
     */
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }

    /**
     * <p>The instance requirements. When you specify instance requirements, Amazon EC2
     * will identify instance types with the provided requirements, and then use your
     * On-Demand and Spot allocation strategies to launch instances from these instance
     * types, in the same way as when you specify a list of instance types.</p> 
     * <p>If you specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceTypes</code>.</p> 
     */
    inline void SetInstanceRequirements(const InstanceRequirements& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = value; }

    /**
     * <p>The instance requirements. When you specify instance requirements, Amazon EC2
     * will identify instance types with the provided requirements, and then use your
     * On-Demand and Spot allocation strategies to launch instances from these instance
     * types, in the same way as when you specify a list of instance types.</p> 
     * <p>If you specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceTypes</code>.</p> 
     */
    inline void SetInstanceRequirements(InstanceRequirements&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::move(value); }

    /**
     * <p>The instance requirements. When you specify instance requirements, Amazon EC2
     * will identify instance types with the provided requirements, and then use your
     * On-Demand and Spot allocation strategies to launch instances from these instance
     * types, in the same way as when you specify a list of instance types.</p> 
     * <p>If you specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceTypes</code>.</p> 
     */
    inline LaunchTemplateOverrides& WithInstanceRequirements(const InstanceRequirements& value) { SetInstanceRequirements(value); return *this;}

    /**
     * <p>The instance requirements. When you specify instance requirements, Amazon EC2
     * will identify instance types with the provided requirements, and then use your
     * On-Demand and Spot allocation strategies to launch instances from these instance
     * types, in the same way as when you specify a list of instance types.</p> 
     * <p>If you specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceTypes</code>.</p> 
     */
    inline LaunchTemplateOverrides& WithInstanceRequirements(InstanceRequirements&& value) { SetInstanceRequirements(std::move(value)); return *this;}

  private:

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    double m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet;

    double m_priority;
    bool m_priorityHasBeenSet;

    InstanceRequirements m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
