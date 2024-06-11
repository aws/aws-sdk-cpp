/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/ChannelMessageType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime/model/Identity.h>
#include <aws/chime/model/ChannelMessagePersistenceType.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The details of a message in a channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ChannelMessage">AWS
   * API Reference</a></p>
   */
  class ChannelMessage
  {
  public:
    AWS_CHIME_API ChannelMessage();
    AWS_CHIME_API ChannelMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API ChannelMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline ChannelMessage& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline ChannelMessage& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline ChannelMessage& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline ChannelMessage& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline ChannelMessage& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline ChannelMessage& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message content.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline ChannelMessage& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline ChannelMessage& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline ChannelMessage& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message metadata.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }
    inline ChannelMessage& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline ChannelMessage& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline ChannelMessage& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message type.</p>
     */
    inline const ChannelMessageType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ChannelMessageType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ChannelMessageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ChannelMessage& WithType(const ChannelMessageType& value) { SetType(value); return *this;}
    inline ChannelMessage& WithType(ChannelMessageType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the message was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ChannelMessage& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ChannelMessage& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a message was edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEditedTimestamp() const{ return m_lastEditedTimestamp; }
    inline bool LastEditedTimestampHasBeenSet() const { return m_lastEditedTimestampHasBeenSet; }
    inline void SetLastEditedTimestamp(const Aws::Utils::DateTime& value) { m_lastEditedTimestampHasBeenSet = true; m_lastEditedTimestamp = value; }
    inline void SetLastEditedTimestamp(Aws::Utils::DateTime&& value) { m_lastEditedTimestampHasBeenSet = true; m_lastEditedTimestamp = std::move(value); }
    inline ChannelMessage& WithLastEditedTimestamp(const Aws::Utils::DateTime& value) { SetLastEditedTimestamp(value); return *this;}
    inline ChannelMessage& WithLastEditedTimestamp(Aws::Utils::DateTime&& value) { SetLastEditedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a message was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline ChannelMessage& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline ChannelMessage& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message sender.</p>
     */
    inline const Identity& GetSender() const{ return m_sender; }
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }
    inline void SetSender(const Identity& value) { m_senderHasBeenSet = true; m_sender = value; }
    inline void SetSender(Identity&& value) { m_senderHasBeenSet = true; m_sender = std::move(value); }
    inline ChannelMessage& WithSender(const Identity& value) { SetSender(value); return *this;}
    inline ChannelMessage& WithSender(Identity&& value) { SetSender(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hides the content of a message.</p>
     */
    inline bool GetRedacted() const{ return m_redacted; }
    inline bool RedactedHasBeenSet() const { return m_redactedHasBeenSet; }
    inline void SetRedacted(bool value) { m_redactedHasBeenSet = true; m_redacted = value; }
    inline ChannelMessage& WithRedacted(bool value) { SetRedacted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The persistence setting for a channel message.</p>
     */
    inline const ChannelMessagePersistenceType& GetPersistence() const{ return m_persistence; }
    inline bool PersistenceHasBeenSet() const { return m_persistenceHasBeenSet; }
    inline void SetPersistence(const ChannelMessagePersistenceType& value) { m_persistenceHasBeenSet = true; m_persistence = value; }
    inline void SetPersistence(ChannelMessagePersistenceType&& value) { m_persistenceHasBeenSet = true; m_persistence = std::move(value); }
    inline ChannelMessage& WithPersistence(const ChannelMessagePersistenceType& value) { SetPersistence(value); return *this;}
    inline ChannelMessage& WithPersistence(ChannelMessagePersistenceType&& value) { SetPersistence(std::move(value)); return *this;}
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

    ChannelMessageType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastEditedTimestamp;
    bool m_lastEditedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Identity m_sender;
    bool m_senderHasBeenSet = false;

    bool m_redacted;
    bool m_redactedHasBeenSet = false;

    ChannelMessagePersistenceType m_persistence;
    bool m_persistenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
