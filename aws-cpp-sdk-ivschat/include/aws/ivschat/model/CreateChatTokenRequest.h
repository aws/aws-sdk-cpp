/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivschat/model/ChatTokenCapability.h>
#include <utility>

namespace Aws
{
namespace ivschat
{
namespace Model
{

  /**
   */
  class CreateChatTokenRequest : public IvschatRequest
  {
  public:
    AWS_IVSCHAT_API CreateChatTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChatToken"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline CreateChatTokenRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline CreateChatTokenRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline CreateChatTokenRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline CreateChatTokenRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline CreateChatTokenRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline CreateChatTokenRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline CreateChatTokenRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline CreateChatTokenRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline CreateChatTokenRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Set of capabilities that the user is allowed to perform in the room. Default:
     * None (the capability to view messages is implicitly included in all
     * requests).</p>
     */
    inline const Aws::Vector<ChatTokenCapability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the room. Default:
     * None (the capability to view messages is implicitly included in all
     * requests).</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the room. Default:
     * None (the capability to view messages is implicitly included in all
     * requests).</p>
     */
    inline void SetCapabilities(const Aws::Vector<ChatTokenCapability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the room. Default:
     * None (the capability to view messages is implicitly included in all
     * requests).</p>
     */
    inline void SetCapabilities(Aws::Vector<ChatTokenCapability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the room. Default:
     * None (the capability to view messages is implicitly included in all
     * requests).</p>
     */
    inline CreateChatTokenRequest& WithCapabilities(const Aws::Vector<ChatTokenCapability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>Set of capabilities that the user is allowed to perform in the room. Default:
     * None (the capability to view messages is implicitly included in all
     * requests).</p>
     */
    inline CreateChatTokenRequest& WithCapabilities(Aws::Vector<ChatTokenCapability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>Set of capabilities that the user is allowed to perform in the room. Default:
     * None (the capability to view messages is implicitly included in all
     * requests).</p>
     */
    inline CreateChatTokenRequest& AddCapabilities(const ChatTokenCapability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the room. Default:
     * None (the capability to view messages is implicitly included in all
     * requests).</p>
     */
    inline CreateChatTokenRequest& AddCapabilities(ChatTokenCapability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifier of the room that the client is trying to access. Currently this
     * must be an ARN. </p>
     */
    inline const Aws::String& GetRoomIdentifier() const{ return m_roomIdentifier; }

    /**
     * <p>Identifier of the room that the client is trying to access. Currently this
     * must be an ARN. </p>
     */
    inline bool RoomIdentifierHasBeenSet() const { return m_roomIdentifierHasBeenSet; }

    /**
     * <p>Identifier of the room that the client is trying to access. Currently this
     * must be an ARN. </p>
     */
    inline void SetRoomIdentifier(const Aws::String& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = value; }

    /**
     * <p>Identifier of the room that the client is trying to access. Currently this
     * must be an ARN. </p>
     */
    inline void SetRoomIdentifier(Aws::String&& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = std::move(value); }

    /**
     * <p>Identifier of the room that the client is trying to access. Currently this
     * must be an ARN. </p>
     */
    inline void SetRoomIdentifier(const char* value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier.assign(value); }

    /**
     * <p>Identifier of the room that the client is trying to access. Currently this
     * must be an ARN. </p>
     */
    inline CreateChatTokenRequest& WithRoomIdentifier(const Aws::String& value) { SetRoomIdentifier(value); return *this;}

    /**
     * <p>Identifier of the room that the client is trying to access. Currently this
     * must be an ARN. </p>
     */
    inline CreateChatTokenRequest& WithRoomIdentifier(Aws::String&& value) { SetRoomIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifier of the room that the client is trying to access. Currently this
     * must be an ARN. </p>
     */
    inline CreateChatTokenRequest& WithRoomIdentifier(const char* value) { SetRoomIdentifier(value); return *this;}


    /**
     * <p>Session duration (in minutes), after which the session expires. Default: 60
     * (1 hour).</p>
     */
    inline int GetSessionDurationInMinutes() const{ return m_sessionDurationInMinutes; }

    /**
     * <p>Session duration (in minutes), after which the session expires. Default: 60
     * (1 hour).</p>
     */
    inline bool SessionDurationInMinutesHasBeenSet() const { return m_sessionDurationInMinutesHasBeenSet; }

    /**
     * <p>Session duration (in minutes), after which the session expires. Default: 60
     * (1 hour).</p>
     */
    inline void SetSessionDurationInMinutes(int value) { m_sessionDurationInMinutesHasBeenSet = true; m_sessionDurationInMinutes = value; }

    /**
     * <p>Session duration (in minutes), after which the session expires. Default: 60
     * (1 hour).</p>
     */
    inline CreateChatTokenRequest& WithSessionDurationInMinutes(int value) { SetSessionDurationInMinutes(value); return *this;}


    /**
     * <p>Application-provided ID that uniquely identifies the user associated with
     * this token. This can be any UTF-8 encoded text.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>Application-provided ID that uniquely identifies the user associated with
     * this token. This can be any UTF-8 encoded text.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>Application-provided ID that uniquely identifies the user associated with
     * this token. This can be any UTF-8 encoded text.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>Application-provided ID that uniquely identifies the user associated with
     * this token. This can be any UTF-8 encoded text.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>Application-provided ID that uniquely identifies the user associated with
     * this token. This can be any UTF-8 encoded text.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>Application-provided ID that uniquely identifies the user associated with
     * this token. This can be any UTF-8 encoded text.</p>
     */
    inline CreateChatTokenRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>Application-provided ID that uniquely identifies the user associated with
     * this token. This can be any UTF-8 encoded text.</p>
     */
    inline CreateChatTokenRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>Application-provided ID that uniquely identifies the user associated with
     * this token. This can be any UTF-8 encoded text.</p>
     */
    inline CreateChatTokenRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<ChatTokenCapability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_roomIdentifier;
    bool m_roomIdentifierHasBeenSet = false;

    int m_sessionDurationInMinutes;
    bool m_sessionDurationInMinutesHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
