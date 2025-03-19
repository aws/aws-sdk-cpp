/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_IVSCHAT_API CreateChatTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChatToken"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Identifier of the room that the client is trying to access. Currently this
     * must be an ARN. </p>
     */
    inline const Aws::String& GetRoomIdentifier() const { return m_roomIdentifier; }
    inline bool RoomIdentifierHasBeenSet() const { return m_roomIdentifierHasBeenSet; }
    template<typename RoomIdentifierT = Aws::String>
    void SetRoomIdentifier(RoomIdentifierT&& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = std::forward<RoomIdentifierT>(value); }
    template<typename RoomIdentifierT = Aws::String>
    CreateChatTokenRequest& WithRoomIdentifier(RoomIdentifierT&& value) { SetRoomIdentifier(std::forward<RoomIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-provided ID that uniquely identifies the user associated with
     * this token. This can be any UTF-8 encoded text.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    CreateChatTokenRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set of capabilities that the user is allowed to perform in the room. Default:
     * None (the capability to view messages is implicitly included in all
     * requests).</p>
     */
    inline const Aws::Vector<ChatTokenCapability>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<ChatTokenCapability>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<ChatTokenCapability>>
    CreateChatTokenRequest& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    inline CreateChatTokenRequest& AddCapabilities(ChatTokenCapability value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Session duration (in minutes), after which the session expires. Default: 60
     * (1 hour).</p>
     */
    inline int GetSessionDurationInMinutes() const { return m_sessionDurationInMinutes; }
    inline bool SessionDurationInMinutesHasBeenSet() const { return m_sessionDurationInMinutesHasBeenSet; }
    inline void SetSessionDurationInMinutes(int value) { m_sessionDurationInMinutesHasBeenSet = true; m_sessionDurationInMinutes = value; }
    inline CreateChatTokenRequest& WithSessionDurationInMinutes(int value) { SetSessionDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-provided attributes to encode into the token and attach to a chat
     * session. Map keys and values can contain UTF-8 encoded text. The maximum length
     * of this field is 1 KB total.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    CreateChatTokenRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    CreateChatTokenRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_roomIdentifier;
    bool m_roomIdentifierHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<ChatTokenCapability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    int m_sessionDurationInMinutes{0};
    bool m_sessionDurationInMinutesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
