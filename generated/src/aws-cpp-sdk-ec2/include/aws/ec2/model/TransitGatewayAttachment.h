/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayAttachmentResourceType.h>
#include <aws/ec2/model/TransitGatewayAttachmentState.h>
#include <aws/ec2/model/TransitGatewayAttachmentAssociation.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes an attachment between a resource and a transit
   * gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayAttachment">AWS
   * API Reference</a></p>
   */
  class TransitGatewayAttachment
  {
  public:
    AWS_EC2_API TransitGatewayAttachment();
    AWS_EC2_API TransitGatewayAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }
    inline TransitGatewayAttachment& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}
    inline TransitGatewayAttachment& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}
    inline TransitGatewayAttachment& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }
    inline TransitGatewayAttachment& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}
    inline TransitGatewayAttachment& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}
    inline TransitGatewayAttachment& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayOwnerId() const{ return m_transitGatewayOwnerId; }
    inline bool TransitGatewayOwnerIdHasBeenSet() const { return m_transitGatewayOwnerIdHasBeenSet; }
    inline void SetTransitGatewayOwnerId(const Aws::String& value) { m_transitGatewayOwnerIdHasBeenSet = true; m_transitGatewayOwnerId = value; }
    inline void SetTransitGatewayOwnerId(Aws::String&& value) { m_transitGatewayOwnerIdHasBeenSet = true; m_transitGatewayOwnerId = std::move(value); }
    inline void SetTransitGatewayOwnerId(const char* value) { m_transitGatewayOwnerIdHasBeenSet = true; m_transitGatewayOwnerId.assign(value); }
    inline TransitGatewayAttachment& WithTransitGatewayOwnerId(const Aws::String& value) { SetTransitGatewayOwnerId(value); return *this;}
    inline TransitGatewayAttachment& WithTransitGatewayOwnerId(Aws::String&& value) { SetTransitGatewayOwnerId(std::move(value)); return *this;}
    inline TransitGatewayAttachment& WithTransitGatewayOwnerId(const char* value) { SetTransitGatewayOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }
    inline TransitGatewayAttachment& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}
    inline TransitGatewayAttachment& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}
    inline TransitGatewayAttachment& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type. Note that the <code>tgw-peering</code> resource type has
     * been deprecated.</p>
     */
    inline const TransitGatewayAttachmentResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const TransitGatewayAttachmentResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(TransitGatewayAttachmentResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline TransitGatewayAttachment& WithResourceType(const TransitGatewayAttachmentResourceType& value) { SetResourceType(value); return *this;}
    inline TransitGatewayAttachment& WithResourceType(TransitGatewayAttachmentResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline TransitGatewayAttachment& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline TransitGatewayAttachment& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline TransitGatewayAttachment& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attachment state. Note that the <code>initiating</code> state has been
     * deprecated.</p>
     */
    inline const TransitGatewayAttachmentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TransitGatewayAttachmentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TransitGatewayAttachmentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline TransitGatewayAttachment& WithState(const TransitGatewayAttachmentState& value) { SetState(value); return *this;}
    inline TransitGatewayAttachment& WithState(TransitGatewayAttachmentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association.</p>
     */
    inline const TransitGatewayAttachmentAssociation& GetAssociation() const{ return m_association; }
    inline bool AssociationHasBeenSet() const { return m_associationHasBeenSet; }
    inline void SetAssociation(const TransitGatewayAttachmentAssociation& value) { m_associationHasBeenSet = true; m_association = value; }
    inline void SetAssociation(TransitGatewayAttachmentAssociation&& value) { m_associationHasBeenSet = true; m_association = std::move(value); }
    inline TransitGatewayAttachment& WithAssociation(const TransitGatewayAttachmentAssociation& value) { SetAssociation(value); return *this;}
    inline TransitGatewayAttachment& WithAssociation(TransitGatewayAttachmentAssociation&& value) { SetAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TransitGatewayAttachment& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TransitGatewayAttachment& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the attachment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TransitGatewayAttachment& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TransitGatewayAttachment& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TransitGatewayAttachment& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TransitGatewayAttachment& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_transitGatewayOwnerId;
    bool m_transitGatewayOwnerIdHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    TransitGatewayAttachmentResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TransitGatewayAttachmentState m_state;
    bool m_stateHasBeenSet = false;

    TransitGatewayAttachmentAssociation m_association;
    bool m_associationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
