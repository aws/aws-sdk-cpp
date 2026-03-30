/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Represents a Teams channel with its ID and name.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MSTeamsChannel">AWS
 * API Reference</a></p>
 */
class MSTeamsChannel {
 public:
  AWS_DEVOPSAGENT_API MSTeamsChannel() = default;
  AWS_DEVOPSAGENT_API MSTeamsChannel(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MSTeamsChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>MS Teams channel name</p>
   */
  inline const Aws::String& GetChannelName() const { return m_channelName; }
  inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
  template <typename ChannelNameT = Aws::String>
  void SetChannelName(ChannelNameT&& value) {
    m_channelNameHasBeenSet = true;
    m_channelName = std::forward<ChannelNameT>(value);
  }
  template <typename ChannelNameT = Aws::String>
  MSTeamsChannel& WithChannelName(ChannelNameT&& value) {
    SetChannelName(std::forward<ChannelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MS Teams Channel ID</p>
   */
  inline const Aws::String& GetChannelId() const { return m_channelId; }
  inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
  template <typename ChannelIdT = Aws::String>
  void SetChannelId(ChannelIdT&& value) {
    m_channelIdHasBeenSet = true;
    m_channelId = std::forward<ChannelIdT>(value);
  }
  template <typename ChannelIdT = Aws::String>
  MSTeamsChannel& WithChannelId(ChannelIdT&& value) {
    SetChannelId(std::forward<ChannelIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_channelName;

  Aws::String m_channelId;
  bool m_channelNameHasBeenSet = false;
  bool m_channelIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
