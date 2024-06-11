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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/MessageAttributeValue.h>
#include <aws/chime-sdk-messaging/model/Target.h>
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


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline SendChannelMessageRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline SendChannelMessageRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline SendChannelMessageRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the channel message.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline SendChannelMessageRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline SendChannelMessageRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline SendChannelMessageRequest& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message, <code>STANDARD</code> or <code>CONTROL</code>.</p> <p>
     * <code>STANDARD</code> messages can be up to 4KB in size and contain metadata.
     * Metadata is arbitrary, and you can use it in a variety of ways, such as
     * containing a link to an attachment.</p> <p> <code>CONTROL</code> messages are
     * limited to 30 bytes and do not contain metadata.</p>
     */
    inline const ChannelMessageType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ChannelMessageType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ChannelMessageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SendChannelMessageRequest& WithType(const ChannelMessageType& value) { SetType(value); return *this;}
    inline SendChannelMessageRequest& WithType(ChannelMessageType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean that controls whether the message is persisted on the back end.
     * Required.</p>
     */
    inline const ChannelMessagePersistenceType& GetPersistence() const{ return m_persistence; }
    inline bool PersistenceHasBeenSet() const { return m_persistenceHasBeenSet; }
    inline void SetPersistence(const ChannelMessagePersistenceType& value) { m_persistenceHasBeenSet = true; m_persistence = value; }
    inline void SetPersistence(ChannelMessagePersistenceType&& value) { m_persistenceHasBeenSet = true; m_persistence = std::move(value); }
    inline SendChannelMessageRequest& WithPersistence(const ChannelMessagePersistenceType& value) { SetPersistence(value); return *this;}
    inline SendChannelMessageRequest& WithPersistence(ChannelMessagePersistenceType&& value) { SetPersistence(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional metadata for each message.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }
    inline SendChannelMessageRequest& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline SendChannelMessageRequest& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline SendChannelMessageRequest& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Idempotency</code> token for each client request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline SendChannelMessageRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline SendChannelMessageRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline SendChannelMessageRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code>
     * that makes the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }
    inline SendChannelMessageRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}
    inline SendChannelMessageRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}
    inline SendChannelMessageRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The push notification configuration of the message.</p>
     */
    inline const PushNotificationConfiguration& GetPushNotification() const{ return m_pushNotification; }
    inline bool PushNotificationHasBeenSet() const { return m_pushNotificationHasBeenSet; }
    inline void SetPushNotification(const PushNotificationConfiguration& value) { m_pushNotificationHasBeenSet = true; m_pushNotification = value; }
    inline void SetPushNotification(PushNotificationConfiguration&& value) { m_pushNotificationHasBeenSet = true; m_pushNotification = std::move(value); }
    inline SendChannelMessageRequest& WithPushNotification(const PushNotificationConfiguration& value) { SetPushNotification(value); return *this;}
    inline SendChannelMessageRequest& WithPushNotification(PushNotificationConfiguration&& value) { SetPushNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes for the message, used for message filtering along with a
     * <code>FilterRule</code> defined in the
     * <code>PushNotificationPreferences</code>.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::move(value); }
    inline SendChannelMessageRequest& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}
    inline SendChannelMessageRequest& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(std::move(value)); return *this;}
    inline SendChannelMessageRequest& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }
    inline SendChannelMessageRequest& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), value); return *this; }
    inline SendChannelMessageRequest& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }
    inline SendChannelMessageRequest& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline SendChannelMessageRequest& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }
    inline SendChannelMessageRequest& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the SubChannel in the request.</p>
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }
    inline SendChannelMessageRequest& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}
    inline SendChannelMessageRequest& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}
    inline SendChannelMessageRequest& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the channel message.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline SendChannelMessageRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline SendChannelMessageRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline SendChannelMessageRequest& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of a message. Must be a member of the channel, such as another
     * user, a bot, or the sender. Only the target and the sender can view targeted
     * messages. Only users who can see targeted messages can take actions on them.
     * However, administrators can delete targeted messages that they can’t see. </p>
     */
    inline const Aws::Vector<Target>& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::Vector<Target>& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::Vector<Target>&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline SendChannelMessageRequest& WithTarget(const Aws::Vector<Target>& value) { SetTarget(value); return *this;}
    inline SendChannelMessageRequest& WithTarget(Aws::Vector<Target>&& value) { SetTarget(std::move(value)); return *this;}
    inline SendChannelMessageRequest& AddTarget(const Target& value) { m_targetHasBeenSet = true; m_target.push_back(value); return *this; }
    inline SendChannelMessageRequest& AddTarget(Target&& value) { m_targetHasBeenSet = true; m_target.push_back(std::move(value)); return *this; }
    ///@}
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

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Vector<Target> m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
