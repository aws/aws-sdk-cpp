/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/AttachmentType.h>
#include <aws/networkmanager/model/AttachmentState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/ProposedSegmentChange.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Attachment">AWS
   * API Reference</a></p>
   */
  class Attachment
  {
  public:
    AWS_NETWORKMANAGER_API Attachment();
    AWS_NETWORKMANAGER_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline Attachment& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline Attachment& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline Attachment& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ARN of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkArn() const{ return m_coreNetworkArn; }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline void SetCoreNetworkArn(const Aws::String& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = value; }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline void SetCoreNetworkArn(Aws::String&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::move(value); }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline void SetCoreNetworkArn(const char* value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn.assign(value); }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline Attachment& WithCoreNetworkArn(const Aws::String& value) { SetCoreNetworkArn(value); return *this;}

    /**
     * <p>The ARN of a core network.</p>
     */
    inline Attachment& WithCoreNetworkArn(Aws::String&& value) { SetCoreNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a core network.</p>
     */
    inline Attachment& WithCoreNetworkArn(const char* value) { SetCoreNetworkArn(value); return *this;}


    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline Attachment& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline Attachment& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline Attachment& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}


    /**
     * <p>The ID of the attachment account owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The ID of the attachment account owner.</p>
     */
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }

    /**
     * <p>The ID of the attachment account owner.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }

    /**
     * <p>The ID of the attachment account owner.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }

    /**
     * <p>The ID of the attachment account owner.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }

    /**
     * <p>The ID of the attachment account owner.</p>
     */
    inline Attachment& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The ID of the attachment account owner.</p>
     */
    inline Attachment& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment account owner.</p>
     */
    inline Attachment& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>The type of attachment.</p>
     */
    inline const AttachmentType& GetAttachmentType() const{ return m_attachmentType; }

    /**
     * <p>The type of attachment.</p>
     */
    inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }

    /**
     * <p>The type of attachment.</p>
     */
    inline void SetAttachmentType(const AttachmentType& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = value; }

    /**
     * <p>The type of attachment.</p>
     */
    inline void SetAttachmentType(AttachmentType&& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = std::move(value); }

    /**
     * <p>The type of attachment.</p>
     */
    inline Attachment& WithAttachmentType(const AttachmentType& value) { SetAttachmentType(value); return *this;}

    /**
     * <p>The type of attachment.</p>
     */
    inline Attachment& WithAttachmentType(AttachmentType&& value) { SetAttachmentType(std::move(value)); return *this;}


    /**
     * <p>The state of the attachment.</p>
     */
    inline const AttachmentState& GetState() const{ return m_state; }

    /**
     * <p>The state of the attachment.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the attachment.</p>
     */
    inline void SetState(const AttachmentState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the attachment.</p>
     */
    inline void SetState(AttachmentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the attachment.</p>
     */
    inline Attachment& WithState(const AttachmentState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the attachment.</p>
     */
    inline Attachment& WithState(AttachmentState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The Region where the edge is located.</p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline Attachment& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline Attachment& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline Attachment& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}


    /**
     * <p>The attachment resource ARN.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The attachment resource ARN.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The attachment resource ARN.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The attachment resource ARN.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The attachment resource ARN.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The attachment resource ARN.</p>
     */
    inline Attachment& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The attachment resource ARN.</p>
     */
    inline Attachment& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The attachment resource ARN.</p>
     */
    inline Attachment& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The policy rule number associated with the attachment.</p>
     */
    inline int GetAttachmentPolicyRuleNumber() const{ return m_attachmentPolicyRuleNumber; }

    /**
     * <p>The policy rule number associated with the attachment.</p>
     */
    inline bool AttachmentPolicyRuleNumberHasBeenSet() const { return m_attachmentPolicyRuleNumberHasBeenSet; }

    /**
     * <p>The policy rule number associated with the attachment.</p>
     */
    inline void SetAttachmentPolicyRuleNumber(int value) { m_attachmentPolicyRuleNumberHasBeenSet = true; m_attachmentPolicyRuleNumber = value; }

    /**
     * <p>The policy rule number associated with the attachment.</p>
     */
    inline Attachment& WithAttachmentPolicyRuleNumber(int value) { SetAttachmentPolicyRuleNumber(value); return *this;}


    /**
     * <p>The name of the segment attachment.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }

    /**
     * <p>The name of the segment attachment.</p>
     */
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }

    /**
     * <p>The name of the segment attachment.</p>
     */
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }

    /**
     * <p>The name of the segment attachment.</p>
     */
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }

    /**
     * <p>The name of the segment attachment.</p>
     */
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }

    /**
     * <p>The name of the segment attachment.</p>
     */
    inline Attachment& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}

    /**
     * <p>The name of the segment attachment.</p>
     */
    inline Attachment& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the segment attachment.</p>
     */
    inline Attachment& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}


    /**
     * <p>The tags associated with the attachment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the attachment.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the attachment.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the attachment.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the attachment.</p>
     */
    inline Attachment& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the attachment.</p>
     */
    inline Attachment& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the attachment.</p>
     */
    inline Attachment& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the attachment.</p>
     */
    inline Attachment& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The attachment to move from one segment to another.</p>
     */
    inline const ProposedSegmentChange& GetProposedSegmentChange() const{ return m_proposedSegmentChange; }

    /**
     * <p>The attachment to move from one segment to another.</p>
     */
    inline bool ProposedSegmentChangeHasBeenSet() const { return m_proposedSegmentChangeHasBeenSet; }

    /**
     * <p>The attachment to move from one segment to another.</p>
     */
    inline void SetProposedSegmentChange(const ProposedSegmentChange& value) { m_proposedSegmentChangeHasBeenSet = true; m_proposedSegmentChange = value; }

    /**
     * <p>The attachment to move from one segment to another.</p>
     */
    inline void SetProposedSegmentChange(ProposedSegmentChange&& value) { m_proposedSegmentChangeHasBeenSet = true; m_proposedSegmentChange = std::move(value); }

    /**
     * <p>The attachment to move from one segment to another.</p>
     */
    inline Attachment& WithProposedSegmentChange(const ProposedSegmentChange& value) { SetProposedSegmentChange(value); return *this;}

    /**
     * <p>The attachment to move from one segment to another.</p>
     */
    inline Attachment& WithProposedSegmentChange(ProposedSegmentChange&& value) { SetProposedSegmentChange(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the attachment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the attachment was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the attachment was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the attachment was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the attachment was created.</p>
     */
    inline Attachment& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the attachment was created.</p>
     */
    inline Attachment& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the attachment was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp when the attachment was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp when the attachment was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp when the attachment was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp when the attachment was last updated.</p>
     */
    inline Attachment& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp when the attachment was last updated.</p>
     */
    inline Attachment& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_coreNetworkArn;
    bool m_coreNetworkArnHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    AttachmentType m_attachmentType;
    bool m_attachmentTypeHasBeenSet = false;

    AttachmentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    int m_attachmentPolicyRuleNumber;
    bool m_attachmentPolicyRuleNumberHasBeenSet = false;

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ProposedSegmentChange m_proposedSegmentChange;
    bool m_proposedSegmentChangeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
