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
    AWS_EC2_API IpamDiscoveredPublicAddress();
    AWS_EC2_API IpamDiscoveredPublicAddress(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamDiscoveredPublicAddress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const{ return m_ipamResourceDiscoveryId; }
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }
    inline void SetIpamResourceDiscoveryId(const Aws::String& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = value; }
    inline void SetIpamResourceDiscoveryId(Aws::String&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::move(value); }
    inline void SetIpamResourceDiscoveryId(const char* value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId.assign(value); }
    inline IpamDiscoveredPublicAddress& WithIpamResourceDiscoveryId(const Aws::String& value) { SetIpamResourceDiscoveryId(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithIpamResourceDiscoveryId(Aws::String&& value) { SetIpamResourceDiscoveryId(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithIpamResourceDiscoveryId(const char* value) { SetIpamResourceDiscoveryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region of the resource the IP address is assigned to.</p>
     */
    inline const Aws::String& GetAddressRegion() const{ return m_addressRegion; }
    inline bool AddressRegionHasBeenSet() const { return m_addressRegionHasBeenSet; }
    inline void SetAddressRegion(const Aws::String& value) { m_addressRegionHasBeenSet = true; m_addressRegion = value; }
    inline void SetAddressRegion(Aws::String&& value) { m_addressRegionHasBeenSet = true; m_addressRegion = std::move(value); }
    inline void SetAddressRegion(const char* value) { m_addressRegionHasBeenSet = true; m_addressRegion.assign(value); }
    inline IpamDiscoveredPublicAddress& WithAddressRegion(const Aws::String& value) { SetAddressRegion(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithAddressRegion(Aws::String&& value) { SetAddressRegion(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithAddressRegion(const char* value) { SetAddressRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline IpamDiscoveredPublicAddress& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the owner of the resource the IP address is assigned to.</p>
     */
    inline const Aws::String& GetAddressOwnerId() const{ return m_addressOwnerId; }
    inline bool AddressOwnerIdHasBeenSet() const { return m_addressOwnerIdHasBeenSet; }
    inline void SetAddressOwnerId(const Aws::String& value) { m_addressOwnerIdHasBeenSet = true; m_addressOwnerId = value; }
    inline void SetAddressOwnerId(Aws::String&& value) { m_addressOwnerIdHasBeenSet = true; m_addressOwnerId = std::move(value); }
    inline void SetAddressOwnerId(const char* value) { m_addressOwnerIdHasBeenSet = true; m_addressOwnerId.assign(value); }
    inline IpamDiscoveredPublicAddress& WithAddressOwnerId(const Aws::String& value) { SetAddressOwnerId(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithAddressOwnerId(Aws::String&& value) { SetAddressOwnerId(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithAddressOwnerId(const char* value) { SetAddressOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocation ID of the resource the IP address is assigned to.</p>
     */
    inline const Aws::String& GetAddressAllocationId() const{ return m_addressAllocationId; }
    inline bool AddressAllocationIdHasBeenSet() const { return m_addressAllocationIdHasBeenSet; }
    inline void SetAddressAllocationId(const Aws::String& value) { m_addressAllocationIdHasBeenSet = true; m_addressAllocationId = value; }
    inline void SetAddressAllocationId(Aws::String&& value) { m_addressAllocationIdHasBeenSet = true; m_addressAllocationId = std::move(value); }
    inline void SetAddressAllocationId(const char* value) { m_addressAllocationIdHasBeenSet = true; m_addressAllocationId.assign(value); }
    inline IpamDiscoveredPublicAddress& WithAddressAllocationId(const Aws::String& value) { SetAddressAllocationId(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithAddressAllocationId(Aws::String&& value) { SetAddressAllocationId(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithAddressAllocationId(const char* value) { SetAddressAllocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association status.</p>
     */
    inline const IpamPublicAddressAssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(const IpamPublicAddressAssociationStatus& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline void SetAssociationStatus(IpamPublicAddressAssociationStatus&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }
    inline IpamDiscoveredPublicAddress& WithAssociationStatus(const IpamPublicAddressAssociationStatus& value) { SetAssociationStatus(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithAssociationStatus(IpamPublicAddressAssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type.</p>
     */
    inline const IpamPublicAddressType& GetAddressType() const{ return m_addressType; }
    inline bool AddressTypeHasBeenSet() const { return m_addressTypeHasBeenSet; }
    inline void SetAddressType(const IpamPublicAddressType& value) { m_addressTypeHasBeenSet = true; m_addressType = value; }
    inline void SetAddressType(IpamPublicAddressType&& value) { m_addressTypeHasBeenSet = true; m_addressType = std::move(value); }
    inline IpamDiscoveredPublicAddress& WithAddressType(const IpamPublicAddressType& value) { SetAddressType(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithAddressType(IpamPublicAddressType&& value) { SetAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service associated with the IP address.</p>
     */
    inline const IpamPublicAddressAwsService& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const IpamPublicAddressAwsService& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(IpamPublicAddressAwsService&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline IpamDiscoveredPublicAddress& WithService(const IpamPublicAddressAwsService& value) { SetService(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithService(IpamPublicAddressAwsService&& value) { SetService(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ARN or ID.</p>
     */
    inline const Aws::String& GetServiceResource() const{ return m_serviceResource; }
    inline bool ServiceResourceHasBeenSet() const { return m_serviceResourceHasBeenSet; }
    inline void SetServiceResource(const Aws::String& value) { m_serviceResourceHasBeenSet = true; m_serviceResource = value; }
    inline void SetServiceResource(Aws::String&& value) { m_serviceResourceHasBeenSet = true; m_serviceResource = std::move(value); }
    inline void SetServiceResource(const char* value) { m_serviceResourceHasBeenSet = true; m_serviceResource.assign(value); }
    inline IpamDiscoveredPublicAddress& WithServiceResource(const Aws::String& value) { SetServiceResource(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithServiceResource(Aws::String&& value) { SetServiceResource(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithServiceResource(const char* value) { SetServiceResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC that the resource with the assigned IP address is in.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline IpamDiscoveredPublicAddress& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet that the resource with the assigned IP address is
     * in.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline IpamDiscoveredPublicAddress& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the public IPv4 pool that the resource with the assigned IP address
     * is from.</p>
     */
    inline const Aws::String& GetPublicIpv4PoolId() const{ return m_publicIpv4PoolId; }
    inline bool PublicIpv4PoolIdHasBeenSet() const { return m_publicIpv4PoolIdHasBeenSet; }
    inline void SetPublicIpv4PoolId(const Aws::String& value) { m_publicIpv4PoolIdHasBeenSet = true; m_publicIpv4PoolId = value; }
    inline void SetPublicIpv4PoolId(Aws::String&& value) { m_publicIpv4PoolIdHasBeenSet = true; m_publicIpv4PoolId = std::move(value); }
    inline void SetPublicIpv4PoolId(const char* value) { m_publicIpv4PoolIdHasBeenSet = true; m_publicIpv4PoolId.assign(value); }
    inline IpamDiscoveredPublicAddress& WithPublicIpv4PoolId(const Aws::String& value) { SetPublicIpv4PoolId(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithPublicIpv4PoolId(Aws::String&& value) { SetPublicIpv4PoolId(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithPublicIpv4PoolId(const char* value) { SetPublicIpv4PoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface ID of the resource with the assigned IP address.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline IpamDiscoveredPublicAddress& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the network interface that IP address is assigned to.</p>
     */
    inline const Aws::String& GetNetworkInterfaceDescription() const{ return m_networkInterfaceDescription; }
    inline bool NetworkInterfaceDescriptionHasBeenSet() const { return m_networkInterfaceDescriptionHasBeenSet; }
    inline void SetNetworkInterfaceDescription(const Aws::String& value) { m_networkInterfaceDescriptionHasBeenSet = true; m_networkInterfaceDescription = value; }
    inline void SetNetworkInterfaceDescription(Aws::String&& value) { m_networkInterfaceDescriptionHasBeenSet = true; m_networkInterfaceDescription = std::move(value); }
    inline void SetNetworkInterfaceDescription(const char* value) { m_networkInterfaceDescriptionHasBeenSet = true; m_networkInterfaceDescription.assign(value); }
    inline IpamDiscoveredPublicAddress& WithNetworkInterfaceDescription(const Aws::String& value) { SetNetworkInterfaceDescription(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithNetworkInterfaceDescription(Aws::String&& value) { SetNetworkInterfaceDescription(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithNetworkInterfaceDescription(const char* value) { SetNetworkInterfaceDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID of the instance the assigned IP address is assigned to.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline IpamDiscoveredPublicAddress& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with the IP address.</p>
     */
    inline const IpamPublicAddressTags& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const IpamPublicAddressTags& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(IpamPublicAddressTags&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline IpamDiscoveredPublicAddress& WithTags(const IpamPublicAddressTags& value) { SetTags(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithTags(IpamPublicAddressTags&& value) { SetTags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (AZ) or Local Zone (LZ) network border group that the
     * resource that the IP address is assigned to is in. Defaults to an AZ network
     * border group. For more information on available Local Zones, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-byoip.html#byoip-zone-avail">Local
     * Zone availability</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }
    inline IpamDiscoveredPublicAddress& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Security groups associated with the resource that the IP address is assigned
     * to.</p>
     */
    inline const Aws::Vector<IpamPublicAddressSecurityGroup>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<IpamPublicAddressSecurityGroup>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<IpamPublicAddressSecurityGroup>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline IpamDiscoveredPublicAddress& WithSecurityGroups(const Aws::Vector<IpamPublicAddressSecurityGroup>& value) { SetSecurityGroups(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithSecurityGroups(Aws::Vector<IpamPublicAddressSecurityGroup>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline IpamDiscoveredPublicAddress& AddSecurityGroups(const IpamPublicAddressSecurityGroup& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline IpamDiscoveredPublicAddress& AddSecurityGroups(IpamPublicAddressSecurityGroup&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const{ return m_sampleTime; }
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }
    inline void SetSampleTime(const Aws::Utils::DateTime& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = value; }
    inline void SetSampleTime(Aws::Utils::DateTime&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::move(value); }
    inline IpamDiscoveredPublicAddress& WithSampleTime(const Aws::Utils::DateTime& value) { SetSampleTime(value); return *this;}
    inline IpamDiscoveredPublicAddress& WithSampleTime(Aws::Utils::DateTime&& value) { SetSampleTime(std::move(value)); return *this;}
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

    IpamPublicAddressAssociationStatus m_associationStatus;
    bool m_associationStatusHasBeenSet = false;

    IpamPublicAddressType m_addressType;
    bool m_addressTypeHasBeenSet = false;

    IpamPublicAddressAwsService m_service;
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

    Aws::Utils::DateTime m_sampleTime;
    bool m_sampleTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
