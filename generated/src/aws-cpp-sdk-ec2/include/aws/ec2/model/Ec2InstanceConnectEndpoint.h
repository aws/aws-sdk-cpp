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


    /**
     * <p>The ID of the Amazon Web Services account that created the EC2 Instance
     * Connect Endpoint.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that created the EC2 Instance
     * Connect Endpoint.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that created the EC2 Instance
     * Connect Endpoint.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that created the EC2 Instance
     * Connect Endpoint.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that created the EC2 Instance
     * Connect Endpoint.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that created the EC2 Instance
     * Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that created the EC2 Instance
     * Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that created the EC2 Instance
     * Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The ID of the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::String& GetInstanceConnectEndpointId() const{ return m_instanceConnectEndpointId; }

    /**
     * <p>The ID of the EC2 Instance Connect Endpoint.</p>
     */
    inline bool InstanceConnectEndpointIdHasBeenSet() const { return m_instanceConnectEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetInstanceConnectEndpointId(const Aws::String& value) { m_instanceConnectEndpointIdHasBeenSet = true; m_instanceConnectEndpointId = value; }

    /**
     * <p>The ID of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetInstanceConnectEndpointId(Aws::String&& value) { m_instanceConnectEndpointIdHasBeenSet = true; m_instanceConnectEndpointId = std::move(value); }

    /**
     * <p>The ID of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetInstanceConnectEndpointId(const char* value) { m_instanceConnectEndpointIdHasBeenSet = true; m_instanceConnectEndpointId.assign(value); }

    /**
     * <p>The ID of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointId(const Aws::String& value) { SetInstanceConnectEndpointId(value); return *this;}

    /**
     * <p>The ID of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointId(Aws::String&& value) { SetInstanceConnectEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointId(const char* value) { SetInstanceConnectEndpointId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::String& GetInstanceConnectEndpointArn() const{ return m_instanceConnectEndpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EC2 Instance Connect Endpoint.</p>
     */
    inline bool InstanceConnectEndpointArnHasBeenSet() const { return m_instanceConnectEndpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetInstanceConnectEndpointArn(const Aws::String& value) { m_instanceConnectEndpointArnHasBeenSet = true; m_instanceConnectEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetInstanceConnectEndpointArn(Aws::String&& value) { m_instanceConnectEndpointArnHasBeenSet = true; m_instanceConnectEndpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetInstanceConnectEndpointArn(const char* value) { m_instanceConnectEndpointArnHasBeenSet = true; m_instanceConnectEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointArn(const Aws::String& value) { SetInstanceConnectEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointArn(Aws::String&& value) { SetInstanceConnectEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointArn(const char* value) { SetInstanceConnectEndpointArn(value); return *this;}


    /**
     * <p>The current state of the EC2 Instance Connect Endpoint.</p>
     */
    inline const Ec2InstanceConnectEndpointState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the EC2 Instance Connect Endpoint.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetState(const Ec2InstanceConnectEndpointState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetState(Ec2InstanceConnectEndpointState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithState(const Ec2InstanceConnectEndpointState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithState(Ec2InstanceConnectEndpointState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The message for the current state of the EC2 Instance Connect Endpoint. Can
     * include a failure message.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }

    /**
     * <p>The message for the current state of the EC2 Instance Connect Endpoint. Can
     * include a failure message.</p>
     */
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }

    /**
     * <p>The message for the current state of the EC2 Instance Connect Endpoint. Can
     * include a failure message.</p>
     */
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }

    /**
     * <p>The message for the current state of the EC2 Instance Connect Endpoint. Can
     * include a failure message.</p>
     */
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }

    /**
     * <p>The message for the current state of the EC2 Instance Connect Endpoint. Can
     * include a failure message.</p>
     */
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }

    /**
     * <p>The message for the current state of the EC2 Instance Connect Endpoint. Can
     * include a failure message.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}

    /**
     * <p>The message for the current state of the EC2 Instance Connect Endpoint. Can
     * include a failure message.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}

    /**
     * <p>The message for the current state of the EC2 Instance Connect Endpoint. Can
     * include a failure message.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}


    /**
     * <p>The DNS name of the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>The DNS name of the EC2 Instance Connect Endpoint.</p>
     */
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }

    /**
     * <p>The DNS name of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }

    /**
     * <p>The DNS name of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }

    /**
     * <p>The DNS name of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }

    /**
     * <p>The DNS name of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>The DNS name of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS name of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithDnsName(const char* value) { SetDnsName(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetFipsDnsName() const{ return m_fipsDnsName; }

    /**
     * <p/>
     */
    inline bool FipsDnsNameHasBeenSet() const { return m_fipsDnsNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetFipsDnsName(const Aws::String& value) { m_fipsDnsNameHasBeenSet = true; m_fipsDnsName = value; }

    /**
     * <p/>
     */
    inline void SetFipsDnsName(Aws::String&& value) { m_fipsDnsNameHasBeenSet = true; m_fipsDnsName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetFipsDnsName(const char* value) { m_fipsDnsNameHasBeenSet = true; m_fipsDnsName.assign(value); }

    /**
     * <p/>
     */
    inline Ec2InstanceConnectEndpoint& WithFipsDnsName(const Aws::String& value) { SetFipsDnsName(value); return *this;}

    /**
     * <p/>
     */
    inline Ec2InstanceConnectEndpoint& WithFipsDnsName(Aws::String&& value) { SetFipsDnsName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Ec2InstanceConnectEndpoint& WithFipsDnsName(const char* value) { SetFipsDnsName(value); return *this;}


    /**
     * <p>The ID of the elastic network interface that Amazon EC2 automatically created
     * when creating the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }

    /**
     * <p>The ID of the elastic network interface that Amazon EC2 automatically created
     * when creating the EC2 Instance Connect Endpoint.</p>
     */
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }

    /**
     * <p>The ID of the elastic network interface that Amazon EC2 automatically created
     * when creating the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }

    /**
     * <p>The ID of the elastic network interface that Amazon EC2 automatically created
     * when creating the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }

    /**
     * <p>The ID of the elastic network interface that Amazon EC2 automatically created
     * when creating the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}

    /**
     * <p>The ID of the elastic network interface that Amazon EC2 automatically created
     * when creating the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the elastic network interface that Amazon EC2 automatically created
     * when creating the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }

    /**
     * <p>The ID of the elastic network interface that Amazon EC2 automatically created
     * when creating the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the elastic network interface that Amazon EC2 automatically created
     * when creating the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }


    /**
     * <p>The ID of the VPC in which the EC2 Instance Connect Endpoint was created.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC in which the EC2 Instance Connect Endpoint was created.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC in which the EC2 Instance Connect Endpoint was created.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC in which the EC2 Instance Connect Endpoint was created.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC in which the EC2 Instance Connect Endpoint was created.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC in which the EC2 Instance Connect Endpoint was created.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC in which the EC2 Instance Connect Endpoint was created.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC in which the EC2 Instance Connect Endpoint was created.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The Availability Zone of the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone of the EC2 Instance Connect Endpoint.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone of the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone of the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The date and time that the EC2 Instance Connect Endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the EC2 Instance Connect Endpoint was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the EC2 Instance Connect Endpoint was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the EC2 Instance Connect Endpoint was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the EC2 Instance Connect Endpoint was created.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the EC2 Instance Connect Endpoint was created.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ID of the subnet in which the EC2 Instance Connect Endpoint was
     * created.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet in which the EC2 Instance Connect Endpoint was
     * created.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet in which the EC2 Instance Connect Endpoint was
     * created.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet in which the EC2 Instance Connect Endpoint was
     * created.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet in which the EC2 Instance Connect Endpoint was
     * created.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet in which the EC2 Instance Connect Endpoint was
     * created.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in which the EC2 Instance Connect Endpoint was
     * created.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet in which the EC2 Instance Connect Endpoint was
     * created.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>Indicates whether your client's IP address is preserved as the source. The
     * value is <code>true</code> or <code>false</code>.</p> <ul> <li> <p>If
     * <code>true</code>, your client's IP address is used when you connect to a
     * resource.</p> </li> <li> <p>If <code>false</code>, the elastic network interface
     * IP address is used when you connect to a resource.</p> </li> </ul> <p>Default:
     * <code>true</code> </p>
     */
    inline bool GetPreserveClientIp() const{ return m_preserveClientIp; }

    /**
     * <p>Indicates whether your client's IP address is preserved as the source. The
     * value is <code>true</code> or <code>false</code>.</p> <ul> <li> <p>If
     * <code>true</code>, your client's IP address is used when you connect to a
     * resource.</p> </li> <li> <p>If <code>false</code>, the elastic network interface
     * IP address is used when you connect to a resource.</p> </li> </ul> <p>Default:
     * <code>true</code> </p>
     */
    inline bool PreserveClientIpHasBeenSet() const { return m_preserveClientIpHasBeenSet; }

    /**
     * <p>Indicates whether your client's IP address is preserved as the source. The
     * value is <code>true</code> or <code>false</code>.</p> <ul> <li> <p>If
     * <code>true</code>, your client's IP address is used when you connect to a
     * resource.</p> </li> <li> <p>If <code>false</code>, the elastic network interface
     * IP address is used when you connect to a resource.</p> </li> </ul> <p>Default:
     * <code>true</code> </p>
     */
    inline void SetPreserveClientIp(bool value) { m_preserveClientIpHasBeenSet = true; m_preserveClientIp = value; }

    /**
     * <p>Indicates whether your client's IP address is preserved as the source. The
     * value is <code>true</code> or <code>false</code>.</p> <ul> <li> <p>If
     * <code>true</code>, your client's IP address is used when you connect to a
     * resource.</p> </li> <li> <p>If <code>false</code>, the elastic network interface
     * IP address is used when you connect to a resource.</p> </li> </ul> <p>Default:
     * <code>true</code> </p>
     */
    inline Ec2InstanceConnectEndpoint& WithPreserveClientIp(bool value) { SetPreserveClientIp(value); return *this;}


    /**
     * <p>The security groups associated with the endpoint. If you didn't specify a
     * security group, the default security group for your VPC is associated with the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The security groups associated with the endpoint. If you didn't specify a
     * security group, the default security group for your VPC is associated with the
     * endpoint.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The security groups associated with the endpoint. If you didn't specify a
     * security group, the default security group for your VPC is associated with the
     * endpoint.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The security groups associated with the endpoint. If you didn't specify a
     * security group, the default security group for your VPC is associated with the
     * endpoint.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The security groups associated with the endpoint. If you didn't specify a
     * security group, the default security group for your VPC is associated with the
     * endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The security groups associated with the endpoint. If you didn't specify a
     * security group, the default security group for your VPC is associated with the
     * endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security groups associated with the endpoint. If you didn't specify a
     * security group, the default security group for your VPC is associated with the
     * endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security groups associated with the endpoint. If you didn't specify a
     * security group, the default security group for your VPC is associated with the
     * endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups associated with the endpoint. If you didn't specify a
     * security group, the default security group for your VPC is associated with the
     * endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The tags assigned to the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the EC2 Instance Connect Endpoint.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the EC2 Instance Connect Endpoint.</p>
     */
    inline Ec2InstanceConnectEndpoint& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
