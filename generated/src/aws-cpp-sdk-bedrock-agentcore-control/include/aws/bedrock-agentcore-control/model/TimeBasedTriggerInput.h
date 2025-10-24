/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

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
 * <p>Trigger configuration based on time.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/TimeBasedTriggerInput">AWS
 * API Reference</a></p>
 */
class TimeBasedTriggerInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API TimeBasedTriggerInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API TimeBasedTriggerInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API TimeBasedTriggerInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Idle session timeout (seconds) that triggers memory processing.</p>
   */
  inline int GetIdleSessionTimeout() const { return m_idleSessionTimeout; }
  inline bool IdleSessionTimeoutHasBeenSet() const { return m_idleSessionTimeoutHasBeenSet; }
  inline void SetIdleSessionTimeout(int value) {
    m_idleSessionTimeoutHasBeenSet = true;
    m_idleSessionTimeout = value;
  }
  inline TimeBasedTriggerInput& WithIdleSessionTimeout(int value) {
    SetIdleSessionTimeout(value);
    return *this;
  }
  ///@}
 private:
  int m_idleSessionTimeout{0};
  bool m_idleSessionTimeoutHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
