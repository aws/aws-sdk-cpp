﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SubnetState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>

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
   * <p>Describes a subnet.</p>
   */
  class AWS_EC2_API Subnet
  {
  public:
    Subnet();
    Subnet(const Aws::Utils::Xml::XmlNode& xmlNode);
    Subnet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline Subnet& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline Subnet& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline Subnet& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>The current state of the subnet.</p>
     */
    inline const SubnetState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the subnet.</p>
     */
    inline void SetState(const SubnetState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the subnet.</p>
     */
    inline void SetState(SubnetState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the subnet.</p>
     */
    inline Subnet& WithState(const SubnetState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the subnet.</p>
     */
    inline Subnet& WithState(SubnetState&& value) { SetState(value); return *this;}

    /**
     * <p>The ID of the VPC the subnet is in.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC the subnet is in.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC the subnet is in.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC the subnet is in.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC the subnet is in.</p>
     */
    inline Subnet& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC the subnet is in.</p>
     */
    inline Subnet& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC the subnet is in.</p>
     */
    inline Subnet& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The CIDR block assigned to the subnet.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The CIDR block assigned to the subnet.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The CIDR block assigned to the subnet.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The CIDR block assigned to the subnet.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The CIDR block assigned to the subnet.</p>
     */
    inline Subnet& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The CIDR block assigned to the subnet.</p>
     */
    inline Subnet& WithCidrBlock(Aws::String&& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The CIDR block assigned to the subnet.</p>
     */
    inline Subnet& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The number of unused IP addresses in the subnet. Note that the IP addresses
     * for any stopped instances are considered unavailable.</p>
     */
    inline int GetAvailableIpAddressCount() const{ return m_availableIpAddressCount; }

    /**
     * <p>The number of unused IP addresses in the subnet. Note that the IP addresses
     * for any stopped instances are considered unavailable.</p>
     */
    inline void SetAvailableIpAddressCount(int value) { m_availableIpAddressCountHasBeenSet = true; m_availableIpAddressCount = value; }

    /**
     * <p>The number of unused IP addresses in the subnet. Note that the IP addresses
     * for any stopped instances are considered unavailable.</p>
     */
    inline Subnet& WithAvailableIpAddressCount(int value) { SetAvailableIpAddressCount(value); return *this;}

    /**
     * <p>The Availability Zone of the subnet.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone of the subnet.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the subnet.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the subnet.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the subnet.</p>
     */
    inline Subnet& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the subnet.</p>
     */
    inline Subnet& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the subnet.</p>
     */
    inline Subnet& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>Indicates whether this is the default subnet for the Availability Zone.</p>
     */
    inline bool GetDefaultForAz() const{ return m_defaultForAz; }

    /**
     * <p>Indicates whether this is the default subnet for the Availability Zone.</p>
     */
    inline void SetDefaultForAz(bool value) { m_defaultForAzHasBeenSet = true; m_defaultForAz = value; }

    /**
     * <p>Indicates whether this is the default subnet for the Availability Zone.</p>
     */
    inline Subnet& WithDefaultForAz(bool value) { SetDefaultForAz(value); return *this;}

    /**
     * <p>Indicates whether instances launched in this subnet receive a public IP
     * address.</p>
     */
    inline bool GetMapPublicIpOnLaunch() const{ return m_mapPublicIpOnLaunch; }

    /**
     * <p>Indicates whether instances launched in this subnet receive a public IP
     * address.</p>
     */
    inline void SetMapPublicIpOnLaunch(bool value) { m_mapPublicIpOnLaunchHasBeenSet = true; m_mapPublicIpOnLaunch = value; }

    /**
     * <p>Indicates whether instances launched in this subnet receive a public IP
     * address.</p>
     */
    inline Subnet& WithMapPublicIpOnLaunch(bool value) { SetMapPublicIpOnLaunch(value); return *this;}

    /**
     * <p>Any tags assigned to the subnet.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the subnet.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the subnet.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the subnet.</p>
     */
    inline Subnet& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the subnet.</p>
     */
    inline Subnet& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the subnet.</p>
     */
    inline Subnet& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the subnet.</p>
     */
    inline Subnet& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
    SubnetState m_state;
    bool m_stateHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet;
    int m_availableIpAddressCount;
    bool m_availableIpAddressCountHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    bool m_defaultForAz;
    bool m_defaultForAzHasBeenSet;
    bool m_mapPublicIpOnLaunch;
    bool m_mapPublicIpOnLaunchHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
