/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Ec2InstanceConnectEndpointState.h>
#include <aws/ec2/model/InstanceConnectEndpointPublicDnsNames.h>
#include <aws/ec2/model/IpAddressType.h>
#include <aws/ec2/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes an EC2 Instance Connect Endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ec2InstanceConnectEndpoint">AWS
 * API Reference</a></p>
 */
class Ec2InstanceConnectEndpoint {
 public:
  AWS_EC2_API Ec2InstanceConnectEndpoint() = default;
  AWS_EC2_API Ec2InstanceConnectEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API Ec2InstanceConnectEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that created the EC2 Instance
   * Connect Endpoint.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  Ec2InstanceConnectEndpoint& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the EC2 Instance Connect Endpoint.</p>
   */
  inline const Aws::String& GetInstanceConnectEndpointId() const { return m_instanceConnectEndpointId; }
  inline bool InstanceConnectEndpointIdHasBeenSet() const { return m_instanceConnectEndpointIdHasBeenSet; }
  template <typename InstanceConnectEndpointIdT = Aws::String>
  void SetInstanceConnectEndpointId(InstanceConnectEndpointIdT&& value) {
    m_instanceConnectEndpointIdHasBeenSet = true;
    m_instanceConnectEndpointId = std::forward<InstanceConnectEndpointIdT>(value);
  }
  template <typename InstanceConnectEndpointIdT = Aws::String>
  Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointId(InstanceConnectEndpointIdT&& value) {
    SetInstanceConnectEndpointId(std::forward<InstanceConnectEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the EC2 Instance Connect Endpoint.</p>
   */
  inline const Aws::String& GetInstanceConnectEndpointArn() const { return m_instanceConnectEndpointArn; }
  inline bool InstanceConnectEndpointArnHasBeenSet() const { return m_instanceConnectEndpointArnHasBeenSet; }
  template <typename InstanceConnectEndpointArnT = Aws::String>
  void SetInstanceConnectEndpointArn(InstanceConnectEndpointArnT&& value) {
    m_instanceConnectEndpointArnHasBeenSet = true;
    m_instanceConnectEndpointArn = std::forward<InstanceConnectEndpointArnT>(value);
  }
  template <typename InstanceConnectEndpointArnT = Aws::String>
  Ec2InstanceConnectEndpoint& WithInstanceConnectEndpointArn(InstanceConnectEndpointArnT&& value) {
    SetInstanceConnectEndpointArn(std::forward<InstanceConnectEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the EC2 Instance Connect Endpoint.</p>
   */
  inline Ec2InstanceConnectEndpointState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(Ec2InstanceConnectEndpointState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline Ec2InstanceConnectEndpoint& WithState(Ec2InstanceConnectEndpointState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message for the current state of the EC2 Instance Connect Endpoint. Can
   * include a failure message.</p>
   */
  inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
  inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
  template <typename StateMessageT = Aws::String>
  void SetStateMessage(StateMessageT&& value) {
    m_stateMessageHasBeenSet = true;
    m_stateMessage = std::forward<StateMessageT>(value);
  }
  template <typename StateMessageT = Aws::String>
  Ec2InstanceConnectEndpoint& WithStateMessage(StateMessageT&& value) {
    SetStateMessage(std::forward<StateMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS name of the EC2 Instance Connect Endpoint.</p>
   */
  inline const Aws::String& GetDnsName() const { return m_dnsName; }
  inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
  template <typename DnsNameT = Aws::String>
  void SetDnsName(DnsNameT&& value) {
    m_dnsNameHasBeenSet = true;
    m_dnsName = std::forward<DnsNameT>(value);
  }
  template <typename DnsNameT = Aws::String>
  Ec2InstanceConnectEndpoint& WithDnsName(DnsNameT&& value) {
    SetDnsName(std::forward<DnsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Federal Information Processing Standards (FIPS) compliant DNS name of the
   * EC2 Instance Connect Endpoint.</p>
   */
  inline const Aws::String& GetFipsDnsName() const { return m_fipsDnsName; }
  inline bool FipsDnsNameHasBeenSet() const { return m_fipsDnsNameHasBeenSet; }
  template <typename FipsDnsNameT = Aws::String>
  void SetFipsDnsName(FipsDnsNameT&& value) {
    m_fipsDnsNameHasBeenSet = true;
    m_fipsDnsName = std::forward<FipsDnsNameT>(value);
  }
  template <typename FipsDnsNameT = Aws::String>
  Ec2InstanceConnectEndpoint& WithFipsDnsName(FipsDnsNameT&& value) {
    SetFipsDnsName(std::forward<FipsDnsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the elastic network interface that Amazon EC2 automatically created
   * when creating the EC2 Instance Connect Endpoint.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const { return m_networkInterfaceIds; }
  inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
  template <typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
  void SetNetworkInterfaceIds(NetworkInterfaceIdsT&& value) {
    m_networkInterfaceIdsHasBeenSet = true;
    m_networkInterfaceIds = std::forward<NetworkInterfaceIdsT>(value);
  }
  template <typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
  Ec2InstanceConnectEndpoint& WithNetworkInterfaceIds(NetworkInterfaceIdsT&& value) {
    SetNetworkInterfaceIds(std::forward<NetworkInterfaceIdsT>(value));
    return *this;
  }
  template <typename NetworkInterfaceIdsT = Aws::String>
  Ec2InstanceConnectEndpoint& AddNetworkInterfaceIds(NetworkInterfaceIdsT&& value) {
    m_networkInterfaceIdsHasBeenSet = true;
    m_networkInterfaceIds.emplace_back(std::forward<NetworkInterfaceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC in which the EC2 Instance Connect Endpoint was created.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  Ec2InstanceConnectEndpoint& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone of the EC2 Instance Connect Endpoint.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  Ec2InstanceConnectEndpoint& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the EC2 Instance Connect Endpoint was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Ec2InstanceConnectEndpoint& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the subnet in which the EC2 Instance Connect Endpoint was
   * created.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  Ec2InstanceConnectEndpoint& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether your client's IP address is preserved as the source when
   * you connect to a resource. The following are the possible values.</p> <ul> <li>
   * <p> <code>true</code> - Use the IP address of the client. Your instance must
   * have an IPv4 address.</p> </li> <li> <p> <code>false</code> - Use the IP address
   * of the network interface.</p> </li> </ul> <p>Default: <code>false</code> </p>
   */
  inline bool GetPreserveClientIp() const { return m_preserveClientIp; }
  inline bool PreserveClientIpHasBeenSet() const { return m_preserveClientIpHasBeenSet; }
  inline void SetPreserveClientIp(bool value) {
    m_preserveClientIpHasBeenSet = true;
    m_preserveClientIp = value;
  }
  inline Ec2InstanceConnectEndpoint& WithPreserveClientIp(bool value) {
    SetPreserveClientIp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security groups associated with the endpoint. If you didn't specify a
   * security group, the default security group for your VPC is associated with the
   * endpoint.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  Ec2InstanceConnectEndpoint& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  Ec2InstanceConnectEndpoint& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the EC2 Instance Connect Endpoint.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  Ec2InstanceConnectEndpoint& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  Ec2InstanceConnectEndpoint& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type of the endpoint.</p>
   */
  inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(IpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline Ec2InstanceConnectEndpoint& WithIpAddressType(IpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The public DNS names of the endpoint.</p>
   */
  inline const InstanceConnectEndpointPublicDnsNames& GetPublicDnsNames() const { return m_publicDnsNames; }
  inline bool PublicDnsNamesHasBeenSet() const { return m_publicDnsNamesHasBeenSet; }
  template <typename PublicDnsNamesT = InstanceConnectEndpointPublicDnsNames>
  void SetPublicDnsNames(PublicDnsNamesT&& value) {
    m_publicDnsNamesHasBeenSet = true;
    m_publicDnsNames = std::forward<PublicDnsNamesT>(value);
  }
  template <typename PublicDnsNamesT = InstanceConnectEndpointPublicDnsNames>
  Ec2InstanceConnectEndpoint& WithPublicDnsNames(PublicDnsNamesT&& value) {
    SetPublicDnsNames(std::forward<PublicDnsNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone of the EC2 Instance Connect Endpoint.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  Ec2InstanceConnectEndpoint& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ownerId;

  Aws::String m_instanceConnectEndpointId;

  Aws::String m_instanceConnectEndpointArn;

  Ec2InstanceConnectEndpointState m_state{Ec2InstanceConnectEndpointState::NOT_SET};

  Aws::String m_stateMessage;

  Aws::String m_dnsName;

  Aws::String m_fipsDnsName;

  Aws::Vector<Aws::String> m_networkInterfaceIds;

  Aws::String m_vpcId;

  Aws::String m_availabilityZone;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_subnetId;

  bool m_preserveClientIp{false};

  Aws::Vector<Aws::String> m_securityGroupIds;

  Aws::Vector<Tag> m_tags;

  IpAddressType m_ipAddressType{IpAddressType::NOT_SET};

  InstanceConnectEndpointPublicDnsNames m_publicDnsNames;

  Aws::String m_availabilityZoneId;
  bool m_ownerIdHasBeenSet = false;
  bool m_instanceConnectEndpointIdHasBeenSet = false;
  bool m_instanceConnectEndpointArnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateMessageHasBeenSet = false;
  bool m_dnsNameHasBeenSet = false;
  bool m_fipsDnsNameHasBeenSet = false;
  bool m_networkInterfaceIdsHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_subnetIdHasBeenSet = false;
  bool m_preserveClientIpHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_ipAddressTypeHasBeenSet = false;
  bool m_publicDnsNamesHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
