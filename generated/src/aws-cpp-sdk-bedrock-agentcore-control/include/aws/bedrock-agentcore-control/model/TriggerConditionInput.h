/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/MessageBasedTriggerInput.h>
#include <aws/bedrock-agentcore-control/model/TimeBasedTriggerInput.h>
#include <aws/bedrock-agentcore-control/model/TokenBasedTriggerInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Condition that triggers memory processing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/TriggerConditionInput">AWS
 * API Reference</a></p>
 */
class TriggerConditionInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API TriggerConditionInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API TriggerConditionInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API TriggerConditionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Message based trigger configuration.</p>
   */
  inline const MessageBasedTriggerInput& GetMessageBasedTrigger() const { return m_messageBasedTrigger; }
  inline bool MessageBasedTriggerHasBeenSet() const { return m_messageBasedTriggerHasBeenSet; }
  template <typename MessageBasedTriggerT = MessageBasedTriggerInput>
  void SetMessageBasedTrigger(MessageBasedTriggerT&& value) {
    m_messageBasedTriggerHasBeenSet = true;
    m_messageBasedTrigger = std::forward<MessageBasedTriggerT>(value);
  }
  template <typename MessageBasedTriggerT = MessageBasedTriggerInput>
  TriggerConditionInput& WithMessageBasedTrigger(MessageBasedTriggerT&& value) {
    SetMessageBasedTrigger(std::forward<MessageBasedTriggerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token based trigger configuration.</p>
   */
  inline const TokenBasedTriggerInput& GetTokenBasedTrigger() const { return m_tokenBasedTrigger; }
  inline bool TokenBasedTriggerHasBeenSet() const { return m_tokenBasedTriggerHasBeenSet; }
  template <typename TokenBasedTriggerT = TokenBasedTriggerInput>
  void SetTokenBasedTrigger(TokenBasedTriggerT&& value) {
    m_tokenBasedTriggerHasBeenSet = true;
    m_tokenBasedTrigger = std::forward<TokenBasedTriggerT>(value);
  }
  template <typename TokenBasedTriggerT = TokenBasedTriggerInput>
  TriggerConditionInput& WithTokenBasedTrigger(TokenBasedTriggerT&& value) {
    SetTokenBasedTrigger(std::forward<TokenBasedTriggerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time based trigger configuration.</p>
   */
  inline const TimeBasedTriggerInput& GetTimeBasedTrigger() const { return m_timeBasedTrigger; }
  inline bool TimeBasedTriggerHasBeenSet() const { return m_timeBasedTriggerHasBeenSet; }
  template <typename TimeBasedTriggerT = TimeBasedTriggerInput>
  void SetTimeBasedTrigger(TimeBasedTriggerT&& value) {
    m_timeBasedTriggerHasBeenSet = true;
    m_timeBasedTrigger = std::forward<TimeBasedTriggerT>(value);
  }
  template <typename TimeBasedTriggerT = TimeBasedTriggerInput>
  TriggerConditionInput& WithTimeBasedTrigger(TimeBasedTriggerT&& value) {
    SetTimeBasedTrigger(std::forward<TimeBasedTriggerT>(value));
    return *this;
  }
  ///@}
 private:
  MessageBasedTriggerInput m_messageBasedTrigger;

  TokenBasedTriggerInput m_tokenBasedTrigger;

  TimeBasedTriggerInput m_timeBasedTrigger;
  bool m_messageBasedTriggerHasBeenSet = false;
  bool m_tokenBasedTriggerHasBeenSet = false;
  bool m_timeBasedTriggerHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
