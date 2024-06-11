/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/PushNotificationConfiguration.h>
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
   * <p>Stores information about a callback.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelMessageCallback">AWS
   * API Reference</a></p>
   */
  class ChannelMessageCallback
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelMessageCallback();
    AWS_CHIMESDKMESSAGING_API ChannelMessageCallback(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMessageCallback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message ID.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline ChannelMessageCallback& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline ChannelMessageCallback& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline ChannelMessageCallback& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message content. For Amazon Lex V2 bot responses, this field holds a list
     * of messages originating from the bot. For more information, refer to <a
     * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/appinstance-bots#process-response.html">Processing
     * responses from an AppInstanceBot</a> in the <i>Amazon Chime SDK Messaging
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline ChannelMessageCallback& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline ChannelMessageCallback& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline ChannelMessageCallback& WithContent(const char* value) { SetContent(value); return *this;}
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
    inline ChannelMessageCallback& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline ChannelMessageCallback& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline ChannelMessageCallback& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The push notification configuration of the message.</p>
     */
    inline const PushNotificationConfiguration& GetPushNotification() const{ return m_pushNotification; }
    inline bool PushNotificationHasBeenSet() const { return m_pushNotificationHasBeenSet; }
    inline void SetPushNotification(const PushNotificationConfiguration& value) { m_pushNotificationHasBeenSet = true; m_pushNotification = value; }
    inline void SetPushNotification(PushNotificationConfiguration&& value) { m_pushNotificationHasBeenSet = true; m_pushNotification = std::move(value); }
    inline ChannelMessageCallback& WithPushNotification(const PushNotificationConfiguration& value) { SetPushNotification(value); return *this;}
    inline ChannelMessageCallback& WithPushNotification(PushNotificationConfiguration&& value) { SetPushNotification(std::move(value)); return *this;}
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
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::move(value); }
    inline ChannelMessageCallback& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}
    inline ChannelMessageCallback& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(std::move(value)); return *this;}
    inline ChannelMessageCallback& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }
    inline ChannelMessageCallback& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), value); return *this; }
    inline ChannelMessageCallback& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }
    inline ChannelMessageCallback& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ChannelMessageCallback& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }
    inline ChannelMessageCallback& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }
    inline ChannelMessageCallback& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}
    inline ChannelMessageCallback& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}
    inline ChannelMessageCallback& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the call-back message. For Amazon Lex V2 bot responses,
     * the content type is <code>application/amz-chime-lex-msgs</code> for success
     * responses and <code>application/amz-chime-lex-error</code> for failure
     * responses. For more information, refer to <a
     * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/appinstance-bots#process-response.html">Processing
     * responses from an AppInstanceBot</a> in the <i>Amazon Chime SDK Messaging
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline ChannelMessageCallback& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline ChannelMessageCallback& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline ChannelMessageCallback& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    PushNotificationConfiguration m_pushNotification;
    bool m_pushNotificationHasBeenSet = false;

    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet = false;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
