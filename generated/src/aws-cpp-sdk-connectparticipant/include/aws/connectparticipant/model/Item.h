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
    AWS_CONNECTPARTICIPANT_API Item();
    AWS_CONNECTPARTICIPANT_API Item(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Item& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the message or event was sent.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetAbsoluteTime() const{ return m_absoluteTime; }
    inline bool AbsoluteTimeHasBeenSet() const { return m_absoluteTimeHasBeenSet; }
    inline void SetAbsoluteTime(const Aws::String& value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime = value; }
    inline void SetAbsoluteTime(Aws::String&& value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime = std::move(value); }
    inline void SetAbsoluteTime(const char* value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime.assign(value); }
    inline Item& WithAbsoluteTime(const Aws::String& value) { SetAbsoluteTime(value); return *this;}
    inline Item& WithAbsoluteTime(Aws::String&& value) { SetAbsoluteTime(std::move(value)); return *this;}
    inline Item& WithAbsoluteTime(const char* value) { SetAbsoluteTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message or event.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline Item& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline Item& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline Item& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of content of the item.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline Item& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline Item& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline Item& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the item.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Item& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Item& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Item& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the item: message or event. </p>
     */
    inline const ChatItemType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ChatItemType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ChatItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Item& WithType(const ChatItemType& value) { SetType(value); return *this;}
    inline Item& WithType(ChatItemType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the sender in the session.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }
    inline Item& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}
    inline Item& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}
    inline Item& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The chat display name of the sender.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline Item& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Item& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Item& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the sender. For example, is it a customer, agent, or system.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }
    inline Item& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}
    inline Item& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the attachments.</p>
     */
    inline const Aws::Vector<AttachmentItem>& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Aws::Vector<AttachmentItem>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Aws::Vector<AttachmentItem>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline Item& WithAttachments(const Aws::Vector<AttachmentItem>& value) { SetAttachments(value); return *this;}
    inline Item& WithAttachments(Aws::Vector<AttachmentItem>&& value) { SetAttachments(std::move(value)); return *this;}
    inline Item& AddAttachments(const AttachmentItem& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline Item& AddAttachments(AttachmentItem&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata related to the message. Currently this supports only information
     * related to message receipts.</p>
     */
    inline const MessageMetadata& GetMessageMetadata() const{ return m_messageMetadata; }
    inline bool MessageMetadataHasBeenSet() const { return m_messageMetadataHasBeenSet; }
    inline void SetMessageMetadata(const MessageMetadata& value) { m_messageMetadataHasBeenSet = true; m_messageMetadata = value; }
    inline void SetMessageMetadata(MessageMetadata&& value) { m_messageMetadataHasBeenSet = true; m_messageMetadata = std::move(value); }
    inline Item& WithMessageMetadata(const MessageMetadata& value) { SetMessageMetadata(value); return *this;}
    inline Item& WithMessageMetadata(MessageMetadata&& value) { SetMessageMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId on which the transcript item was originally sent. This field is
     * only populated for persistent chats when the transcript item is from the past
     * chat session. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
     * persistent chat</a>.</p>
     */
    inline const Aws::String& GetRelatedContactId() const{ return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    inline void SetRelatedContactId(const Aws::String& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = value; }
    inline void SetRelatedContactId(Aws::String&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::move(value); }
    inline void SetRelatedContactId(const char* value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId.assign(value); }
    inline Item& WithRelatedContactId(const Aws::String& value) { SetRelatedContactId(value); return *this;}
    inline Item& WithRelatedContactId(Aws::String&& value) { SetRelatedContactId(std::move(value)); return *this;}
    inline Item& WithRelatedContactId(const char* value) { SetRelatedContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId on which the transcript item was originally sent. This field is
     * populated only when the transcript item is from the current chat session.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }
    inline Item& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline Item& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline Item& WithContactId(const char* value) { SetContactId(value); return *this;}
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

    ChatItemType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ParticipantRole m_participantRole;
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
