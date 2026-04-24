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
 * <p>Configuration for sliding window truncation strategy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessSlidingWindowConfiguration">AWS
 * API Reference</a></p>
 */
class HarnessSlidingWindowConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSlidingWindowConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSlidingWindowConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSlidingWindowConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of recent messages to retain in the context window.</p>
   */
  inline int GetMessagesCount() const { return m_messagesCount; }
  inline bool MessagesCountHasBeenSet() const { return m_messagesCountHasBeenSet; }
  inline void SetMessagesCount(int value) {
    m_messagesCountHasBeenSet = true;
    m_messagesCount = value;
  }
  inline HarnessSlidingWindowConfiguration& WithMessagesCount(int value) {
    SetMessagesCount(value);
    return *this;
  }
  ///@}
 private:
  int m_messagesCount{0};
  bool m_messagesCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
