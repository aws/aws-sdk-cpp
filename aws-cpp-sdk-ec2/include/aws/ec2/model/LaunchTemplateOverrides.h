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
    inline void SetWeightedCapacity(double value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }

    /**
     * <p>The number of units provided by the specified instance type.</p>
     */
    inline LaunchTemplateOverrides& WithWeightedCapacity(double value) { SetWeightedCapacity(value); return *this;}

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
