/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMessageType.h>
#include <aws/chime-sdk-messaging/model/ChannelMessagePersistenceType.h>
#include <aws/chime-sdk-messaging/model/PushNotificationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/chime-sdk-messaging/model/MessageAttributeValue.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class SendChannelMessageRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API SendChannelMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendChannelMessage"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline SendChannelMessageRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline SendChannelMessageRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline SendChannelMessageRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


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
    inline SendChannelMessageRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the message.</p>
     */
    inline SendChannelMessageRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the message.</p>
     */
    inline SendChannelMessageRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The type of message, <code>STANDARD</code> or <code>CONTROL</code>.</p>
     */
    inline const ChannelMessageType& GetType() const{ return m_type; }

    /**
     * <p>The type of message, <code>STANDARD</code> or <code>CONTROL</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of message, <code>STANDARD</code> or <code>CONTROL</code>.</p>
     */
    inline void SetType(const ChannelMessageType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of message, <code>STANDARD</code> or <code>CONTROL</code>.</p>
     */
    inline void SetType(ChannelMessageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of message, <code>STANDARD</code> or <code>CONTROL</code>.</p>
     */
    inline SendChannelMessageRequest& WithType(const ChannelMessageType& value) { SetType(value); return *this;}

    /**
     * <p>The type of message, <code>STANDARD</code> or <code>CONTROL</code>.</p>
     */
    inline SendChannelMessageRequest& WithType(ChannelMessageType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Boolean that controls whether the message is persisted on the back end.
     * Required.</p>
     */
    inline const ChannelMessagePersistenceType& GetPersistence() const{ return m_persistence; }

    /**
     * <p>Boolean that controls whether the message is persisted on the back end.
     * Required.</p>
     */
    inline bool PersistenceHasBeenSet() const { return m_persistenceHasBeenSet; }

    /**
     * <p>Boolean that controls whether the message is persisted on the back end.
     * Required.</p>
     */
    inline void SetPersistence(const ChannelMessagePersistenceType& value) { m_persistenceHasBeenSet = true; m_persistence = value; }

    /**
     * <p>Boolean that controls whether the message is persisted on the back end.
     * Required.</p>
     */
    inline void SetPersistence(ChannelMessagePersistenceType&& value) { m_persistenceHasBeenSet = true; m_persistence = std::move(value); }

    /**
     * <p>Boolean that controls whether the message is persisted on the back end.
     * Required.</p>
     */
    inline SendChannelMessageRequest& WithPersistence(const ChannelMessagePersistenceType& value) { SetPersistence(value); return *this;}

    /**
     * <p>Boolean that controls whether the message is persisted on the back end.
     * Required.</p>
     */
    inline SendChannelMessageRequest& WithPersistence(ChannelMessagePersistenceType&& value) { SetPersistence(std::move(value)); return *this;}


    /**
     * <p>The optional metadata for each message.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The optional metadata for each message.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The optional metadata for each message.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The optional metadata for each message.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The optional metadata for each message.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The optional metadata for each message.</p>
     */
    inline SendChannelMessageRequest& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The optional metadata for each message.</p>
     */
    inline SendChannelMessageRequest& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The optional metadata for each message.</p>
     */
    inline SendChannelMessageRequest& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The <code>Idempotency</code> token for each client request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The <code>Idempotency</code> token for each client request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The <code>Idempotency</code> token for each client request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The <code>Idempotency</code> token for each client request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The <code>Idempotency</code> token for each client request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The <code>Idempotency</code> token for each client request.</p>
     */
    inline SendChannelMessageRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The <code>Idempotency</code> token for each client request.</p>
     */
    inline SendChannelMessageRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The <code>Idempotency</code> token for each client request.</p>
     */
    inline SendChannelMessageRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline SendChannelMessageRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline SendChannelMessageRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline SendChannelMessageRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}


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
    inline SendChannelMessageRequest& WithPushNotification(const PushNotificationConfiguration& value) { SetPushNotification(value); return *this;}

    /**
     * <p>The push notification configuration of the message.</p>
     */
    inline SendChannelMessageRequest& WithPushNotification(PushNotificationConfiguration&& value) { SetPushNotification(std::move(value)); return *this;}


    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::move(value); }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline SendChannelMessageRequest& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline SendChannelMessageRequest& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline SendChannelMessageRequest& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline SendChannelMessageRequest& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline SendChannelMessageRequest& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline SendChannelMessageRequest& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline SendChannelMessageRequest& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline SendChannelMessageRequest& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }


    /**
     * <p>The ID of the SubChannel in the request.</p>
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }

    /**
     * <p>The ID of the SubChannel in the request.</p>
     */
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }

    /**
     * <p>The ID of the SubChannel in the request.</p>
     */
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }

    /**
     * <p>The ID of the SubChannel in the request.</p>
     */
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }

    /**
     * <p>The ID of the SubChannel in the request.</p>
     */
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }

    /**
     * <p>The ID of the SubChannel in the request.</p>
     */
    inline SendChannelMessageRequest& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}

    /**
     * <p>The ID of the SubChannel in the request.</p>
     */
    inline SendChannelMessageRequest& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SubChannel in the request.</p>
     */
    inline SendChannelMessageRequest& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    ChannelMessageType m_type;
    bool m_typeHasBeenSet = false;

    ChannelMessagePersistenceType m_persistence;
    bool m_persistenceHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;

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
