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


    /**
     * <p>The time when the message or event was sent.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetAbsoluteTime() const{ return m_absoluteTime; }

    /**
     * <p>The time when the message or event was sent.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline bool AbsoluteTimeHasBeenSet() const { return m_absoluteTimeHasBeenSet; }

    /**
     * <p>The time when the message or event was sent.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetAbsoluteTime(const Aws::String& value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime = value; }

    /**
     * <p>The time when the message or event was sent.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetAbsoluteTime(Aws::String&& value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime = std::move(value); }

    /**
     * <p>The time when the message or event was sent.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetAbsoluteTime(const char* value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime.assign(value); }

    /**
     * <p>The time when the message or event was sent.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline Item& WithAbsoluteTime(const Aws::String& value) { SetAbsoluteTime(value); return *this;}

    /**
     * <p>The time when the message or event was sent.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline Item& WithAbsoluteTime(Aws::String&& value) { SetAbsoluteTime(std::move(value)); return *this;}

    /**
     * <p>The time when the message or event was sent.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline Item& WithAbsoluteTime(const char* value) { SetAbsoluteTime(value); return *this;}


    /**
     * <p>The content of the message or event.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the message or event.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the message or event.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the message or event.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the message or event.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the message or event.</p>
     */
    inline Item& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the message or event.</p>
     */
    inline Item& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the message or event.</p>
     */
    inline Item& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The type of content of the item.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The type of content of the item.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The type of content of the item.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The type of content of the item.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The type of content of the item.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The type of content of the item.</p>
     */
    inline Item& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The type of content of the item.</p>
     */
    inline Item& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The type of content of the item.</p>
     */
    inline Item& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The ID of the item.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the item.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the item.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the item.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the item.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the item.</p>
     */
    inline Item& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the item.</p>
     */
    inline Item& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the item.</p>
     */
    inline Item& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Type of the item: message or event. </p>
     */
    inline const ChatItemType& GetType() const{ return m_type; }

    /**
     * <p>Type of the item: message or event. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of the item: message or event. </p>
     */
    inline void SetType(const ChatItemType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of the item: message or event. </p>
     */
    inline void SetType(ChatItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of the item: message or event. </p>
     */
    inline Item& WithType(const ChatItemType& value) { SetType(value); return *this;}

    /**
     * <p>Type of the item: message or event. </p>
     */
    inline Item& WithType(ChatItemType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ID of the sender in the session.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }

    /**
     * <p>The ID of the sender in the session.</p>
     */
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }

    /**
     * <p>The ID of the sender in the session.</p>
     */
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }

    /**
     * <p>The ID of the sender in the session.</p>
     */
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }

    /**
     * <p>The ID of the sender in the session.</p>
     */
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }

    /**
     * <p>The ID of the sender in the session.</p>
     */
    inline Item& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}

    /**
     * <p>The ID of the sender in the session.</p>
     */
    inline Item& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}

    /**
     * <p>The ID of the sender in the session.</p>
     */
    inline Item& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}


    /**
     * <p>The chat display name of the sender.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The chat display name of the sender.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The chat display name of the sender.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The chat display name of the sender.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The chat display name of the sender.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The chat display name of the sender.</p>
     */
    inline Item& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The chat display name of the sender.</p>
     */
    inline Item& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The chat display name of the sender.</p>
     */
    inline Item& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The role of the sender. For example, is it a customer, agent, or system.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>The role of the sender. For example, is it a customer, agent, or system.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>The role of the sender. For example, is it a customer, agent, or system.</p>
     */
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>The role of the sender. For example, is it a customer, agent, or system.</p>
     */
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>The role of the sender. For example, is it a customer, agent, or system.</p>
     */
    inline Item& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>The role of the sender. For example, is it a customer, agent, or system.</p>
     */
    inline Item& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}


    /**
     * <p>Provides information about the attachments.</p>
     */
    inline const Aws::Vector<AttachmentItem>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>Provides information about the attachments.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>Provides information about the attachments.</p>
     */
    inline void SetAttachments(const Aws::Vector<AttachmentItem>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>Provides information about the attachments.</p>
     */
    inline void SetAttachments(Aws::Vector<AttachmentItem>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>Provides information about the attachments.</p>
     */
    inline Item& WithAttachments(const Aws::Vector<AttachmentItem>& value) { SetAttachments(value); return *this;}

    /**
     * <p>Provides information about the attachments.</p>
     */
    inline Item& WithAttachments(Aws::Vector<AttachmentItem>&& value) { SetAttachments(std::move(value)); return *this;}

    /**
     * <p>Provides information about the attachments.</p>
     */
    inline Item& AddAttachments(const AttachmentItem& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

    /**
     * <p>Provides information about the attachments.</p>
     */
    inline Item& AddAttachments(AttachmentItem&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The metadata related to the message. Currently this supports only information
     * related to message receipts.</p>
     */
    inline const MessageMetadata& GetMessageMetadata() const{ return m_messageMetadata; }

    /**
     * <p>The metadata related to the message. Currently this supports only information
     * related to message receipts.</p>
     */
    inline bool MessageMetadataHasBeenSet() const { return m_messageMetadataHasBeenSet; }

    /**
     * <p>The metadata related to the message. Currently this supports only information
     * related to message receipts.</p>
     */
    inline void SetMessageMetadata(const MessageMetadata& value) { m_messageMetadataHasBeenSet = true; m_messageMetadata = value; }

    /**
     * <p>The metadata related to the message. Currently this supports only information
     * related to message receipts.</p>
     */
    inline void SetMessageMetadata(MessageMetadata&& value) { m_messageMetadataHasBeenSet = true; m_messageMetadata = std::move(value); }

    /**
     * <p>The metadata related to the message. Currently this supports only information
     * related to message receipts.</p>
     */
    inline Item& WithMessageMetadata(const MessageMetadata& value) { SetMessageMetadata(value); return *this;}

    /**
     * <p>The metadata related to the message. Currently this supports only information
     * related to message receipts.</p>
     */
    inline Item& WithMessageMetadata(MessageMetadata&& value) { SetMessageMetadata(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
