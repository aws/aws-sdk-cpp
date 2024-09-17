/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PlacementResponse.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetLaunchTemplateOverrides">AWS
   * API Reference</a></p>
   */
  class FleetLaunchTemplateOverrides
  {
  public:
    AWS_EC2_API FleetLaunchTemplateOverrides();
    AWS_EC2_API FleetLaunchTemplateOverrides(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FleetLaunchTemplateOverrides& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance type.</p> <p> <code>mac1.metal</code> is not supported as a
     * launch template override.</p>  <p>If you specify
     * <code>InstanceType</code>, you can't specify
     * <code>InstanceRequirements</code>.</p> 
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline FleetLaunchTemplateOverrides& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline FleetLaunchTemplateOverrides& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price. </p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline const Aws::String& GetMaxPrice() const{ return m_maxPrice; }
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }
    inline void SetMaxPrice(const Aws::String& value) { m_maxPriceHasBeenSet = true; m_maxPrice = value; }
    inline void SetMaxPrice(Aws::String&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::move(value); }
    inline void SetMaxPrice(const char* value) { m_maxPriceHasBeenSet = true; m_maxPrice.assign(value); }
    inline FleetLaunchTemplateOverrides& WithMaxPrice(const Aws::String& value) { SetMaxPrice(value); return *this;}
    inline FleetLaunchTemplateOverrides& WithMaxPrice(Aws::String&& value) { SetMaxPrice(std::move(value)); return *this;}
    inline FleetLaunchTemplateOverrides& WithMaxPrice(const char* value) { SetMaxPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline FleetLaunchTemplateOverrides& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline FleetLaunchTemplateOverrides& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline FleetLaunchTemplateOverrides& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which to launch the instances.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline FleetLaunchTemplateOverrides& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline FleetLaunchTemplateOverrides& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline FleetLaunchTemplateOverrides& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of units provided by the specified instance type. These are the
     * same units that you chose to set the target capacity in terms of instances, or a
     * performance characteristic such as vCPUs, memory, or I/O.</p> <p>If the target
     * capacity divided by this value is not a whole number, Amazon EC2 rounds the
     * number of instances to the next whole number. If this value is not specified,
     * the default is 1.</p>  <p>When specifying weights, the price used in the
     * <code>lowest-price</code> and <code>price-capacity-optimized</code> allocation
     * strategies is per <i>unit</i> hour (where the instance price is divided by the
     * specified weight). However, if all the specified weights are above the requested
     * <code>TargetCapacity</code>, resulting in only 1 instance being launched, the
     * price used is per <i>instance</i> hour.</p> 
     */
    inline double GetWeightedCapacity() const{ return m_weightedCapacity; }
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }
    inline void SetWeightedCapacity(double value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }
    inline FleetLaunchTemplateOverrides& WithWeightedCapacity(double value) { SetWeightedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority for the launch template override. The highest priority is
     * launched first.</p> <p>If the On-Demand <code>AllocationStrategy</code> is set
     * to <code>prioritized</code>, EC2 Fleet uses priority to determine which launch
     * template override to use first in fulfilling On-Demand capacity.</p> <p>If the
     * Spot <code>AllocationStrategy</code> is set to
     * <code>capacity-optimized-prioritized</code>, EC2 Fleet uses priority on a
     * best-effort basis to determine which launch template override to use in
     * fulfilling Spot capacity, but optimizes for capacity first.</p> <p>Valid values
     * are whole numbers starting at <code>0</code>. The lower the number, the higher
     * the priority. If no number is set, the override has the lowest priority. You can
     * set the same priority for different launch template overrides.</p>
     */
    inline double GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(double value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline FleetLaunchTemplateOverrides& WithPriority(double value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline const PlacementResponse& GetPlacement() const{ return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(const PlacementResponse& value) { m_placementHasBeenSet = true; m_placement = value; }
    inline void SetPlacement(PlacementResponse&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }
    inline FleetLaunchTemplateOverrides& WithPlacement(const PlacementResponse& value) { SetPlacement(value); return *this;}
    inline FleetLaunchTemplateOverrides& WithPlacement(PlacementResponse&& value) { SetPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p>  <p>If
     * you specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p> 
     */
    inline const InstanceRequirements& GetInstanceRequirements() const{ return m_instanceRequirements; }
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
    inline void SetInstanceRequirements(const InstanceRequirements& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = value; }
    inline void SetInstanceRequirements(InstanceRequirements&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::move(value); }
    inline FleetLaunchTemplateOverrides& WithInstanceRequirements(const InstanceRequirements& value) { SetInstanceRequirements(value); return *this;}
    inline FleetLaunchTemplateOverrides& WithInstanceRequirements(InstanceRequirements&& value) { SetInstanceRequirements(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI in the format <code>ami-17characters00000</code>.</p>
     * <p>Alternatively, you can specify a Systems Manager parameter, using one of the
     * following formats. The Systems Manager parameter will resolve to an AMI ID on
     * launch.</p> <p>To reference a public parameter:</p> <ul> <li> <p>
     * <code>resolve:ssm:<i>public-parameter</i> </code> </p> </li> </ul> <p>To
     * reference a parameter stored in the same account:</p> <ul> <li> <p>
     * <code>resolve:ssm:<i>parameter-name</i> </code> </p> </li> <li> <p>
     * <code>resolve:ssm:<i>parameter-name:version-number</i> </code> </p> </li> <li>
     * <p> <code>resolve:ssm:<i>parameter-name:label</i> </code> </p> </li> </ul> <p>To
     * reference a parameter shared from another Amazon Web Services account:</p> <ul>
     * <li> <p> <code>resolve:ssm:<i>parameter-ARN</i> </code> </p> </li> <li> <p>
     * <code>resolve:ssm:<i>parameter-ARN:version-number</i> </code> </p> </li> <li>
     * <p> <code>resolve:ssm:<i>parameter-ARN:label</i> </code> </p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/create-launch-template.html#use-an-ssm-parameter-instead-of-an-ami-id">Use
     * a Systems Manager parameter instead of an AMI ID</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>  <p>This parameter is only available for fleets of type
     * <code>instant</code>. For fleets of type <code>maintain</code> and
     * <code>request</code>, you must specify the AMI ID in the launch template.</p>
     * 
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline FleetLaunchTemplateOverrides& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline FleetLaunchTemplateOverrides& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline FleetLaunchTemplateOverrides& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}
  private:

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_maxPrice;
    bool m_maxPriceHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    double m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet = false;

    double m_priority;
    bool m_priorityHasBeenSet = false;

    PlacementResponse m_placement;
    bool m_placementHasBeenSet = false;

    InstanceRequirements m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
