/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamPublicAddressAssociationStatus.h>
#include <aws/ec2/model/IpamPublicAddressType.h>
#include <aws/ec2/model/IpamPublicAddressAwsService.h>
#include <aws/ec2/model/IpamPublicAddressTags.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/IpamPublicAddressSecurityGroup.h>
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
   * <p>A public IP Address discovered by IPAM.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamDiscoveredPublicAddress">AWS
   * API Reference</a></p>
   */
  class IpamDiscoveredPublicAddress
  {
  public:
    AWS_EC2_API IpamDiscoveredPublicAddress() = default;
    AWS_EC2_API IpamDiscoveredPublicAddress(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamDiscoveredPublicAddress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const { return m_ipamResourceDiscoveryId; }
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }
    template<typename IpamResourceDiscoveryIdT = Aws::String>
    void SetIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::forward<IpamResourceDiscoveryIdT>(value); }
    template<typename IpamResourceDiscoveryIdT = Aws::String>
    IpamDiscoveredPublicAddress& WithIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) { SetIpamResourceDiscoveryId(std::forward<IpamResourceDiscoveryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region of the resource the IP address is assigned to.</p>
     */
    inline const Aws::String& GetAddressRegion() const { return m_addressRegion; }
    inline bool AddressRegionHasBeenSet() const { return m_addressRegionHasBeenSet; }
    template<typename AddressRegionT = Aws::String>
    void SetAddressRegion(AddressRegionT&& value) { m_addressRegionHasBeenSet = true; m_addressRegion = std::forward<AddressRegionT>(value); }
    template<typename AddressRegionT = Aws::String>
    IpamDiscoveredPublicAddress& WithAddressRegion(AddressRegionT&& value) { SetAddressRegion(std::forward<AddressRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    IpamDiscoveredPublicAddress& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the owner of the resource the IP address is assigned to.</p>
     */
    inline const Aws::String& GetAddressOwnerId() const { return m_addressOwnerId; }
    inline bool AddressOwnerIdHasBeenSet() const { return m_addressOwnerIdHasBeenSet; }
    template<typename AddressOwnerIdT = Aws::String>
    void SetAddressOwnerId(AddressOwnerIdT&& value) { m_addressOwnerIdHasBeenSet = true; m_addressOwnerId = std::forward<AddressOwnerIdT>(value); }
    template<typename AddressOwnerIdT = Aws::String>
    IpamDiscoveredPublicAddress& WithAddressOwnerId(AddressOwnerIdT&& value) { SetAddressOwnerId(std::forward<AddressOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocation ID of the resource the IP address is assigned to.</p>
     */
    inline const Aws::String& GetAddressAllocationId() const { return m_addressAllocationId; }
    inline bool AddressAllocationIdHasBeenSet() const { return m_addressAllocationIdHasBeenSet; }
    template<typename AddressAllocationIdT = Aws::String>
    void SetAddressAllocationId(AddressAllocationIdT&& value) { m_addressAllocationIdHasBeenSet = true; m_addressAllocationId = std::forward<AddressAllocationIdT>(value); }
    template<typename AddressAllocationIdT = Aws::String>
    IpamDiscoveredPublicAddress& WithAddressAllocationId(AddressAllocationIdT&& value) { SetAddressAllocationId(std::forward<AddressAllocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association status.</p>
     */
    inline IpamPublicAddressAssociationStatus GetAssociationStatus() const { return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(IpamPublicAddressAssociationStatus value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline IpamDiscoveredPublicAddress& WithAssociationStatus(IpamPublicAddressAssociationStatus value) { SetAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type.</p>
     */
    inline IpamPublicAddressType GetAddressType() const { return m_addressType; }
    inline bool AddressTypeHasBeenSet() const { return m_addressTypeHasBeenSet; }
    inline void SetAddressType(IpamPublicAddressType value) { m_addressTypeHasBeenSet = true; m_addressType = value; }
    inline IpamDiscoveredPublicAddress& WithAddressType(IpamPublicAddressType value) { SetAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service associated with the IP address.</p>
     */
    inline IpamPublicAddressAwsService GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(IpamPublicAddressAwsService value) { m_serviceHasBeenSet = true; m_service = value; }
    inline IpamDiscoveredPublicAddress& WithService(IpamPublicAddressAwsService value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ARN or ID.</p>
     */
    inline const Aws::String& GetServiceResource() const { return m_serviceResource; }
    inline bool ServiceResourceHasBeenSet() const { return m_serviceResourceHasBeenSet; }
    template<typename ServiceResourceT = Aws::String>
    void SetServiceResource(ServiceResourceT&& value) { m_serviceResourceHasBeenSet = true; m_serviceResource = std::forward<ServiceResourceT>(value); }
    template<typename ServiceResourceT = Aws::String>
    IpamDiscoveredPublicAddress& WithServiceResource(ServiceResourceT&& value) { SetServiceResource(std::forward<ServiceResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC that the resource with the assigned IP address is in.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    IpamDiscoveredPublicAddress& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet that the resource with the assigned IP address is
     * in.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    IpamDiscoveredPublicAddress& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the public IPv4 pool that the resource with the assigned IP address
     * is from.</p>
     */
    inline const Aws::String& GetPublicIpv4PoolId() const { return m_publicIpv4PoolId; }
    inline bool PublicIpv4PoolIdHasBeenSet() const { return m_publicIpv4PoolIdHasBeenSet; }
    template<typename PublicIpv4PoolIdT = Aws::String>
    void SetPublicIpv4PoolId(PublicIpv4PoolIdT&& value) { m_publicIpv4PoolIdHasBeenSet = true; m_publicIpv4PoolId = std::forward<PublicIpv4PoolIdT>(value); }
    template<typename PublicIpv4PoolIdT = Aws::String>
    IpamDiscoveredPublicAddress& WithPublicIpv4PoolId(PublicIpv4PoolIdT&& value) { SetPublicIpv4PoolId(std::forward<PublicIpv4PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface ID of the resource with the assigned IP address.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    IpamDiscoveredPublicAddress& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the network interface that IP address is assigned to.</p>
     */
    inline const Aws::String& GetNetworkInterfaceDescription() const { return m_networkInterfaceDescription; }
    inline bool NetworkInterfaceDescriptionHasBeenSet() const { return m_networkInterfaceDescriptionHasBeenSet; }
    template<typename NetworkInterfaceDescriptionT = Aws::String>
    void SetNetworkInterfaceDescription(NetworkInterfaceDescriptionT&& value) { m_networkInterfaceDescriptionHasBeenSet = true; m_networkInterfaceDescription = std::forward<NetworkInterfaceDescriptionT>(value); }
    template<typename NetworkInterfaceDescriptionT = Aws::String>
    IpamDiscoveredPublicAddress& WithNetworkInterfaceDescription(NetworkInterfaceDescriptionT&& value) { SetNetworkInterfaceDescription(std::forward<NetworkInterfaceDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID of the instance the assigned IP address is assigned to.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    IpamDiscoveredPublicAddress& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with the IP address.</p>
     */
    inline const IpamPublicAddressTags& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = IpamPublicAddressTags>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = IpamPublicAddressTags>
    IpamDiscoveredPublicAddress& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (AZ) or Local Zone (LZ) network border group that the
     * resource that the IP address is assigned to is in. Defaults to an AZ network
     * border group. For more information on available Local Zones, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-byoip.html#byoip-zone-avail">Local
     * Zone availability</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const { return m_networkBorderGroup; }
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
    template<typename NetworkBorderGroupT = Aws::String>
    void SetNetworkBorderGroup(NetworkBorderGroupT&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::forward<NetworkBorderGroupT>(value); }
    template<typename NetworkBorderGroupT = Aws::String>
    IpamDiscoveredPublicAddress& WithNetworkBorderGroup(NetworkBorderGroupT&& value) { SetNetworkBorderGroup(std::forward<NetworkBorderGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Security groups associated with the resource that the IP address is assigned
     * to.</p>
     */
    inline const Aws::Vector<IpamPublicAddressSecurityGroup>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<IpamPublicAddressSecurityGroup>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<IpamPublicAddressSecurityGroup>>
    IpamDiscoveredPublicAddress& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = IpamPublicAddressSecurityGroup>
    IpamDiscoveredPublicAddress& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const { return m_sampleTime; }
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }
    template<typename SampleTimeT = Aws::Utils::DateTime>
    void SetSampleTime(SampleTimeT&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::forward<SampleTimeT>(value); }
    template<typename SampleTimeT = Aws::Utils::DateTime>
    IpamDiscoveredPublicAddress& WithSampleTime(SampleTimeT&& value) { SetSampleTime(std::forward<SampleTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipamResourceDiscoveryId;
    bool m_ipamResourceDiscoveryIdHasBeenSet = false;

    Aws::String m_addressRegion;
    bool m_addressRegionHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_addressOwnerId;
    bool m_addressOwnerIdHasBeenSet = false;

    Aws::String m_addressAllocationId;
    bool m_addressAllocationIdHasBeenSet = false;

    IpamPublicAddressAssociationStatus m_associationStatus{IpamPublicAddressAssociationStatus::NOT_SET};
    bool m_associationStatusHasBeenSet = false;

    IpamPublicAddressType m_addressType{IpamPublicAddressType::NOT_SET};
    bool m_addressTypeHasBeenSet = false;

    IpamPublicAddressAwsService m_service{IpamPublicAddressAwsService::NOT_SET};
    bool m_serviceHasBeenSet = false;

    Aws::String m_serviceResource;
    bool m_serviceResourceHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_publicIpv4PoolId;
    bool m_publicIpv4PoolIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_networkInterfaceDescription;
    bool m_networkInterfaceDescriptionHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    IpamPublicAddressTags m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;

    Aws::Vector<IpamPublicAddressSecurityGroup> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTime{};
    bool m_sampleTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
