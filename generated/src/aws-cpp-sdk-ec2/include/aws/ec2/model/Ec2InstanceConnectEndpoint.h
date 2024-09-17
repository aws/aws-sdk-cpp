/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Ec2InstanceConnectEndpointState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The EC2 Instance Connect Endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ec2InstanceConnectEndpoint">AWS
   * API Reference</a></p>
   */
  class Ec2InstanceConnectEndpoint
  {
  public:
    AWS_EC2_API Ec2InstanceConnectEndpoint();
    AWS_EC2_API Ec2InstanceConnectEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Ec2InstanceConnectEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that created the EC2 Instance
     * Connect Endpoint.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline Ec2InstanceConnectEndpoint& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::String& GetInstanceConnectEndpointId() const{ return m_instanceConnectEndpointId; }
    inline bool InstanceConnectEndpointIdHasBeenSet() const { return m_instanceConnectEndpointIdHasBeenSet; }
    inline void SetInstanceConnectEndpointId(const Aws::String& value) { m_instanceConnectEndpointIdHasBeenSet = true; m_instanceConnectEndpointId = value; }
    inline void SetInstanceConnectEndpointId(Aws::String&& value) { m_instanceConnectEndpointIdHasBeenSet = true; m_instanceConnectEndpointId = std::move(value); }
    inline void SetInstanceConnectEndpointId(const char* value) { m_instanceConnectEndpointIdHasBeenSet = true; m_instanceConnectEndpointId.assign(value); }
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointId(const Aws::String& value) { SetInstanceConnectEndpointId(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointId(Aws::String&& value) { SetInstanceConnectEndpointId(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointId(const char* value) { SetInstanceConnectEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::String& GetInstanceConnectEndpointArn() const{ return m_instanceConnectEndpointArn; }
    inline bool InstanceConnectEndpointArnHasBeenSet() const { return m_instanceConnectEndpointArnHasBeenSet; }
    inline void SetInstanceConnectEndpointArn(const Aws::String& value) { m_instanceConnectEndpointArnHasBeenSet = true; m_instanceConnectEndpointArn = value; }
    inline void SetInstanceConnectEndpointArn(Aws::String&& value) { m_instanceConnectEndpointArnHasBeenSet = true; m_instanceConnectEndpointArn = std::move(value); }
    inline void SetInstanceConnectEndpointArn(const char* value) { m_instanceConnectEndpointArnHasBeenSet = true; m_instanceConnectEndpointArn.assign(value); }
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointArn(const Aws::String& value) { SetInstanceConnectEndpointArn(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointArn(Aws::String&& value) { SetInstanceConnectEndpointArn(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointArn(const char* value) { SetInstanceConnectEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the EC2 Instance Connect Endpoint.</p>
     */
    inline const Ec2InstanceConnectEndpointState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Ec2InstanceConnectEndpointState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Ec2InstanceConnectEndpointState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Ec2InstanceConnectEndpoint& WithState(const Ec2InstanceConnectEndpointState& value) { SetState(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithState(Ec2InstanceConnectEndpointState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message for the current state of the EC2 Instance Connect Endpoint. Can
     * include a failure message.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }
    inline Ec2InstanceConnectEndpoint& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }
    inline Ec2InstanceConnectEndpoint& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& WithDnsName(const char* value) { SetDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetFipsDnsName() const{ return m_fipsDnsName; }
    inline bool FipsDnsNameHasBeenSet() const { return m_fipsDnsNameHasBeenSet; }
    inline void SetFipsDnsName(const Aws::String& value) { m_fipsDnsNameHasBeenSet = true; m_fipsDnsName = value; }
    inline void SetFipsDnsName(Aws::String&& value) { m_fipsDnsNameHasBeenSet = true; m_fipsDnsName = std::move(value); }
    inline void SetFipsDnsName(const char* value) { m_fipsDnsNameHasBeenSet = true; m_fipsDnsName.assign(value); }
    inline Ec2InstanceConnectEndpoint& WithFipsDnsName(const Aws::String& value) { SetFipsDnsName(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithFipsDnsName(Aws::String&& value) { SetFipsDnsName(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& WithFipsDnsName(const char* value) { SetFipsDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the elastic network interface that Amazon EC2 automatically created
     * when creating the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }
    inline Ec2InstanceConnectEndpoint& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    inline Ec2InstanceConnectEndpoint& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }
    inline Ec2InstanceConnectEndpoint& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC in which the EC2 Instance Connect Endpoint was created.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline Ec2InstanceConnectEndpoint& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline Ec2InstanceConnectEndpoint& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the EC2 Instance Connect Endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Ec2InstanceConnectEndpoint& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in which the EC2 Instance Connect Endpoint was
     * created.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline Ec2InstanceConnectEndpoint& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether your client's IP address is preserved as the source. The
     * value is <code>true</code> or <code>false</code>.</p> <ul> <li> <p>If
     * <code>true</code>, your client's IP address is used when you connect to a
     * resource.</p> </li> <li> <p>If <code>false</code>, the elastic network interface
     * IP address is used when you connect to a resource.</p> </li> </ul> <p>Default:
     * <code>true</code> </p>
     */
    inline bool GetPreserveClientIp() const{ return m_preserveClientIp; }
    inline bool PreserveClientIpHasBeenSet() const { return m_preserveClientIpHasBeenSet; }
    inline void SetPreserveClientIp(bool value) { m_preserveClientIpHasBeenSet = true; m_preserveClientIp = value; }
    inline Ec2InstanceConnectEndpoint& WithPreserveClientIp(bool value) { SetPreserveClientIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups associated with the endpoint. If you didn't specify a
     * security group, the default security group for your VPC is associated with the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline Ec2InstanceConnectEndpoint& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline Ec2InstanceConnectEndpoint& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline Ec2InstanceConnectEndpoint& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Ec2InstanceConnectEndpoint& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Ec2InstanceConnectEndpoint& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Ec2InstanceConnectEndpoint& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Ec2InstanceConnectEndpoint& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_instanceConnectEndpointId;
    bool m_instanceConnectEndpointIdHasBeenSet = false;

    Aws::String m_instanceConnectEndpointArn;
    bool m_instanceConnectEndpointArnHasBeenSet = false;

    Ec2InstanceConnectEndpointState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    Aws::String m_fipsDnsName;
    bool m_fipsDnsNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    bool m_preserveClientIp;
    bool m_preserveClientIpHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
