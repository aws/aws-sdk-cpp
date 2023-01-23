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
    AWS_EC2_API TransitGatewayMulticastGroup();
    AWS_EC2_API TransitGatewayMulticastGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayMulticastGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline const Aws::String& GetGroupIpAddress() const{ return m_groupIpAddress; }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline bool GroupIpAddressHasBeenSet() const { return m_groupIpAddressHasBeenSet; }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline void SetGroupIpAddress(const Aws::String& value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress = value; }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline void SetGroupIpAddress(Aws::String&& value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress = std::move(value); }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline void SetGroupIpAddress(const char* value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress.assign(value); }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline TransitGatewayMulticastGroup& WithGroupIpAddress(const Aws::String& value) { SetGroupIpAddress(value); return *this;}

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline TransitGatewayMulticastGroup& WithGroupIpAddress(Aws::String&& value) { SetGroupIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline TransitGatewayMulticastGroup& WithGroupIpAddress(const char* value) { SetGroupIpAddress(value); return *this;}


    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayMulticastGroup& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayMulticastGroup& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayMulticastGroup& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}


    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline TransitGatewayMulticastGroup& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline TransitGatewayMulticastGroup& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline TransitGatewayMulticastGroup& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline TransitGatewayMulticastGroup& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline TransitGatewayMulticastGroup& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline TransitGatewayMulticastGroup& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The type of resource, for example a VPC attachment.</p>
     */
    inline const TransitGatewayAttachmentResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource, for example a VPC attachment.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource, for example a VPC attachment.</p>
     */
    inline void SetResourceType(const TransitGatewayAttachmentResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource, for example a VPC attachment.</p>
     */
    inline void SetResourceType(TransitGatewayAttachmentResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource, for example a VPC attachment.</p>
     */
    inline TransitGatewayMulticastGroup& WithResourceType(const TransitGatewayAttachmentResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource, for example a VPC attachment.</p>
     */
    inline TransitGatewayMulticastGroup& WithResourceType(TransitGatewayAttachmentResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain group resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain group resource.</p>
     */
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain group resource.</p>
     */
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain group resource.</p>
     */
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain group resource.</p>
     */
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain group resource.</p>
     */
    inline TransitGatewayMulticastGroup& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain group resource.</p>
     */
    inline TransitGatewayMulticastGroup& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain group resource.</p>
     */
    inline TransitGatewayMulticastGroup& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}


    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayMulticastGroup& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayMulticastGroup& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayMulticastGroup& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>Indicates that the resource is a transit gateway multicast group member.</p>
     */
    inline bool GetGroupMember() const{ return m_groupMember; }

    /**
     * <p>Indicates that the resource is a transit gateway multicast group member.</p>
     */
    inline bool GroupMemberHasBeenSet() const { return m_groupMemberHasBeenSet; }

    /**
     * <p>Indicates that the resource is a transit gateway multicast group member.</p>
     */
    inline void SetGroupMember(bool value) { m_groupMemberHasBeenSet = true; m_groupMember = value; }

    /**
     * <p>Indicates that the resource is a transit gateway multicast group member.</p>
     */
    inline TransitGatewayMulticastGroup& WithGroupMember(bool value) { SetGroupMember(value); return *this;}


    /**
     * <p>Indicates that the resource is a transit gateway multicast group member.</p>
     */
    inline bool GetGroupSource() const{ return m_groupSource; }

    /**
     * <p>Indicates that the resource is a transit gateway multicast group member.</p>
     */
    inline bool GroupSourceHasBeenSet() const { return m_groupSourceHasBeenSet; }

    /**
     * <p>Indicates that the resource is a transit gateway multicast group member.</p>
     */
    inline void SetGroupSource(bool value) { m_groupSourceHasBeenSet = true; m_groupSource = value; }

    /**
     * <p>Indicates that the resource is a transit gateway multicast group member.</p>
     */
    inline TransitGatewayMulticastGroup& WithGroupSource(bool value) { SetGroupSource(value); return *this;}


    /**
     * <p>The member type (for example, <code>static</code>).</p>
     */
    inline const MembershipType& GetMemberType() const{ return m_memberType; }

    /**
     * <p>The member type (for example, <code>static</code>).</p>
     */
    inline bool MemberTypeHasBeenSet() const { return m_memberTypeHasBeenSet; }

    /**
     * <p>The member type (for example, <code>static</code>).</p>
     */
    inline void SetMemberType(const MembershipType& value) { m_memberTypeHasBeenSet = true; m_memberType = value; }

    /**
     * <p>The member type (for example, <code>static</code>).</p>
     */
    inline void SetMemberType(MembershipType&& value) { m_memberTypeHasBeenSet = true; m_memberType = std::move(value); }

    /**
     * <p>The member type (for example, <code>static</code>).</p>
     */
    inline TransitGatewayMulticastGroup& WithMemberType(const MembershipType& value) { SetMemberType(value); return *this;}

    /**
     * <p>The member type (for example, <code>static</code>).</p>
     */
    inline TransitGatewayMulticastGroup& WithMemberType(MembershipType&& value) { SetMemberType(std::move(value)); return *this;}


    /**
     * <p>The source type.</p>
     */
    inline const MembershipType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type.</p>
     */
    inline void SetSourceType(const MembershipType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type.</p>
     */
    inline void SetSourceType(MembershipType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type.</p>
     */
    inline TransitGatewayMulticastGroup& WithSourceType(const MembershipType& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type.</p>
     */
    inline TransitGatewayMulticastGroup& WithSourceType(MembershipType&& value) { SetSourceType(std::move(value)); return *this;}

  private:

    Aws::String m_groupIpAddress;
    bool m_groupIpAddressHasBeenSet = false;

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TransitGatewayAttachmentResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    bool m_groupMember;
    bool m_groupMemberHasBeenSet = false;

    bool m_groupSource;
    bool m_groupSourceHasBeenSet = false;

    MembershipType m_memberType;
    bool m_memberTypeHasBeenSet = false;

    MembershipType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
