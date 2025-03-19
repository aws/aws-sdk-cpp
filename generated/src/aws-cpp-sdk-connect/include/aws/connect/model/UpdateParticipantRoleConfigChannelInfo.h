/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ChatParticipantRoleConfig.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Configuration information for the chat participant role.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateParticipantRoleConfigChannelInfo">AWS
   * API Reference</a></p>
   */
  class UpdateParticipantRoleConfigChannelInfo
  {
  public:
    AWS_CONNECT_API UpdateParticipantRoleConfigChannelInfo() = default;
    AWS_CONNECT_API UpdateParticipantRoleConfigChannelInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UpdateParticipantRoleConfigChannelInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration information for the chat participant role.</p>
     */
    inline const ChatParticipantRoleConfig& GetChat() const { return m_chat; }
    inline bool ChatHasBeenSet() const { return m_chatHasBeenSet; }
    template<typename ChatT = ChatParticipantRoleConfig>
    void SetChat(ChatT&& value) { m_chatHasBeenSet = true; m_chat = std::forward<ChatT>(value); }
    template<typename ChatT = ChatParticipantRoleConfig>
    UpdateParticipantRoleConfigChannelInfo& WithChat(ChatT&& value) { SetChat(std::forward<ChatT>(value)); return *this;}
    ///@}
  private:

    ChatParticipantRoleConfig m_chat;
    bool m_chatHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
