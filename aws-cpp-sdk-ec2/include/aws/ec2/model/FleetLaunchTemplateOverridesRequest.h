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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Placement.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetLaunchTemplateOverridesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API FleetLaunchTemplateOverridesRequest
  {
  public:
    FleetLaunchTemplateOverridesRequest();
    FleetLaunchTemplateOverridesRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    FleetLaunchTemplateOverridesRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline FleetLaunchTemplateOverridesRequest& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline FleetLaunchTemplateOverridesRequest& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline const Aws::String& GetMaxPrice() const{ return m_maxPrice; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline void SetMaxPrice(const Aws::String& value) { m_maxPriceHasBeenSet = true; m_maxPrice = value; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline void SetMaxPrice(Aws::String&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::move(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline void SetMaxPrice(const char* value) { m_maxPriceHasBeenSet = true; m_maxPrice.assign(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline FleetLaunchTemplateOverridesRequest& WithMaxPrice(const Aws::String& value) { SetMaxPrice(value); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline FleetLaunchTemplateOverridesRequest& WithMaxPrice(Aws::String&& value) { SetMaxPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline FleetLaunchTemplateOverridesRequest& WithMaxPrice(const char* value) { SetMaxPrice(value); return *this;}


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
    inline FleetLaunchTemplateOverridesRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline FleetLaunchTemplateOverridesRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline FleetLaunchTemplateOverridesRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


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
    inline FleetLaunchTemplateOverridesRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to launch the instances.</p>
     */
    inline FleetLaunchTemplateOverridesRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which to launch the instances.</p>
     */
    inline FleetLaunchTemplateOverridesRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


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
    inline FleetLaunchTemplateOverridesRequest& WithWeightedCapacity(double value) { SetWeightedCapacity(value); return *this;}


    /**
     * <p>The priority for the launch template override. If <b>AllocationStrategy</b>
     * is set to <code>prioritized</code>, EC2 Fleet uses priority to determine which
     * launch template override to use first in fulfilling On-Demand capacity. The
     * highest priority is launched first. Valid values are whole numbers starting at
     * <code>0</code>. The lower the number, the higher the priority. If no number is
     * set, the launch template override has the lowest priority.</p>
     */
    inline double GetPriority() const{ return m_priority; }

    /**
     * <p>The priority for the launch template override. If <b>AllocationStrategy</b>
     * is set to <code>prioritized</code>, EC2 Fleet uses priority to determine which
     * launch template override to use first in fulfilling On-Demand capacity. The
     * highest priority is launched first. Valid values are whole numbers starting at
     * <code>0</code>. The lower the number, the higher the priority. If no number is
     * set, the launch template override has the lowest priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority for the launch template override. If <b>AllocationStrategy</b>
     * is set to <code>prioritized</code>, EC2 Fleet uses priority to determine which
     * launch template override to use first in fulfilling On-Demand capacity. The
     * highest priority is launched first. Valid values are whole numbers starting at
     * <code>0</code>. The lower the number, the higher the priority. If no number is
     * set, the launch template override has the lowest priority.</p>
     */
    inline void SetPriority(double value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority for the launch template override. If <b>AllocationStrategy</b>
     * is set to <code>prioritized</code>, EC2 Fleet uses priority to determine which
     * launch template override to use first in fulfilling On-Demand capacity. The
     * highest priority is launched first. Valid values are whole numbers starting at
     * <code>0</code>. The lower the number, the higher the priority. If no number is
     * set, the launch template override has the lowest priority.</p>
     */
    inline FleetLaunchTemplateOverridesRequest& WithPriority(double value) { SetPriority(value); return *this;}


    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline const Placement& GetPlacement() const{ return m_placement; }

    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }

    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline void SetPlacement(const Placement& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline void SetPlacement(Placement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }

    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline FleetLaunchTemplateOverridesRequest& WithPlacement(const Placement& value) { SetPlacement(value); return *this;}

    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline FleetLaunchTemplateOverridesRequest& WithPlacement(Placement&& value) { SetPlacement(std::move(value)); return *this;}

  private:

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_maxPrice;
    bool m_maxPriceHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    double m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet;

    double m_priority;
    bool m_priorityHasBeenSet;

    Placement m_placement;
    bool m_placementHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
