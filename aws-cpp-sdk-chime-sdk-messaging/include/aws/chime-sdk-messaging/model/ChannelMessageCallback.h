/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Stores information about a callback.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelMessageCallback">AWS
   * API Reference</a></p>
   */
  class AWS_CHIMESDKMESSAGING_API ChannelMessageCallback
  {
  public:
    ChannelMessageCallback();
    ChannelMessageCallback(Aws::Utils::Json::JsonView jsonValue);
    ChannelMessageCallback& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message ID.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The message ID.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The message ID.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The message ID.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The message ID.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The message ID.</p>
     */
    inline ChannelMessageCallback& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The message ID.</p>
     */
    inline ChannelMessageCallback& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The message ID.</p>
     */
    inline ChannelMessageCallback& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The message content.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The message content.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The message content.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The message content.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The message content.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The message content.</p>
     */
    inline ChannelMessageCallback& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The message content.</p>
     */
    inline ChannelMessageCallback& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The message content.</p>
     */
    inline ChannelMessageCallback& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The message metadata.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The message metadata.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The message metadata.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The message metadata.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The message metadata.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The message metadata.</p>
     */
    inline ChannelMessageCallback& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The message metadata.</p>
     */
    inline ChannelMessageCallback& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The message metadata.</p>
     */
    inline ChannelMessageCallback& WithMetadata(const char* value) { SetMetadata(value); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
