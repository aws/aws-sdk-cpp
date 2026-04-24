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
 * <p>The trigger configuration based on a message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/MessageBasedTrigger">AWS
 * API Reference</a></p>
 */
class MessageBasedTrigger {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API MessageBasedTrigger() = default;
  AWS_BEDROCKAGENTCORECONTROL_API MessageBasedTrigger(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API MessageBasedTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of messages that trigger memory processing.</p>
   */
  inline int GetMessageCount() const { return m_messageCount; }
  inline bool MessageCountHasBeenSet() const { return m_messageCountHasBeenSet; }
  inline void SetMessageCount(int value) {
    m_messageCountHasBeenSet = true;
    m_messageCount = value;
  }
  inline MessageBasedTrigger& WithMessageCount(int value) {
    SetMessageCount(value);
    return *this;
  }
  ///@}
 private:
  int m_messageCount{0};
  bool m_messageCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
