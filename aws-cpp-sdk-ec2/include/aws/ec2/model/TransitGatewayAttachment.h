/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API TransitGatewayAttachment
  {
  public:
    TransitGatewayAttachment();
    TransitGatewayAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
    TransitGatewayAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline TransitGatewayAttachment& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline TransitGatewayAttachment& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline TransitGatewayAttachment& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}


    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGatewayAttachment& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGatewayAttachment& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGatewayAttachment& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    /**
     * <p>The ID of the AWS account that owns the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayOwnerId() const{ return m_transitGatewayOwnerId; }

    /**
     * <p>The ID of the AWS account that owns the transit gateway.</p>
     */
    inline bool TransitGatewayOwnerIdHasBeenSet() const { return m_transitGatewayOwnerIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the transit gateway.</p>
     */
    inline void SetTransitGatewayOwnerId(const Aws::String& value) { m_transitGatewayOwnerIdHasBeenSet = true; m_transitGatewayOwnerId = value; }

    /**
     * <p>The ID of the AWS account that owns the transit gateway.</p>
     */
    inline void SetTransitGatewayOwnerId(Aws::String&& value) { m_transitGatewayOwnerIdHasBeenSet = true; m_transitGatewayOwnerId = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the transit gateway.</p>
     */
    inline void SetTransitGatewayOwnerId(const char* value) { m_transitGatewayOwnerIdHasBeenSet = true; m_transitGatewayOwnerId.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the transit gateway.</p>
     */
    inline TransitGatewayAttachment& WithTransitGatewayOwnerId(const Aws::String& value) { SetTransitGatewayOwnerId(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the transit gateway.</p>
     */
    inline TransitGatewayAttachment& WithTransitGatewayOwnerId(Aws::String&& value) { SetTransitGatewayOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the transit gateway.</p>
     */
    inline TransitGatewayAttachment& WithTransitGatewayOwnerId(const char* value) { SetTransitGatewayOwnerId(value); return *this;}


    /**
     * <p>The ID of the AWS account that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }

    /**
     * <p>The ID of the AWS account that owns the resource.</p>
     */
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the resource.</p>
     */
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }

    /**
     * <p>The ID of the AWS account that owns the resource.</p>
     */
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the resource.</p>
     */
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the resource.</p>
     */
    inline TransitGatewayAttachment& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the resource.</p>
     */
    inline TransitGatewayAttachment& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the resource.</p>
     */
    inline TransitGatewayAttachment& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}


    /**
     * <p>The resource type.</p>
     */
    inline const TransitGatewayAttachmentResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const TransitGatewayAttachmentResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(TransitGatewayAttachmentResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline TransitGatewayAttachment& WithResourceType(const TransitGatewayAttachmentResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline TransitGatewayAttachment& WithResourceType(TransitGatewayAttachmentResourceType&& value) { SetResourceType(std::move(value)); return *this;}


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
    inline TransitGatewayAttachment& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline TransitGatewayAttachment& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline TransitGatewayAttachment& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The attachment state.</p>
     */
    inline const TransitGatewayAttachmentState& GetState() const{ return m_state; }

    /**
     * <p>The attachment state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The attachment state.</p>
     */
    inline void SetState(const TransitGatewayAttachmentState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The attachment state.</p>
     */
    inline void SetState(TransitGatewayAttachmentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The attachment state.</p>
     */
    inline TransitGatewayAttachment& WithState(const TransitGatewayAttachmentState& value) { SetState(value); return *this;}

    /**
     * <p>The attachment state.</p>
     */
    inline TransitGatewayAttachment& WithState(TransitGatewayAttachmentState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The association.</p>
     */
    inline const TransitGatewayAttachmentAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>The association.</p>
     */
    inline bool AssociationHasBeenSet() const { return m_associationHasBeenSet; }

    /**
     * <p>The association.</p>
     */
    inline void SetAssociation(const TransitGatewayAttachmentAssociation& value) { m_associationHasBeenSet = true; m_association = value; }

    /**
     * <p>The association.</p>
     */
    inline void SetAssociation(TransitGatewayAttachmentAssociation&& value) { m_associationHasBeenSet = true; m_association = std::move(value); }

    /**
     * <p>The association.</p>
     */
    inline TransitGatewayAttachment& WithAssociation(const TransitGatewayAttachmentAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>The association.</p>
     */
    inline TransitGatewayAttachment& WithAssociation(TransitGatewayAttachmentAssociation&& value) { SetAssociation(std::move(value)); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline TransitGatewayAttachment& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline TransitGatewayAttachment& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The tags for the attachment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the attachment.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the attachment.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the attachment.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the attachment.</p>
     */
    inline TransitGatewayAttachment& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the attachment.</p>
     */
    inline TransitGatewayAttachment& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the attachment.</p>
     */
    inline TransitGatewayAttachment& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the attachment.</p>
     */
    inline TransitGatewayAttachment& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet;

    Aws::String m_transitGatewayOwnerId;
    bool m_transitGatewayOwnerIdHasBeenSet;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet;

    TransitGatewayAttachmentResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    TransitGatewayAttachmentState m_state;
    bool m_stateHasBeenSet;

    TransitGatewayAttachmentAssociation m_association;
    bool m_associationHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
