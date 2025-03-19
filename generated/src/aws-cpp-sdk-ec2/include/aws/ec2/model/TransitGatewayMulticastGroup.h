/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayAttachmentResourceType.h>
#include <aws/ec2/model/MembershipType.h>
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
   * <p>Describes the transit gateway multicast group resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMulticastGroup">AWS
   * API Reference</a></p>
   */
  class TransitGatewayMulticastGroup
  {
  public:
    AWS_EC2_API TransitGatewayMulticastGroup() = default;
    AWS_EC2_API TransitGatewayMulticastGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayMulticastGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline const Aws::String& GetGroupIpAddress() const { return m_groupIpAddress; }
    inline bool GroupIpAddressHasBeenSet() const { return m_groupIpAddressHasBeenSet; }
    template<typename GroupIpAddressT = Aws::String>
    void SetGroupIpAddress(GroupIpAddressT&& value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress = std::forward<GroupIpAddressT>(value); }
    template<typename GroupIpAddressT = Aws::String>
    TransitGatewayMulticastGroup& WithGroupIpAddress(GroupIpAddressT&& value) { SetGroupIpAddress(std::forward<GroupIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value); }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    TransitGatewayMulticastGroup& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value)); return *this;}
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
    TransitGatewayMulticastGroup& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    TransitGatewayMulticastGroup& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource, for example a VPC attachment.</p>
     */
    inline TransitGatewayAttachmentResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(TransitGatewayAttachmentResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline TransitGatewayMulticastGroup& WithResourceType(TransitGatewayAttachmentResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain group resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const { return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    template<typename ResourceOwnerIdT = Aws::String>
    void SetResourceOwnerId(ResourceOwnerIdT&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::forward<ResourceOwnerIdT>(value); }
    template<typename ResourceOwnerIdT = Aws::String>
    TransitGatewayMulticastGroup& WithResourceOwnerId(ResourceOwnerIdT&& value) { SetResourceOwnerId(std::forward<ResourceOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    TransitGatewayMulticastGroup& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the resource is a transit gateway multicast group member.</p>
     */
    inline bool GetGroupMember() const { return m_groupMember; }
    inline bool GroupMemberHasBeenSet() const { return m_groupMemberHasBeenSet; }
    inline void SetGroupMember(bool value) { m_groupMemberHasBeenSet = true; m_groupMember = value; }
    inline TransitGatewayMulticastGroup& WithGroupMember(bool value) { SetGroupMember(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the resource is a transit gateway multicast group member.</p>
     */
    inline bool GetGroupSource() const { return m_groupSource; }
    inline bool GroupSourceHasBeenSet() const { return m_groupSourceHasBeenSet; }
    inline void SetGroupSource(bool value) { m_groupSourceHasBeenSet = true; m_groupSource = value; }
    inline TransitGatewayMulticastGroup& WithGroupSource(bool value) { SetGroupSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member type (for example, <code>static</code>).</p>
     */
    inline MembershipType GetMemberType() const { return m_memberType; }
    inline bool MemberTypeHasBeenSet() const { return m_memberTypeHasBeenSet; }
    inline void SetMemberType(MembershipType value) { m_memberTypeHasBeenSet = true; m_memberType = value; }
    inline TransitGatewayMulticastGroup& WithMemberType(MembershipType value) { SetMemberType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type.</p>
     */
    inline MembershipType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(MembershipType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline TransitGatewayMulticastGroup& WithSourceType(MembershipType value) { SetSourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_groupIpAddress;
    bool m_groupIpAddressHasBeenSet = false;

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TransitGatewayAttachmentResourceType m_resourceType{TransitGatewayAttachmentResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    bool m_groupMember{false};
    bool m_groupMemberHasBeenSet = false;

    bool m_groupSource{false};
    bool m_groupSourceHasBeenSet = false;

    MembershipType m_memberType{MembershipType::NOT_SET};
    bool m_memberTypeHasBeenSet = false;

    MembershipType m_sourceType{MembershipType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
