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
   * <p>Summary of the messages in a <code>Channel</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ChannelMessageSummary">AWS
   * API Reference</a></p>
   */
  class ChannelMessageSummary
  {
  public:
    AWS_CHIME_API ChannelMessageSummary();
    AWS_CHIME_API ChannelMessageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API ChannelMessageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline ChannelMessageSummary& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline ChannelMessageSummary& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline ChannelMessageSummary& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline ChannelMessageSummary& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline ChannelMessageSummary& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline ChannelMessageSummary& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the message.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }
    inline ChannelMessageSummary& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline ChannelMessageSummary& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline ChannelMessageSummary& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message.</p>
     */
    inline const ChannelMessageType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ChannelMessageType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ChannelMessageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ChannelMessageSummary& WithType(const ChannelMessageType& value) { SetType(value); return *this;}
    inline ChannelMessageSummary& WithType(ChannelMessageType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the message summary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ChannelMessageSummary& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ChannelMessageSummary& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a message was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline ChannelMessageSummary& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline ChannelMessageSummary& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a message was last edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEditedTimestamp() const{ return m_lastEditedTimestamp; }
    inline bool LastEditedTimestampHasBeenSet() const { return m_lastEditedTimestampHasBeenSet; }
    inline void SetLastEditedTimestamp(const Aws::Utils::DateTime& value) { m_lastEditedTimestampHasBeenSet = true; m_lastEditedTimestamp = value; }
    inline void SetLastEditedTimestamp(Aws::Utils::DateTime&& value) { m_lastEditedTimestampHasBeenSet = true; m_lastEditedTimestamp = std::move(value); }
    inline ChannelMessageSummary& WithLastEditedTimestamp(const Aws::Utils::DateTime& value) { SetLastEditedTimestamp(value); return *this;}
    inline ChannelMessageSummary& WithLastEditedTimestamp(Aws::Utils::DateTime&& value) { SetLastEditedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message sender.</p>
     */
    inline const Identity& GetSender() const{ return m_sender; }
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }
    inline void SetSender(const Identity& value) { m_senderHasBeenSet = true; m_sender = value; }
    inline void SetSender(Identity&& value) { m_senderHasBeenSet = true; m_sender = std::move(value); }
    inline ChannelMessageSummary& WithSender(const Identity& value) { SetSender(value); return *this;}
    inline ChannelMessageSummary& WithSender(Identity&& value) { SetSender(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a message was redacted.</p>
     */
    inline bool GetRedacted() const{ return m_redacted; }
    inline bool RedactedHasBeenSet() const { return m_redactedHasBeenSet; }
    inline void SetRedacted(bool value) { m_redactedHasBeenSet = true; m_redacted = value; }
    inline ChannelMessageSummary& WithRedacted(bool value) { SetRedacted(value); return *this;}
    ///@}
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
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
