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
    AWS_EC2_API TransitGatewayMulticastDomainAssociations() = default;
    AWS_EC2_API TransitGatewayMulticastDomainAssociations(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayMulticastDomainAssociations& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const { return m_transitGatewayMulticastDomainId; }
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }
    template<typename TransitGatewayMulticastDomainIdT = Aws::String>
    void SetTransitGatewayMulticastDomainId(TransitGatewayMulticastDomainIdT&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::forward<TransitGatewayMulticastDomainIdT>(value); }
    template<typename TransitGatewayMulticastDomainIdT = Aws::String>
    TransitGatewayMulticastDomainAssociations& WithTransitGatewayMulticastDomainId(TransitGatewayMulticastDomainIdT&& value) { SetTransitGatewayMulticastDomainId(std::forward<TransitGatewayMulticastDomainIdT>(value)); return *this;}
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
    TransitGatewayMulticastDomainAssociations& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value)); return *this;}
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
    TransitGatewayMulticastDomainAssociations& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource, for example a VPC attachment.</p>
     */
    inline TransitGatewayAttachmentResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(TransitGatewayAttachmentResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline TransitGatewayMulticastDomainAssociations& WithResourceType(TransitGatewayAttachmentResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const { return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    template<typename ResourceOwnerIdT = Aws::String>
    void SetResourceOwnerId(ResourceOwnerIdT&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::forward<ResourceOwnerIdT>(value); }
    template<typename ResourceOwnerIdT = Aws::String>
    TransitGatewayMulticastDomainAssociations& WithResourceOwnerId(ResourceOwnerIdT&& value) { SetResourceOwnerId(std::forward<ResourceOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnets associated with the multicast domain.</p>
     */
    inline const Aws::Vector<SubnetAssociation>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<SubnetAssociation>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<SubnetAssociation>>
    TransitGatewayMulticastDomainAssociations& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = SubnetAssociation>
    TransitGatewayMulticastDomainAssociations& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet = false;

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TransitGatewayAttachmentResourceType m_resourceType{TransitGatewayAttachmentResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::Vector<SubnetAssociation> m_subnets;
    bool m_subnetsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
