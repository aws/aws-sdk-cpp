/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessStopReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Event indicating the end of a message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessMessageStopEvent">AWS
 * API Reference</a></p>
 */
class HarnessMessageStopEvent {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessMessageStopEvent() = default;
  AWS_BEDROCKAGENTCORE_API HarnessMessageStopEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessMessageStopEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason the agent stopped generating.</p>
   */
  inline HarnessStopReason GetStopReason() const { return m_stopReason; }
  inline bool StopReasonHasBeenSet() const { return m_stopReasonHasBeenSet; }
  inline void SetStopReason(HarnessStopReason value) {
    m_stopReasonHasBeenSet = true;
    m_stopReason = value;
  }
  inline HarnessMessageStopEvent& WithStopReason(HarnessStopReason value) {
    SetStopReason(value);
    return *this;
  }
  ///@}
 private:
  HarnessStopReason m_stopReason{HarnessStopReason::NOT_SET};
  bool m_stopReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
