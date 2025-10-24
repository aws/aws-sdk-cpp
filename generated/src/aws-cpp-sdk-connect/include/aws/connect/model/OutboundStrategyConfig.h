/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AgentFirst.h>

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
 * <p>The config of the outbound strategy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/OutboundStrategyConfig">AWS
 * API Reference</a></p>
 */
class OutboundStrategyConfig {
 public:
  AWS_CONNECT_API OutboundStrategyConfig() = default;
  AWS_CONNECT_API OutboundStrategyConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API OutboundStrategyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The config of agent first outbound strategy.</p>
   */
  inline const AgentFirst& GetAgentFirst() const { return m_agentFirst; }
  inline bool AgentFirstHasBeenSet() const { return m_agentFirstHasBeenSet; }
  template <typename AgentFirstT = AgentFirst>
  void SetAgentFirst(AgentFirstT&& value) {
    m_agentFirstHasBeenSet = true;
    m_agentFirst = std::forward<AgentFirstT>(value);
  }
  template <typename AgentFirstT = AgentFirst>
  OutboundStrategyConfig& WithAgentFirst(AgentFirstT&& value) {
    SetAgentFirst(std::forward<AgentFirstT>(value));
    return *this;
  }
  ///@}
 private:
  AgentFirst m_agentFirst;
  bool m_agentFirstHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
