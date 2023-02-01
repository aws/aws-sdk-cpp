/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMessageType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
#include <aws/chime-sdk-messaging/model/ChannelMessageStatusStructure.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/chime-sdk-messaging/model/MessageAttributeValue.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>Summary of the messages in a <code>Channel</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelMessageSummary">AWS
   * API Reference</a></p>
   */
  class ChannelMessageSummary
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelMessageSummary();
    AWS_CHIMESDKMESSAGING_API ChannelMessageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMessageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID of the message.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The ID of the message.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The ID of the message.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The ID of the message.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The ID of the message.</p>
     */
    inline ChannelMessageSummary& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The ID of the message.</p>
     */
    inline ChannelMessageSummary& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the message.</p>
     */
    inline ChannelMessageSummary& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The content of the message.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the message.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the message.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the message.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the message.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the message.</p>
     */
    inline ChannelMessageSummary& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the message.</p>
     */
    inline ChannelMessageSummary& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the message.</p>
     */
    inline ChannelMessageSummary& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The metadata of the message.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the message.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata of the message.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata of the message.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata of the message.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The metadata of the message.</p>
     */
    inline ChannelMessageSummary& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the message.</p>
     */
    inline ChannelMessageSummary& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata of the message.</p>
     */
    inline ChannelMessageSummary& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The type of message.</p>
     */
    inline const ChannelMessageType& GetType() const{ return m_type; }

    /**
     * <p>The type of message.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of message.</p>
     */
    inline void SetType(const ChannelMessageType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of message.</p>
     */
    inline void SetType(ChannelMessageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of message.</p>
     */
    inline ChannelMessageSummary& WithType(const ChannelMessageType& value) { SetType(value); return *this;}

    /**
     * <p>The type of message.</p>
     */
    inline ChannelMessageSummary& WithType(ChannelMessageType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The time at which the message summary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the message summary was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the message summary was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the message summary was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the message summary was created.</p>
     */
    inline ChannelMessageSummary& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the message summary was created.</p>
     */
    inline ChannelMessageSummary& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which a message was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The time at which a message was last updated.</p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p>The time at which a message was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>The time at which a message was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>The time at which a message was last updated.</p>
     */
    inline ChannelMessageSummary& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which a message was last updated.</p>
     */
    inline ChannelMessageSummary& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which a message was last edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEditedTimestamp() const{ return m_lastEditedTimestamp; }

    /**
     * <p>The time at which a message was last edited.</p>
     */
    inline bool LastEditedTimestampHasBeenSet() const { return m_lastEditedTimestampHasBeenSet; }

    /**
     * <p>The time at which a message was last edited.</p>
     */
    inline void SetLastEditedTimestamp(const Aws::Utils::DateTime& value) { m_lastEditedTimestampHasBeenSet = true; m_lastEditedTimestamp = value; }

    /**
     * <p>The time at which a message was last edited.</p>
     */
    inline void SetLastEditedTimestamp(Aws::Utils::DateTime&& value) { m_lastEditedTimestampHasBeenSet = true; m_lastEditedTimestamp = std::move(value); }

    /**
     * <p>The time at which a message was last edited.</p>
     */
    inline ChannelMessageSummary& WithLastEditedTimestamp(const Aws::Utils::DateTime& value) { SetLastEditedTimestamp(value); return *this;}

    /**
     * <p>The time at which a message was last edited.</p>
     */
    inline ChannelMessageSummary& WithLastEditedTimestamp(Aws::Utils::DateTime&& value) { SetLastEditedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The message sender.</p>
     */
    inline const Identity& GetSender() const{ return m_sender; }

    /**
     * <p>The message sender.</p>
     */
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }

    /**
     * <p>The message sender.</p>
     */
    inline void SetSender(const Identity& value) { m_senderHasBeenSet = true; m_sender = value; }

    /**
     * <p>The message sender.</p>
     */
    inline void SetSender(Identity&& value) { m_senderHasBeenSet = true; m_sender = std::move(value); }

    /**
     * <p>The message sender.</p>
     */
    inline ChannelMessageSummary& WithSender(const Identity& value) { SetSender(value); return *this;}

    /**
     * <p>The message sender.</p>
     */
    inline ChannelMessageSummary& WithSender(Identity&& value) { SetSender(std::move(value)); return *this;}


    /**
     * <p>Indicates whether a message was redacted.</p>
     */
    inline bool GetRedacted() const{ return m_redacted; }

    /**
     * <p>Indicates whether a message was redacted.</p>
     */
    inline bool RedactedHasBeenSet() const { return m_redactedHasBeenSet; }

    /**
     * <p>Indicates whether a message was redacted.</p>
     */
    inline void SetRedacted(bool value) { m_redactedHasBeenSet = true; m_redacted = value; }

    /**
     * <p>Indicates whether a message was redacted.</p>
     */
    inline ChannelMessageSummary& WithRedacted(bool value) { SetRedacted(value); return *this;}


    /**
     * <p>The message status. The status value is <code>SENT</code> for messages sent
     * to a channel without a channel flow. For channels associated with channel flow,
     * the value determines the processing stage.</p>
     */
    inline const ChannelMessageStatusStructure& GetStatus() const{ return m_status; }

    /**
     * <p>The message status. The status value is <code>SENT</code> for messages sent
     * to a channel without a channel flow. For channels associated with channel flow,
     * the value determines the processing stage.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The message status. The status value is <code>SENT</code> for messages sent
     * to a channel without a channel flow. For channels associated with channel flow,
     * the value determines the processing stage.</p>
     */
    inline void SetStatus(const ChannelMessageStatusStructure& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The message status. The status value is <code>SENT</code> for messages sent
     * to a channel without a channel flow. For channels associated with channel flow,
     * the value determines the processing stage.</p>
     */
    inline void SetStatus(ChannelMessageStatusStructure&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The message status. The status value is <code>SENT</code> for messages sent
     * to a channel without a channel flow. For channels associated with channel flow,
     * the value determines the processing stage.</p>
     */
    inline ChannelMessageSummary& WithStatus(const ChannelMessageStatusStructure& value) { SetStatus(value); return *this;}

    /**
     * <p>The message status. The status value is <code>SENT</code> for messages sent
     * to a channel without a channel flow. For channels associated with channel flow,
     * the value determines the processing stage.</p>
     */
    inline ChannelMessageSummary& WithStatus(ChannelMessageStatusStructure&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }

    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }

    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::move(value); }

    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline ChannelMessageSummary& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline ChannelMessageSummary& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(std::move(value)); return *this;}

    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline ChannelMessageSummary& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }

    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline ChannelMessageSummary& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline ChannelMessageSummary& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline ChannelMessageSummary& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline ChannelMessageSummary& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The message attribues listed in a the summary of a channel message.</p>
     */
    inline ChannelMessageSummary& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    ChannelMessageType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastEditedTimestamp;
    bool m_lastEditedTimestampHasBeenSet = false;

    Identity m_sender;
    bool m_senderHasBeenSet = false;

    bool m_redacted;
    bool m_redactedHasBeenSet = false;

    ChannelMessageStatusStructure m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
