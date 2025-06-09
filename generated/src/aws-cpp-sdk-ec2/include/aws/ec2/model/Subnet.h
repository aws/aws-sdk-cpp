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
    AWS_EC2_API Subnet() = default;
    AWS_EC2_API Subnet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Subnet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The AZ ID of the subnet.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    Subnet& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the device position for local network interfaces in this subnet.
     * For example, <code>1</code> indicates local network interfaces in this subnet
     * are the secondary network interface (eth1). </p>
     */
    inline int GetEnableLniAtDeviceIndex() const { return m_enableLniAtDeviceIndex; }
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
    inline bool GetMapCustomerOwnedIpOnLaunch() const { return m_mapCustomerOwnedIpOnLaunch; }
    inline bool MapCustomerOwnedIpOnLaunchHasBeenSet() const { return m_mapCustomerOwnedIpOnLaunchHasBeenSet; }
    inline void SetMapCustomerOwnedIpOnLaunch(bool value) { m_mapCustomerOwnedIpOnLaunchHasBeenSet = true; m_mapCustomerOwnedIpOnLaunch = value; }
    inline Subnet& WithMapCustomerOwnedIpOnLaunch(bool value) { SetMapCustomerOwnedIpOnLaunch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-owned IPv4 address pool associated with the subnet.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const { return m_customerOwnedIpv4Pool; }
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    void SetCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::forward<CustomerOwnedIpv4PoolT>(value); }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    Subnet& WithCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { SetCustomerOwnedIpv4Pool(std::forward<CustomerOwnedIpv4PoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the subnet.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    Subnet& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a network interface created in this subnet (including a
     * network interface created by <a>RunInstances</a>) receives an IPv6 address.</p>
     */
    inline bool GetAssignIpv6AddressOnCreation() const { return m_assignIpv6AddressOnCreation; }
    inline bool AssignIpv6AddressOnCreationHasBeenSet() const { return m_assignIpv6AddressOnCreationHasBeenSet; }
    inline void SetAssignIpv6AddressOnCreation(bool value) { m_assignIpv6AddressOnCreationHasBeenSet = true; m_assignIpv6AddressOnCreation = value; }
    inline Subnet& WithAssignIpv6AddressOnCreation(bool value) { SetAssignIpv6AddressOnCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv6 CIDR blocks associated with the subnet.</p>
     */
    inline const Aws::Vector<SubnetIpv6CidrBlockAssociation>& GetIpv6CidrBlockAssociationSet() const { return m_ipv6CidrBlockAssociationSet; }
    inline bool Ipv6CidrBlockAssociationSetHasBeenSet() const { return m_ipv6CidrBlockAssociationSetHasBeenSet; }
    template<typename Ipv6CidrBlockAssociationSetT = Aws::Vector<SubnetIpv6CidrBlockAssociation>>
    void SetIpv6CidrBlockAssociationSet(Ipv6CidrBlockAssociationSetT&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = std::forward<Ipv6CidrBlockAssociationSetT>(value); }
    template<typename Ipv6CidrBlockAssociationSetT = Aws::Vector<SubnetIpv6CidrBlockAssociation>>
    Subnet& WithIpv6CidrBlockAssociationSet(Ipv6CidrBlockAssociationSetT&& value) { SetIpv6CidrBlockAssociationSet(std::forward<Ipv6CidrBlockAssociationSetT>(value)); return *this;}
    template<typename Ipv6CidrBlockAssociationSetT = SubnetIpv6CidrBlockAssociation>
    Subnet& AddIpv6CidrBlockAssociationSet(Ipv6CidrBlockAssociationSetT&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.emplace_back(std::forward<Ipv6CidrBlockAssociationSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the subnet.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Subnet& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Subnet& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the subnet.</p>
     */
    inline const Aws::String& GetSubnetArn() const { return m_subnetArn; }
    inline bool SubnetArnHasBeenSet() const { return m_subnetArnHasBeenSet; }
    template<typename SubnetArnT = Aws::String>
    void SetSubnetArn(SubnetArnT&& value) { m_subnetArnHasBeenSet = true; m_subnetArn = std::forward<SubnetArnT>(value); }
    template<typename SubnetArnT = Aws::String>
    Subnet& WithSubnetArn(SubnetArnT&& value) { SetSubnetArn(std::forward<SubnetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    Subnet& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DNS queries made to the Amazon-provided DNS Resolver in
     * this subnet should return synthetic IPv6 addresses for IPv4-only
     * destinations.</p>
     */
    inline bool GetEnableDns64() const { return m_enableDns64; }
    inline bool EnableDns64HasBeenSet() const { return m_enableDns64HasBeenSet; }
    inline void SetEnableDns64(bool value) { m_enableDns64HasBeenSet = true; m_enableDns64 = value; }
    inline Subnet& WithEnableDns64(bool value) { SetEnableDns64(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is an IPv6 only subnet.</p>
     */
    inline bool GetIpv6Native() const { return m_ipv6Native; }
    inline bool Ipv6NativeHasBeenSet() const { return m_ipv6NativeHasBeenSet; }
    inline void SetIpv6Native(bool value) { m_ipv6NativeHasBeenSet = true; m_ipv6Native = value; }
    inline Subnet& WithIpv6Native(bool value) { SetIpv6Native(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hostnames to assign to instances in the subnet at launch. An
     * instance hostname is based on the IPv4 address or ID of the instance.</p>
     */
    inline const PrivateDnsNameOptionsOnLaunch& GetPrivateDnsNameOptionsOnLaunch() const { return m_privateDnsNameOptionsOnLaunch; }
    inline bool PrivateDnsNameOptionsOnLaunchHasBeenSet() const { return m_privateDnsNameOptionsOnLaunchHasBeenSet; }
    template<typename PrivateDnsNameOptionsOnLaunchT = PrivateDnsNameOptionsOnLaunch>
    void SetPrivateDnsNameOptionsOnLaunch(PrivateDnsNameOptionsOnLaunchT&& value) { m_privateDnsNameOptionsOnLaunchHasBeenSet = true; m_privateDnsNameOptionsOnLaunch = std::forward<PrivateDnsNameOptionsOnLaunchT>(value); }
    template<typename PrivateDnsNameOptionsOnLaunchT = PrivateDnsNameOptionsOnLaunch>
    Subnet& WithPrivateDnsNameOptionsOnLaunch(PrivateDnsNameOptionsOnLaunchT&& value) { SetPrivateDnsNameOptionsOnLaunch(std::forward<PrivateDnsNameOptionsOnLaunchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of VPC Block Public Access (BPA).</p>
     */
    inline const BlockPublicAccessStates& GetBlockPublicAccessStates() const { return m_blockPublicAccessStates; }
    inline bool BlockPublicAccessStatesHasBeenSet() const { return m_blockPublicAccessStatesHasBeenSet; }
    template<typename BlockPublicAccessStatesT = BlockPublicAccessStates>
    void SetBlockPublicAccessStates(BlockPublicAccessStatesT&& value) { m_blockPublicAccessStatesHasBeenSet = true; m_blockPublicAccessStates = std::forward<BlockPublicAccessStatesT>(value); }
    template<typename BlockPublicAccessStatesT = BlockPublicAccessStates>
    Subnet& WithBlockPublicAccessStates(BlockPublicAccessStatesT&& value) { SetBlockPublicAccessStates(std::forward<BlockPublicAccessStatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if this is a subnet used with Amazon Elastic VMware Service (EVS).
     * Possible values are <code>Elastic VMware Service</code> or no value. For more
     * information about Amazon EVS, see <a
     * href="https://docs.aws.amazon.com/evs/latest/APIReference/Welcome.html">
     * <i>Amazon Elastic VMware Service API Reference</i> </a>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Subnet& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    Subnet& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the subnet.</p> <ul> <li> <p> <code>failed</code>: The
     * underlying infrastructure to support the subnet failed to provision as
     * expected.</p> </li> <li> <p> <code>failed-insufficient-capacity</code>: The
     * underlying infrastructure to support the subnet failed to provision due to a
     * shortage of EC2 instance capacity.</p> </li> </ul>
     */
    inline SubnetState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(SubnetState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Subnet& WithState(SubnetState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC the subnet is in.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Subnet& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR block assigned to the subnet.</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    Subnet& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of unused private IPv4 addresses in the subnet. The IPv4 addresses
     * for any stopped instances are considered unavailable.</p>
     */
    inline int GetAvailableIpAddressCount() const { return m_availableIpAddressCount; }
    inline bool AvailableIpAddressCountHasBeenSet() const { return m_availableIpAddressCountHasBeenSet; }
    inline void SetAvailableIpAddressCount(int value) { m_availableIpAddressCountHasBeenSet = true; m_availableIpAddressCount = value; }
    inline Subnet& WithAvailableIpAddressCount(int value) { SetAvailableIpAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the subnet.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    Subnet& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is the default subnet for the Availability Zone.</p>
     */
    inline bool GetDefaultForAz() const { return m_defaultForAz; }
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
    inline bool GetMapPublicIpOnLaunch() const { return m_mapPublicIpOnLaunch; }
    inline bool MapPublicIpOnLaunchHasBeenSet() const { return m_mapPublicIpOnLaunchHasBeenSet; }
    inline void SetMapPublicIpOnLaunch(bool value) { m_mapPublicIpOnLaunchHasBeenSet = true; m_mapPublicIpOnLaunch = value; }
    inline Subnet& WithMapPublicIpOnLaunch(bool value) { SetMapPublicIpOnLaunch(value); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    int m_enableLniAtDeviceIndex{0};
    bool m_enableLniAtDeviceIndexHasBeenSet = false;

    bool m_mapCustomerOwnedIpOnLaunch{false};
    bool m_mapCustomerOwnedIpOnLaunchHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    bool m_assignIpv6AddressOnCreation{false};
    bool m_assignIpv6AddressOnCreationHasBeenSet = false;

    Aws::Vector<SubnetIpv6CidrBlockAssociation> m_ipv6CidrBlockAssociationSet;
    bool m_ipv6CidrBlockAssociationSetHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_subnetArn;
    bool m_subnetArnHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    bool m_enableDns64{false};
    bool m_enableDns64HasBeenSet = false;

    bool m_ipv6Native{false};
    bool m_ipv6NativeHasBeenSet = false;

    PrivateDnsNameOptionsOnLaunch m_privateDnsNameOptionsOnLaunch;
    bool m_privateDnsNameOptionsOnLaunchHasBeenSet = false;

    BlockPublicAccessStates m_blockPublicAccessStates;
    bool m_blockPublicAccessStatesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    SubnetState m_state{SubnetState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    int m_availableIpAddressCount{0};
    bool m_availableIpAddressCountHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    bool m_defaultForAz{false};
    bool m_defaultForAzHasBeenSet = false;

    bool m_mapPublicIpOnLaunch{false};
    bool m_mapPublicIpOnLaunchHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
