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
   * <p>A summary of the messages in a channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ChannelMessageSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API ChannelMessageSummary
  {
  public:
    ChannelMessageSummary();
    ChannelMessageSummary(Aws::Utils::Json::JsonView jsonValue);
    ChannelMessageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the message summary.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID of the message summary.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The ID of the message summary.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The ID of the message summary.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The ID of the message summary.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The ID of the message summary.</p>
     */
    inline ChannelMessageSummary& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The ID of the message summary.</p>
     */
    inline ChannelMessageSummary& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the message summary.</p>
     */
    inline ChannelMessageSummary& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The content of the message summary.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the message summary.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the message summary.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the message summary.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the message summary.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the message summary.</p>
     */
    inline ChannelMessageSummary& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the message summary.</p>
     */
    inline ChannelMessageSummary& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the message summary.</p>
     */
    inline ChannelMessageSummary& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The metadata of the message summary.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the message summary.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata of the message summary.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata of the message summary.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata of the message summary.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The metadata of the message summary.</p>
     */
    inline ChannelMessageSummary& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the message summary.</p>
     */
    inline ChannelMessageSummary& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata of the message summary.</p>
     */
    inline ChannelMessageSummary& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The type of message summary.</p>
     */
    inline const ChannelMessageType& GetType() const{ return m_type; }

    /**
     * <p>The type of message summary.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of message summary.</p>
     */
    inline void SetType(const ChannelMessageType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of message summary.</p>
     */
    inline void SetType(ChannelMessageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of message summary.</p>
     */
    inline ChannelMessageSummary& WithType(const ChannelMessageType& value) { SetType(value); return *this;}

    /**
     * <p>The type of message summary.</p>
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


    
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    
    inline ChannelMessageSummary& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    
    inline ChannelMessageSummary& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetLastEditedTimestamp() const{ return m_lastEditedTimestamp; }

    
    inline bool LastEditedTimestampHasBeenSet() const { return m_lastEditedTimestampHasBeenSet; }

    
    inline void SetLastEditedTimestamp(const Aws::Utils::DateTime& value) { m_lastEditedTimestampHasBeenSet = true; m_lastEditedTimestamp = value; }

    
    inline void SetLastEditedTimestamp(Aws::Utils::DateTime&& value) { m_lastEditedTimestampHasBeenSet = true; m_lastEditedTimestamp = std::move(value); }

    
    inline ChannelMessageSummary& WithLastEditedTimestamp(const Aws::Utils::DateTime& value) { SetLastEditedTimestamp(value); return *this;}

    
    inline ChannelMessageSummary& WithLastEditedTimestamp(Aws::Utils::DateTime&& value) { SetLastEditedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The sender of the message summary.</p>
     */
    inline const Identity& GetSender() const{ return m_sender; }

    /**
     * <p>The sender of the message summary.</p>
     */
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }

    /**
     * <p>The sender of the message summary.</p>
     */
    inline void SetSender(const Identity& value) { m_senderHasBeenSet = true; m_sender = value; }

    /**
     * <p>The sender of the message summary.</p>
     */
    inline void SetSender(Identity&& value) { m_senderHasBeenSet = true; m_sender = std::move(value); }

    /**
     * <p>The sender of the message summary.</p>
     */
    inline ChannelMessageSummary& WithSender(const Identity& value) { SetSender(value); return *this;}

    /**
     * <p>The sender of the message summary.</p>
     */
    inline ChannelMessageSummary& WithSender(Identity&& value) { SetSender(std::move(value)); return *this;}


    /**
     * <p>Redacts the content of a message summary.</p>
     */
    inline bool GetRedacted() const{ return m_redacted; }

    /**
     * <p>Redacts the content of a message summary.</p>
     */
    inline bool RedactedHasBeenSet() const { return m_redactedHasBeenSet; }

    /**
     * <p>Redacts the content of a message summary.</p>
     */
    inline void SetRedacted(bool value) { m_redactedHasBeenSet = true; m_redacted = value; }

    /**
     * <p>Redacts the content of a message summary.</p>
     */
    inline ChannelMessageSummary& WithRedacted(bool value) { SetRedacted(value); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet;

    ChannelMessageType m_type;
    bool m_typeHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet;

    Aws::Utils::DateTime m_lastEditedTimestamp;
    bool m_lastEditedTimestampHasBeenSet;

    Identity m_sender;
    bool m_senderHasBeenSet;

    bool m_redacted;
    bool m_redactedHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
