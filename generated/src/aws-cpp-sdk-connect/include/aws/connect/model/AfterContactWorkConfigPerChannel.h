/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AfterContactWorkConfig.h>
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
 * <p>Configuration settings for after contact work (ACW) timeout for a specific
 * channel.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AfterContactWorkConfigPerChannel">AWS
 * API Reference</a></p>
 */
class AfterContactWorkConfigPerChannel {
 public:
  AWS_CONNECT_API AfterContactWorkConfigPerChannel() = default;
  AWS_CONNECT_API AfterContactWorkConfigPerChannel(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AfterContactWorkConfigPerChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The channel for this ACW timeout configuration. Valid values: VOICE, CHAT,
   * TASK, EMAIL.</p>
   */
  inline Channel GetChannel() const { return m_channel; }
  inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
  inline void SetChannel(Channel value) {
    m_channelHasBeenSet = true;
    m_channel = value;
  }
  inline AfterContactWorkConfigPerChannel& WithChannel(Channel value) {
    SetChannel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ACW timeout settings for this channel.</p>
   */
  inline const AfterContactWorkConfig& GetAfterContactWorkConfig() const { return m_afterContactWorkConfig; }
  inline bool AfterContactWorkConfigHasBeenSet() const { return m_afterContactWorkConfigHasBeenSet; }
  template <typename AfterContactWorkConfigT = AfterContactWorkConfig>
  void SetAfterContactWorkConfig(AfterContactWorkConfigT&& value) {
    m_afterContactWorkConfigHasBeenSet = true;
    m_afterContactWorkConfig = std::forward<AfterContactWorkConfigT>(value);
  }
  template <typename AfterContactWorkConfigT = AfterContactWorkConfig>
  AfterContactWorkConfigPerChannel& WithAfterContactWorkConfig(AfterContactWorkConfigT&& value) {
    SetAfterContactWorkConfig(std::forward<AfterContactWorkConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ACW timeout settings for agent-first callbacks. This setting only applies
   * to the VOICE channel.</p>
   */
  inline const AfterContactWorkConfig& GetAgentFirstCallbackAfterContactWorkConfig() const {
    return m_agentFirstCallbackAfterContactWorkConfig;
  }
  inline bool AgentFirstCallbackAfterContactWorkConfigHasBeenSet() const { return m_agentFirstCallbackAfterContactWorkConfigHasBeenSet; }
  template <typename AgentFirstCallbackAfterContactWorkConfigT = AfterContactWorkConfig>
  void SetAgentFirstCallbackAfterContactWorkConfig(AgentFirstCallbackAfterContactWorkConfigT&& value) {
    m_agentFirstCallbackAfterContactWorkConfigHasBeenSet = true;
    m_agentFirstCallbackAfterContactWorkConfig = std::forward<AgentFirstCallbackAfterContactWorkConfigT>(value);
  }
  template <typename AgentFirstCallbackAfterContactWorkConfigT = AfterContactWorkConfig>
  AfterContactWorkConfigPerChannel& WithAgentFirstCallbackAfterContactWorkConfig(AgentFirstCallbackAfterContactWorkConfigT&& value) {
    SetAgentFirstCallbackAfterContactWorkConfig(std::forward<AgentFirstCallbackAfterContactWorkConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Channel m_channel{Channel::NOT_SET};

  AfterContactWorkConfig m_afterContactWorkConfig;

  AfterContactWorkConfig m_agentFirstCallbackAfterContactWorkConfig;
  bool m_channelHasBeenSet = false;
  bool m_afterContactWorkConfigHasBeenSet = false;
  bool m_agentFirstCallbackAfterContactWorkConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
