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
#include <aws/chime-sdk-messaging/model/ChannelMessagePersistenceType.h>
#include <aws/chime-sdk-messaging/model/ChannelMessageStatusStructure.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/MessageAttributeValue.h>
#include <aws/chime-sdk-messaging/model/Target.h>
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
   * <p>The details of a message in a channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelMessage">AWS
   * API Reference</a></p>
   */
  class ChannelMessage
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelMessage() = default;
    AWS_CHIMESDKMESSAGING_API ChannelMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    ChannelMessage& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a message.</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    ChannelMessage& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the channel message. For Amazon Lex V2 bot responses, this
     * field holds a list of messages originating from the bot. For more information,
     * refer to <a
     * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/appinstance-bots#process-response.html">Processing
     * responses from an AppInstanceBot</a> in the <i>Amazon Chime SDK Messaging
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    ChannelMessage& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message metadata.</p>
     */
    inline const Aws::String& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::String>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::String>
    ChannelMessage& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message type.</p>
     */
    inline ChannelMessageType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChannelMessageType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ChannelMessage& WithType(ChannelMessageType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the message was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    ChannelMessage& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a message was edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEditedTimestamp() const { return m_lastEditedTimestamp; }
    inline bool LastEditedTimestampHasBeenSet() const { return m_lastEditedTimestampHasBeenSet; }
    template<typename LastEditedTimestampT = Aws::Utils::DateTime>
    void SetLastEditedTimestamp(LastEditedTimestampT&& value) { m_lastEditedTimestampHasBeenSet = true; m_lastEditedTimestamp = std::forward<LastEditedTimestampT>(value); }
    template<typename LastEditedTimestampT = Aws::Utils::DateTime>
    ChannelMessage& WithLastEditedTimestamp(LastEditedTimestampT&& value) { SetLastEditedTimestamp(std::forward<LastEditedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a message was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    ChannelMessage& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message sender.</p>
     */
    inline const Identity& GetSender() const { return m_sender; }
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }
    template<typename SenderT = Identity>
    void SetSender(SenderT&& value) { m_senderHasBeenSet = true; m_sender = std::forward<SenderT>(value); }
    template<typename SenderT = Identity>
    ChannelMessage& WithSender(SenderT&& value) { SetSender(std::forward<SenderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hides the content of a message.</p>
     */
    inline bool GetRedacted() const { return m_redacted; }
    inline bool RedactedHasBeenSet() const { return m_redactedHasBeenSet; }
    inline void SetRedacted(bool value) { m_redactedHasBeenSet = true; m_redacted = value; }
    inline ChannelMessage& WithRedacted(bool value) { SetRedacted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The persistence setting for a channel message.</p>
     */
    inline ChannelMessagePersistenceType GetPersistence() const { return m_persistence; }
    inline bool PersistenceHasBeenSet() const { return m_persistenceHasBeenSet; }
    inline void SetPersistence(ChannelMessagePersistenceType value) { m_persistenceHasBeenSet = true; m_persistence = value; }
    inline ChannelMessage& WithPersistence(ChannelMessagePersistenceType value) { SetPersistence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the channel message.</p>
     */
    inline const ChannelMessageStatusStructure& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = ChannelMessageStatusStructure>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ChannelMessageStatusStructure>
    ChannelMessage& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes for the channel message. For Amazon Lex V2 bot responses, the
     * attributes are mapped to specific fields from the bot. For more information,
     * refer to <a
     * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/appinstance-bots#process-response.html">Processing
     * responses from an AppInstanceBot</a> in the <i>Amazon Chime SDK Messaging
     * Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const { return m_messageAttributes; }
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }
    template<typename MessageAttributesT = Aws::Map<Aws::String, MessageAttributeValue>>
    void SetMessageAttributes(MessageAttributesT&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::forward<MessageAttributesT>(value); }
    template<typename MessageAttributesT = Aws::Map<Aws::String, MessageAttributeValue>>
    ChannelMessage& WithMessageAttributes(MessageAttributesT&& value) { SetMessageAttributes(std::forward<MessageAttributesT>(value)); return *this;}
    template<typename MessageAttributesKeyT = Aws::String, typename MessageAttributesValueT = MessageAttributeValue>
    ChannelMessage& AddMessageAttributes(MessageAttributesKeyT&& key, MessageAttributesValueT&& value) {
      m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::forward<MessageAttributesKeyT>(key), std::forward<MessageAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline const Aws::String& GetSubChannelId() const { return m_subChannelId; }
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }
    template<typename SubChannelIdT = Aws::String>
    void SetSubChannelId(SubChannelIdT&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::forward<SubChannelIdT>(value); }
    template<typename SubChannelIdT = Aws::String>
    ChannelMessage& WithSubChannelId(SubChannelIdT&& value) { SetSubChannelId(std::forward<SubChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the channel message. For Amazon Lex V2 bot responses, the
     * content type is <code>application/amz-chime-lex-msgs</code> for success
     * responses and <code>application/amz-chime-lex-error</code> for failure
     * responses. For more information, refer to <a
     * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/appinstance-bots#process-response.html">Processing
     * responses from an AppInstanceBot</a> in the <i>Amazon Chime SDK Messaging
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    ChannelMessage& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of a message, a sender, a user, or a bot. Only the target and the
     * sender can view targeted messages. Only users who can see targeted messages can
     * take actions on them. However, administrators can delete targeted messages that
     * they can’t see.</p>
     */
    inline const Aws::Vector<Target>& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::Vector<Target>>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::Vector<Target>>
    ChannelMessage& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    template<typename TargetT = Target>
    ChannelMessage& AddTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target.emplace_back(std::forward<TargetT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    ChannelMessageType m_type{ChannelMessageType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastEditedTimestamp{};
    bool m_lastEditedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Identity m_sender;
    bool m_senderHasBeenSet = false;

    bool m_redacted{false};
    bool m_redactedHasBeenSet = false;

    ChannelMessagePersistenceType m_persistence{ChannelMessagePersistenceType::NOT_SET};
    bool m_persistenceHasBeenSet = false;

    ChannelMessageStatusStructure m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet = false;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Vector<Target> m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
