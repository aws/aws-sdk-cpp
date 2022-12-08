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


    /**
     * <p>The push notification configuration of the message.</p>
     */
    inline const PushNotificationConfiguration& GetPushNotification() const{ return m_pushNotification; }

    /**
     * <p>The push notification configuration of the message.</p>
     */
    inline bool PushNotificationHasBeenSet() const { return m_pushNotificationHasBeenSet; }

    /**
     * <p>The push notification configuration of the message.</p>
     */
    inline void SetPushNotification(const PushNotificationConfiguration& value) { m_pushNotificationHasBeenSet = true; m_pushNotification = value; }

    /**
     * <p>The push notification configuration of the message.</p>
     */
    inline void SetPushNotification(PushNotificationConfiguration&& value) { m_pushNotificationHasBeenSet = true; m_pushNotification = std::move(value); }

    /**
     * <p>The push notification configuration of the message.</p>
     */
    inline ChannelMessageCallback& WithPushNotification(const PushNotificationConfiguration& value) { SetPushNotification(value); return *this;}

    /**
     * <p>The push notification configuration of the message.</p>
     */
    inline ChannelMessageCallback& WithPushNotification(PushNotificationConfiguration&& value) { SetPushNotification(std::move(value)); return *this;}


    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::move(value); }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline ChannelMessageCallback& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline ChannelMessageCallback& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline ChannelMessageCallback& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline ChannelMessageCallback& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline ChannelMessageCallback& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline ChannelMessageCallback& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline ChannelMessageCallback& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the <code>PushNotificationPreferences</code>.
     * </p>
     */
    inline ChannelMessageCallback& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }


    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline ChannelMessageCallback& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline ChannelMessageCallback& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline ChannelMessageCallback& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}

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
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
