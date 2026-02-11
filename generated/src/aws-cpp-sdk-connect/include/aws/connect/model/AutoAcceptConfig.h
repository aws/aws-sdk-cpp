/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Channel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Configuration settings for auto-accept for a specific channel.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AutoAcceptConfig">AWS
 * API Reference</a></p>
 */
class AutoAcceptConfig {
 public:
  AWS_CONNECT_API AutoAcceptConfig() = default;
  AWS_CONNECT_API AutoAcceptConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AutoAcceptConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The channel for this auto-accept configuration. Valid values: VOICE, CHAT,
   * TASK, EMAIL.</p>
   */
  inline Channel GetChannel() const { return m_channel; }
  inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
  inline void SetChannel(Channel value) {
    m_channelHasBeenSet = true;
    m_channel = value;
  }
  inline AutoAcceptConfig& WithChannel(Channel value) {
    SetChannel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether auto-accept is enabled for this channel. When enabled,
   * available agents are automatically connected to contacts from this channel.</p>
   */
  inline bool GetAutoAccept() const { return m_autoAccept; }
  inline bool AutoAcceptHasBeenSet() const { return m_autoAcceptHasBeenSet; }
  inline void SetAutoAccept(bool value) {
    m_autoAcceptHasBeenSet = true;
    m_autoAccept = value;
  }
  inline AutoAcceptConfig& WithAutoAccept(bool value) {
    SetAutoAccept(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether auto-accept is enabled for agent-first callbacks. This
   * setting only applies to the VOICE channel.</p>
   */
  inline bool GetAgentFirstCallbackAutoAccept() const { return m_agentFirstCallbackAutoAccept; }
  inline bool AgentFirstCallbackAutoAcceptHasBeenSet() const { return m_agentFirstCallbackAutoAcceptHasBeenSet; }
  inline void SetAgentFirstCallbackAutoAccept(bool value) {
    m_agentFirstCallbackAutoAcceptHasBeenSet = true;
    m_agentFirstCallbackAutoAccept = value;
  }
  inline AutoAcceptConfig& WithAgentFirstCallbackAutoAccept(bool value) {
    SetAgentFirstCallbackAutoAccept(value);
    return *this;
  }
  ///@}
 private:
  Channel m_channel{Channel::NOT_SET};

  bool m_autoAccept{false};

  bool m_agentFirstCallbackAutoAccept{false};
  bool m_channelHasBeenSet = false;
  bool m_autoAcceptHasBeenSet = false;
  bool m_agentFirstCallbackAutoAcceptHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
