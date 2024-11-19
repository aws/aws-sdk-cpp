/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PrivateDnsNameOptionsOnLaunch.h>
#include <aws/ec2/model/BlockPublicAccessStates.h>
#include <aws/ec2/model/SubnetState.h>
#include <aws/ec2/model/SubnetIpv6CidrBlockAssociation.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a subnet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Subnet">AWS API
   * Reference</a></p>
   */
  class Subnet
  {
  public:
    AWS_EC2_API Subnet();
    AWS_EC2_API Subnet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Subnet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The AZ ID of the subnet.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline Subnet& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline Subnet& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline Subnet& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the device position for local network interfaces in this subnet.
     * For example, <code>1</code> indicates local network interfaces in this subnet
     * are the secondary network interface (eth1). </p>
     */
    inline int GetEnableLniAtDeviceIndex() const{ return m_enableLniAtDeviceIndex; }
    inline bool EnableLniAtDeviceIndexHasBeenSet() const { return m_enableLniAtDeviceIndexHasBeenSet; }
    inline void SetEnableLniAtDeviceIndex(int value) { m_enableLniAtDeviceIndexHasBeenSet = true; m_enableLniAtDeviceIndex = value; }
    inline Subnet& WithEnableLniAtDeviceIndex(int value) { SetEnableLniAtDeviceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a network interface created in this subnet (including a
     * network interface created by <a>RunInstances</a>) receives a customer-owned IPv4
     * address.</p>
     */
    inline bool GetMapCustomerOwnedIpOnLaunch() const{ return m_mapCustomerOwnedIpOnLaunch; }
    inline bool MapCustomerOwnedIpOnLaunchHasBeenSet() const { return m_mapCustomerOwnedIpOnLaunchHasBeenSet; }
    inline void SetMapCustomerOwnedIpOnLaunch(bool value) { m_mapCustomerOwnedIpOnLaunchHasBeenSet = true; m_mapCustomerOwnedIpOnLaunch = value; }
    inline Subnet& WithMapCustomerOwnedIpOnLaunch(bool value) { SetMapCustomerOwnedIpOnLaunch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-owned IPv4 address pool associated with the subnet.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const{ return m_customerOwnedIpv4Pool; }
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }
    inline void SetCustomerOwnedIpv4Pool(const Aws::String& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = value; }
    inline void SetCustomerOwnedIpv4Pool(Aws::String&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::move(value); }
    inline void SetCustomerOwnedIpv4Pool(const char* value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool.assign(value); }
    inline Subnet& WithCustomerOwnedIpv4Pool(const Aws::String& value) { SetCustomerOwnedIpv4Pool(value); return *this;}
    inline Subnet& WithCustomerOwnedIpv4Pool(Aws::String&& value) { SetCustomerOwnedIpv4Pool(std::move(value)); return *this;}
    inline Subnet& WithCustomerOwnedIpv4Pool(const char* value) { SetCustomerOwnedIpv4Pool(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the subnet.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline Subnet& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline Subnet& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline Subnet& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a network interface created in this subnet (including a
     * network interface created by <a>RunInstances</a>) receives an IPv6 address.</p>
     */
    inline bool GetAssignIpv6AddressOnCreation() const{ return m_assignIpv6AddressOnCreation; }
    inline bool AssignIpv6AddressOnCreationHasBeenSet() const { return m_assignIpv6AddressOnCreationHasBeenSet; }
    inline void SetAssignIpv6AddressOnCreation(bool value) { m_assignIpv6AddressOnCreationHasBeenSet = true; m_assignIpv6AddressOnCreation = value; }
    inline Subnet& WithAssignIpv6AddressOnCreation(bool value) { SetAssignIpv6AddressOnCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv6 CIDR blocks associated with the subnet.</p>
     */
    inline const Aws::Vector<SubnetIpv6CidrBlockAssociation>& GetIpv6CidrBlockAssociationSet() const{ return m_ipv6CidrBlockAssociationSet; }
    inline bool Ipv6CidrBlockAssociationSetHasBeenSet() const { return m_ipv6CidrBlockAssociationSetHasBeenSet; }
    inline void SetIpv6CidrBlockAssociationSet(const Aws::Vector<SubnetIpv6CidrBlockAssociation>& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = value; }
    inline void SetIpv6CidrBlockAssociationSet(Aws::Vector<SubnetIpv6CidrBlockAssociation>&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = std::move(value); }
    inline Subnet& WithIpv6CidrBlockAssociationSet(const Aws::Vector<SubnetIpv6CidrBlockAssociation>& value) { SetIpv6CidrBlockAssociationSet(value); return *this;}
    inline Subnet& WithIpv6CidrBlockAssociationSet(Aws::Vector<SubnetIpv6CidrBlockAssociation>&& value) { SetIpv6CidrBlockAssociationSet(std::move(value)); return *this;}
    inline Subnet& AddIpv6CidrBlockAssociationSet(const SubnetIpv6CidrBlockAssociation& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.push_back(value); return *this; }
    inline Subnet& AddIpv6CidrBlockAssociationSet(SubnetIpv6CidrBlockAssociation&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the subnet.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Subnet& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Subnet& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Subnet& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Subnet& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the subnet.</p>
     */
    inline const Aws::String& GetSubnetArn() const{ return m_subnetArn; }
    inline bool SubnetArnHasBeenSet() const { return m_subnetArnHasBeenSet; }
    inline void SetSubnetArn(const Aws::String& value) { m_subnetArnHasBeenSet = true; m_subnetArn = value; }
    inline void SetSubnetArn(Aws::String&& value) { m_subnetArnHasBeenSet = true; m_subnetArn = std::move(value); }
    inline void SetSubnetArn(const char* value) { m_subnetArnHasBeenSet = true; m_subnetArn.assign(value); }
    inline Subnet& WithSubnetArn(const Aws::String& value) { SetSubnetArn(value); return *this;}
    inline Subnet& WithSubnetArn(Aws::String&& value) { SetSubnetArn(std::move(value)); return *this;}
    inline Subnet& WithSubnetArn(const char* value) { SetSubnetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline Subnet& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline Subnet& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline Subnet& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DNS queries made to the Amazon-provided DNS Resolver in
     * this subnet should return synthetic IPv6 addresses for IPv4-only
     * destinations.</p>
     */
    inline bool GetEnableDns64() const{ return m_enableDns64; }
    inline bool EnableDns64HasBeenSet() const { return m_enableDns64HasBeenSet; }
    inline void SetEnableDns64(bool value) { m_enableDns64HasBeenSet = true; m_enableDns64 = value; }
    inline Subnet& WithEnableDns64(bool value) { SetEnableDns64(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is an IPv6 only subnet.</p>
     */
    inline bool GetIpv6Native() const{ return m_ipv6Native; }
    inline bool Ipv6NativeHasBeenSet() const { return m_ipv6NativeHasBeenSet; }
    inline void SetIpv6Native(bool value) { m_ipv6NativeHasBeenSet = true; m_ipv6Native = value; }
    inline Subnet& WithIpv6Native(bool value) { SetIpv6Native(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hostnames to assign to instances in the subnet at launch. An
     * instance hostname is based on the IPv4 address or ID of the instance.</p>
     */
    inline const PrivateDnsNameOptionsOnLaunch& GetPrivateDnsNameOptionsOnLaunch() const{ return m_privateDnsNameOptionsOnLaunch; }
    inline bool PrivateDnsNameOptionsOnLaunchHasBeenSet() const { return m_privateDnsNameOptionsOnLaunchHasBeenSet; }
    inline void SetPrivateDnsNameOptionsOnLaunch(const PrivateDnsNameOptionsOnLaunch& value) { m_privateDnsNameOptionsOnLaunchHasBeenSet = true; m_privateDnsNameOptionsOnLaunch = value; }
    inline void SetPrivateDnsNameOptionsOnLaunch(PrivateDnsNameOptionsOnLaunch&& value) { m_privateDnsNameOptionsOnLaunchHasBeenSet = true; m_privateDnsNameOptionsOnLaunch = std::move(value); }
    inline Subnet& WithPrivateDnsNameOptionsOnLaunch(const PrivateDnsNameOptionsOnLaunch& value) { SetPrivateDnsNameOptionsOnLaunch(value); return *this;}
    inline Subnet& WithPrivateDnsNameOptionsOnLaunch(PrivateDnsNameOptionsOnLaunch&& value) { SetPrivateDnsNameOptionsOnLaunch(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of VPC Block Public Access (BPA).</p>
     */
    inline const BlockPublicAccessStates& GetBlockPublicAccessStates() const{ return m_blockPublicAccessStates; }
    inline bool BlockPublicAccessStatesHasBeenSet() const { return m_blockPublicAccessStatesHasBeenSet; }
    inline void SetBlockPublicAccessStates(const BlockPublicAccessStates& value) { m_blockPublicAccessStatesHasBeenSet = true; m_blockPublicAccessStates = value; }
    inline void SetBlockPublicAccessStates(BlockPublicAccessStates&& value) { m_blockPublicAccessStatesHasBeenSet = true; m_blockPublicAccessStates = std::move(value); }
    inline Subnet& WithBlockPublicAccessStates(const BlockPublicAccessStates& value) { SetBlockPublicAccessStates(value); return *this;}
    inline Subnet& WithBlockPublicAccessStates(BlockPublicAccessStates&& value) { SetBlockPublicAccessStates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline Subnet& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline Subnet& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline Subnet& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the subnet.</p>
     */
    inline const SubnetState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const SubnetState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(SubnetState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Subnet& WithState(const SubnetState& value) { SetState(value); return *this;}
    inline Subnet& WithState(SubnetState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC the subnet is in.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline Subnet& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline Subnet& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline Subnet& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR block assigned to the subnet.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }
    inline Subnet& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}
    inline Subnet& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}
    inline Subnet& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of unused private IPv4 addresses in the subnet. The IPv4 addresses
     * for any stopped instances are considered unavailable.</p>
     */
    inline int GetAvailableIpAddressCount() const{ return m_availableIpAddressCount; }
    inline bool AvailableIpAddressCountHasBeenSet() const { return m_availableIpAddressCountHasBeenSet; }
    inline void SetAvailableIpAddressCount(int value) { m_availableIpAddressCountHasBeenSet = true; m_availableIpAddressCount = value; }
    inline Subnet& WithAvailableIpAddressCount(int value) { SetAvailableIpAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the subnet.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline Subnet& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline Subnet& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline Subnet& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is the default subnet for the Availability Zone.</p>
     */
    inline bool GetDefaultForAz() const{ return m_defaultForAz; }
    inline bool DefaultForAzHasBeenSet() const { return m_defaultForAzHasBeenSet; }
    inline void SetDefaultForAz(bool value) { m_defaultForAzHasBeenSet = true; m_defaultForAz = value; }
    inline Subnet& WithDefaultForAz(bool value) { SetDefaultForAz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether instances launched in this subnet receive a public IPv4
     * address.</p> <p>Amazon Web Services charges for all public IPv4 addresses,
     * including public IPv4 addresses associated with running instances and Elastic IP
     * addresses. For more information, see the <i>Public IPv4 Address</i> tab on the
     * <a href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing page</a>.</p>
     */
    inline bool GetMapPublicIpOnLaunch() const{ return m_mapPublicIpOnLaunch; }
    inline bool MapPublicIpOnLaunchHasBeenSet() const { return m_mapPublicIpOnLaunchHasBeenSet; }
    inline void SetMapPublicIpOnLaunch(bool value) { m_mapPublicIpOnLaunchHasBeenSet = true; m_mapPublicIpOnLaunch = value; }
    inline Subnet& WithMapPublicIpOnLaunch(bool value) { SetMapPublicIpOnLaunch(value); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    int m_enableLniAtDeviceIndex;
    bool m_enableLniAtDeviceIndexHasBeenSet = false;

    bool m_mapCustomerOwnedIpOnLaunch;
    bool m_mapCustomerOwnedIpOnLaunchHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    bool m_assignIpv6AddressOnCreation;
    bool m_assignIpv6AddressOnCreationHasBeenSet = false;

    Aws::Vector<SubnetIpv6CidrBlockAssociation> m_ipv6CidrBlockAssociationSet;
    bool m_ipv6CidrBlockAssociationSetHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_subnetArn;
    bool m_subnetArnHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    bool m_enableDns64;
    bool m_enableDns64HasBeenSet = false;

    bool m_ipv6Native;
    bool m_ipv6NativeHasBeenSet = false;

    PrivateDnsNameOptionsOnLaunch m_privateDnsNameOptionsOnLaunch;
    bool m_privateDnsNameOptionsOnLaunchHasBeenSet = false;

    BlockPublicAccessStates m_blockPublicAccessStates;
    bool m_blockPublicAccessStatesHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    SubnetState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    int m_availableIpAddressCount;
    bool m_availableIpAddressCountHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    bool m_defaultForAz;
    bool m_defaultForAzHasBeenSet = false;

    bool m_mapPublicIpOnLaunch;
    bool m_mapPublicIpOnLaunchHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
