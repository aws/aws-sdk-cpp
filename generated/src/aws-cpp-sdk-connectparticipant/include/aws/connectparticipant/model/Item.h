/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectparticipant/model/ChatItemType.h>
#include <aws/connectparticipant/model/ParticipantRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectparticipant/model/MessageMetadata.h>
#include <aws/connectparticipant/model/AttachmentItem.h>
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
namespace ConnectParticipant
{
namespace Model
{

  /**
   * <p>An item - message or event - that has been sent. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/Item">AWS
   * API Reference</a></p>
   */
  class Item
  {
  public:
    AWS_CONNECTPARTICIPANT_API Item() = default;
    AWS_CONNECTPARTICIPANT_API Item(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Item& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the message or event was sent.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetAbsoluteTime() const { return m_absoluteTime; }
    inline bool AbsoluteTimeHasBeenSet() const { return m_absoluteTimeHasBeenSet; }
    template<typename AbsoluteTimeT = Aws::String>
    void SetAbsoluteTime(AbsoluteTimeT&& value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime = std::forward<AbsoluteTimeT>(value); }
    template<typename AbsoluteTimeT = Aws::String>
    Item& WithAbsoluteTime(AbsoluteTimeT&& value) { SetAbsoluteTime(std::forward<AbsoluteTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message or event.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    Item& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of content of the item.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    Item& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the item.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Item& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the item: message or event. </p>
     */
    inline ChatItemType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChatItemType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Item& WithType(ChatItemType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the sender in the session.</p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    Item& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The chat display name of the sender.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Item& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the sender. For example, is it a customer, agent, or system.</p>
     */
    inline ParticipantRole GetParticipantRole() const { return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(ParticipantRole value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline Item& WithParticipantRole(ParticipantRole value) { SetParticipantRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the attachments.</p>
     */
    inline const Aws::Vector<AttachmentItem>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<AttachmentItem>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<AttachmentItem>>
    Item& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = AttachmentItem>
    Item& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata related to the message. Currently this supports only information
     * related to message receipts.</p>
     */
    inline const MessageMetadata& GetMessageMetadata() const { return m_messageMetadata; }
    inline bool MessageMetadataHasBeenSet() const { return m_messageMetadataHasBeenSet; }
    template<typename MessageMetadataT = MessageMetadata>
    void SetMessageMetadata(MessageMetadataT&& value) { m_messageMetadataHasBeenSet = true; m_messageMetadata = std::forward<MessageMetadataT>(value); }
    template<typename MessageMetadataT = MessageMetadata>
    Item& WithMessageMetadata(MessageMetadataT&& value) { SetMessageMetadata(std::forward<MessageMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId on which the transcript item was originally sent. This field is
     * only populated for persistent chats when the transcript item is from the past
     * chat session. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
     * persistent chat</a>.</p>
     */
    inline const Aws::String& GetRelatedContactId() const { return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    template<typename RelatedContactIdT = Aws::String>
    void SetRelatedContactId(RelatedContactIdT&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::forward<RelatedContactIdT>(value); }
    template<typename RelatedContactIdT = Aws::String>
    Item& WithRelatedContactId(RelatedContactIdT&& value) { SetRelatedContactId(std::forward<RelatedContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId on which the transcript item was originally sent. This field is
     * populated only when the transcript item is from the current chat session.</p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    Item& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_absoluteTime;
    bool m_absoluteTimeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ChatItemType m_type{ChatItemType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ParticipantRole m_participantRole{ParticipantRole::NOT_SET};
    bool m_participantRoleHasBeenSet = false;

    Aws::Vector<AttachmentItem> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    MessageMetadata m_messageMetadata;
    bool m_messageMetadataHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
