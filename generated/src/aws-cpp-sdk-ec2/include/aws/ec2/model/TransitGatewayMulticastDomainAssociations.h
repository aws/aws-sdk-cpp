/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayAttachmentResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SubnetAssociation.h>
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
   * <p>Describes the multicast domain associations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMulticastDomainAssociations">AWS
   * API Reference</a></p>
   */
  class TransitGatewayMulticastDomainAssociations
  {
  public:
    AWS_EC2_API TransitGatewayMulticastDomainAssociations();
    AWS_EC2_API TransitGatewayMulticastDomainAssociations(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayMulticastDomainAssociations& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const{ return m_transitGatewayMulticastDomainId; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const Aws::String& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = value; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(Aws::String&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::move(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const char* value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId.assign(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithTransitGatewayMulticastDomainId(const Aws::String& value) { SetTransitGatewayMulticastDomainId(value); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithTransitGatewayMulticastDomainId(Aws::String&& value) { SetTransitGatewayMulticastDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithTransitGatewayMulticastDomainId(const char* value) { SetTransitGatewayMulticastDomainId(value); return *this;}


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
    inline TransitGatewayMulticastDomainAssociations& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}


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
    inline TransitGatewayMulticastDomainAssociations& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithResourceId(const char* value) { SetResourceId(value); return *this;}


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
    inline TransitGatewayMulticastDomainAssociations& WithResourceType(const TransitGatewayAttachmentResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource, for example a VPC attachment.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithResourceType(TransitGatewayAttachmentResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p> The ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }

    /**
     * <p> The ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }

    /**
     * <p> The ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}

    /**
     * <p> The ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}


    /**
     * <p>The subnets associated with the multicast domain.</p>
     */
    inline const Aws::Vector<SubnetAssociation>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The subnets associated with the multicast domain.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The subnets associated with the multicast domain.</p>
     */
    inline void SetSubnets(const Aws::Vector<SubnetAssociation>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The subnets associated with the multicast domain.</p>
     */
    inline void SetSubnets(Aws::Vector<SubnetAssociation>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The subnets associated with the multicast domain.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithSubnets(const Aws::Vector<SubnetAssociation>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The subnets associated with the multicast domain.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& WithSubnets(Aws::Vector<SubnetAssociation>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The subnets associated with the multicast domain.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& AddSubnets(const SubnetAssociation& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The subnets associated with the multicast domain.</p>
     */
    inline TransitGatewayMulticastDomainAssociations& AddSubnets(SubnetAssociation&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet = false;

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TransitGatewayAttachmentResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::Vector<SubnetAssociation> m_subnets;
    bool m_subnetsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
